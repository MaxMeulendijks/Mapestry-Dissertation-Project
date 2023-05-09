using System.Drawing;
using System;
using System.Collections.Generic;
using System.IO;
using System.ComponentModel.DataAnnotations;
using Microsoft.AspNetCore.Http;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class OwnAnchors
    {

          public OwnAnchors()
        {

        }

        public OwnAnchors(string anchorName)
        {
            AnchorName = anchorName;
        }

        [Required]
        [Display(Name ="Anchor Name")]
        public string AnchorName { get; set; }
    }
}
