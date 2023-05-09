
namespace Mapestry.Models
{
    public class Anchor
    {
        public Anchor()
        {

        }

        public Anchor(string anchorName, string userName, string anchorKey)
        {
            AnchorName = anchorName;
            UserName = userName;
            AnchorKey = anchorKey;
            IsPublic = 0;
            AnchorDescription = "";
        }

        public string AnchorName { get; set; }
        public string UserName { get; set; }
        public string AnchorKey { get; set; }
        public byte? IsPublic { get; set; }
        public string AnchorDescription { get; set; }
        public double Latitude {get; set;}
        public double Longitude {get; set;}
    }
}