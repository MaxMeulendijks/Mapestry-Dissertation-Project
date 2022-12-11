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
using PlayFab;
using PlayFab.ClientModels;
using TMPro;

public class PlayFabControls : MonoBehaviour
{

    [SerializeField] GameObject signUpTab, loginTab, startUpScreen, HUD;
    public TMP_Text username, userEmail, userEmailLogin, UserPasswordLogin, errorSignUp, errorLogin;
    string encryptedPassword;

    public void SignUpTab(){
        signUpTab.SetActive(true);
        loginTab.SetActive(false);
        errorSignUp.text = "";
        errorLogin.text = "";
    }

    public void LoginTab(){
        signUpTab.SetActive(false);
        loginTab.SetActive(true);
        errorSignUp.text = "";
        errorLogin.text = "";
    }

    string Encrypt(string pass) {
        System.Security.Cryptography.MDSCryptoServiceProvider x = new System.Security.Cryptography.MDSCryptoServiceProvider();
        byte[] bs = SystemException.TextEncoding.UTF8.GetBytes(pass);
        bs = X.ComputeHash(bs);
        System.Text.StringBuilder s = new System.Text.StringBuilder();
        foreach(byte b in bs) {
            s.Append(b.ToString("x2").ToLower());
        }
        return s.ToString();

    }

    public void SignUp(){
        var registerRequest = new RegisterPlayFabUserRequest{Email = userEmail.text, Password = Encrypt(userPassword.text), Username = username.text};
        PlayFabClientAPI.RegisterPlayFabUser(registerRequest, RegisterSuccess, RegisterError);
    }

    public void LogIn(){
        var loginRequest = new LoginWithEmailAddressRequest{Email = userEmailLogin.text, Password = Encrypt(userPasswordLogin.text)};
        PlayFabClientAPI.LoginWthEmailAddress(loginRequest, LoginSuccess, LoginError);
    }

    public void RegisterSuccess(RegisterPlayFabUserResult result){
        errorSignUp.text = "";
        errorLogin.text = "";
        StartGame();
    }

    public void RegisterError(PlayFabError error){
        errorSignUp.text = error.GenerateErrorReport();

    }

     public void LoginSuccess(LoginResult result){
        errorSignUp.text = "";
        errorLogin.text = "";
        StartGame();
    }

    public void LoginError(PlayFabError error){
        errorLogin.text = error.GenerateErrorReport();
         
    }

    void StartGame(){
        startUpScreen.SetActive(false);
        HUD.SetActive(true); 
    }

}
