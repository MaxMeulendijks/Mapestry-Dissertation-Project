using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Examples;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UI;
using GeoCoordinatePortable;

namespace Microsoft.Azure.SpatialAnchors.Unity.Examples
{

    public class MapControls : MonoBehaviour
    {

    public Button searchButton;
    public TMP_Text searchText;

    void Start()
    {
        searchButton.interactable = false;
        searchText.text = "Nothing near";
    }

    void Update()
    {

        if(InRange())
		{
			HuntExchanger.huntFound = true;
            searchButton.OnPointerExit(null);
            searchButton.interactable = true;
            searchText.text = "Start search!";
		}
		else 
		{
			HuntExchanger.huntFound = false;
            searchButton.OnPointerExit(null);
            searchButton.interactable = false;
            searchText.text = "Nothing near";
		}	

    }

    public void StartSearch()
    {
        SceneManager.LoadScene("FindAnchor");
    }

    public bool InRange()
	{
			GeoCoordinate playerLocation = new GeoCoordinate(LocationStatus.getPlayerLatitude(), LocationStatus.getPlayerLongitude());

			foreach(HuntAnchor huntAnchor in HuntExchanger.GetHuntAnchors())
			{
				double anchorDistance = 100;
				if(huntAnchor.FirstStop == true){
					GeoCoordinate anchorLocation = new GeoCoordinate(huntAnchor.Anchor.Latitude, huntAnchor.Anchor.Longitude);
					anchorDistance = playerLocation.GetDistanceTo(anchorLocation);
                    Debug.LogError("Distance of anchors: "+anchorDistance+" meters.");
				}

				if(anchorDistance <= 8){
					return true;
				}
			}
			return false;
	}


    }
}
