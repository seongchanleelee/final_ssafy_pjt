using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARCore;
// using Unity.VisualScripting;
using Unity.Collections;
using UnityEngine.SceneManagement;
using Suriyun;

public class ARFaceMouth : MonoBehaviour
{
  private ARFaceManager arFaceManager;
  private ARSessionOrigin sessionOrigin;

  private NativeArray<ARCoreFaceRegionData> faceRegions;

  public GameObject virusPrefab;

  GameObject virusObject1;
  GameObject virusObject2;
  GameObject virusObject3;

  brushingTeethController bt;

  private void Awake()
  {
    arFaceManager = GetComponent<ARFaceManager>();
    sessionOrigin = GetComponent<ARSessionOrigin>();
    bt = GameObject.Find("Slider").GetComponent<brushingTeethController>();

    virusObject1 = Instantiate(virusPrefab, sessionOrigin.trackablesParent);
    virusObject2 = Instantiate(virusPrefab, sessionOrigin.trackablesParent);
    virusObject3 = Instantiate(virusPrefab, sessionOrigin.trackablesParent);
  }

  void Update()
  {
    // face tracking
    try
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
            virusObject1.transform.localPosition = faceRegion.pose.position;
            virusObject1.transform.localRotation = faceRegion.pose.rotation;
            virusObject1.transform.localRotation = Quaternion.Euler(faceRegion.pose.rotation.x + 0f, faceRegion.pose.rotation.y + 180f, faceRegion.pose.rotation.z + 0f);

            virusObject2.transform.localPosition = faceRegion.pose.position;
            virusObject2.transform.localRotation = faceRegion.pose.rotation;
            virusObject2.transform.localRotation = Quaternion.Euler(faceRegion.pose.rotation.x + 0f, faceRegion.pose.rotation.y + 180f, faceRegion.pose.rotation.z + 0f);

            virusObject3.transform.localPosition = faceRegion.pose.position;
            virusObject3.transform.localRotation = faceRegion.pose.rotation;
            virusObject3.transform.localRotation = Quaternion.Euler(faceRegion.pose.rotation.x + 0f, faceRegion.pose.rotation.y + 180f, faceRegion.pose.rotation.z + 0f);

            if (bt.step == 0)
            {
              virusObject1.SetActive(false);
              virusObject2.SetActive(false);
              virusObject3.SetActive(false);
              continue;
            }

            virusObject1.SetActive(true);
            virusObject2.SetActive(true);
            virusObject3.SetActive(true);

            switch (bt.step)
            {
              case 1:
                Debug.Log("앞 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x, faceRegion.pose.position.y - 0.045f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.002f, faceRegion.pose.position.y - 0.049f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.005f, faceRegion.pose.position.y - 0.040f, faceRegion.pose.position.z);
                break;
              case 2:
                Debug.Log("왼쪽 앞 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.02f, faceRegion.pose.position.y - 0.045f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.023f, faceRegion.pose.position.y - 0.048f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.015f, faceRegion.pose.position.y - 0.040f, faceRegion.pose.position.z);
                break;
              case 3:
                Debug.Log("오른쪽 앞 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.02f, faceRegion.pose.position.y - 0.045f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.027f, faceRegion.pose.position.y - 0.048f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.017f, faceRegion.pose.position.y - 0.045f, faceRegion.pose.position.z);
                break;
              case 4:
                Debug.Log("윗니 안 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.007f, faceRegion.pose.position.y - 0.035f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x, faceRegion.pose.position.y - 0.048f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.004f, faceRegion.pose.position.y - 0.042f, faceRegion.pose.position.z);
                break;
              case 5:
                Debug.Log("아랫니 안 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.009f, faceRegion.pose.position.y - 0.06f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.003f, faceRegion.pose.position.y - 0.054f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.004f, faceRegion.pose.position.y - 0.059f, faceRegion.pose.position.z);
                break;
              case 6:
                Debug.Log("왼쪽 위 어금니 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.02f, faceRegion.pose.position.y - 0.037f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.027f, faceRegion.pose.position.y - 0.04f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.013f, faceRegion.pose.position.y - 0.043f, faceRegion.pose.position.z);
                break;
              case 7:
                Debug.Log("왼쪽 아래 어금니 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.02f, faceRegion.pose.position.y - 0.045f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.014f, faceRegion.pose.position.y - 0.05f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.022f, faceRegion.pose.position.y - 0.053f, faceRegion.pose.position.z);
                break;
              case 8:
                Debug.Log("오른쪽 위 어금니 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.02f, faceRegion.pose.position.y - 0.034f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.013f, faceRegion.pose.position.y - 0.04f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.024f, faceRegion.pose.position.y - 0.041f, faceRegion.pose.position.z);
                break;
              case 9:
                Debug.Log("오른쪽 아래 어금니 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.013f, faceRegion.pose.position.y - 0.057f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.02f, faceRegion.pose.position.y - 0.049f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.025f, faceRegion.pose.position.y - 0.053f, faceRegion.pose.position.z);
                break;
              case 10:
                Debug.Log("혀 닦기");
                virusObject1.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.001f, faceRegion.pose.position.y - 0.054f, faceRegion.pose.position.z);
                virusObject2.transform.localPosition = new Vector3(faceRegion.pose.position.x + 0.008f, faceRegion.pose.position.y - 0.059f, faceRegion.pose.position.z);
                virusObject3.transform.localPosition = new Vector3(faceRegion.pose.position.x - 0.005f, faceRegion.pose.position.y - 0.047f, faceRegion.pose.position.z);
                break;
              case 12:
                Debug.Log("양치질 끝!");
                SceneManager.LoadScene("SuccessScene");
                break;
              default:
                break;
            }

            virusObject1.SetActive(bt.virus1);
            virusObject2.SetActive(bt.virus2);
            virusObject3.SetActive(bt.virus3);

            if (bt.step == 11)
            {
              virusObject1.SetActive(false);
              virusObject2.SetActive(false);
              virusObject3.SetActive(false);
            }
          }
        }
        break;
      }
    }
    catch
    {
      if (bt.step >= 2)
      {
        SceneManager.LoadScene("FailScene");
      }
    }

  }
}
