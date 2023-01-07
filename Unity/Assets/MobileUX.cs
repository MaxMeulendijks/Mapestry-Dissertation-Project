// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Microsoft.Azure.SpatialAnchors.Unity.Examples
{
    /// <summary>
    /// Picks the appropriate UI game object to be used. 
    /// This allows us to have both HoloLens and Mobile UX in the same
    /// scene.
    /// </summary>
    public class MobileUX : MonoBehaviour
    {
        private static MobileUX _Instance;
        public static MobileUX Instance
        {
            get
            {
                if (_Instance == null)
                {
                    _Instance = FindObjectOfType<MobileUX>();
                }

                return _Instance;
            }
        }

        public GameObject MobileAndEditorUXTree;

        void Awake()
        {
            MobileAndEditorUXTree.SetActive(true);
        }

        /// <summary>
        /// Gets the correct feedback text control for the demo
        /// </summary>
        /// <returns>The feedback text control if it found it</returns>
        public Text GetFeedbackText()
        {
            GameObject sourceTree = MobileAndEditorUXTree;

            Debug.Log(sourceTree.transform.childCount);
            int childCount = sourceTree.transform.childCount;
            for (int index = 0; index < childCount; index++)
            {
                GameObject child = sourceTree.transform.GetChild(index).gameObject;
                Text t = child.GetComponent<Text>();
                if (t != null)
                {
                    return t;
                }

            }

            Debug.LogError("Did not find feedback text control.");
            return null;
        }

        /// <summary>
        /// Gets the button used in the demo.
        /// </summary>
        /// <returns>The button used in the demo.  Returns null on HoloLens</returns>
        public Button GetDemoButton()
        {
            return MobileAndEditorUXTree.GetComponentInChildren<Button>();
        }

        /// <summary>
        /// Gets the buttons used in the demo.
        /// </summary>
        /// <returns>The buttons used in the demo.</returns>
        public Button[] GetDemoButtons()
        {
            return MobileAndEditorUXTree.GetComponentsInChildren<Button>(true);
        }

        public InputField GetDemoInputField()
        {
            return MobileAndEditorUXTree.GetComponentInChildren<InputField>(true);
        }
    }
}

