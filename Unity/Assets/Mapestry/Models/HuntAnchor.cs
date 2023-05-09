using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Mapestry.Models
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
        public bool Active {get;set;}

        public HuntAnchor()
        {

        }
            #nullable enable
        public HuntAnchor(string anchorName, string anchorCreatorId, string? yarnScript, Anchor anchor, byte? active)
        {
            #nullable disable
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;
            Anchor = anchor;
            if(active == 1)
            {
                Active = true;
            } 
            else 
            {
                Active = false;
            }
        }


    }
       
}

