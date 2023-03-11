using System.Runtime.Serialization.Json;
using System.Runtime.InteropServices;
using System.Net.Http.Headers;
using System.Net;
using System.Text;
using Newtonsoft.Json;
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine;
using System.Collections.Generic;

namespace Microsoft.Azure.SpatialAnchors.Unity.Examples
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

        public void WatchKeys(string exchangerUrl)
        {
            baseAddress = exchangerUrl;
            Task.Factory.StartNew(async () =>
                {
                    string previousKey = string.Empty;
                    while (true)
                    {
                        string currentKey = await RetrieveLastAnchorKey();
                        if (!string.IsNullOrWhiteSpace(currentKey) && currentKey != previousKey)
                        {
                            Debug.LogError("Found key " + currentKey);
                            lock (anchorkeys)
                            {
                                anchorkeys.Add(currentKey);
                            }
                            previousKey = currentKey;
                        }
                        await Task.Delay(500);
                    }
                }, TaskCreationOptions.LongRunning);
        }

        public async Task<string> RetrieveAnchorKey(string anchorId, string userId)
        {
            try
            {
                HttpClient client = new HttpClient();
                Debug.LogError("API call to find anchor: "+baseAddress + "/find?anchorId=" + anchorId + "&userId="+userId);
                return await client.GetStringAsync(baseAddress + "/find?anchorId=" + anchorId + "&userId="+userId);
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError($"Failed to retrieve anchor key for anchor id: {anchorId}.");
                return null;
            }
        }

        public async Task<string> RetrieveLastAnchorKey()
        {
            try
            {
                HttpClient client = new HttpClient();
                return await client.GetStringAsync(baseAddress + "/last");
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError("Failed to retrieve last anchor key.");
                return null;
            }
        }

        internal async Task<string> StoreAnchorKey(string anchorKey, string anchorId, string userId, double latitude, double longitude)
        {
            if (string.IsNullOrWhiteSpace(anchorKey) || string.IsNullOrWhiteSpace(anchorId) || string.IsNullOrWhiteSpace(userId))
            {
                return "/";
            }

            Debug.LogError($"Failed to store for {anchorId}/{userId} the anchor key: {anchorKey}.");
            AnchorMessage message = new AnchorMessage(anchorKey, anchorId, userId, latitude, longitude);

            try
            {
                HttpClient client = new HttpClient();
                
                var messageJson = JsonConvert.SerializeObject(message);
                var content = new StringContent(messageJson, Encoding.UTF8, "application/json");
                var response = await client.PostAsync($"{baseAddress}/CreateAnchor", content);
            
                if (response.IsSuccessStatusCode)
                {
                    string responseBody = await response.Content.ReadAsStringAsync();
                    
                    //long ret;
                    return responseBody;

                    // if (long.TryParse(responseBody, out ret))
                    // {
                    //     Debug.Log("Key " + ret.ToString());
                    //     return ret;
                    // }
                    // else
                    // {
                    //     Debug.LogError($"Failed to store the anchor key. Failed to parse the response body to a long: {responseBody}.");
                    // }
                }
                else
                {
                    Debug.LogError($"Failed to store the anchor key: {response.StatusCode} {response.ReasonPhrase}.");
                }
                
                Debug.LogError($"Failed to store the anchor key: {anchorKey}.");
                return "Failure: "+ response.StatusCode+ " - " + response.ReasonPhrase;
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
                Debug.LogError($"Failed to store the anchor key: {anchorKey}.");
                return "Exception /";
            }
        }
#endif
    }
}
