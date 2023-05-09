using System;
using System.Collections.Generic;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc.RazorPages;
using SharingService.Models;

namespace SharingService.ViewModels
{
    public partial class UserConfiguration
    {
        public Users User { get; set; }
        public List<Anchors> UserAnchors { get; set; }
        public List<Hunts> UserHunts { get; set; }
        public ViewHunts NewHunt { get; set;}
        public ViewHunts EditHunt { get; set;}
        public Anchors EditAnchor {get; set;}
        public string HuntName {get;set;}
        public string UserName {get;set;}
        public string PlayFabSessionId {get;set;}
        public string ErrorMessage {get; set;}

        public UserConfiguration(Users user, List<Anchors> userAnchors, List<Hunts> userHunts)
        {

            User = user;
            UserAnchors = userAnchors;
            UserHunts = userHunts;
        }

        public UserConfiguration()
        {

        }
    }
}
