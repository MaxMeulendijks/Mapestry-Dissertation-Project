namespace Mapbox.Examples
{
	using Mapbox.Unity.Location;
	using Mapbox.Utils;
	using System.Collections;
	using System.Collections.Generic;
	using UnityEngine;
	using UnityEngine.UI;

	public class LocationStatus : MonoBehaviour
	{

		[SerializeField]
		Text _statusText;
		public static Location myLocation;

		private AbstractLocationProvider _locationProvider = null;
		void Start()
		{
			if (null == _locationProvider)
			{
				_locationProvider = LocationProviderFactory.Instance.DefaultLocationProvider as AbstractLocationProvider;
			}
		}


		void Update()
		{
			myLocation = _locationProvider.CurrentLocation;

			if (myLocation.IsLocationServiceInitializing)
			{
				_statusText.text = "location services are initializing";
			}
			else
			{
				if (!myLocation.IsLocationServiceEnabled)
				{
					_statusText.text = "location services not enabled";
				}
				else
				{
					if (myLocation.LatitudeLongitude.Equals(Vector2d.zero))
					{
						_statusText.text = "Waiting for location ....";
					}
					else
					{
						_statusText.text = string.Format("{0}", myLocation.LatitudeLongitude);
					}
				}
			}

		}

		public static double getPlayerLatitude(){
			return myLocation.LatitudeLongitude.x;
		}

		public static double getPlayerLongitude(){
			return myLocation.LatitudeLongitude.y;
		}
	}
}
