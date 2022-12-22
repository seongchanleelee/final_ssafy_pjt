using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Threading;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class RandomSpawn : MonoBehaviour
{
  public GameObject shoot;
  public GameObject indicator;

  public GameObject mySlime1;

  GameObject placedObject;


  ARRaycastManager arManager;





  // Start is called before the first frame update
  void Start()
  {
    // at begin indicator inactive
    indicator.SetActive(false);


    // bring ar raycast manager component
    shoot.SetActive(true);
    arManager = GetComponent<ARRaycastManager>();

  }





  // 반복되는 작업이므로 업데이트 함수 안에서 코드를 입력한다.
  void Update()
  {

    Detect();

    if (indicator.activeInHierarchy && Input.touchCount > 0)
    {

      Touch touch = Input.GetTouch(0);
      if (touch.phase == TouchPhase.Began)
      {
        if (placedObject == null)
        {
          placedObject = Instantiate(mySlime1, indicator.transform.position, indicator.transform.rotation);
          // indicator.SetActive(false);
        }
        else
        {
          placedObject.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          // indicator.SetActive(false);
        }
      }
    }
  }



  void Detect()
  {
    Vector2 ScreenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);
    List<ARRaycastHit> hitinfos = new List<ARRaycastHit>();

    // using ray detect ground
    if (arManager.Raycast(ScreenSize, hitinfos, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
    {
      // activate indicator
      indicator.SetActive(true);
      // indicator position = ray hit ground
      indicator.transform.position = hitinfos[0].pose.position;
      indicator.transform.rotation = hitinfos[0].pose.rotation;
      indicator.transform.position += indicator.transform.up * 0.1f;
    }
    else
    {
      indicator.SetActive(false);
    }
  }

}
