using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using Mapestry.Models;
using Microsoft.Azure.SpatialAnchors.Unity.Examples;
using Newtonsoft.Json;
using UnityEngine;
using MapestryControls;
using UnityEngine.UI;

namespace MapestryExchangers
{

    public class HuntExchanger
    {
        public static List<Hunt> hunts = new List<Hunt>();
        public static Hunt pickedHunt = new Hunt();
        public static List<HuntAnchor> huntAnchors = new List<HuntAnchor>();
        public static bool huntFound = false;
        public static HuntAnchor foundAnchor = new HuntAnchor();

        public static List<Hunt> GetHunts()
        {
            return hunts;
        }

        public static List<HuntAnchor> GetHuntAnchors()
        {
            return huntAnchors;
        }

        public static async Task<bool> GetHuntAnchors(Hunt hunt)
        {
            string apiURL = "";
            SpatialAnchorSamplesConfig samplesConfig = Resources.Load<SpatialAnchorSamplesConfig>("SpatialAnchorSamplesConfig");
            if (samplesConfig != null)
            {
                apiURL = samplesConfig.BaseSharingURL;
            }

             try
            {
                HttpClient client = new HttpClient();
                
                var messageJson = JsonConvert.SerializeObject(hunt);
                var content = new StringContent(messageJson, Encoding.UTF8, "application/json");
                var response = await client.GetAsync($"{apiURL}/hunts/GetHuntAnchors?huntName="+hunt.HuntName+"&userName="+hunt.UserName);
                
                if (response.IsSuccessStatusCode)
                {
                    string responseBody = await response.Content.ReadAsStringAsync();
                    Debug.LogWarning(responseBody);
                   huntAnchors = JsonConvert.DeserializeObject<List<HuntAnchor>>(responseBody);
                   return true;
                }
                else
                {
                    Debug.LogError($"Failed to store the anchor key: {response.StatusCode} {response.ReasonPhrase}.");
                    return false;
                }
                
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError($"Failed to update hunts.");
                return false;
            }
        }

        public static async Task<List<Hunt>> UpdateHunts()
        {
            string apiURL = "";
            SpatialAnchorSamplesConfig samplesConfig = Resources.Load<SpatialAnchorSamplesConfig>("SpatialAnchorSamplesConfig");
            if (samplesConfig != null)
            {
                apiURL = samplesConfig.BaseSharingURL;
            }

             try
            {
                HttpClient client = new HttpClient();
                Debug.Log("URL used: "+apiURL+"/hunts/GetHunts?userId="+PlayFabControls.usernameGame);
                var response = await client.GetStringAsync(apiURL+"/hunts/GetHunts?userId="+PlayFabControls.usernameGame);            

                if(response != null){
                    Debug.Log(response);
                    hunts = JsonConvert.DeserializeObject<List<Hunt>>(response);
                    return hunts;
                }

                return null;

                // if (response.IsSuccessStatusCode)
                // {
                //     string responseBody = await response.Content.ReadAsStringAsync();
                //    hunts = JsonConvert.DeserializeObject<List<Hunt>>(responseBody);
                // }
                // else
                // {
                //     Debug.LogError($"Failed to retrieve hunts: {response.StatusCode} {response.ReasonPhrase}.");
                // }
                
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError($"Failed to update hunts.");
                return null;
            }
        }

        
    }
       
}