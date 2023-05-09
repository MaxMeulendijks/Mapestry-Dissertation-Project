using System.Runtime.InteropServices;
using Microsoft.VisualBasic;
using System.Threading;
using System.ComponentModel;
using System.IO.Enumeration;
using System.IO;
using System.Security.Cryptography.X509Certificates;
using System;
using System.Security.AccessControl;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;

namespace MapestryControls{

public class PlayFabControls : MonoBehaviour
{

    [SerializeField] GameObject signUpTab, loginTab, startUpScreen, HUD;
    public TMP_InputField username, userEmail, userEmailLogin, userPassword, userPasswordLogin;
    public TMP_Text errorSignUp, errorLogin;
    public static string usernameGame;
    public static string playFabId;
    public PlayerProfileModel playerProfile;
    string encryptedPassword;

    public void SignUpTab(){
        usernameGame = "";
        signUpTab.SetActive(true);
        loginTab.SetActive(false);
        errorSignUp.text = "";
        errorLogin.text = "";
    }

    public void LoginTab(){
        usernameGame = "";
        signUpTab.SetActive(false);
        loginTab.SetActive(true);
        errorSignUp.text = "";
        errorLogin.text = "";
    }

    string Encrypt(string pass) {
        System.Security.Cryptography.MD5CryptoServiceProvider x = new System.Security.Cryptography.MD5CryptoServiceProvider();
        byte[] bs = System.Text.Encoding.UTF8.GetBytes(pass);
        bs = x.ComputeHash(bs);
        System.Text.StringBuilder s = new System.Text.StringBuilder();
        foreach(byte b in bs) {
            s.Append(b.ToString("x2").ToLower());
        }

        String sEncrypted = s.ToString();
        return sEncrypted;

    }

    public void SignUp(){
        var registerRequest = new RegisterPlayFabUserRequest{Email = userEmail.text, Password = Encrypt(userPassword.text), Username = username.text, DisplayName = username.text};
        PlayFabClientAPI.RegisterPlayFabUser(registerRequest, RegisterSuccess, RegisterError);
    }

    public void LogIn(){
        GetPlayerCombinedInfoRequestParams getInfo = new GetPlayerCombinedInfoRequestParams {
            GetUserAccountInfo = true
            };
        var loginRequest = new LoginWithEmailAddressRequest{Email = userEmailLogin.text, Password = Encrypt(userPasswordLogin.text), 
                                                            InfoRequestParameters = getInfo};
        PlayFabClientAPI.LoginWithEmailAddress(loginRequest, LoginSuccess, LoginError);
    }

    public void LoginSuccess(LoginResult result)
    {
        errorSignUp.text = "";
        errorLogin.text = ""; 
        playFabId = result.InfoResultPayload.AccountInfo.PlayFabId;
        usernameGame = result.InfoResultPayload.AccountInfo.Username;

        StartGame();
    }

    public void LoginError(PlayFabError error){
        errorLogin.text = error.GenerateErrorReport();
    }

    public void RegisterSuccess(RegisterPlayFabUserResult result){
        errorSignUp.text = "";
        errorLogin.text = "";
        
        playFabId = result.PlayFabId;
        usernameGame = result.Username;

        StartGame();
    }

    public void RegisterError(PlayFabError error){
        errorSignUp.text = error.GenerateErrorReport();

    }

    void StartGame(){
        SceneManager.LoadScene("MainMenu");
    }

}

}


