// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using Microsoft.AspNetCore.Mvc;
using SharingService.Data;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading.Tasks;

namespace SharingService.Controllers
{
    [Route("api/anchors")]
    [ApiController]
    public class AnchorsController : ControllerBase
    {
        private readonly IAnchorKeyCache anchorKeyCache;

        /// <summary>
        /// Initializes a new instance of the <see cref="AnchorsController"/> class.
        /// </summary>
        /// <param name="anchorKeyCache">The anchor key cache.</param>
        public AnchorsController(IAnchorKeyCache anchorKeyCache)
        {
            this.anchorKeyCache = anchorKeyCache;
        }

        // GET api/anchors/5
        [HttpGet("?anchorId={anchorId}&userId={userId}")]
        public async Task<ActionResult<string>> GetAsync(string anchorId, string userId)
        {
            // Get the key if present
            try
            {
                return await this.anchorKeyCache.GetAnchorKeyAsync(anchorId, userId);
            }
            catch(KeyNotFoundException)
            {
                return this.NotFound();
            }
        }

        // GET api/anchors/last
        [HttpGet("last")]
        public async Task<ActionResult<string>> GetAsync()
        {
            // Get the last anchor
            string anchorKey = await this.anchorKeyCache.GetLastAnchorKeyAsync();

            if (anchorKey == null)
            {
                return "";
            }

            return anchorKey;
        }

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

        // POST api/anchors/key
        [HttpPost("[action]")]
        public async Task<ActionResult<string>> CreateAnchor([FromBody]AnchorMessage data)
        {
            string anchorKey = data.AnchorKey;
            string anchorId = data.AnchorId;
            string userId = data.UserId;

            if (string.IsNullOrWhiteSpace(anchorKey) || string.IsNullOrWhiteSpace(anchorId) || string.IsNullOrWhiteSpace(userId))
            {
                return this.BadRequest();
            }

            // Set the key and return the anchor number
            return await this.anchorKeyCache.SetAnchorKeyAsync(anchorKey, anchorId, userId);
        }
    }
}
