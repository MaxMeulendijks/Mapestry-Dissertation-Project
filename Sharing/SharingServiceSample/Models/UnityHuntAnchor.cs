using System;
using System.Collections.Generic;
using System.IO;
using Microsoft.AspNetCore.Http;

// Code scaffolded by EF Core assumes nullable reference types (NRTs) are not used or disabled.
// If you have enabled NRTs for your project, then un-comment the following line:
// #nullable disable

namespace SharingService.Models
{
    public partial class UnityHuntAnchors
    {

          public UnityHuntAnchors()
        {

        }

        public UnityHuntAnchors(HuntAnchors huntAnchor, Anchors anchor)
        {
            HuntAnchor = huntAnchor;
            Anchor = anchor;
        }



        public HuntAnchors HuntAnchor {get; set;}
        public Anchors Anchor {get; set;}
    }
}
