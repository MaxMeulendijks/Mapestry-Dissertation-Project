using System.ComponentModel;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;

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

        [Required]
        [StringLength(30, ErrorMessage = "Name length can't be more than 30 characters.")]
        [Display(Name ="Anchor Name")]
        public string AnchorName { get; set; }
        [Required]
        [Display(Name ="User Name")]
        public string UserName { get; set; }
        [Required]
        public string AnchorKey { get; set; }
        [Display(Name ="'Set to Public'")]
        public byte? IsPublic { get; set; }
        [StringLength(250, ErrorMessage = "Description length can't be more than 250 characters.")]
        [Display(Name ="Anchor Description")]
        public string AnchorDescription { get; set; }
        [Required]
        public double Latitude {get; set;}
        [Required]
        public double Longitude {get; set;}

        public virtual Users UserNameNavigation { get; set; }
        public virtual ICollection<HuntAnchors> HuntAnchors { get; set; }
    }
}
