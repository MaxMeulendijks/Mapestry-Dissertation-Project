using System.Runtime.Serialization.Json;
using System.Runtime.InteropServices;
using System.Net.Http.Headers;
using System.Net;
using System.Text;
using Newtonsoft.Json;
using Mapestry.Models;
using System;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine;
using System.Collections.Generic;

namespace MapestryExchangers
{
    public class AnchorExchanger
    {
#if !UNITY_EDITOR
        private string baseAddress = "";

        private List<string> anchorkeys = new List<string>();

        public List<string> AnchorKeys
        {
            get
            {
                lock (anchorkeys)
                {
                    return new List<string>(anchorkeys);
                }
            }
        }

        public void SetBaseAddress(string exchangeUrl)
        {
            baseAddress = exchangeUrl;
        }

        public async Task<string> RetrieveAnchorKey(string anchorId, string userId)
        {
            if(anchorId == null || userId == null)
            {
                Debug.LogError("No Key can be retrieved when a parameter is null.");
                return null;
            }

            try
            {
                HttpClient client = new HttpClient();
                Debug.LogError("API call to find anchor: "+baseAddress + "/anchors/find?anchorId=" + anchorId + "&userId="+userId);
                return await client.GetStringAsync(baseAddress + "/anchors/find?anchorId=" + anchorId + "&userId="+userId);
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError($"Failed to retrieve anchor key for anchor id: {anchorId}.");
                return null;
            }
        }

        public async Task<List<Anchor>> RetrieveAnchors(string userId)
        {
            if(userId == null)
            {
                Debug.LogError("A userId is required to fetch anchors.");
                return null;
            }

            try
            {
                HttpClient client = new HttpClient();
                Debug.LogError("API call to get list of anchors: "+baseAddress + "/anchors/getList?userId="+userId);
                var response = await client.GetAsync(baseAddress + "/anchors/GetList?userId="+userId);

                if(response.IsSuccessStatusCode)
                {
                    string responseBody = await response.Content.ReadAsStringAsync();
                    if (responseBody != null)
                    {
                        return JsonConvert.DeserializeObject<List<Anchor>>(responseBody);
                    }

                    return null;
                }

                Debug.LogError($"Failed to retrieve list of anchors user: {response.StatusCode} - {response.ReasonPhrase}");
                return null;
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError($"Failed to retrieve list of anchors for user: {userId}.");
                return null;
            }
        }

        internal async Task<string> StoreAnchorKey(string anchorKey, string anchorId, string userId, double latitude, double longitude)
        {
            if (string.IsNullOrWhiteSpace(anchorKey) //Check if anchorkey is null
                || string.IsNullOrWhiteSpace(anchorId) //Check if anchor name is null
                || string.IsNullOrWhiteSpace(userId)) //Check if user name is null
            {
                Debug.LogError($"Failed to store for {anchorId}/{userId} the anchor key: {anchorKey}.");
                return "Failure - One or multiple fields were null"; //Return error message to display
            }
            
            AnchorMessage message = new AnchorMessage(anchorKey, anchorId, userId, latitude, longitude); //Instantiate object

            try
            {
                HttpClient client = new HttpClient(); //Instantiate client
                
                var messageJson = JsonConvert.SerializeObject(message); //Serialize object into string
                var content = new StringContent(messageJson, Encoding.UTF8, "application/json"); //Create Request body as json
                var response = await client.PostAsync(baseAddress+"/anchors/CreateAnchor", content); //Send Request
            
                if (response.IsSuccessStatusCode) //If request is succesful
                {
                    string responseBody = await response.Content.ReadAsStringAsync(); //Retrieve the response body (anchor name)
                    
                    return responseBody; //Return anchor name
                }
                else
                {
                    Debug.LogError($"Failed to store the anchor key: {response.StatusCode} {response.ReasonPhrase}.");
                    Debug.LogError($"Failed to store the anchor key: {anchorKey}.");
                    return "Failure: "+ response.StatusCode+ " - " + response.ReasonPhrase; //Return error message to display
                }            
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError($"Failed to store the anchor key: {anchorKey}.");
                return "Failure - Exception thrown.";
            }
        }
#endif
    }
}
