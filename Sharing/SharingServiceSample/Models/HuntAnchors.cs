using System;
using System.Collections.Generic;
using System.IO;
using Microsoft.AspNetCore.Http;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class HuntAnchors
    {

          public HuntAnchors()
        {

        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = "";

        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, byte? firstStop)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = "";
            FirstStop = firstStop;

        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, string yarnScript)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;

        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, string yarnScript, Anchors anchor)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;
            Anchor = anchor;

        }

        public string HuntName { get; set; }
        public string HuntCreatorId { get; set; }
        public string AnchorName { get; set; }
        public string AnchorCreatorId { get; set; }
        public string YarnScript { get; set; }
        public byte? FirstStop {get; set;}

        public virtual Anchors Anchor { get; set; }
        public virtual Hunts Hunt { get; set; }
    }
}
