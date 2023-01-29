using System;
using System.Collections.Generic;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class Users
    {
        public Users(string userName)
        {
            UserName = userName;

            Anchors = new HashSet<Anchors>();
            Hunts = new HashSet<Hunts>();
            PlayerHunts = new HashSet<PlayerHunts>();
        }

        public string UserName { get; set; }
        public string UserDescription { get; set; }

        public virtual ICollection<Anchors> Anchors { get; set; }
        public virtual ICollection<Hunts> Hunts { get; set; }
        public virtual ICollection<PlayerHunts> PlayerHunts { get; set; }
    }
}
