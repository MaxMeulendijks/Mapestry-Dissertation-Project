
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Mapestry.Models
{
    public class AnchorMessage
    {
        public string AnchorKey {get; set;}
        public string AnchorId {get; set;}
        public string UserId {get; set;}

        public double Latitude {get; set;}
        public double Longitude {get; set;}

        public AnchorMessage(string anchorKey, string anchorId, string userId, double latitude, double longitude)
        {
            AnchorKey = anchorKey;
            AnchorId = anchorId;
            UserId = userId;
            Latitude = latitude;
            Longitude = longitude;
        }

    }
       
}

