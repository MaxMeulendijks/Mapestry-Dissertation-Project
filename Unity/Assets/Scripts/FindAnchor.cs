// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using TMPro;
using Yarn.Unity;

namespace Microsoft.Azure.SpatialAnchors.Unity.Examples
{
    public class FindAnchor : DemoScriptBase
    {

        #region Member Variables
        private enum FindAnchorState {ConfirmReadiness, ConfigurationStarted, ConfigurationStopped, SearchStarted, SearchStopped, StartConversation};
        private FindAnchorState _currentState = FindAnchorState.ConfirmReadiness;
        private readonly List<string> localAnchorIds = new List<string>();
        private string _anchorNumberToFind;
        private PlatformLocationProvider locationProvider = null;
        private List<GameObject> otherSpawnedObjects = new List<GameObject>();
        [SerializeField]
        public TextMeshProUGUI shownDialogue;

        // The dialogue runner we want to load the program into
        public DialogueRunner dialogueRunner;
        public YarnProgramCreator programImporter;

        #endregion // Member Variables

        #region Unity Inspector Variables
        [SerializeField]
        [Tooltip("The base URL for the example sharing service.")]
        private string baseSharingUrl = "";
        #endregion // Unity Inspector Variables

        public string shownDialogueText
        {
            get
            {
                return shownDialogue.text;
            }
            set
            {
                shownDialogue.text = value;
            }
        }

        private FindAnchorState currentState
        {
            get
            {
                return _currentState;
            }
            set
            {
                if (_currentState != value)
                {
                    Debug.LogFormat("State from {0} to {1}", _currentState, value);
                    _currentState = value;
                    if (spawnedObjectMat != null)
                    {
                        spawnedObjectMat.color = GetStepColor();
                    }
                    EnableCorrectUIControls();
                }
            }
        }

        protected override void OnCloudAnchorLocated(AnchorLocatedEventArgs anchorLocatedInfo)
        {
            base.OnCloudAnchorLocated(anchorLocatedInfo);

            if (anchorLocatedInfo.Status == LocateAnchorStatus.Located)
            {
                UnityDispatcher.InvokeOnAppThread( () =>
                {
                    currentCloudAnchor = anchorLocatedInfo.Anchor;

                    Pose anchorPose = currentCloudAnchor.GetPose();
                    GameObject foundAnchor = SpawnNewAnchoredFindObject(anchorPose.position, anchorPose.rotation, currentCloudAnchor);
                    spawnedObjectMat = foundAnchor.GetComponent<MeshRenderer>().material;

                    AttachTextMesh(foundAnchor, "You've found "+HuntExchanger.anchorToFind.AnchorName);
                    
                    currentState = FindAnchorState.SearchStopped;                 
                });
            }
        }

        /// <summary>
        /// Start is called on the frame when a script is enabled just before any
        /// of the Update methods are called the first time.
        /// </summary>
        public override void Start()
        {
            base.Start();

            Debug.LogWarning("Before any ifs");
            if (!SanityCheckAccessConfiguration())
            {
                Debug.LogWarning("!SanityCheckAccessConfiguration");
                MobileUX.Instance.GetDemoButtons()[1].gameObject.SetActive(false);
                MobileUX.Instance.GetDemoButtons()[0].gameObject.SetActive(false);
                MobileUX.Instance.GetDemoInputField().gameObject.SetActive(false);
                return;
            }

            Debug.LogWarning("Before samples config");
            SpatialAnchorSamplesConfig samplesConfig = Resources.Load<SpatialAnchorSamplesConfig>("SpatialAnchorSamplesConfig");
            if (string.IsNullOrWhiteSpace(BaseSharingUrl) && samplesConfig != null)
            {
                BaseSharingUrl = samplesConfig.BaseSharingURL;
            }

            Debug.LogWarning("Before null and empty url");
            if (string.IsNullOrEmpty(BaseSharingUrl))
            {
                feedbackBox.text = $"Need to set {nameof(BaseSharingUrl)}.";
                MobileUX.Instance.GetDemoButtons()[0].gameObject.SetActive(false);
                MobileUX.Instance.GetDemoInputField().gameObject.SetActive(false);
                return;
            }
            else
            {
                Uri result;
                if (!Uri.TryCreate(BaseSharingUrl, UriKind.Absolute, out result))
                {
                    feedbackBox.text = $"{nameof(BaseSharingUrl)} is not a valid url";
                    return;
                }
                else
                {
                    BaseSharingUrl = $"{result.Scheme}://{result.Host}/api/anchors";
                }
            }
            Debug.Log("Does it crash before Script is loaded?");
            var scriptToLoad = programImporter.ImportYarn(HuntExchanger.anchorToFind.YarnScript, HuntExchanger.anchorToFind.AnchorName+"/"+HuntExchanger.anchorToFind.AnchorCreatorId);
            Debug.Log("Script contents"+scriptToLoad.ToString());
            Debug.Log("Does it crash after Script is loaded?");
            dialogueRunner.Add(scriptToLoad);
            Debug.Log("Does it crash after Script given to runner?");
            EnableCorrectUIControls();
        }

        /// <summary>
        /// Update is called every frame, if the MonoBehaviour is enabled.
        /// </summary>
        public override void Update()
        {
            base.Update();

            if (spawnedObjectMat != null)
            {
                float rat = 0.1f;
                float createProgress = 0f;
                if (CloudManager.SessionStatus != null)
                {
                    createProgress = CloudManager.SessionStatus.RecommendedForCreateProgress;
                }
                rat += (Mathf.Min(createProgress, 1) * 0.9f);
                spawnedObjectMat.color = GetStepColor();
            }
        }

        protected override Color GetStepColor()
        {
            // if (currentCloudAnchor == null || localAnchorIds.Contains(currentCloudAnchor.Identifier))
            // {
            //     return stateParams[currentAppState].StepColor;
            // }

            return Color.red;
        }
#nullable enable
        private void AttachTextMesh(GameObject parentObject, string? dataToAttach)
        {
#nullable disable
            Debug.LogError("Attach text fails before object creation.");
            GameObject go = new GameObject();
            Debug.LogError("Attach text fails after object creation.");

            TextMesh tm = go.AddComponent<TextMesh>();
            Debug.LogError("Attach text fails after textmesh addition.");
            if (dataToAttach == null)
            {
                Debug.LogError("Is dataToAttach null?");
                tm.text = string.Format("{0}:{1}", localAnchorIds.Contains(currentCloudAnchor.Identifier) ? "L" : "R", currentCloudAnchor.Identifier);
            }
            else if (dataToAttach != "/")
            {
                Debug.LogError("Is dataToAttach not '/' ?");
                tm.text = dataToAttach;
            }
            else
            {
                Debug.LogError("Is dataToAttach a '/' ?");
                tm.text = $"Failed to find the anchor key'";
            }
            tm.fontSize = 32;
            Debug.LogError("Before setting parent.");
            go.transform.SetParent(parentObject.transform, false);
            Debug.LogError("After setting parent.");
            go.transform.localPosition = Vector3.one * 0.25f;
            go.transform.rotation = Quaternion.AngleAxis(0, Vector3.up);
            go.transform.rotation = Quaternion.AngleAxis(180, Vector3.right);
            go.transform.localScale = Vector3.one * .1f;
            Debug.LogError("Before adding to list.");
            otherSpawnedObjects.Add(go);
            Debug.LogError("End of method.");
        }

// #nullable enable
//         private void AttachTextBubble(GameObject parentObject, string? dataToAttach)
//         {
// #nullable disable
//             GameObject go = new GameObject();

//             TextMesh tm = go.AddComponent<TextMesh>();
//             if (dataToAttach == null)
//             {
//                 tm.text = string.Format("{0}:{1}", localAnchorIds.Contains(currentCloudAnchor.Identifier) ? "L" : "R", currentCloudAnchor.Identifier);
//             }
//             else if (dataToAttach != "/")
//             {
//                 tm.text = $"Anchor Number:{dataToAttach}";
//             }
//             else
//             {
//                 tm.text = $"Failed to find the anchor key'";
//             }
//             tm.fontSize = 32;
//             go.transform.SetParent(parentObject.transform, false);
//             go.transform.localPosition = Vector3.one * 0.25f;
//             go.transform.rotation = Quaternion.AngleAxis(0, Vector3.up);
//             go.transform.rotation = Quaternion.AngleAxis(180, Vector3.right);
//             go.transform.localScale = Vector3.one * .1f;

//             otherSpawnedObjects.Add(go);
//         }

#pragma warning disable CS1998 // Conditional compile statements are removing await
        public async Task InitializeLocateFlowDemoAsync()
#pragma warning restore CS1998
        {
                await AdvanceLocateFlowDemoAsync();
        }

        /// <summary>
        /// This version only exists for Unity to wire up a button click to.
        /// If calling from code, please use the Async version above.
        /// </summary>
        public async void StartSearch()
        {
            try
            {
                    currentState = FindAnchorState.SearchStarted;
                    await InitializeLocateFlowDemoAsync();
            }
            catch (Exception ex)
            {
                Debug.LogError($"{nameof(FindAnchor)} - Error in {nameof(StartSearch)}: {ex.Message}");
            }
        }

        /// <summary>
        /// This version only exists for Unity to wire up a button click to.
        /// If calling from code, please use the Async version above.
        /// </summary>
        public async void StartConfiguration()
        {
            try
            {
                    currentState = FindAnchorState.ConfigurationStarted;
                    await InitializeLocateFlowDemoAsync();
            }
            catch (Exception ex)
            {
                Debug.LogError($"{nameof(FindAnchor)} - Error in {nameof(StartConfiguration)}: {ex.Message}");
            }
        }

                /// <summary>
        /// This version only exists for Unity to wire up a button click to.
        /// If calling from code, please use the Async version above.
        /// </summary>
        public async void StartConversation()
        {
            try
            {
                    await AdvanceLocateFlowDemoAsync();
                    EnableCorrectUIControls();
                    await AdvanceLocateFlowDemoAsync();
            }
            catch (Exception ex)
            {
                Debug.LogError($"{nameof(FindAnchor)} - Error in {nameof(StartConversation)}: {ex.Message}");
            }
        }

        private async Task AdvanceLocateFlowDemoAsync()
        {
            switch (currentState)
            {
                case FindAnchorState.ConfigurationStarted:
                    currentCloudAnchor = null;
                    Debug.Log("Does it crash before session configuration?");
                    ConfigureSession();
                    Debug.Log("Does it crash before session manager start?");
                    await CloudManager.StartSessionAsync();
                    Debug.Log("Does it crash before watcher is created?");
                    currentState = FindAnchorState.ConfigurationStopped;
                    break;
                case FindAnchorState.SearchStarted:
                    currentWatcher = CreateWatcher();
                    break;
                case FindAnchorState.SearchStopped:
                    CloudManager.StopSession();
                    locationProvider = null;
                    currentCloudAnchor = null;
                    currentWatcher = null;
                    currentState = FindAnchorState.StartConversation;
                    break;
                case FindAnchorState.StartConversation:
                    Debug.LogError("Before Dialogue started");
                    dialogueRunner.StartDialogue("Start");
                    Debug.LogError("After Dialogue started");
                    break;
                default:
                    Debug.Log("Shouldn't get here for app state " + currentState);
                    break;
            }

            EnableCorrectUIControls();
        }

        private void EnableCorrectUIControls()
        {
            
            switch(currentState)
            {
                case FindAnchorState.ConfirmReadiness:
                MobileUX.Instance.GetDemoButtons()[0].gameObject.SetActive(true);
                MobileUX.Instance.GetDemoButtons()[1].gameObject.SetActive(false);
                MobileUX.Instance.GetDemoButtons()[2].gameObject.SetActive(false);
                feedbackBox.text = "Ready to start?";
                break;
                case FindAnchorState.ConfigurationStarted:
                MobileUX.Instance.GetDemoButtons()[0].gameObject.SetActive(false);
                MobileUX.Instance.GetDemoButtons()[1].gameObject.SetActive(false);
                MobileUX.Instance.GetDemoButtons()[2].gameObject.SetActive(false);
                feedbackBox.text = "Configuring local...";
                break;
                case FindAnchorState.ConfigurationStopped:
                MobileUX.Instance.GetDemoButtons()[1].gameObject.SetActive(true);
                feedbackBox.text = "Start Search?";
                break;
                case FindAnchorState.SearchStarted:
                MobileUX.Instance.GetDemoButtons()[1].gameObject.SetActive(false);
                feedbackBox.text = "Searching for anchor...";
                break;
                case FindAnchorState.SearchStopped:
                MobileUX.Instance.GetDemoButtons()[2].gameObject.SetActive(true);
                feedbackBox.text = "Start conversation?";
                break;
                case FindAnchorState.StartConversation:
                Debug.LogError("Entered StartConversation");
                GameObject dialogue = GameObject.FindWithTag("Dialogue");
                Debug.LogError("After dialogue created.");
                dialogue.SetActive(true);
                Debug.LogError("After dialogue activated.");
                feedbackBox.text = " ";
                Debug.LogError("After feedbackBox set to null.");
                break;
                default:
                break;
            }
        }

        private void ConfigureSession()
        {
            List<string> anchorsToFind = new List<string>();

            if (currentState == FindAnchorState.ConfigurationStarted)
            {
                Debug.LogWarning("Anchor key added.");
                anchorsToFind.Add(HuntExchanger.anchorToFind.Anchor.AnchorKey);
                SetAnchorIdsToLocate(anchorsToFind);
            }
        }

        private void ConfigureSensors()
        {
            locationProvider.Sensors.GeoLocationEnabled = SensorPermissionHelper.HasGeoLocationPermission();

            locationProvider.Sensors.WifiEnabled = SensorPermissionHelper.HasWifiPermission();

            locationProvider.Sensors.BluetoothEnabled = SensorPermissionHelper.HasBluetoothPermission();
        }

        protected override void CleanupSpawnedObjects()
        {
            base.CleanupSpawnedObjects();

            for (int index = 0; index < otherSpawnedObjects.Count; index++)
            {
                Destroy(otherSpawnedObjects[index]);
            }

            otherSpawnedObjects.Clear();
        }

        protected override bool IsPlacingObject()
        {
            return false;
        }

        public async override Task AdvanceDemoAsync()
        {
            await InitializeLocateFlowDemoAsync();
        }

        public SensorStatus GeoLocationStatus
        {
            get
            {
                if (locationProvider == null)
                    return SensorStatus.MissingSensorFingerprintProvider;
                if (!locationProvider.Sensors.GeoLocationEnabled)
                    return SensorStatus.DisabledCapability;
                switch (locationProvider.GeoLocationStatus)
                {
                    case GeoLocationStatusResult.Available:
                        return SensorStatus.Available;
                    case GeoLocationStatusResult.DisabledCapability:
                        return SensorStatus.DisabledCapability;
                    case GeoLocationStatusResult.MissingSensorFingerprintProvider:
                        return SensorStatus.MissingSensorFingerprintProvider;
                    case GeoLocationStatusResult.NoGPSData:
                        return SensorStatus.NoData;
                    default:
                        return SensorStatus.MissingSensorFingerprintProvider;
                }
            }
        }

        /// <summary>
        /// Gets or sets the base URL for the example sharing service.
        /// </summary>
        public string BaseSharingUrl { get => baseSharingUrl; set => baseSharingUrl = value; }
    }
}
