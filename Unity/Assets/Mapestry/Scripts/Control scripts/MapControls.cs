using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Examples;
using MapestryExchangers;
using Mapestry.Models;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.UI;
using GeoCoordinatePortable;

namespace MapestryControls
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

    void Update() //Updates every frame
    {

        if(InRange()) //Check whether in range
		{
			HuntExchanger.huntFound = true; //HuntFound set to true
            searchButton.OnPointerExit(null); //Make sure no event is happening.
            searchButton.interactable = true; //Activate search button
            searchText.text = "Start search!"; //Change text for player
		}
		else 
		{
			HuntExchanger.huntFound = false; //HuntFound set to false
            searchButton.OnPointerExit(null); //Make sure no event is happening.
            searchButton.interactable = false;//Deactivate search button
            searchText.text = "Nothing near"; //Change text for player
		}	

    }

    public void StartSearch()
    {
        SceneManager.LoadScene("FindAnchor");
    }

    public bool InRange()
	{
			GeoCoordinate playerLocation = new GeoCoordinate(LocationStatus.getPlayerLatitude(), 
                                                             LocationStatus.getPlayerLongitude()); //Fetch Player location

			foreach(HuntAnchor huntAnchor in HuntExchanger.GetHuntAnchors()) //Loop through hunt anchor
			{
				double anchorDistance = 100; //Set anchorDistance to something above what is required to find anchor
				if(huntAnchor.Active == true){ //Only if the hunt anchor is active 
					GeoCoordinate anchorLocation = new GeoCoordinate(huntAnchor.Anchor.Latitude, huntAnchor.Anchor.Longitude);//Fetch location
					anchorDistance = playerLocation.GetDistanceTo(anchorLocation); //Calculate distance to the player
                    Debug.LogError("Distance of anchors: "+anchorDistance+" meters.");
				}

				if(anchorDistance <= 8){ //If distance is less than 8 meters, set this huntAnchor for the AR scene
                    HuntExchanger.foundAnchor = huntAnchor;
					return true; //return true to activate search button
				}
			}
			return false; //return false to deactivate search button
	}


    }
}
