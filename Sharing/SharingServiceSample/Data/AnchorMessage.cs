using Microsoft.WindowsAzure.Storage;
using Microsoft.WindowsAzure.Storage.Table;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;

namespace SharingService.Data
{
    public class AnchorMessage
    {
        public string AnchorKey {get; set;}
        public string AnchorId {get; set;}
        public string UserId {get; set;}
    }
}