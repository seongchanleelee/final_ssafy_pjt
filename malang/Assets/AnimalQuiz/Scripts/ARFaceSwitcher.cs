using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARCore;
// using Unity.VisualScripting;
using Unity.Collections;

public class ARFaceSwitcher : MonoBehaviour
{
  private ARFaceManager arFaceManager;
  private ARSessionOrigin sessionOrigin;

  private NativeArray<ARCoreFaceRegionData> faceRegions;

  public GameObject noseDefaultPrefab;
  public GameObject leftHeadDefaultPrefab;
  public GameObject rightHeadDefaultPrefab;

  public static GameObject noseObject;
  public static GameObject leftHeadObject;
  public static GameObject rightHeadObject;

  private void Awake()
  {
    // currentMaterial = arFaceManager.facePrefab.GetComponent<MeshRenderer>().material;
    arFaceManager = GetComponent<ARFaceManager>();
    sessionOrigin = GetComponent<ARSessionOrigin>();

    noseObject = Instantiate(noseDefaultPrefab, sessionOrigin.trackablesParent);
    leftHeadObject = Instantiate(leftHeadDefaultPrefab, sessionOrigin.trackablesParent);
    rightHeadObject = Instantiate(rightHeadDefaultPrefab, sessionOrigin.trackablesParent);
  }

  public void updateButton()
  {
    /*GameObject.Find("ButtonPanel").transform.Find("CatButton").GetComponent<Button>().gameObject.SetActive(false);
    GameObject.Find("ButtonPanel").transform.Find("DogButton").GetComponent<Button>().gameObject.SetActive(false);
    GameObject.Find("ButtonPanel").transform.Find("CowButton").GetComponent<Button>().gameObject.SetActive(false);
    GameObject.Find("ButtonPanel").transform.Find("PigButton").GetComponent<Button>().gameObject.SetActive(false);
    GameObject.Find("ButtonPanel").transform.Find("WolfButton").GetComponent<Button>().gameObject.SetActive(false);
    GameObject.Find("ButtonPanel").transform.Find("TigerButton").GetComponent<Button>().gameObject.SetActive(false);*/

    updateDefault();
    }

  public void updateNosePrefab(GameObject nosePrefab)
  {
    noseObject = Instantiate(nosePrefab, sessionOrigin.trackablesParent);
  }

  public void updateLeftHeadPrefab(GameObject leftHeadPrefab)
  {
    leftHeadObject = Instantiate(leftHeadPrefab, sessionOrigin.trackablesParent);
  }

  public void updateRightHeadPrefab(GameObject rightHeadPrefab)
  {
    rightHeadObject = Instantiate(rightHeadPrefab, sessionOrigin.trackablesParent);
  }

  public void updateFace()
  {
    noseObject.SetActive(true);
    leftHeadObject.SetActive(true);
    rightHeadObject.SetActive(true);
  }

  public void updateDefault()
  {
    noseObject.SetActive(false);
    leftHeadObject.SetActive(false);
    rightHeadObject.SetActive(false);
  }

  // Update is called once per frame
  void Update()
  {

    ARCoreFaceSubsystem subsystem = (ARCoreFaceSubsystem)arFaceManager.subsystem;

    foreach (ARFace face in arFaceManager.trackables)
    {
      subsystem.GetRegionPoses(face.trackableId, Unity.Collections.Allocator.Persistent, ref faceRegions);

      foreach (ARCoreFaceRegionData faceRegion in faceRegions)
      {
        ARCoreFaceRegion regionType = faceRegion.region;

        if (regionType == ARCoreFaceRegion.NoseTip)
        {
          noseObject.transform.localPosition = faceRegion.pose.position;
          noseObject.transform.localRotation = faceRegion.pose.rotation;
        }
        else if (regionType == ARCoreFaceRegion.ForeheadLeft)
        {
          leftHeadObject.transform.localPosition = faceRegion.pose.position;
          leftHeadObject.transform.localRotation = faceRegion.pose.rotation;
        }
        else if (regionType == ARCoreFaceRegion.ForeheadRight)
        {
          rightHeadObject.transform.localPosition = faceRegion.pose.position;
          rightHeadObject.transform.localRotation = faceRegion.pose.rotation;
        }
      }

      break;
    }
  }
}
