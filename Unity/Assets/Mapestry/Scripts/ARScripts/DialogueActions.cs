using System.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;
using System.Threading.Tasks;
using TMPro;
using Mapestry.Models;
using MapestryExchangers;
using Yarn.Unity;
using System.Collections;

namespace Mapestry.AR
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

        public float FixedSize = .00000001f;

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
            if(actorToFind != null && actors.ContainsKey(actorToFind))
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
                var distanceFromBubbleCentre = findAnchor.textBubble.GetComponent<RectTransform>().rect.max;

                Debug.LogError("Get to top right corner");
                //Get to top right corner of the object & add the distance to the bubble centre
                parentPosition.x = parentPosition.x + distanceFromParentCentre.x + 0.25f;
                parentPosition.y = parentPosition.y + distanceFromParentCentre.y + 0.25f;
            
                Debug.LogError("Move textbubble");
                findAnchor.textBubble.transform.localPosition = parentPosition;
                //Turn bubble to look at camera
                GameObject cameraObject = GameObject.FindGameObjectWithTag("MainCamera");
                Camera camera = cameraObject.GetComponent<Camera>();
                findAnchor.textBubble.transform.LookAt(new Vector3(camera.transform.localPosition.x, 
                                                                    camera.transform.localPosition.y, 
                                                                    camera.transform.localPosition.z));
                findAnchor.textBubble.transform.Rotate(Vector3.up, 180);
                //Update size of bubble depending on distance
                findAnchor.textBubble.transform.eulerAngles = new Vector3(findAnchor.textBubble.transform.eulerAngles.x, 
                                                                        findAnchor.textBubble.transform.eulerAngles.y, 
                                                                        findAnchor.textBubble.transform.eulerAngles.z);
                var distance = (camera.transform.position - findAnchor.textBubble.transform.position).magnitude;
                var size = distance * FixedSize;
                findAnchor.textBubble.transform.localScale = Vector3.one * size * camera.fieldOfView / 10000;
                Debug.LogError("Moved textbubble"); 
            }           
        }



        //All methods that are command related go after this line.
        public void AddCommands()
        {
            dialogueRunner.AddCommandHandler("HideAnchor", HideAnchor);
            dialogueRunner.AddCommandHandler("ShowAnchor", ShowAnchor);
            dialogueRunner.AddCommandHandler("ActivateAnchor", ActivateAnchor);
            dialogueRunner.AddCommandHandler("DeactivateAnchor", DeactivateAnchor);
            dialogueRunner.AddCommandHandler("AddActor", (string[] parameters) => StartCoroutine(AddActor(parameters)));
        }

        public void HideAnchor(string[] parameters)
        {
            actors.TryGetValue("anchor", out GameObject anchor); //Retrieve anchor from database
            Renderer anchorRenderer = anchor.GetComponent<Renderer>(); //Get its renderer
            anchorRenderer.enabled = false; //Disable renderer to hide anchor
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
            else if (parameters.Length < 2 || parameters.Length > 2)
            {
                Debug.LogError("Number of parameters is incorrect.");
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
                    anchor.Active = true;
                    break;
                }              
            }
        }

        private void DeactivateAnchor(string[] parameters)
        {
            Debug.LogError("Inside Deactivate Anchor");
            if(parameters != null && parameters.Length == 2)
            {
                Debug.LogError("Parameters found");
                var anchorName = parameters[0];
                Debug.LogError("Anchor Name: "+anchorName);
                var creatorName = parameters[1];
                Debug.LogError("Creator Name: "+creatorName);
                
                foreach(HuntAnchor anchor in HuntExchanger.GetHuntAnchors())
                {
                    if(anchor.AnchorName == anchorName && anchor.AnchorCreatorId == creatorName)
                    {
                        anchor.Active = false;
                        break;
                    }              
                }

            }
            else
            {
                Debug.LogError("No parameters found");
                HuntExchanger.foundAnchor.Active = false;
            }

        }

        public IEnumerator AddActor(string[] parameters)
        {
            if(parameters == null) 
            {
                Debug.LogError("No parameters");
                yield break;
            }
            else if (parameters.Length < 5 || parameters.Length > 5)
            {
                Debug.LogError("Number of parameters is incorrect.");
                yield break;
            }

            Debug.LogError("Inside AddActor - before parameters");
            string name = parameters[0];
            if(actors.ContainsKey(name))
            {
                Debug.LogError("Actor already created.");
                yield break;
            }
            string type = parameters[1];

            float leftOrRight = 0;
            float upOrDown = 0;
            float backOrForward = 0;

            try
            {
                leftOrRight = float.Parse(parameters[2]);
                upOrDown = float.Parse(parameters[3]);
                backOrForward = float.Parse(parameters[4]);
            }
            catch(FormatException formatException)
            {
                Debug.LogError("Wrong format exception: "+formatException.Message);
                yield break;
            }
            
            Debug.LogError("Inside AddActor - after parameters: name-"+name+" type-"+type+" leftOrRight-"+leftOrRight+" backOrForward-"+backOrForward+"upOrDown-"+upOrDown);

            Debug.LogError("Inside AddActor - Before determining position");
            float ActorLeftRight = findAnchor.foundAnchorPosition.x + leftOrRight;
            float ActorUpDown = findAnchor.foundAnchorPosition.y + upOrDown;
            float ActorBackForth = findAnchor.foundAnchorPosition.z + backOrForward;
            Debug.LogError("Inside AddActor - after determining position");
            
            yield return null;

            if(actors.ContainsKey(name)) //if actor was already created by that name, break here.
            {
                Debug.LogError("Actor already created.");
                yield break;
            }

            foreach(ActorType actorType in actorTypes) //Loop through predetermined 3D models
            {
                if(actorType.name == type) //Does the user specified model match any predetermined?
                {
                        Debug.LogError("Actor found");
                        Vector3 ActorPosition = new Vector3(ActorLeftRight, ActorUpDown, ActorBackForth); //Create a 3D coordinate based on anchor position 
                                                                                                          //and user input for coordinates

                        GameObject newActor = GameObject.Instantiate(actorType.type, ActorPosition, findAnchor.foundAnchorRotation); //Instantiate actor
                        newActor.transform.localScale = newActor.transform.localScale * .4f; //decrease size of model
                        newActor.SetActive(true); //make sure actor is active

                        //look at camera
                        GameObject camera = GameObject.FindGameObjectWithTag("MainCamera"); //Get camera
                        newActor.transform.LookAt(new Vector3(camera.transform.position.x,   //Set actor to rotate front to x coordinate of camera
                                                              newActor.transform.position.y, //Set actor to rotate front to y coordinate of itself
                                                              camera.transform.position.z)); //Set actor to rotate front to z coordinate of camera
                        Debug.LogError("Actor instantiated");

                        actors.Add(name, newActor); //add actor to dictionary 
                        Debug.LogError("Actor added to dictionary");
                    yield break;
                }
            yield return null; //Start new run from here next frame to stay in loop
            }
        }
    }

}