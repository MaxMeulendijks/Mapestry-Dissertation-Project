using System;
using System.Collections.Generic;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class Anchors
    {
        public Anchors()
        {
            HuntAnchors = new HashSet<HuntAnchors>();
        }

        public Anchors(string anchorName, string userName, string anchorKey)
        {
            AnchorName = anchorName;
            UserName = userName;
            AnchorKey = anchorKey;
            IsPublic = 0;
            AnchorDescription = "";
            HuntAnchors = new HashSet<HuntAnchors>();
        }

        public Anchors(string anchorName, string userName, string anchorKey, double latitude, double longitude)
        {
            AnchorName = anchorName;
            UserName = userName;
            AnchorKey = anchorKey;
            IsPublic = 0;
            AnchorDescription = "";
            Latitude = latitude;
            Longitude = longitude;
            HuntAnchors = new HashSet<HuntAnchors>();
        }

        public string AnchorName { get; set; }
        public string UserName { get; set; }
        public string AnchorKey { get; set; }
        public byte? IsPublic { get; set; }
        public string AnchorDescription { get; set; }
        public double Latitude {get; set;}
        public double Longitude {get; set;}

        public virtual Users UserNameNavigation { get; set; }
        public virtual ICollection<HuntAnchors> HuntAnchors { get; set; }
    }
}
