
using System.Linq;
using System;
using System.Collections.Generic;
using Mapestry.Models;
using MapestryExchangers;
using MapestryControls;
using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using Microsoft.Azure.SpatialAnchors.Unity.Examples;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using TMPro;

namespace Mapestry.AR
{
    public class CreateAnchors : AnchorBase
    {

        #if !UNITY_EDITOR
        public AnchorExchanger anchorExchanger = new AnchorExchanger();
        #endif

        public List<Anchor> anchorNames = new List<Anchor>();

        enum AppState {DecideFlow, CreationConfiguration, LocationConfiguration, StartPlacing, IsPlacing, NameAnchor, NameToSearch, StartSearch, StopSearch, SaveAnchor, AnchorSaved,
            IsSearching
        }
        private Dictionary<AppState, string> GuidanceText = new Dictionary<AppState, string>{
            {AppState.DecideFlow, "Create or Locate Anchor?"},
            {AppState.CreationConfiguration, "Loading creation configuration..."},
            {AppState.LocationConfiguration, "Loading location configuration..."},
            {AppState.StartPlacing, "Find an uncluttered space to place the anchor."},
            {AppState.IsPlacing, "Tap surface to place an anchor."},
            {AppState.NameAnchor, "What will you name your anchor?"},
            {AppState.NameToSearch, "What anchor are you looking for?"},
            {AppState.StartSearch, "Start Search?"},
            {AppState.IsSearching, "Searching..."},
            {AppState.StopSearch, "Found {0} - continue to restart scene."},
            {AppState.SaveAnchor, "Saving..."},
            {AppState.AnchorSaved, "Saved {0} - continue to restart scene."}
            
            };

        #region Member Variables

        private AppState _currentAppState = AppState.DecideFlow;

        private readonly List<GameObject> otherSpawnedObjects = new List<GameObject>();
        private int anchorsLocated = 0;
        private int anchorsExpected = 0;
        private readonly List<string> localAnchorIds = new List<string>();
        private string _anchorKeyToFind = null;
        private string anchorInput = null;
        private string? _anchorNumberToFind;
        private PlatformLocationProvider locationProvider = null;

        [SerializeField]
        private Button startCreateButton  = null;
        [SerializeField]
        private Button startLocateButton  = null;
        [SerializeField]
        private Button ContinueCreateButton  = null;
        [SerializeField]
        private Button ContinueLocateButton  = null;
        [SerializeField]
        private Button exitButton  = null;
        [SerializeField]
        private TMP_InputField inputBox  = null;

        #endregion // Member Variables

        #region Unity Inspector Variables
        [SerializeField]
        [Tooltip("The base URL for the example sharing service.")]
        private string baseSharingUrl = "";
        #endregion // Unity Inspector Variables

        private AppState currentAppState
        {
            get
            {
                return _currentAppState;
            }
            set
            {
                if (_currentAppState != value)
                {
                    Debug.LogFormat("State from {0} to {1}", _currentAppState, value);
                    _currentAppState = value;

                    flowText.text = GuidanceText[_currentAppState];
                    EnableCorrectUIControls();
                }
            }
        }

        protected override void OnCloudAnchorLocated(AnchorLocatedEventArgs args)
        {
            base.OnCloudAnchorLocated(args);

            if (args.Status == LocateAnchorStatus.Located)
            {
                CloudSpatialAnchor nextCsa = args.Anchor;
                currentCloudAnchor = args.Anchor;

                UnityDispatcher.InvokeOnAppThread(() =>
                {
                    anchorsLocated++;
                    currentCloudAnchor = nextCsa;

                    Pose anchorPose = currentCloudAnchor.GetPose();
                    GameObject nextObject = SpawnNewAnchoredObject(anchorPose.position, anchorPose.rotation, currentCloudAnchor);
                    spawnedObjectMat = nextObject.GetComponent<MeshRenderer>().material;

                    AttachTextMesh(nextObject, _anchorNumberToFind);
                    otherSpawnedObjects.Add(nextObject);

                    if (anchorsLocated >= anchorsExpected)
                    {
                        currentAppState = AppState.StopSearch;
                        flowText.text = string.Format(GuidanceText[_currentAppState], anchorInput);
                    }
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

            ContinueCreateButton.gameObject.SetActive(false);
            ContinueLocateButton.gameObject.SetActive(false);
            startCreateButton.gameObject.SetActive(false);
            startLocateButton.gameObject.SetActive(false);
            inputBox.gameObject.SetActive(false);

            Debug.LogWarning("Before any ifs");
            if (!SanityCheckAccessConfiguration())
            {
                Debug.LogWarning("!SanityCheckAccessConfiguration");
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
                flowText.text = $"Need to set {nameof(BaseSharingUrl)}.";
                return;
            }
            else
            {
                Uri result;
                if (!Uri.TryCreate(BaseSharingUrl, UriKind.Absolute, out result))
                {
                    flowText.text = $"{nameof(BaseSharingUrl)} is not a valid url";
                    return;
                }
                else
                {
                    BaseSharingUrl = $"{result.Scheme}://{result.Host}/api";
                    startCreateButton.gameObject.SetActive(true);
                    startLocateButton.gameObject.SetActive(true);
                    inputBox.gameObject.SetActive(true);
                }
            }

            Debug.LogWarning("Watch keys");
            #if !UNITY_EDITOR
            anchorExchanger.SetBaseAddress(BaseSharingUrl);
            #endif

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
            }
        }

        protected override bool IsPlacingObject()
        {
            return currentAppState == AppState.IsPlacing;
        }

        protected override Color GetStepColor()
        {
            return Color.red;
        }

        private void AttachTextMesh(GameObject parentObject, string? dataToAttach)
        {
            GameObject go = new GameObject();

            TextMesh tm = go.AddComponent<TextMesh>();
            if (dataToAttach == null)
            {
                tm.text = string.Format("{0}:{1}", localAnchorIds.Contains(currentCloudAnchor.Identifier) ? "L" : "R", currentCloudAnchor.Identifier);
            }
            else if (dataToAttach != "/")
            {
                tm.text = $"Anchor Name:{dataToAttach}";
            }
            else
            {
                tm.text = $"Failed to store the anchor key using '{BaseSharingUrl}'";
            }
            tm.fontSize = 32;
            go.transform.SetParent(parentObject.transform, false);
            go.transform.localPosition = Vector3.one * 0.25f;
            go.transform.rotation = Quaternion.AngleAxis(0, Vector3.up);
            go.transform.localScale = Vector3.one * .1f;

            otherSpawnedObjects.Add(go);
        }

#pragma warning disable CS1998 // Conditional compile statements are removing await
        protected override async Task OnSaveCloudAnchorSuccessfulAsync(string anchorId)
#pragma warning restore CS1998

        {
            await base.OnSaveCloudAnchorSuccessfulAsync(anchorId);

            string anchorIdReturned = "/";

            localAnchorIds.Add(currentCloudAnchor.Identifier);
            GeoLocation myLocation = locationProvider.GetLocationEstimate();
            Debug.LogError("My location is at:"+myLocation.Latitude+","+myLocation.Longitude);

#if !UNITY_EDITOR
            anchorIdReturned = (await anchorExchanger.StoreAnchorKey(currentCloudAnchor.Identifier, anchorId, PlayFabControls.usernameGame, myLocation.Latitude, myLocation.Longitude));
#endif

            AttachTextMesh(spawnedObject, anchorIdReturned);

            currentAppState = AppState.AnchorSaved;

            flowText.text = string.Format(GuidanceText[_currentAppState], anchorIdReturned);
        }

        protected override void OnSaveCloudAnchorFailed(Exception exception)
        {
            base.OnSaveCloudAnchorFailed(exception);
        }

        public async void ChooseCreate()
        {
            await ChooseFlow(true);
        }

        public async void ChooseLocate()
        {
            await ChooseFlow(false);
        }

        private async Task ChooseFlow(bool createFlow)
        {
            if(createFlow == true) 
            {
                currentAppState = AppState.CreationConfiguration;
                await AdvanceFlowAsync();  
            }
            else
            {
                currentAppState = AppState.NameToSearch;
            } 
        }

        public async void RetrieveAnchorKey(string anchorInput)
        {
            
            Debug.Log("Input Text: "+anchorInput);
            _anchorKeyToFind = null;
            #if !UNITY_EDITOR
            _anchorKeyToFind = (await anchorExchanger.RetrieveAnchorKey(anchorInput, PlayFabControls.usernameGame));
            #endif

            if (_anchorKeyToFind.Equals("Anchor Not Found."))
            {
                flowText.text = "No Anchor found with that name. Try again.";
                return;
            }
            else
            {
                currentAppState = AppState.LocationConfiguration;
                flowText.text = GuidanceText[_currentAppState];
            } 
        }

        public async override Task AdvanceFlowAsync()
        {
            switch (currentAppState)
            {
                //CreateFlow
                case AppState.CreationConfiguration:
                    currentCloudAnchor = null;
                    ConfigureSession();
                    await CloudManager.StartSessionAsync();
                    locationProvider = new PlatformLocationProvider();
                    CloudManager.Session.LocationProvider = locationProvider;
                    ConfigureSensors();
                    currentAppState = AppState.StartPlacing;
                    break;
                case AppState.StartPlacing:
                    currentAppState = AppState.IsPlacing;
                    break;
                case AppState.IsPlacing:
                    if (spawnedObject != null)
                    {
                        currentAppState = AppState.NameAnchor;
                    }
                    break;
                case AppState.NameAnchor:
                    anchorInput = inputBox.text;
                    if (anchorInput.Length == 0 || anchorInput.Contains("/") || anchorInput.Contains(" "))
                    {
                        flowText.text = "Anchor name cannot be empty, contain slashes, or have empty spaces.";

                    }
                    else
                    {
                        #if !UNITY_EDITOR
                            anchorNames =  await anchorExchanger.RetrieveAnchors(PlayFabControls.usernameGame);
                        #endif

                        foreach(Anchor anchor in anchorNames)
                        {
                            if(anchor.AnchorName == anchorInput)
                            {
                                flowText.text = string.Format("There is already an anchor by name {0}. Choose a unique name", anchor.AnchorName);
                                isButtonClicked = false;
                                return;
                            }
                        }

                        currentAppState = AppState.SaveAnchor;
                        await SaveCurrentObjectAnchorToCloudAsync(anchorInput);
                    }
                    break;
                case AppState.AnchorSaved:
                    CloudManager.StopSession();
                    locationProvider = null;
                    CleanupSpawnedObjects();
                    await CloudManager.ResetSessionAsync();
                    currentAppState = AppState.DecideFlow;
                    break;
                case AppState.DecideFlow:
                    currentCloudAnchor = null;
                    inputBox.text = null;
                    CleanupSpawnedObjects();
                    break;
                //LocateFlow
                case AppState.NameToSearch:
                    anchorInput = inputBox.text;
                    if (anchorInput == null || anchorInput.Contains("/") || anchorInput.Contains(" "))
                    {
                        flowText.text = "Anchor name cannot be empty, contain slashes, or have empty spaces.";
                    }
                    else
                    {
                        RetrieveAnchorKey(anchorInput);
                    }
                    break;
                case AppState.LocationConfiguration:
                    anchorsLocated = 0;
                    ConfigureSession();
                    await CloudManager.StartSessionAsync();
                    locationProvider = new PlatformLocationProvider();
                    CloudManager.Session.LocationProvider = locationProvider;
                    ConfigureSensors();
                    currentAppState = AppState.StartSearch;
                    break;
                case AppState.StartSearch:
                    currentWatcher = CreateWatcher();
                    currentAppState = AppState.IsSearching;
                    break;
                case AppState.IsSearching:
                    // Advancement will take place when anchors have all been located.
                    break;
                case AppState.StopSearch:
                    Debug.LogError("Expiration set for:"+currentCloudAnchor.Expiration.ToString());
                    CloudManager.StopSession();
                    locationProvider = null;
                    currentWatcher = null;
                    CleanupSpawnedObjects();
                    currentAppState = AppState.DecideFlow;
                    break;
                default:
                    Debug.Log("Shouldn't get here for app state " + currentAppState);
                    break;
            }
            isButtonClicked = false;

        }

        private void EnableCorrectUIControls()
        {
            switch (currentAppState)
            {
                case AppState.DecideFlow:
                    startCreateButton.gameObject.SetActive(true);
                    startLocateButton.gameObject.SetActive(true);
                    ContinueCreateButton.gameObject.SetActive(false);
                    ContinueLocateButton.gameObject.SetActive(false);
                    inputBox.gameObject.SetActive(false);
                    break;
                case AppState.NameToSearch:
                    startCreateButton.gameObject.SetActive(false);
                    startLocateButton.gameObject.SetActive(false);
                    ContinueLocateButton.gameObject.SetActive(true);
                    inputBox.gameObject.SetActive(true);
                    inputBox.text = null;
                    break;
                case AppState.NameAnchor:
                    startCreateButton.gameObject.SetActive(false);
                    startLocateButton.gameObject.SetActive(false);
                    ContinueLocateButton.gameObject.SetActive(true);
                    inputBox.gameObject.SetActive(true);
                    break;
                case AppState.LocationConfiguration:
                case AppState.StartSearch:
                case AppState.StopSearch:
                    startCreateButton.gameObject.SetActive(false);
                    startLocateButton.gameObject.SetActive(false);
                    ContinueCreateButton.gameObject.SetActive(false);
                    ContinueLocateButton.gameObject.SetActive(true);
                    inputBox.gameObject.SetActive(false);
                    break;
                case AppState.CreationConfiguration:
                case AppState.StartPlacing:
                case AppState.IsPlacing:
                case AppState.SaveAnchor:
                case AppState.AnchorSaved:
                    startCreateButton.gameObject.SetActive(false);
                    startLocateButton.gameObject.SetActive(false);
                    ContinueCreateButton.gameObject.SetActive(true);
                    ContinueLocateButton.gameObject.SetActive(false);
                    inputBox.gameObject.SetActive(false);
                    break;
                case AppState.IsSearching:
                    startCreateButton.gameObject.SetActive(false);
                    startLocateButton.gameObject.SetActive(false);
                    ContinueLocateButton.gameObject.SetActive(false);
                    inputBox.gameObject.SetActive(false);
                    break;

                default:
                    startCreateButton.gameObject.SetActive(false);
                    startLocateButton.gameObject.SetActive(false);
                    inputBox.gameObject.SetActive(false);
                    break;
            }
        }

        private void ConfigureSession()
        {
            List<string> anchorsToFind = new List<string>();

            if (currentAppState == AppState.LocationConfiguration)
            {
                anchorsToFind.Add(_anchorKeyToFind);
            }
            
            anchorsExpected = anchorsToFind.Count;
            SetAnchorIdsToLocate(anchorsToFind);
            
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

        private void ConfigureSensors()
        {
            locationProvider.Sensors.GeoLocationEnabled = SensorPermissionHelper.HasGeoLocationPermission();

            locationProvider.Sensors.WifiEnabled = SensorPermissionHelper.HasWifiPermission();

            locationProvider.Sensors.BluetoothEnabled = SensorPermissionHelper.HasBluetoothPermission();
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
