using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapCamera : MonoBehaviour
{

        /// <summary>
        /// The parent for the game objects to use in the editor.
        /// </summary>
        public GameObject EditorCameraTree;

    // Start is called before the first frame update
    void Start()
    {
        GameObject targetCamera = EditorCameraTree;
#if UNITY_ANDROID || UNITY_IOS || UNITY_WSA
            targetCamera = GameObject.FindGameObjectWithTag("MainCamera");
#elif !UNITY_EDITOR
            Debug.LogError("Unexpected platform for XRCameraPicker. Did you intend to include this script in your scene?");     
#endif
            GameObject activeCamera = Instantiate(targetCamera);

            DontDestroyOnLoad(activeCamera);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
