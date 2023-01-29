using System;
using System.Collections.Generic;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class PlayerHunts
    {
        public string PlayerName { get; set; }
        public string HuntName { get; set; }
        public string CreatorName { get; set; }

        public virtual Hunts Hunts { get; set; }
        public virtual Users PlayerNameNavigation { get; set; }
    }
}
