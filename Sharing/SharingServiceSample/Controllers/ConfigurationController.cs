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
using Microsoft.AspNetCore.Http;
using PlayFab;
using PlayFab.ClientModels;
using System.Threading.Tasks;
using Newtonsoft.Json;

namespace SharingService.Controllers
{
    [Route("Configuration")]
    public class ConfigurationController : Controller
    {
        private readonly MyDbContext dbContext;
        private readonly ILogger logger;

        //Values for session
        public const string Username = "UserName";
        public const string PlayFabSessionId = "PlayFabSessionId";
        public const string Huntname = "HuntName";
        public const string SavedConfiguration = "SavedConfiguration";

        public ConfigurationController(MyDbContext dbContext, ILogger<ConfigurationController> logger)
        {
            this.dbContext = dbContext;
            this.logger = logger;
        }

        public JsonSerializerSettings UnloopSerializer()
        {
            JsonSerializerSettings settings = new JsonSerializerSettings
            {
                ReferenceLoopHandling = ReferenceLoopHandling.Ignore,
            };

            return settings;
        }

        [HttpGet("[action]")]
        [AllowAnonymous]
        public async Task<ActionResult> StartUp()
        {
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var SessionId = HttpContext.Session.GetString(PlayFabSessionId);

            UserConfiguration userConfiguration;
            if(HttpContext.Session.GetString(SavedConfiguration) == null)
            {
                Users user = dbContext.Users.Include(u => u.Anchors).Include(u => u.Hunts).FirstOrDefault<Users>(u => u.UserName == UserName);
                logger.LogError("User ID = "+UserName+" & Session ID = "+SessionId);
                
                List<Anchors> userAnchors = new List<Anchors>();
                List<Hunts> userHunts = new List<Hunts>();
                
                if(user != null)
                {
                    userAnchors =  user.Anchors.ToList<Anchors>();
                    userHunts = user.Hunts.ToList<Hunts>();
                }
                else
                {
                    user = new Users(UserName);
                }
                

                userConfiguration = new UserConfiguration(user, userAnchors, userHunts);
                userConfiguration.UserName = UserName;
                userConfiguration.PlayFabSessionId = SessionId;

                string savedConfiguration = JsonConvert.SerializeObject(userConfiguration, UnloopSerializer());
                HttpContext.Session.SetString(SavedConfiguration, savedConfiguration);
            }
            else
            {
                userConfiguration = JsonConvert.DeserializeObject<UserConfiguration>(HttpContext.Session.GetString(SavedConfiguration), UnloopSerializer());
            }

            return View("Configuration", userConfiguration);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<Anchors> EditAnchor(Anchors anchor) //Anchor changed on the front end
        {
            await HttpContext.Session.LoadAsync(); //Load the session
            var UserName = HttpContext.Session.GetString(Username); //Retrieve username

            //Find Anchor
            Anchors anchorFound = dbContext.Anchors.FirstOrDefault<Anchors>(a => a.AnchorName == anchor.AnchorName //Where anchorname matches input
                                                                                && a.UserName == UserName); //Where username matched log-in username

            if(anchorFound != null){
                anchorFound.AnchorDescription = anchor.AnchorDescription; //Anchor description modified to match front end info.
                anchorFound.IsPublic = anchor.IsPublic; //Public status modified to match front end info

                dbContext.Anchors.Update(anchorFound); //Update database session
                dbContext.SaveChanges(); //Update actual database
            }

            return anchorFound; //return info
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<Users> EditUser(Users user)
        {
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            logger.LogError("Username exists: "+UserName);

            Users userFound = dbContext.Users.FirstOrDefault<Users>(u => u.UserName == UserName);
            if(userFound != null){
                logger.LogError("User found!");
                userFound.UserDescription = user.UserDescription;
                dbContext.Users.Update(userFound);
            } else {
                logger.LogError("User not found!");
                dbContext.Users.Add(new Users(UserName, user.UserDescription));
            }
            dbContext.SaveChanges();
            logger.LogError("Get to the end! With userfound: "+userFound.UserName +"/"+userFound.UserDescription);
            return userFound;
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<Hunts> EditHunt(Hunts hunt)
        {
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            Hunts huntFound = dbContext.Hunts.FirstOrDefault<Hunts>(h => h.UserName == UserName && h.HuntName == hunt.HuntName);
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
        public async Task<ActionResult> CreateHunt(ViewHunts newHunt)
        {
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            logger.LogError("Hunt name = "+newHunt.HuntName+"User name - "+UserName);
            Hunts addHunt = new Hunts(newHunt.HuntName, UserName);
            addHunt.HuntDescription = newHunt.HuntDescription;
            addHunt.IsPublic = (newHunt.IsPublic == true ? (byte) 1 : (byte) 0);
            Users user = await dbContext.Users.FirstOrDefaultAsync<Users>(u => u.UserName == UserName);
            if(user == null)
            {
                dbContext.Users.Add(new Users(UserName));
            }

            dbContext.Hunts.Add(addHunt);
            dbContext.SaveChanges();
            HttpContext.Session.SetString(Huntname, newHunt.HuntName);

            return RedirectToAction("ConfigureHunt", "HuntConfiguration");
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<ActionResult> ShowHunt(string huntName)
        {
            await HttpContext.Session.LoadAsync();
            HttpContext.Session.SetString(Huntname, huntName);

            return RedirectToAction("ConfigureHunt", "HuntConfiguration");
        }

    }

}