using System;
using System.Collections.Generic;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class HuntAnchors
    {
        public string HuntName { get; set; }
        public string HuntCreatorId { get; set; }
        public string AnchorName { get; set; }
        public string AnchorCreatorId { get; set; }
        public string YarnScriptName { get; set; }

        public virtual Anchors Anchor { get; set; }
        public virtual Hunts Hunt { get; set; }
    }
}
