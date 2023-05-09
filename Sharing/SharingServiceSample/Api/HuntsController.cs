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
    [Route("api/hunts")]
    [ApiController]
    public class HuntsController : ControllerBase
    {
        private readonly MyDbContext dbContext;

        /// <summary>
        /// Initializes a new instance of the <see cref="AnchorsController"/> class.
        /// </summary>
        /// <param name="anchorKeyCache">The anchor key cache.</param>
        public HuntsController(MyDbContext dbContext)
        {
            this.dbContext = dbContext;
        }
    
        // GET api/anchors/getHunts?userId=
        [HttpGet("GetHunts")]
        public string GetHunts(string userId)
        {
                List<Hunts> foundHunts = dbContext.Hunts.Where(h => h.UserName == userId || h.IsPublic == 1).ToList();

                if(foundHunts == null)
                {
                    return null;
                }

                return JsonConvert.SerializeObject(foundHunts);
        }

        // GET api/hunts/getHuntAnchors?userId=
        [HttpGet("GetHuntAnchors")]
        public string GetHuntAnchors(string huntName, string userName)
        {
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
    }
}
