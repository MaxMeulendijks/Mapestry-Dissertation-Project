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
using System;

namespace SharingService.Controllers
{
    [Route("HuntConfiguration")]
    public class HuntConfigurationController : Controller
    {
        private readonly MyDbContext dbContext;
        private readonly ILogger logger;

        //Values for session
        public const string Username = "UserName";
        public const string PlayFabSessionId = "PlayFabSessionId";
        public const string Huntname = "HuntName";
        public const string HuntConfiguration = "HuntConfiguration";
        public readonly List<string> anchorOwner = new List<string> {"Mine", "Other"};
        //For validation
        private readonly long MaxFileSize = 64 * 1024;
        private bool nodeAlreadyStarted = false;
        private int lineNumber = 0;
        private Dictionary<string, int> titlesFound = new Dictionary<string, int>();
        private List<string> nodeJumps = new List<string>();
        private string ValidationMessage;

        public HuntConfigurationController(MyDbContext dbContext, ILogger<ConfigurationController> logger)
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
        public async Task<ActionResult>  ConfigureHunt(){
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);

            HuntConfiguration huntAnchors;
            string oldConfig = HttpContext.Session.GetString(HuntConfiguration);
            if(oldConfig == null || JsonConvert.DeserializeObject<HuntConfiguration>(oldConfig).Hunt == null)
            {
                huntAnchors = new HuntConfiguration(
                                                    new Hunts(HuntName, UserName),
                                                    await dbContext.HuntAnchors.Where<HuntAnchors>(ha => ha.HuntName == HuntName 
                                                                                                    && ha.HuntCreatorId == UserName)
                                                                                .ToListAsync(),
                                                    await dbContext.Anchors.Where<Anchors>(a => a.UserName == UserName)
                                                                            .ToListAsync(),
                                                    anchorOwner
                                                );
                string savedConfiguration = JsonConvert.SerializeObject(huntAnchors, UnloopSerializer());
                HttpContext.Session.SetString(HuntConfiguration, savedConfiguration);
            }
            else
            {
                huntAnchors = JsonConvert.DeserializeObject<HuntConfiguration>(HttpContext.Session.GetString(HuntConfiguration), UnloopSerializer());
            }

            return View("HuntConfiguration", huntAnchors);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<HuntAnchors> EditHuntAnchors(HuntAnchors huntAnchor)
        {
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);
            HuntAnchors huntAnchorFound = await dbContext.HuntAnchors.FirstOrDefaultAsync<HuntAnchors>(
                                                                                                ha => ha.HuntName == HuntName 
                                                                                                && ha.HuntCreatorId == UserName
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
        public async Task<ActionResult> AddOwnHuntAnchor(OwnAnchors newOwnAnchor){
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);

            if(!ModelState.IsValid)
            {
                HuntConfiguration oldConfig = JsonConvert.DeserializeObject<HuntConfiguration>(HttpContext.Session.GetString(HuntConfiguration), UnloopSerializer());
                logger.LogError("Invalid Model");
                return View("HuntConfiguration", oldConfig);
            }

            ViewHuntAnchors huntAnchor = new ViewHuntAnchors(newOwnAnchor.AnchorName, UserName);

            return await AddHuntAnchor(huntAnchor);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<ActionResult> AddOtherHuntAnchor(OtherAnchors newOtherAnchor){
            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);

            logger.LogError("Anchor: "+newOtherAnchor.AnchorName +" Creator: "+newOtherAnchor.AnchorCreatorId);

            if(!ModelState.IsValid)
            {
                HuntConfiguration oldConfig = JsonConvert.DeserializeObject<HuntConfiguration>(HttpContext.Session.GetString(HuntConfiguration), UnloopSerializer());
                logger.LogError("Invalid Model");
                return View("HuntConfiguration", oldConfig);
            }

            ViewHuntAnchors huntAnchor = new ViewHuntAnchors(newOtherAnchor.AnchorName, newOtherAnchor.AnchorCreatorId);

            return await AddHuntAnchor(huntAnchor);
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<ActionResult> AddHuntAnchor(ViewHuntAnchors newAnchor){

            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);

            HuntConfiguration oldConfig = JsonConvert.DeserializeObject<HuntConfiguration>(HttpContext.Session.GetString(HuntConfiguration), UnloopSerializer());
            
            newAnchor = new ViewHuntAnchors(newAnchor.AnchorName, newAnchor.AnchorCreatorId);

            Anchors anchorFound = new Anchors();

            if(newAnchor.AnchorCreatorId == UserName){
                anchorFound = await dbContext.Anchors.FirstOrDefaultAsync<Anchors>(
                                                                            a => a.AnchorName == newAnchor.AnchorName
                                                                            && a.UserName == newAnchor.AnchorCreatorId
                                                                        );
            } else {
                anchorFound = await dbContext.Anchors.FirstOrDefaultAsync<Anchors>(
                                                                            a => a.AnchorName == newAnchor.AnchorName
                                                                            && a.UserName == newAnchor.AnchorCreatorId
                                                                            && a.IsPublic == 1
                                                                        );
            }

            if(anchorFound != null)
            {
                await dbContext.HuntAnchors.AddAsync(new HuntAnchors(HuntName, UserName, anchorFound.AnchorName, anchorFound.UserName));
                await dbContext.SaveChangesAsync();   
            }

            HuntConfiguration newConfig = new HuntConfiguration(
                                                                oldConfig.Hunt,
                                                                await dbContext.HuntAnchors.Where<HuntAnchors>(ha => ha.HuntName == HuntName 
                                                                                                        && ha.HuntCreatorId == UserName)
                                                                .ToListAsync(),
                                                                oldConfig.UserAnchors,
                                                                new List<string>{"Mine", "Other"}
                                                                );
            HttpContext.Session.SetString(HuntConfiguration, JsonConvert.SerializeObject(newConfig, UnloopSerializer()));

            return await ConfigureHunt();
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<string> SetActive(ViewHuntAnchors updateAnchor){

            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);

            //logger.LogError("IsActive: "+ updateAnchor.Active);

            HuntAnchors anchorFound = await dbContext.HuntAnchors.FirstOrDefaultAsync<HuntAnchors>(
                                                                                                    ha => ha.HuntName == HuntName
                                                                                                    && ha.HuntCreatorId == UserName
                                                                                                    && ha.AnchorName == updateAnchor.AnchorName
                                                                                                    && ha.AnchorCreatorId == updateAnchor.AnchorCreatorId
                                                                                                   );
            HuntConfiguration oldConfig = JsonConvert.DeserializeObject<HuntConfiguration>(HttpContext.Session.GetString(HuntConfiguration), UnloopSerializer());

            if(anchorFound != null)
            {
                anchorFound.Active = anchorFound.Active == (byte)1 ? (byte) 0 : (byte) 1;
                dbContext.HuntAnchors.Update(anchorFound);
                dbContext.SaveChanges();
                int anchorIndex = oldConfig.ScriptAnchors.FindIndex(sa => sa.AnchorName == anchorFound.AnchorName && sa.AnchorCreatorId == anchorFound.AnchorCreatorId);
                oldConfig.ScriptAnchors[anchorIndex].Active = anchorFound.Active;
            }
            else
            {
                return "Something went wrong changing the status.";
            }

            HttpContext.Session.SetString(HuntConfiguration, JsonConvert.SerializeObject(oldConfig, UnloopSerializer()));

            return "Status changed.";
        }

        [HttpPost("[action]")]
        [AllowAnonymous]
        public async Task<ActionResult> ScriptHuntAnchor(ViewHuntAnchors updateAnchor){

            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);
            HuntConfiguration oldConfig = JsonConvert.DeserializeObject<HuntConfiguration>(HttpContext.Session.GetString(HuntConfiguration), UnloopSerializer());

            logger.LogError("Script name: "+updateAnchor.YarnScriptName+" Anchor name: "+updateAnchor.AnchorName+" Anchor creator: "+updateAnchor.AnchorCreatorId);

            //First round of Validation
            if(!(updateAnchor.YarnScriptName.EndsWith(".yarn") || updateAnchor.YarnScriptName.EndsWith(".txt")))
            {  
                oldConfig.ErrorMessage = "Only .yarn or .txt files are allowed.";
                return View("HuntConfiguration", oldConfig);
            }
            else if (updateAnchor.YarnScript.Length > MaxFileSize)
            {
                oldConfig.ErrorMessage = string.Format("File cannot exceed {0} kb in size", MaxFileSize);
                return View("HuntConfiguration", oldConfig);
            }

            //Read file to String
            var result = new System.Text.StringBuilder();
            string scriptToString = "";

            using (var reader = new System.IO.StreamReader(updateAnchor.YarnScript.OpenReadStream()))
            {
                while (reader.Peek() >= 0) //Continue reading file until no characters are found
                {
                    string newLine = reader.ReadLine(); //Read a line
                    logger.LogError("New Line: "+newLine); //Log it

                    //Second round of validation
                    lineNumber++; //Increment number of lines
                    ValidateScript(newLine); //Run validation
                    if (ValidationMessage != null) //If invalid formatting found, stop loop.
                    {
                        break;
                    }

                    result.AppendLine(newLine);
                    scriptToString = result.ToString();
                }
            }

            CompleteValidation();
            if(ValidationMessage != null) //If invalid formatting found, return error message.
            {
                oldConfig.ErrorMessage = ValidationMessage;
                return View("HuntConfiguration", oldConfig); //Return to view.
            }
            
            //Update Database
            HuntAnchors scriptedAnchor = await dbContext.HuntAnchors.FirstOrDefaultAsync<HuntAnchors>(ha => ha.AnchorCreatorId == updateAnchor.AnchorCreatorId 
                                                                                            && ha.AnchorName == updateAnchor.AnchorName 
                                                                                            && ha.HuntName == HuntName 
                                                                                            && ha.HuntCreatorId == UserName);
            scriptedAnchor.YarnScript = scriptToString;
            dbContext.HuntAnchors.Update(scriptedAnchor);
            await dbContext.SaveChangesAsync();

            //Update Session with changes
            int findIndex = oldConfig.ScriptAnchors.FindIndex(sa => sa.AnchorName == scriptedAnchor.AnchorName && sa.AnchorCreatorId == scriptedAnchor.AnchorCreatorId);
            oldConfig.ScriptAnchors[findIndex] = scriptedAnchor;
            oldConfig.SuccessMessage = string.Format("Added Script to Anchor {0}/{1} ", updateAnchor.AnchorName, updateAnchor.AnchorCreatorId);

            return View("HuntConfiguration", oldConfig);
        }

        public void ValidateScript(string line)
        {
            line = line.Trim();
            //Increment lines when node start/end is reached.
            if(line != null && line.StartsWith("---") && nodeAlreadyStarted == true)
            {
                ValidationMessage = string.Format("Previous node not ended, yet new start found at line {0}", lineNumber);
                return;
            }
            else if (line != null && line.StartsWith("===") && nodeAlreadyStarted == false)
            {
                ValidationMessage = string.Format("No new node started, yet new end found at line {0}", lineNumber);
                return;
            }
            else if (line != null && line.StartsWith("---") || line.StartsWith("==="))
            {
                nodeAlreadyStarted = (nodeAlreadyStarted == false) ? true : false;
            }
            
            //Check whether line is a title or a jump
            string key;
            string[] checkNode;

            if(line != null && line.StartsWith("title"))
            {
                checkNode = line.Split(":");
                key = checkNode[1].Trim();
            }
            else if (line != null && line.StartsWith("[[")) 
            {
                line = line.Substring(2, line.Length-4);
                checkNode = line.Split("|");
                key = (checkNode.Length > 1) ? checkNode[1].Trim() : checkNode[0].Trim();

                foreach(var nodeJump in nodeJumps)
                {
                    if(key == nodeJump)
                    {
                        return;
                    }
                }

                nodeJumps.Add(key);
                return;

            }
            else
            {
                return;
            }

            //If title or jump and not yet found, add to the dictionary
            if (!titlesFound.TryGetValue(key, out int value))
            {
                // set the initial value
                titlesFound.Add(key, 1);
                logger.LogError("Added key: "+key);
            }
            else
            {
                // increment value if found again
                value++;    
                titlesFound[key] = value;
                logger.LogError("Incremented key '{0}' to value {1}", key, value);
            }

        }

        public void CompleteValidation()
        {
            foreach(string title in titlesFound.Keys) //Loop through node titles found.
            {
                bool titleMatch = false; //Set flag for a matching nodejump

                if(titlesFound[title] > 1) // If a title appears more than once, throw an error.
                {
                    ValidationMessage = string.Format("More than 1 Node exists named '{0}' - all node titles must be unique.", title);
                    return;
                }

                foreach(string nodeJump in nodeJumps) 
                {
                    if(title == nodeJump) //If a jump is found to this title, set flag to true.
                    {
                        titleMatch = true;
                        break;
                    }
                }    
                
                if(!titleMatch && string.Compare(title, "start", true) != 0) //Excluding start node, if no jump matched the title.
                {
                    ValidationMessage = string.Format("No node jump found for node '{0}' - node unaccessible.", title);
                    return;
                }

            }

            foreach(string nodeJump in nodeJumps)
            {
                bool jumpMatch = false;
                foreach(string title in titlesFound.Keys)
                {
                    if(nodeJump == title)
                    {
                        jumpMatch = true;
                        break;
                    }
                }

                if(!jumpMatch)
                {
                    ValidationMessage = string.Format("No node title found matching jump '{0}' - jump leads nowhere.", nodeJump);
                    return;
                }
            }
        }

        [HttpGet("[action]")]
        [AllowAnonymous]
        public async Task<FileContentResult> GetAnchorScript(string anchorName, string anchorCreator){

            await HttpContext.Session.LoadAsync();
            var UserName = HttpContext.Session.GetString(Username);
            var HuntName = HttpContext.Session.GetString(Huntname);

            HuntAnchors scriptAnchor = await dbContext.HuntAnchors.FirstOrDefaultAsync<HuntAnchors>(
                                                                                                    ha => ha.HuntName == HuntName
                                                                                                    && ha.HuntCreatorId == UserName
                                                                                                    && ha.AnchorName == anchorName
                                                                                                    && ha.AnchorCreatorId == anchorCreator
                                                                                                    );
            string script = scriptAnchor.YarnScript;

            if(script == null)
            {
                return null;
            }

            MemoryStream ms = new MemoryStream();
            TextWriter tw = new StreamWriter(ms);

            await tw.WriteAsync(script);

            tw.Flush();

            byte[] bytes = ms.ToArray();
            ms.Close();

            return File(bytes, "text/plain", scriptAnchor.AnchorName+"&"+scriptAnchor.AnchorCreatorId+".yarn");
        }

    }

}