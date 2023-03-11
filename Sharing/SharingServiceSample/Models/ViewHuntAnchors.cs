using System;
using System.Collections.Generic;
using System.IO;
using Microsoft.AspNetCore.Http;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class ViewHuntAnchors
    {

          public ViewHuntAnchors()
        {

        }

        public ViewHuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;

        }

        public ViewHuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, IFormFile yarnScript)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;
        }

        public string HuntName { get; set; }
        public string HuntCreatorId { get; set; }
        public string AnchorName { get; set; }
        public string AnchorCreatorId { get; set; }
        public IFormFile YarnScript { get; set; }

        public virtual Anchors Anchor { get; set; }
        public virtual Hunts Hunt { get; set; }
    }
}
