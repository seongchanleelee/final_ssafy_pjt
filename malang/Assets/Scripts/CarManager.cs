using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class CarManager : MonoBehaviour
{
    public GameObject indicator;
    public GameObject myCar;
    ARRaycastManager arManager;
    GameObject placedObject;

    // Start is called before the first frame update
    void Start()
    {
        // 화면이 꺼지지 않도록 설정
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        // 시작하자마자 인디케이터 비활성화
        indicator.SetActive(false);
        // AR Raycast Manager 컴포넌트 가져옴
        arManager = GetComponent<ARRaycastManager>();

    }

    // Update is called once per frame
    void Update()
    {
        DetectGround();
        //자동차 모델링 생성
        //인디케이터가 활성화 되어 있으면서 화면 터치가 있다면
        if(indicator.activeInHierarchy && Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if(touch.phase == TouchPhase.Began)
            {
                if (placedObject == null)
                {
                    placedObject = Instantiate(myCar, indicator.transform.position, indicator.transform.rotation);
                }
                else
                {
                    placedObject.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
                }
            }
        }
    }

    //바닥 감지 및 indicator 출력 함수
    void DetectGround()
    {
        Vector2 ScreenSize = new Vector2 (Screen.width * 0.5f, Screen.height * 0.5f);
        List<ARRaycastHit> hitinfos = new List<ARRaycastHit> ();

        //ray를 이용해 바닥 감지
        if (arManager.Raycast(ScreenSize, hitinfos, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
        {
            // 인디케이터 활성화
            indicator.SetActive(true);
            // 인디케이터의 위치와 회전 값을 레이가 닿은 지점에 일치
            indicator.transform.position = hitinfos[0].pose.position;
            indicator.transform.rotation = hitinfos[0].pose.rotation;
            //인디케이터 위치를 위로 0.1미터 올림
            indicator.transform.position += indicator.transform.up * 0.1f;
        }
        else
        {
            indicator.SetActive(false);
        }
        
    }

}

