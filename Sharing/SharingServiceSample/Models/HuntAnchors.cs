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
    public partial class HuntAnchors
    {

          public HuntAnchors()
        {
            Active = 0;
        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = "";
            Active = 0;

        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, byte active)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = "";
            Active = active;

        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, string yarnScript)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;
            Active = 0;

        }

        public HuntAnchors(string huntName, string huntCreatorId, string anchorName, string anchorCreatorId, string yarnScript, Anchors anchor)
        {
            HuntName = huntName;
            HuntCreatorId = huntCreatorId;
            AnchorName = anchorName;
            AnchorCreatorId = anchorCreatorId;
            YarnScript = yarnScript;
            Anchor = anchor;
            Active = 0;

        }

        [Required]
        [StringLength(250, ErrorMessage = "Description length can't be more than 250 characters.")]
        [Display(Name ="Hunt Name")]
        public string HuntName { get; set; }
        [Required]
        [Display(Name ="Hunt Creator Name")]
        public string HuntCreatorId { get; set; }
        [Required]
        [Display(Name ="Anchor Name")]
        public string AnchorName { get; set; }
        [Required]
        [Display(Name ="Anchor Creator Name")]
        public string AnchorCreatorId { get; set; }
        [Display(Name ="Yarn Script")]
        public string YarnScript { get; set; }
        [Display(Name ="Active")]
        public byte Active {get; set;}

        public virtual Anchors Anchor { get; set; }
        public virtual Hunts Hunt { get; set; }

        public static implicit operator HuntAnchors(bool v)
        {
            throw new NotImplementedException();
        }
    }
}
