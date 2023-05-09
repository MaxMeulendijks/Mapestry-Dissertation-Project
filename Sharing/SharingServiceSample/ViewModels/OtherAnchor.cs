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
    public partial class OtherAnchors
    {

          public OtherAnchors()
        {

        }

        public OtherAnchors(string anchorName, string anchorCreatorId)
        {
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;

        }

        public OtherAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, IFormFile yarnScript)
        {
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
        }

        [Required]
        [Display(Name ="Anchor Name")]
        public string AnchorName { get; set; }
        [Required]
        [Display(Name ="Anchor Creator Name")]
        public string AnchorCreatorId { get; set; }
    }
}
