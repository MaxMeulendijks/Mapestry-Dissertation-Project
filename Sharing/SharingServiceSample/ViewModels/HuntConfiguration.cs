using System;
using System.Collections.Generic;
using SharingService.Models;

namespace SharingService.ViewModels
{
    public partial class HuntConfiguration
    {
        public List<Anchors> UserAnchors {get; set;}
        public List<HuntAnchors> ScriptAnchors { get; set; }
        public List<string> WhoseAnchors { get; set; }
        public OwnAnchors newOwnAnchor {get; set;}
        public OtherAnchors newOtherAnchor {get; set;}
        public ViewHuntAnchors updateAnchor {get; set;}
        public Hunts Hunt {get; set;}
        #nullable enable
        public string? ErrorMessage {get; set;}
        public string? SuccessMessage {get; set;}
        #nullable disable
        public HuntConfiguration(Hunts hunt, List<HuntAnchors> scriptAnchors, List<Anchors> userAnchors, List<string> whoseAnchors)
        {
            Hunt = hunt;
            ScriptAnchors = scriptAnchors;
            UserAnchors = userAnchors;
            WhoseAnchors = whoseAnchors;
        }

        public HuntConfiguration(){

        }
    }
}