using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;
using SharingService.Models;
using SharingService.ViewModels;
using System.Linq;
using System.Collections.Generic;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Logging;
using Microsoft.AspNetCore.Authorization;
using System.IO;

namespace SharingService.Controllers
{
    [Route("configuration")]
    public class ConfigurationController : Controller
    {
        private readonly MyDbContext dbContext;
        private readonly ILogger logger;

        public ConfigurationController(MyDbContext dbContext, ILogger<ConfigurationController> logger)
        {
            this.dbContext = dbContext;
            this.logger = logger;
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public ActionResult StartUp(Home home)
        {
            Users user = dbContext.Users.FirstOrDefault<Users>(u => u.UserName == home.userId);
            logger.LogError("User ID = "+home.userId+" & Session ID = "+home.sessionId);
            List<Anchors> userAnchors =  dbContext.Anchors.Where<Anchors>(a => a.UserName == home.userId).ToList<Anchors>();
            List<Hunts> userHunts = dbContext.Hunts.Where<Hunts>(h => h.UserName == home.userId).ToList<Hunts>();
            UserConfiguration userConfiguration = new UserConfiguration(user, userAnchors, userHunts);

            return View("Configuration", userConfiguration);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public Anchors EditAnchor(Anchors anchor)
        {
            Anchors anchorFound = dbContext.Anchors.FirstOrDefault<Anchors>(a => a.AnchorName == anchor.AnchorName && a.UserName == anchor.UserName);
            logger.LogError("username = "+anchorFound.UserName+" & anchor name = "+anchorFound.AnchorName+" & anchor key = " +anchorFound.AnchorKey);
            if(anchorFound != null){
                anchorFound.AnchorDescription = anchor.AnchorDescription;
                anchorFound.IsPublic = anchor.IsPublic;

                dbContext.Anchors.Update(anchorFound);
                dbContext.SaveChanges();
            } else {
                anchorFound = anchor;
            }

            return anchorFound;
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public Users EditUser(Users user)
        {
            Users userFound = dbContext.Users.FirstOrDefault<Users>(u => u.UserName == user.UserName);
            if(userFound != null){
                userFound.UserDescription = user.UserDescription;

                dbContext.Users.Update(userFound);
                dbContext.SaveChanges();
            } else {
                userFound = user;
            }

            return userFound;
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public Hunts EditHunt(Hunts hunt)
        {
            Hunts huntFound = dbContext.Hunts.FirstOrDefault<Hunts>(h => h.UserName == hunt.UserName && h.HuntName == hunt.HuntName);
            if(huntFound != null){
                huntFound.HuntDescription = hunt.HuntDescription;

                dbContext.Hunts.Update(huntFound);
                dbContext.SaveChanges();
            } else {
                huntFound = hunt;
            }

            return huntFound;
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public ActionResult CreateHunt(UserConfiguration hunt)
        {
            logger.LogError("Hunt name = "+hunt.NewHunt.HuntName+"User name - "+hunt.NewHunt.UserName);
            Hunts newHunt = new Hunts(hunt.NewHunt.HuntName, hunt.NewHunt.UserName);
            newHunt.HuntDescription = hunt.NewHunt.HuntDescription;
            newHunt.IsPublic = (hunt.NewHunt.IsPublic == true ? (byte) 1 : (byte) 0);

            dbContext.Hunts.Add(newHunt);
            dbContext.SaveChanges();

            return ConfigureHunt(newHunt);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public ActionResult ShowHunt(UserConfiguration hunt)
        {
            Hunts newHunt = new Hunts(hunt.NewHunt.HuntName, hunt.NewHunt.UserName);
            return ConfigureHunt(newHunt);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public ActionResult  ConfigureHunt(Hunts hunt){

            HuntConfiguration huntAnchors = new HuntConfiguration(
                                                                hunt,
                                                                dbContext.HuntAnchors.Where<HuntAnchors>(ha => ha.HuntName == hunt.HuntName 
                                                                                                        && ha.HuntCreatorId == hunt.UserName)
                                                                .ToList(),
                                                                dbContext.Anchors.Where<Anchors>(a => a.UserName == hunt.UserName)
                                                                .ToList(),
                                                                new List<string>{"Mine", "Other"}
                                                                );

            return View("HuntConfiguration", huntAnchors);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public HuntAnchors EditHuntAnchors(HuntAnchors huntAnchor)
        {
            HuntAnchors huntAnchorFound = dbContext.HuntAnchors.FirstOrDefault<HuntAnchors>(
                                                                                                ha => ha.HuntName == huntAnchor.HuntName 
                                                                                                && ha.HuntCreatorId == huntAnchor.HuntCreatorId
                                                                                                && ha.AnchorName == huntAnchor.AnchorName
                                                                                                && ha.AnchorCreatorId == huntAnchor.AnchorCreatorId
                                                                                            );
            if(huntAnchor != null){
                dbContext.HuntAnchors.Update(huntAnchorFound);
                dbContext.SaveChanges();
            } else {
                huntAnchorFound = huntAnchor;
            }

            return huntAnchorFound;
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public ActionResult  AddHuntAnchor(HuntConfiguration config){

            logger.LogError("Username = "+config.Hunt.UserName+" Hunt name = "+config.Hunt.HuntName+" Anchor name = "+config.newAnchor.AnchorName);
            Anchors anchorFound = new Anchors();
            if(config.newAnchor != null && config.newAnchor.AnchorName != null && config.newAnchor.UserName != null){
                if(config.newAnchor.UserName == config.Hunt.UserName){
                    anchorFound = dbContext.Anchors.FirstOrDefault<Anchors>(
                                                                                a => a.AnchorName == config.newAnchor.AnchorName
                                                                                && a.UserName == config.newAnchor.UserName
                                                                            );
                } else {
                    anchorFound = dbContext.Anchors.FirstOrDefault<Anchors>(
                                                                                a => a.AnchorName == config.newAnchor.AnchorName
                                                                                && a.UserName == config.newAnchor.UserName
                                                                                && a.IsPublic == 1
                                                                            );
                }

                if(anchorFound != null){
                    dbContext.HuntAnchors.Add(new HuntAnchors(config.Hunt.HuntName, config.Hunt.UserName, anchorFound.AnchorName, anchorFound.UserName));
                    dbContext.SaveChanges();   
                }       
            }

            HuntConfiguration newConfig = new HuntConfiguration(
                                                                config.Hunt,
                                                                dbContext.HuntAnchors.Where<HuntAnchors>(ha => ha.HuntName == config.Hunt.HuntName 
                                                                                                        && ha.HuntCreatorId == config.Hunt.UserName)
                                                                .ToList(),
                                                                dbContext.Anchors.Where<Anchors>(a => a.UserName == config.Hunt.UserName)
                                                                .ToList(),
                                                                new List<string>{"Mine", "Other"}
                                                                );

            return View("HuntConfiguration", newConfig);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public void ScriptHuntAnchor(HuntConfiguration config){

            var result = new System.Text.StringBuilder();
            string scriptToString = "";
            using (var reader = new System.IO.StreamReader(config.newScript.YarnScript.OpenReadStream()))
            {
                while (reader.Peek() >= 0)
                {
                    string newLine = reader.ReadLine();
                    logger.LogError("New Line: "+newLine);
                    string tabsAdded = "";

                    result.AppendLine(newLine);
                    scriptToString = result.ToString();
                }
            }
            HuntAnchors scriptedAnchor = dbContext.HuntAnchors.FirstOrDefault<HuntAnchors>(ha => ha.AnchorCreatorId == config.newScript.AnchorCreatorId && ha.AnchorName == config.newScript.AnchorName && ha.HuntName == config.newScript.HuntName && ha.HuntCreatorId == config.newScript.HuntCreatorId);
            scriptedAnchor.YarnScript = scriptToString;
            dbContext.HuntAnchors.Update(scriptedAnchor);
            dbContext.SaveChanges();

            logger.LogError("Show text: "+ dbContext.HuntAnchors.FirstOrDefault<HuntAnchors>(ha => ha.AnchorCreatorId == config.newScript.AnchorCreatorId && ha.AnchorName == config.newScript.AnchorName && ha.HuntName == config.newScript.HuntName && ha.HuntCreatorId == config.newScript.HuntCreatorId).YarnScript);
        }

        [HttpGet("[action]")]
        [AllowAnonymous]
        public FileContentResult GetAnchorScript(HuntConfiguration config){

            HuntAnchors scriptAnchor = dbContext.HuntAnchors.FirstOrDefault<HuntAnchors>(
                                                                                            ha => ha.HuntName == config.Hunt.HuntName
                                                                                            && ha.HuntCreatorId == config.Hunt.UserName
                                                                                        );
            string script = scriptAnchor.YarnScript;

            MemoryStream ms = new MemoryStream();
            TextWriter tw = new StreamWriter(ms);

            tw.WriteAsync(script);

            tw.Flush();

            byte[] bytes = ms.ToArray();
            ms.Close();

            return File(bytes, "application/force-download", scriptAnchor.AnchorName+"&"+scriptAnchor.AnchorCreatorId+".txt");
        }

    }

}