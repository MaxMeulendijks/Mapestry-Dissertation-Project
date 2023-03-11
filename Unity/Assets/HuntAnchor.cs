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
    public class HuntAnchor
    {
        public string AnchorName{get; set;}
        public string AnchorCreatorId{get; set;}
        #nullable enable
        public string? YarnScript {get;set;}
        #nullable disable
        public Anchor Anchor {get; set;}
        public bool FirstStop {get;set;}

        public HuntAnchor()
        {

        }
            #nullable enable
        public HuntAnchor(string anchorName, string anchorCreatorId, string? yarnScript, Anchor anchor, byte? firstStop)
        {
            #nullable disable
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;
            Anchor = anchor;
            if(firstStop == 1)
            {
                FirstStop = true;
            } 
            else 
            {
                FirstStop = false;
            }
        }


    }
       
}

