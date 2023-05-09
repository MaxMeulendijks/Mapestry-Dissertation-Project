using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;

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

        public Hunts(string huntName, string userName)
        {
            HuntName = huntName;
            UserName = userName;
            IsPublic = 0;
            HuntDescription = "";
            HuntAnchors = new HashSet<HuntAnchors>();
        }

        [Required]
        [StringLength(50, ErrorMessage = "Description length can't be more than 250 characters.")]
        [Display(Name ="Hunt Name")]
        public string HuntName { get; set; }
        [Required]
        [Display(Name ="User Name")]
        public string UserName { get; set; }
        [StringLength(250, ErrorMessage = "Description length can't be more than 250 characters.")]
        [Display(Name ="Hunt Description")]
        public string HuntDescription { get; set; }
        [Display(Name ="'Set to Public'")]
        public byte? IsPublic { get; set; }
        public virtual Users UserNameNavigation { get; set; }
        public virtual ICollection<HuntAnchors> HuntAnchors { get; set; }
        public virtual ICollection<PlayerHunts> PlayerHunts { get; set; }
    }
}
