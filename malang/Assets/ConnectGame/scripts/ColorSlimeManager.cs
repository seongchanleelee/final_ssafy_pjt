using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Threading;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
public class ColorSlimeManager : MonoBehaviour
{
  public GameObject shoot;
  public GameObject indicator;
  public GameObject indicator1;
  public GameObject indicator2;
  public GameObject myColorSlime;
  public GameObject myColorSlime1;
  public GameObject myColorSlime2;
  public GameObject myColorSlime3;
  public GameObject myColorSlime4;
  public GameObject myColorSlime5;
  public GameObject myColorSlime6;
  public GameObject myColorSlime7;
  private GameObject randomOctopus;

  GameObject placedObject;
  GameObject placedObject1;
  GameObject placedObject2;
  GameObject placedObject3;
  GameObject placedObject4;
  GameObject placedObject5;
  GameObject placedObject6;
  GameObject placedObject7;


  public float minSpawnTime = 2.0f;
  public float maxSpawnTime = 3.0f;

  private float randomWidth;
  private float randomHeight;
  private float randomWidth1;
  private float randomHeight1;
  private float randomWidth2;
  private float randomHeight2;

  public float timer = 0.0f;
  private float nextTime;

  ARRaycastManager arManager;

  private bool isMonster1 = true;
  private bool isMonster2 = true;
  private bool isMonster3 = true;
  private bool isMonster4 = true;
  private bool isMonster5 = true;
  private bool isMonster6 = true;
  private bool isMonster7 = true;
  private bool isMonster8 = true;

  public int randomNumber = 0;





  // Start is called before the first frame update
  void Start()
  {
    // at begin indicator inactive
    indicator.SetActive(false);
    indicator1.SetActive(false);
    indicator2.SetActive(false);


    // bring ar raycast manager component
    arManager = GetComponent<ARRaycastManager>();

    randomNumber = Random.Range(1, 9);

  }

  void CountOctopus()
  {

  }


  // 반복되는 작업이므로 업데이트 함수 안에서 코드를 입력한다.
  void Update()
  {

    // 화면안에 있는 색깔말랑이의 갯수를 구한다.
    int slimeCnt = 0;
    /*if (placedObject != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }
    if (placedObject1 != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject1.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }
    if (placedObject2 != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject2.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }
    if (placedObject3 != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject3.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }
    if (placedObject4 != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject4.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }
    if (placedObject5 != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject5.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }
    if (placedObject6 != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject6.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }
    if (placedObject7 != null)
    {
      Vector3 viewPos = Camera.main.WorldToViewportPoint(placedObject7.transform.position);
      if (viewPos.x >= 0 && viewPos.x <= 1 && viewPos.y >= 0 && viewPos.y <= 1 && viewPos.z > 0)
      {
        slimeCnt += 1;
        Debug.Log("in View");
      }
    }*/




    // 시간이 흐르게 만들어준다.
    timer += Time.deltaTime;

    // # 1 random object 
    randomWidth = Random.Range(0.2f, 0.8f);
    randomHeight = Random.Range(0.2f, 0.8f);
    Vector2 ScreenSize = new Vector2(Screen.width * randomWidth, Screen.height * randomHeight);
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

    // # 1 random object 
    randomWidth1 = Random.Range(0.1f, 0.9f);
    randomHeight1 = Random.Range(0.1f, 0.9f);
    Vector2 ScreenSize1 = new Vector2(Screen.width * randomWidth1, Screen.height * randomHeight1);
    List<ARRaycastHit> hitinfos1 = new List<ARRaycastHit>();

    // using ray detect ground
    if (arManager.Raycast(ScreenSize1, hitinfos1, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
    {
      // activate indicator
      indicator1.SetActive(true);
      // indicator position = ray hit ground
      indicator1.transform.position = hitinfos1[0].pose.position;
      indicator1.transform.rotation = hitinfos1[0].pose.rotation;
      indicator1.transform.position += indicator1.transform.up * 0.1f;
    }
    else
    {
      indicator1.SetActive(false);
    }

    // #2 random object 
    randomWidth2 = Random.Range(0.1f, 0.9f);
    randomHeight2 = Random.Range(0.1f, 0.9f);
    Vector2 ScreenSize2 = new Vector2(Screen.width * randomWidth2, Screen.height * randomHeight2);
    List<ARRaycastHit> hitinfos2 = new List<ARRaycastHit>();

    // using ray detect ground
    if (arManager.Raycast(ScreenSize2, hitinfos2, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
    {
      // activate indicator
      indicator2.SetActive(true);
      // indicator position = ray hit ground
      indicator2.transform.position = hitinfos2[0].pose.position;
      indicator2.transform.rotation = hitinfos2[0].pose.rotation;
      indicator2.transform.position += indicator2.transform.up * 0.1f;
    }
    else
    {
      indicator2.SetActive(false);
    }

    // 오브젝트를 몇초마다 생성할 것인지 조건문으로 만든다. 
    if (timer > nextTime)
    {
      float dist = Vector3.Distance(Camera.main.transform.position, indicator.transform.position);

      if (indicator.activeInHierarchy && randomNumber == 1 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3 )
      {

        if (placedObject == null)
        {
          placedObject = Instantiate(myColorSlime, indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 2;
        }
        else
        {
          placedObject.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 2;
        }

      }

      else if (indicator.activeInHierarchy && randomNumber == 2 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3)
      {

        if (placedObject1 == null)
        {
          placedObject1 = Instantiate(myColorSlime1, indicator.transform.position, indicator1.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 3;
        }
        else
        {
          placedObject1.transform.SetPositionAndRotation(indicator.transform.position, indicator1.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 3;
        }

      }

      else if (indicator.activeInHierarchy && randomNumber == 3 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3)
      {

        if (placedObject2 == null)
        {
          placedObject2 = Instantiate(myColorSlime2, indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 4;
        }
        else
        {
          placedObject2.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 4;
        }

      }
      // green
      else if (indicator.activeInHierarchy && randomNumber == 4 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3)
      {

        if (placedObject3 == null)
        {
          placedObject3 = Instantiate(myColorSlime3, indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 5;
        }
        else
        {
          placedObject3.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 5;
        }

      }
      // blue
      else if (indicator.activeInHierarchy && randomNumber == 5 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3)
      {

        if (placedObject4 == null)
        {
          placedObject4 = Instantiate(myColorSlime4, indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 6;
        }
        else
        {
          placedObject4.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 6;
        }

      }
      // purple
      else if (indicator.activeInHierarchy && randomNumber == 6 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3)
      {

        if (placedObject5 == null)
        {
          placedObject5 = Instantiate(myColorSlime5, indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 7;
        }
        else
        {
          placedObject5.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 7;
        }

      }
      // black
      else if (indicator.activeInHierarchy && randomNumber == 7 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3)
      {

        if (placedObject6 == null)
        {
          placedObject6 = Instantiate(myColorSlime6, indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 8;
        }
        else
        {
          placedObject6.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 8;
        }

      }
      // white
      else if (indicator.activeInHierarchy && randomNumber == 8 && dist >= 1.2f && dist <= 3.0f && slimeCnt <= 3)
      {

        if (placedObject7 == null)
        {
          placedObject7 = Instantiate(myColorSlime7, indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 1;
        }
        else
        {
          placedObject7.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
          indicator.SetActive(false);
          randomNumber = 1;
        }

      }



      // 시간을 0으로 되돌려주면, 10초마다 반복된다.
      timer = 0.0f;
      nextTime = Random.Range(minSpawnTime, maxSpawnTime);
    }
  }

}
