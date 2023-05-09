using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using MapestryExchangers;
using TMPro;
using UnityEngine.UI;


namespace MapestryControls
{

    public class MainMenuControls : MonoBehaviour
    {

    public TMP_Text menuUsername;

    void Start(){

        menuUsername.text = "Welcome, " + PlayFabControls.usernameGame + "!";

    }

    public void CreateAnchors() {

        SceneManager.LoadScene("CreateAnchors");
    }

    public async void MyLocation() {

        bool successRetrieval = await HuntExchanger.GetHuntAnchors(HuntExchanger.pickedHunt);
        if(successRetrieval)
        {
            SceneManager.LoadScene("Location-basedGame");
        } 
        else
        {
            Debug.LogError("Couldn't load anchors for hunt.");
        }
        
    }

    public void PlayHunt(){
        
    }

    }
}
