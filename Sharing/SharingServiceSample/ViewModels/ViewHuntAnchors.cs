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
    public partial class ViewHuntAnchors
    {

          public ViewHuntAnchors()
        {

        }

        public ViewHuntAnchors(string anchorName, string anchorCreatorId)
        {
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;

        }

        public ViewHuntAnchors(string anchorName, string anchorCreatorId, bool active)
        {
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            Active = active;

        }

        public ViewHuntAnchors(string anchorName, string anchorCreatorId, IFormFile yarnScript)
        {
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;
        }

        [Required]
        [Display(Name ="Anchor Name")]
        public string AnchorName { get; set; }
        [Required]
        [Display(Name ="Anchor Creator Name")]
        public string AnchorCreatorId { get; set; }

        #nullable enable
        [Display(Name ="Yarn Script")]
        //[MaxFileSize(64 * 1024, ErrorMessage = "Your file can't be more than 64 KB.")]
        public IFormFile? YarnScript { get; set; }
        //[FileExtensions(Extensions = (".yarn,.txt"), ErrorMessage = "Only .txt & .yarn files allowed.")]
        public string? YarnScriptName => YarnScript?.FileName;
        #nullable disable

        public bool Active;
    }
}
