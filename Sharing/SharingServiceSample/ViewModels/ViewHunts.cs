using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class ViewHunts
    {
        public ViewHunts()
        {

        }

        public ViewHunts(string huntName, string userName, bool isPublic, string huntDescription)
        {
            HuntName = huntName;
            UserName = userName;
            IsPublic = isPublic;
            HuntDescription = huntDescription;
        }

        [Required]
        [StringLength(50, ErrorMessage = "Name length can't be more than {1} characters.")]
        [Display(Name ="Hunt Name")]
        public string HuntName { get; set; }
        [Required]
        public string UserName { get; set; }
        [StringLength(250, ErrorMessage = "Name length can't be more than {1} characters.")]
        [Display(Name ="Hunt Description")]
        public string HuntDescription { get; set; }
        [Display(Name ="'Set to Public'")]
        public bool IsPublic { get; set; }

    }
}
