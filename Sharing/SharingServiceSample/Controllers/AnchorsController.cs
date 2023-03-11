using System.Reflection.Metadata;
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using Microsoft.AspNetCore.Mvc;
using SharingService.Data;
using SharingService.Models;
using System.Linq;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading.Tasks;
using System.Text.Json;
using Microsoft.EntityFrameworkCore;
using Newtonsoft.Json;

namespace SharingService.Controllers
{
    [Route("api/anchors")]
    [ApiController]
    public class AnchorsController : ControllerBase
    {
        //private readonly IAnchorKeyCache anchorKeyCache;
        private readonly MyDbContext dbContext;

        /// <summary>
        /// Initializes a new instance of the <see cref="AnchorsController"/> class.
        /// </summary>
        /// <param name="anchorKeyCache">The anchor key cache.</param>
        public AnchorsController(MyDbContext dbContext)
        {
            this.dbContext = dbContext;
        }

        // GET api/anchors/find
        [HttpGet("find")]
        public string GetAsync(string anchorId, string userId)
        {
                // Get the key if present
                //return await this.anchorKeyCache.GetAnchorKeyAsync(anchorId, userId);
                Anchors foundAnchor = dbContext.Anchors.FirstOrDefault<Anchors>(a => a.AnchorName == anchorId && a.UserName == userId);
                
                if(foundAnchor == null)
                {
                    return "nothing found.";
                }

                return foundAnchor.AnchorKey;
        }
    
        // GET api/anchors/getHunts?userId=
        [HttpGet("GetHunts")]
        public string GetHunts(string userId)
        {
                // Get the key if present
                //return await this.anchorKeyCache.GetAnchorKeyAsync(anchorId, userId);

                List<Hunts> foundHunts = dbContext.Hunts.Where(h => h.UserName == userId || h.IsPublic == 1).ToList();

                if(foundHunts == null)
                {
                    return "N/A";
                }

                return JsonConvert.SerializeObject(foundHunts);
        }

                // GET api/anchors/getHunts?userId=
        [HttpGet("GetHuntAnchors")]
        public string GetHuntAnchors(string huntName, string userName)
        {
                // Get the key if present
                //return await this.anchorKeyCache.GetAnchorKeyAsync(anchorId, userId);

                List<HuntAnchors> foundAnchors = dbContext.HuntAnchors.Include(ha => ha.Anchor).Where(ha => ha.HuntName == huntName
                                                                                                        && ha.HuntCreatorId == userName).ToList();


                if(foundAnchors == null)
                {
                    return "Nothing found";
                }

                JsonSerializerSettings settings = new JsonSerializerSettings
                {
                    ReferenceLoopHandling = ReferenceLoopHandling.Ignore,
                };

                return JsonConvert.SerializeObject(foundAnchors, settings);
        }

        // // GET api/anchors/last
        // [HttpGet("last")]
        // public async Task<ActionResult<string>> GetAsync()
        // {
        //     // Get the last anchor
        //     string anchorKey = await this.anchorKeyCache.GetLastAnchorKeyAsync();

        //     if (anchorKey == null)
        //     {
        //         return "";
        //     }

        //     return anchorKey;
        // }

        // // POST api/anchors
        // [HttpPost]
        // public async Task<ActionResult<long>> PostAsync()
        // {
        //     string anchorKey;
        //     using (StreamReader reader = new StreamReader(this.Request.Body, Encoding.UTF8))
        //     {
        //         anchorKey = await reader.ReadToEndAsync();
        //     }

        //     if (string.IsNullOrWhiteSpace(anchorKey))
        //     {
        //         return this.BadRequest();
        //     }

        //     // Set the key and return the anchor number
        //     return await this.anchorKeyCache.SetAnchorKeyAsync(anchorKey);
        // }

        // POST api/anchors/CreateAnchor
        [HttpPost("[action]")]
        public async Task<ActionResult<string>> CreateAnchor([FromBody]Anchor data)
        {
            string anchorKey = data.AnchorKey;
            string anchorId = data.AnchorId;
            string userId = data.UserId;
            double latitude = data.Latitude;
            double longitude = data.Longitude;

            if (string.IsNullOrWhiteSpace(anchorKey) || string.IsNullOrWhiteSpace(anchorId) || string.IsNullOrWhiteSpace(userId))
            {
                return this.BadRequest();
            }

            Users user = new Users(userId);
            Anchors newAnchor = new Anchors(anchorId, userId, anchorKey, latitude, longitude);
            //newAnchor.UserNameNavigation = user;
            // Set the key and return the anchor number
            //return await this.anchorKeyCache.SetAnchorKeyAsync(anchorKey, anchorId, userId);

            if(!this.dbContext.Users.Any<Users>(u => u.UserName == userId))
            {
                this.dbContext.Users.Add(user);
            }

            this.dbContext.Anchors.Add(newAnchor);

            if (await dbContext.SaveChangesAsync() != 0)
            {
                return newAnchor.AnchorName;
            } else {
                return "None found.";
            };


        }
    }
}
