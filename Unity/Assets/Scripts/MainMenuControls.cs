using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class MainMenuControls : MonoBehaviour
{

public TMP_Text menuUsername;
public TMP_Text[] playfabValues;

void Start(){

    menuUsername.text = "Welcome, " + PlayFabControls.usernameGame + "!";

}

public void CreateAnchors() {

    SceneManager.LoadScene("CreateAnchors");
}


}
