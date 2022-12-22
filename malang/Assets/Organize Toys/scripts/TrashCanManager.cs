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

public class TrashCanManager : MonoBehaviour
{
  //touch
  //float speed = 0;




  public GameObject indicator;
  public GameObject myTrashCanCan;
  //public GameObject myTrashCanGlass;
  //public GameObject myTrashCanPaper;
  public GameObject myTrash;


  public GameObject myTrash1;
  public GameObject myTrash2;
  public GameObject myTrash3;
  public GameObject myTrash4;
  public GameObject myTrash5;
  public GameObject myTrash6;
  public GameObject myTrash7;
  public GameObject myTrash8;
  public GameObject myTrash9;




  //public GameObject myTextBox;
  ARRaycastManager arManager;
  GameObject placeObjectCan;
  GameObject placeObjectGlass;
  GameObject placeObjectPaper;
  //GameObject placeObjectTrash;
  GameObject placeObjectTrash;
  GameObject placeObjectTrash1;
  GameObject placeObjectTrash2;
  GameObject placeObjectTrash3;
  GameObject placeObjectTrash4;
  GameObject placeObjectTrash5;
  GameObject placeObjectTrash6;
  GameObject placeObjectTrash7;
  GameObject placeObjectTrash8;
  GameObject placeObjectTrash9;
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

    //placeObjectTrash = GameObject.FindGameObjectWithTag("cube");
    //Debug.Log(placeObjectTrash);
    //Debug.Log(placeObjectTrash.name + "123123123312132132123");
    //Debug.Log(placeObjectTrash.gameObject + "123123123312132132124");
    //Debug.Log(placeObjectTrash.tag + "123123123312132132125");
    //Debug.Log(placeObjectTrash.ToString() + "123123123312132132126");
    //Debug.Log(placeObjectTrash.GetType() + "123123123312132132127");

    if (Input.touchCount > 0)
    {

      Touch touch = Input.GetTouch(0);
      Vector2 pos = Camera.main.ScreenToWorldPoint(touch.position);
      myTrash.transform.position = pos;


    }
    //////////////////////////////////////////////////



     /* if (success == true && placeObjectTrash1 == null)
      {
        Debug.Log("222222222222222222222222222222222222222222222");
        placeObjectTrash = Instantiate(myTrash4, indicatorPos, indicatorRot);
        success = false;
        cnt += 1;
      }
    
    if (success2 == true && placeObjectTrash2==null)
    {
      Debug.Log("3333333333333333333333333333333333333333333333");
      placeObjectTrash2 = Instantiate(myTrash5, indicatorPos, indicatorRot);
      success2 = false;
      cnt += 1;
    }*/
    //////////////////////////////////////////////////////
    // 바닥을 인식 시
    DetectGround();
    if (indicator.activeInHierarchy)
    {

      //Debug.Log(success);
      if (placeObjectCan == null)
      {
        placeObjectCan = Instantiate(myTrashCanCan, indicator.transform.position, indicator.transform.rotation);
        TrashExplanation.gameObject.SetActive(false);
        TrashExplanation2.gameObject.SetActive(true);
      }

      //////////////////////////////////////


      ///////////////////////////////////////////////////////////////////////
      /*if (placeObjectTrash == null)
      {
          placeObjectTrash = Instantiate(myTrash, indicator.transform.position, indicator.transform.rotation);
      }

      if (placeObjectTrash1 == null)
      {
          placeObjectTrash1 = Instantiate(myTrash1, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash2 == null)
      {
          placeObjectTrash2 = Instantiate(myTrash2, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash3 == null)
      {
          placeObjectTrash3 = Instantiate(myTrash3, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash4 == null)
      {
          placeObjectTrash4 = Instantiate(myTrash4, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash5 == null)
      {
          placeObjectTrash5 = Instantiate(myTrash5, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash6 == null)
      {
          placeObjectTrash6 = Instantiate(myTrash6, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash7 == null)
      {
          placeObjectTrash7 = Instantiate(myTrash7, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash8 == null)
      {
          placeObjectTrash8 = Instantiate(myTrash8, indicator.transform.position, indicator.transform.rotation);
      }
      if (placeObjectTrash9 == null)
      {
          placeObjectTrash9 = Instantiate(myTrash9, indicator.transform.position, indicator.transform.rotation);
      }*/


      ////////////////////////////////////////////////////////////////////
      if (placeObjectTrash == null)
      {
          int randomNumber = Random.Range(0, 10);


          if (randomNumber == 0)
          {
              placeObjectTrash = Instantiate(myTrash, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 1)
          {
              placeObjectTrash = Instantiate(myTrash1, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 2)
          {
              placeObjectTrash = Instantiate(myTrash2, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 3)
          {
              placeObjectTrash = Instantiate(myTrash3, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 5)
          {
              placeObjectTrash = Instantiate(myTrash4, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 4)
          {
              placeObjectTrash = Instantiate(myTrash5, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 6)
          {
              placeObjectTrash = Instantiate(myTrash6, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 7)
          {
              placeObjectTrash = Instantiate(myTrash7, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 8)
          {
              placeObjectTrash = Instantiate(myTrash8, indicator.transform.position, indicator.transform.rotation);
          }
          else if (randomNumber == 9)
          {
              placeObjectTrash = Instantiate(myTrash9, indicator.transform.position, indicator.transform.rotation);
          }
      } 


      //////////////////////////////////////////////////////////////////////////////////////////////////
      /// int 맞춰서 객체 뽑기
      /*int cnt = 0;
          if (cnt == 0 && placeObjectTrash == null)
          {
              placeObjectTrash = Instantiate(myTrash, indicator.transform.position, indicator.transform.rotation);
              cnt += 1;
          }

          if (cnt == 1 && placeObjectTrash == null)
          {
              placeObjectTrash = Instantiate(myTrash4, indicator.transform.position, indicator.transform.rotation);
              cnt += 1;
          }

          if (cnt ==2 && placeObjectTrash == null)
          {
              placeObjectTrash = Instantiate(myTrash5, indicator.transform.position, indicator.transform.rotation);
              cnt += 1;
          }
      */



    }
  }


  /*private void PlaceObjectByTouch()
  {
      if(Input.touchCount > 0)
      {
          Touch touch = Input.GetTouch(0);
          List<ARRaycastHit> hits = new List<ARRaycastHit>();
          if (arManager.Raycast(touch.position, hits, TrackableType.AllTypes))
          {
              Pose hitPose = hits[0].pose;
              spownObject = Instantiate(placeObjectTrash, hitPose.position, hitPose.rotation);
          }

      }
  }*/

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
    //if (cnt2 == 0)
    //{
      //Destroy(other.gameObject);
      //other.gameObject.SetActive(false);
      Destroy(placeObjectTrash);
      success = true;
      cnt2 += 1;
      //indicator.SetActive(true);
    //}

    /*if (cnt2 ==1)
    {
      //Destroy(other.gameObject);
      other.gameObject.SetActive(false);
      success2 = true;
      cnt2 += 1;
      //indicator.SetActive(true);
    }


    if (cnt2 == 2)
    {
      //Destroy (other.gameObject);
      other.gameObject.SetActive(false);
      SuccessText.gameObject.SetActive(true);

    }*/
  }
}
