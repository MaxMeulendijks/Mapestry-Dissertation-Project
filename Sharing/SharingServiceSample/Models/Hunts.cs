using System;
using System.Collections.Generic;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class Hunts
    {
        public Hunts()
        {
            HuntAnchors = new HashSet<HuntAnchors>();
            PlayerHunts = new HashSet<PlayerHunts>();
        }

        public string HuntName { get; set; }
        public string UserName { get; set; }
        public string HuntDescription { get; set; }

        public virtual Users UserNameNavigation { get; set; }
        public virtual ICollection<HuntAnchors> HuntAnchors { get; set; }
        public virtual ICollection<PlayerHunts> PlayerHunts { get; set; }
    }
}
