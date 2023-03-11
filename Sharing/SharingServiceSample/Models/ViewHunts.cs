using System;
using System.Collections.Generic;

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

        public string HuntName { get; set; }
        public string UserName { get; set; }
        public string HuntDescription { get; set; }
        public bool IsPublic { get; set; }

    }
}
