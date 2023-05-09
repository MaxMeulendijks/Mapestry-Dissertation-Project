using System.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using TMPro;
using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using Microsoft.Azure.SpatialAnchors.Unity.Examples;
using MapestryExchangers;
using Yarn.Unity;
using UnityEngine.SceneManagement;

namespace Mapestry.AR
{
    public class FindAnchor : AnchorBase
    {

        public Vector3 foundAnchorPosition = new Vector3(0,0,0);
        public Quaternion foundAnchorRotation = new Quaternion();

        #region Member Variables
        private enum FindAnchorState {ConfirmReadiness, ConfigurationStarted, ConfigurationStopped, SearchStarted, SearchStopped, StartConversation,
            ConversationStarted
        }
        private FindAnchorState _currentState = FindAnchorState.ConfirmReadiness;
        private readonly List<string> localAnchorIds = new List<string>();
        private string _anchorNumberToFind;
        private PlatformLocationProvider locationProvider = null;
        private List<GameObject> otherSpawnedObjects = new List<GameObject>();

        [SerializeField]
        public TextMeshProUGUI shownDialogue;
        public GameObject textBubble;

        //Button to move forward.
        public Button NextStepButton;
        public Button ConversationButton;

        // The dialogue runner we want to load the program into
        public DialogueRunner dialogueRunner;
        public YarnProgramCreator programImporter;
        public DialogueActions dialogueActions;
        public GameObject cameraParent;
        
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
                    dialogueActions.actors.Add("anchor", foundAnchor);
                    spawnedObjectMat = foundAnchor.GetComponent<MeshRenderer>().material;
                    
                    foundAnchorPosition = foundAnchor.transform.localPosition;
                    foundAnchorRotation = foundAnchor.transform.localRotation;
                    textBubble.transform.localScale = new Vector3(0.001f, 0.001f, 0.001f);
                    dialogueActions.AttachTextBubble(foundAnchor);
                    
                    currentState = FindAnchorState.StartConversation;                 
                });
            }
        }

        void Awake()
        {
            dialogueActions.AddCommands();
        }

        /// <summary>
        /// Start is called on the frame when a script is enabled just before any
        /// of the Update methods are called the first time.
        /// </summary>
        public override void Start()
        {
            base.Start();

            Debug.LogWarning("Before any ifs");

            GameObject camera = GameObject.FindGameObjectWithTag("MainCamera");
            camera.SetActive(true);

            Debug.Log("Does it crash before Script is loaded?");
            var scriptToLoad = programImporter.ImportYarn(HuntExchanger.foundAnchor.YarnScript, HuntExchanger.foundAnchor.AnchorName+"/"+HuntExchanger.foundAnchor.AnchorCreatorId);
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

        public void BackToMap()
        {
            try
            {
                GameObject camera = GameObject.FindGameObjectWithTag("MainCamera");
                camera.SetActive(false);
                HuntExchanger.huntFound = false;
                HuntExchanger.foundAnchor = null;
                SceneManager.LoadScene("Location-basedGame");       
            }
            catch (Exception ex)
            {
                Debug.LogError($"{nameof(FindAnchor)} - Error in {nameof(BackToMap)}: {ex.Message}");
            }
        }

        private async Task AdvanceFindFlow()
        {
            switch (currentState)
            {
                case FindAnchorState.ConfirmReadiness:
                    currentState = FindAnchorState.ConfigurationStarted;
                    currentCloudAnchor = null;
                    Debug.Log("Does it crash before session configuration?");
                    ConfigureSession();
                    Debug.Log("Does it crash before session manager start?");
                    await CloudManager.StartSessionAsync();
                    Debug.Log("Does it crash before watcher is created?");
                    currentState = FindAnchorState.ConfigurationStopped;
                    break;
                case FindAnchorState.ConfigurationStopped:
                    currentWatcher = CreateWatcher();
                    currentState = FindAnchorState.SearchStarted;
                    break;
                case FindAnchorState.StartConversation:
                    CloudManager.StopSession();
                    locationProvider = null;
                    currentCloudAnchor = null;
                    currentWatcher = null;
                    Debug.LogError("Before Dialogue started");
                    dialogueRunner.StartDialogue("Start");
                    Debug.LogError("After Dialogue started");
                    currentState = FindAnchorState.ConversationStarted;
                    break;
                default:
                    Debug.Log("Shouldn't get here for app state " + currentState);
                    break;
            }
        }

        private void EnableCorrectUIControls()
        {
            var NextStepText = NextStepButton.GetComponentInChildren<Text>().text;
            switch(currentState)
            {
                case FindAnchorState.ConfirmReadiness:
                NextStepButton.gameObject.SetActive(true);
                flowText.text = "To start configuration - make sure you are connected to the internet.";
                NextStepText = "Start Configuration";
                break;
                case FindAnchorState.ConfigurationStarted:
                NextStepButton.gameObject.SetActive(false);
                flowText.text = "Configuring local...";
                break;
                case FindAnchorState.ConfigurationStopped:
                NextStepButton.gameObject.SetActive(true);
                flowText.text = "Start Search for anchor?";
                NextStepText = "Start Search";
                break;
                case FindAnchorState.SearchStarted:
                NextStepButton.gameObject.SetActive(false);
                string AnchorDescription = HuntExchanger.foundAnchor.Anchor.AnchorDescription;
                flowText.text = string.Format("Anchor guidance: {0}", AnchorDescription != null ? AnchorDescription : "No Guidance found.");
                break;
                case FindAnchorState.StartConversation:
                ConversationButton.gameObject.SetActive(true);
                flowText.text = "Start conversation?";
                break;
                case FindAnchorState.ConversationStarted:
                Debug.LogError("Entered StartConversation");
                GameObject dialogue = GameObject.FindWithTag("Dialogue");
                Debug.LogError("After dialogue created.");
                dialogue.SetActive(true);
                Debug.LogError("After dialogue activated.");
                flowText.text = " ";
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
                anchorsToFind.Add(HuntExchanger.foundAnchor.Anchor.AnchorKey);
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

        public async void RestartConversation()
        {
            currentState = FindAnchorState.StartConversation;
            await AdvanceFindFlow();
        }

        public async override Task AdvanceFlowAsync()
        {
            await AdvanceFindFlow();
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
