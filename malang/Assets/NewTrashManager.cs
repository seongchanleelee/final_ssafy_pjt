using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine;
using Random = UnityEngine.Random;
using TMPro;

public class NewTrashManager : MonoBehaviour
{
  //touch
  //float speed = 0;




  public GameObject indicator;
  public GameObject myTrashCanCan;
  //public GameObject myTrashCanGlass;
  //public GameObject myTrashCanPaper;

  public GameObject myTrash1;
  public GameObject myTrash2;
  public GameObject myTrash3;



  //public GameObject myTextBox;
  ARRaycastManager arManager;
  GameObject placeObjectCan;
  GameObject placeObjectGlass;
  GameObject placeObjectPaper;
  //GameObject placeObjectTrash;
  
  GameObject placeObjectTrash1;
  GameObject placeObjectTrash2;
  GameObject placeObjectTrash3;

  Vector3 indicatorPos;
  Quaternion indicatorRot;

  int cnt = 0;
  int cnt2 = 0;
  bool success = false;
  bool success2 = false;
  Button SuccessText;
  TextMeshProUGUI TrashExplanation;
  TextMeshProUGUI TrashExplanation2;




  //GameObject placeObjectTextBox;

  // Start is called before the first frame update
  void Start()
  {
    Screen.sleepTimeout = SleepTimeout.NeverSleep;
    SuccessText = GameObject.FindGameObjectWithTag("success").GetComponent<Button>();
    SuccessText.gameObject.SetActive(false);
    TrashExplanation = GameObject.FindGameObjectWithTag("TrashExplanation").GetComponent<TextMeshProUGUI>();
    TrashExplanation2 = GameObject.FindGameObjectWithTag("TrashExplanation2").GetComponent<TextMeshProUGUI>();
    TrashExplanation2.gameObject.SetActive(false);

    indicator.SetActive(false);

    arManager = GetComponent<ARRaycastManager>();

  }

  // Update is called once per frame
  void Update()
  {
    if (Input.touchCount > 0)
    {

      Touch touch = Input.GetTouch(0);
      Vector2 pos = Camera.main.ScreenToWorldPoint(touch.position);
      myTrash1.transform.position = pos;


    }

    // 바닥을 인식 시
    DetectGround();
    if (indicator.activeInHierarchy)
    {
      if (placeObjectCan == null)
      {
        placeObjectCan = Instantiate(myTrashCanCan, indicator.transform.position, indicator.transform.rotation);
        TrashExplanation.gameObject.SetActive(false);
        TrashExplanation2.gameObject.SetActive(true);
      }

      if (placeObjectTrash1 == null)
      {
        // int randomNumber = Random.Range(0, 1);
        if (TrashCanCollution.successCnt == 0)
        {
          placeObjectTrash1 = Instantiate(myTrash1, indicator.transform.position, indicator.transform.rotation);
        }
      }
      else if (placeObjectTrash2 == null)
      {
        if (TrashCanCollution.successCnt == 1)
        {
          placeObjectTrash2 = Instantiate(myTrash2, indicator.transform.position, indicator.transform.rotation);
        }
      }
      else if (placeObjectTrash3 == null)
      {
        if (TrashCanCollution.successCnt == 2)
        {
          placeObjectTrash3 = Instantiate(myTrash3, indicator.transform.position, indicator.transform.rotation);
        }
      }
    }
  }

  void DetectGround()
  {
    Vector2 screenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);
    List<ARRaycastHit> hitInfos = new List<ARRaycastHit>();


    if (arManager.Raycast(screenSize, hitInfos, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
    {
      indicator.SetActive(true);
      indicator.transform.position = hitInfos[0].pose.position;
      indicatorPos = hitInfos[0].pose.position;
      indicator.transform.rotation = hitInfos[0].pose.rotation;
      indicatorRot = hitInfos[0].pose.rotation;
      indicator.transform.position += indicator.transform.up * 0.1f;
    }
    else
    {
      indicator.SetActive(false);
    }


  }

  /// /////////////////////////////////////////충돌감지
  private void OnTriggerEnter(Collider other)
  {
    if (placeObjectTrash1 != null)
    {
      Destroy(placeObjectTrash1);
      
    }
    else if (placeObjectTrash2 != null)
    {
      Destroy(placeObjectTrash2);
    }
    else
    {
      Destroy(placeObjectTrash3);
    }
  }
}
