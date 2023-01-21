// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Microsoft.Azure.SpatialAnchors.Unity.Examples
{
    /// <summary>
    /// Picks the appropriate UI game object to be used. 
    /// This allows us to have both HoloLens and Mobile UX in the same
    /// scene.
    /// </summary>
    public class AnchorMessage
    {
        public string AnchorKey {get; set;}
        public string AnchorId {get; set;}
        public string UserId {get; set;}

        public AnchorMessage(string anchorKey, string anchorId, string userId)
        {
            AnchorKey = anchorKey;
            AnchorId = anchorId;
            UserId = userId;
        }

    }
       
}

