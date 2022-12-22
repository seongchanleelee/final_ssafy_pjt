using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Threading;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class OctopusManager : MonoBehaviour
{
    public GameObject shoot;
    public GameObject indicator;
    public GameObject indicator1;
    public GameObject indicator2;

    public GameObject myOctopus1;
    public GameObject myOctopus2;
    public GameObject myOctopus3;
    public GameObject myOctopus4;
    public GameObject myOctopus5;
    public GameObject myOctopus6;
    public GameObject myOctopus7;
    
    private GameObject randomOctopus;

    
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

    private bool isMonster1 = false;
    private bool isMonster2 = true;
    private bool isMonster3 = true;
    private bool isMonster4 = true;
    private bool isMonster5 = true;
    private bool isMonster6 = true;
    private bool isMonster7 = true;
    


    // Start is called before the first frame update
    void Start()
    {
        // at begin indicator inactive
        indicator.SetActive(false);
        indicator1.SetActive(false);
        indicator2.SetActive(false);


    // bring ar raycast manager component
        shoot.SetActive(true);
        arManager = GetComponent<ARRaycastManager>();

    }

    void CountOctopus()
    {

    }


    // 반복되는 작업이므로 업데이트 함수 안에서 코드를 입력한다.
    void Update()
    {
        // 시간이 흐르게 만들어준다.
        timer += Time.deltaTime;

        // # 1 random object 
        randomWidth = Random.Range(0.1f, 0.9f);
        randomHeight = Random.Range(0.1f, 0.9f);
        Vector2 ScreenSize = new Vector2(Screen.width * randomWidth, Screen.height * randomHeight);
        List<ARRaycastHit> hitinfos = new List<ARRaycastHit>();

        // using ray detect ground
        if (arManager.Raycast(ScreenSize, hitinfos, UnityEngine.XR.ARSubsystems.TrackableType.AllTypes))
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
        if (arManager.Raycast(ScreenSize1, hitinfos1, UnityEngine.XR.ARSubsystems.TrackableType.AllTypes))
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
        if (arManager.Raycast(ScreenSize2, hitinfos2, UnityEngine.XR.ARSubsystems.TrackableType.AllTypes))
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
            int randomNumber = Random.Range(1, 10);
            if (randomNumber == 1)
            {
                randomOctopus = myOctopus1;
            }
            else if (randomNumber == 2)
            {
                randomOctopus = myOctopus2;
            }
            else if (randomNumber == 3)
            {
                randomOctopus = myOctopus3;
            }
            else if (randomNumber == 4)
            {
                randomOctopus = myOctopus4;
            }
            else if (randomNumber == 5)
            {
                randomOctopus = myOctopus5;
            }
            else if (randomNumber == 6)
            {
                randomOctopus = myOctopus6;
            }
            else if (randomNumber == 7)
            {
                randomOctopus = myOctopus7;
            }
            else if (randomNumber == 8)
            {
                randomOctopus = myOctopus7;
            }
            

            if (indicator.activeInHierarchy && isMonster1 == false)
            {

                if (placedObject1 == null)
                {
                    placedObject1 = Instantiate(randomOctopus, indicator.transform.position, indicator.transform.rotation);
                    indicator.SetActive(false);
                    isMonster1 = true;
                    isMonster2 = false;
                }
                else
                {
                    placedObject1.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
                    indicator.SetActive(false);
                    isMonster1 = true;
                    isMonster2 = false;
                }

            }

            else if (indicator1.activeInHierarchy && isMonster2 == false)
            {

                if (placedObject2 == null)
                {
                    placedObject2 = Instantiate(randomOctopus, indicator1.transform.position, indicator1.transform.rotation);
                    indicator1.SetActive(false);
                    isMonster2 = true;
                    isMonster3 = false;
                }
                else
                {
                    placedObject2.transform.SetPositionAndRotation(indicator1.transform.position, indicator1.transform.rotation);
                    indicator1.SetActive(false);
                    isMonster2 = true;
                    isMonster3 = false;
                }

            }

            else if (indicator2.activeInHierarchy && isMonster3 == false)
            {

                if (placedObject3 == null)
                {
                    placedObject3 = Instantiate(randomOctopus, indicator2.transform.position, indicator2.transform.rotation);
                    indicator2.SetActive(false);
                    isMonster3 = true;
                    isMonster4 = false;
                }
                else
                {
                    placedObject3.transform.SetPositionAndRotation(indicator2.transform.position, indicator2.transform.rotation);
                    indicator2.SetActive(false);
                    isMonster3 = true;
                    isMonster4 = false;
                }

            }

            else if (indicator.activeInHierarchy && isMonster4 == false)
            {

              if (placedObject4 == null)
              {
                placedObject4 = Instantiate(randomOctopus, indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster4 = true;
                isMonster5 = false;
              }
              else
              {
                placedObject4.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster4 = true;
                isMonster5 = false;
              }

            }

             else if (indicator.activeInHierarchy && isMonster5 == false)
            {

              if (placedObject5 == null)
              {
                placedObject5 = Instantiate(randomOctopus, indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster5 = true;
                isMonster6 = false;
              }
              else
              {
                placedObject5.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster5 = true;
                isMonster6 = false;
              }

            }

             else if (indicator.activeInHierarchy && isMonster6 == false)
            {

              if (placedObject6 == null)
              {
                placedObject6 = Instantiate(randomOctopus, indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster6 = true;
                isMonster7 = false;
              }
              else
              {
                placedObject6.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster6 = true;
                isMonster7 = false;
              }

            }

             else if (indicator.activeInHierarchy && isMonster7 == false)
            {

              if (placedObject7 == null)
              {
                placedObject7 = Instantiate(randomOctopus, indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster7 = true;
                isMonster1 = false;
              }
              else
              {
                placedObject7.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
                indicator.SetActive(false);
                isMonster7= true;
                isMonster1 = false;
              }

            }



      // 시간을 0으로 되돌려주면, 10초마다 반복된다.
      timer = 0.0f;
            nextTime = Random.Range(minSpawnTime, maxSpawnTime);
        }
    }

}
