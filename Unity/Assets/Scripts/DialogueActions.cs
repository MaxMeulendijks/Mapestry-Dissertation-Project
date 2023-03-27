// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.
using System.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;
using System.Threading.Tasks;
using TMPro;
using Yarn.Unity;
using System.Collections;

namespace Microsoft.Azure.SpatialAnchors.Unity.Examples
{
    [Serializable]
    public class ActorType
    {
        public string name;
        public GameObject type;
    }
    
    public class DialogueActions : MonoBehaviour
    {
    
        public Dictionary<string, GameObject> actors = new Dictionary<string, GameObject>();

        [SerializeField]
        public DialogueRunner dialogueRunner;
        public List<ActorType> actorTypes;
        public FindAnchor findAnchor;

        public void assignSpeaker()
        {
            GameObject speaker = null;
            if(dialogueRunner.dialogueUI.characterName != null)
            {
                Debug.LogError("Character name is: "+dialogueRunner.dialogueUI.characterName);
                speaker = FindActor(dialogueRunner.dialogueUI.characterName);
            }

            if(speaker != null)
            {
                Debug.LogError("Character model is: "+speaker.name);
                AttachTextBubble(speaker);
            }
        }

        public GameObject FindActor(string actorToFind)
        {
            if(actors.ContainsKey(actorToFind) && actorToFind != null)
            {
                actors.TryGetValue(actorToFind, out GameObject speakerFound);
                return speakerFound;
            }
            else
            {
                return null;
            }     
        }

        #nullable enable
        public void AttachTextBubble(GameObject parentObject)
        {
            Debug.LogError("Attach bubble to "+parentObject.name);
        #nullable disable
            var parentRenderer = parentObject.GetComponent<Renderer>();

            if(parentRenderer == null)
            {
                Debug.LogError("Check if renderer is in children");
                parentRenderer = parentObject.GetComponentInChildren<Renderer>();
            }

            if(parentRenderer == null)
            {
                return;
            }

            if(parentRenderer.enabled == true)
            {
                Debug.LogError("Inside attach text bubble for "+parentObject.name);
                var parentPosition = parentObject.transform.localPosition;
                Debug.LogError("Get renderer");
                var distanceFromParentCentre = parentRenderer.bounds.extents;
                Debug.LogError("Get bubble transform");
                var distanceFromBubbleCentre = findAnchor.textBubble.GetComponent<RectTransform>().rect;

                Debug.LogError("Get to top right corner");
                //Get to top right corner of the object & add the distance to the bubble centre
                parentPosition.x = parentPosition.x + distanceFromParentCentre.x + 0.1f;
                parentPosition.y = parentPosition.y + distanceFromParentCentre.y + 0.15f;
            
                Debug.LogError("Move textbubble");
                findAnchor.textBubble.transform.localPosition = parentPosition;
                Debug.LogError("Moved textbubble"); 
            }           
        }



        //All methods that are command related go after this line.
        public void AddCommands()
        {
            dialogueRunner.AddCommandHandler("HideAnchor", HideAnchor);
            dialogueRunner.AddCommandHandler("ShowAnchor", ShowAnchor);
            dialogueRunner.AddCommandHandler("AnchorActive", ActivateAnchor);
            dialogueRunner.AddCommandHandler("AnchorInactive", DeactivateAnchor);
            dialogueRunner.AddCommandHandler("AddActor", (string[] parameters) => StartCoroutine(AddActor(parameters)));
        }

        public void HideAnchor(string[] parameters)
        {
            actors.TryGetValue("anchor", out GameObject anchor);
            Renderer anchorRenderer = anchor.GetComponent<Renderer>();
            anchorRenderer.enabled = false;
        }

        public void ShowAnchor(string[] parameters)
        {
            actors.TryGetValue("anchor", out GameObject anchor);
            Renderer anchorRenderer = anchor.GetComponent<Renderer>();
            anchorRenderer.enabled = true;
        }

        private void ActivateAnchor(string[] parameters)
        {
            if(parameters == null)
            {
                Debug.LogError("No parameters");
                return;
            }
            Debug.LogError("Got the anchor name: "+parameters[0]);
            var anchorName = parameters[0];
            Debug.LogError("Got the creator name: "+parameters[1]);
            var creatorName = parameters[1];

            foreach(HuntAnchor anchor in HuntExchanger.GetHuntAnchors())
            {
                Debug.LogError("Inside for loop");
                if(anchor.AnchorName == anchorName && anchor.AnchorCreatorId == creatorName)
                {
                    Debug.LogError("Inside if statement");
                    anchor.FirstStop = true;
                    //GameObject infoPanel = GameObject.FindGameObjectWithTag("InfoPanel");
                    //infoPanel.SetActive(true);
                    break;
                }              
            }
        }

        private void DeactivateAnchor(string[] parameters)
        {
            if(parameters != null)
            {
                var anchorName = parameters[0];
                var creatorName = parameters[1];
                
                foreach(HuntAnchor anchor in HuntExchanger.GetHuntAnchors())
                {
                    if(anchor.AnchorName == anchorName && anchor.AnchorCreatorId == creatorName)
                    {
                        anchor.FirstStop = false;
                        break;
                    }              
                }

            }
            else
            {
                HuntExchanger.foundAnchor.FirstStop = false;
            }

        }

        public IEnumerator AddActor(string[] parameters)
        {
            Debug.LogError("Inside AddActor - before parameters");
            string name = parameters[0];
            if(actors.ContainsKey(name))
            {
                Debug.LogError("Actor already created.");
                yield break;
            }
            string type = parameters[1];
            float leftOrRight = float.Parse(parameters[2]);
            float upOrDown = float.Parse(parameters[3]);
            float backOrForward = float.Parse(parameters[4]);
            
            Debug.LogError("Inside AddActor - after parameters: name-"+name+" type-"+type+" leftOrRight-"+leftOrRight+" backOrForward-"+backOrForward+"upOrDown-"+upOrDown);

            Debug.LogError("Inside AddActor - Before determining position");
            float ActorLeftRight = findAnchor.foundAnchorPosition.x + leftOrRight;
            float ActorUpDown = findAnchor.foundAnchorPosition.y + upOrDown;
            float ActorBackForth = findAnchor.foundAnchorPosition.z + backOrForward;
            Debug.LogError("Inside AddActor - after determining position");
            
            yield return null;
            foreach(ActorType actorType in actorTypes)
            {
                if(actorType.name == type)
                {
                        Debug.LogError("Actor found");
                        Vector3 ActorPosition = new Vector3(ActorLeftRight, ActorUpDown, ActorBackForth);

                        GameObject newActor = GameObject.Instantiate(actorType.type, ActorPosition, findAnchor.foundAnchorRotation);
                        newActor.transform.localScale = newActor.transform.localScale * .2f;
                        newActor.SetActive(true);
                        Debug.LogError("Actor instantiated");

                        if(actors.ContainsKey(name))
                        {
                            Debug.LogError("Actor already created.");
                            yield break;
                        }
                        actors.Add(name, newActor);
                        Debug.LogError("Actor added to dictionary");
                    yield break;
                }
                    yield return null;
            }
        }
    }

}