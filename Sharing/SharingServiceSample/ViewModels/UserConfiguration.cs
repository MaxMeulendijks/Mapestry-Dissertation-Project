using System;
using System.Collections.Generic;
using SharingService.Models;

namespace SharingService.ViewModels
{
    public partial class UserConfiguration
    {
        public Users User { get; set; }
        public List<Anchors> UserAnchors { get; set; }
        public List<Hunts> UserHunts { get; set; }


        public UserConfiguration(Users user, List<Anchors> userAnchors, List<Hunts> userHunts)
        {
            User = user;
            UserAnchors = userAnchors;
            UserHunts = userHunts;

        }
    }
}
