namespace Mapbox.Examples
{
	using UnityEngine;
	using Mapbox.Utils;
	using Mapbox.Unity.Map;
	using Mapbox.Unity.MeshGeneration.Factories;
	using Mapbox.Unity.Utilities;
	using Microsoft.Azure.SpatialAnchors.Unity.Examples;
	using GeoCoordinatePortable;
	using System.Collections.Generic;

	public class SpawnOnMap : MonoBehaviour
	{
		[SerializeField]
		AbstractMap _map;

		[SerializeField]
		[Geocode]
		string[] _locationStrings;
		Vector2d[] _locations;

		[SerializeField]
		float _spawnScale = 100f;

		[SerializeField]
		GameObject _markerPrefab;

		[SerializeField]
		GameObject _activeMarkerPrefab;

		GameObject _PlayerTarget;

		List<GameObject> _spawnedObjects;

		void Start()
		{
			Debug.Log("Spawn on Map is called with this many anchors:"+HuntExchanger.huntAnchors.Count);
			_locations = new Vector2d[HuntExchanger.huntAnchors.Count];
			//_locations = new Vector2d[_locationStrings.Length];
			_spawnedObjects = new List<GameObject>();
			//for (int i = 0; i < _locationStrings.Length; i++)
			for (int i = 0; i < HuntExchanger.huntAnchors.Count; i++)
			{
				var locationString = HuntExchanger.huntAnchors[i].Anchor.Latitude+", "+HuntExchanger.huntAnchors[i].Anchor.Longitude;
				_locations[i] = Conversions.StringToLatLon(locationString);
				var instance = Instantiate(HuntExchanger.huntAnchors[i].FirstStop ? _activeMarkerPrefab : _markerPrefab);
				instance.transform.localPosition = _map.GeoToWorldPosition(_locations[i], true, 3);
				instance.transform.localScale = new Vector3(_spawnScale, _spawnScale, _spawnScale);
				_spawnedObjects.Add(instance);
			}
		}

		private void Update()
		{
			int count = _spawnedObjects.Count;
			for (int i = 0; i < count; i++)
			{
				var spawnedObject = _spawnedObjects[i];
				var location = _locations[i];
				spawnedObject.transform.localPosition = _map.GeoToWorldPosition(location, true, 3);
				spawnedObject.transform.localScale = new Vector3(_spawnScale, _spawnScale, _spawnScale);
			}
		}
	}
}