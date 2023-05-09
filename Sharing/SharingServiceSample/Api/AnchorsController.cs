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
        public async Task<string> GetAsync(string anchorId, string userId)
        {
                // Get the key if present
                Anchors foundAnchor = await dbContext.Anchors.FirstOrDefaultAsync<Anchors>(a => a.AnchorName == anchorId && a.UserName == userId);
                
                if(foundAnchor == null)
                {
                    return "Anchor Not Found.";
                }

                return foundAnchor.AnchorKey;
        }

        // GET api/anchors/find
        [HttpGet("getList")]
        public async Task<string> GetList(string userId)
        {

                List<Anchors> userAnchors = dbContext.Anchors.Where<Anchors>(a => a.UserName == userId).ToList();
                
                if(userAnchors == null)
                {
                    return null;
                }

                return JsonConvert.SerializeObject(userAnchors);
        }

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
