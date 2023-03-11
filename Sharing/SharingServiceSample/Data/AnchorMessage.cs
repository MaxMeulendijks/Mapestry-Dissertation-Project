using Microsoft.WindowsAzure.Storage;
using Microsoft.WindowsAzure.Storage.Table;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;

namespace SharingService.Data
{
    public class Anchor
    {
        public Anchor(string anchorId, string userId, string anchorKey, double latitude, double longitude)
        {
            AnchorKey = anchorKey;
            AnchorId = anchorId;
            UserId = userId;
            Latitude = latitude;
            Longitude = longitude;
        }

        public Anchor()
        {
        }

        public string AnchorKey {get; set;}
        public string AnchorId {get; set;}
        public string UserId {get; set;}
        public double Latitude {get; set;}
        public double Longitude {get; set;}
    }
}