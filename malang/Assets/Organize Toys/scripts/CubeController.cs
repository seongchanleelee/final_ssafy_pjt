using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CubeController : MonoBehaviour
{
    public int count = 0;
    public Text result;
    void Start()
    {
        result.text = " ";
    }

    void Update()
    {
        scr();
    }

    void OnMouseDown()
    {
        result.text = "mousedown";
        ScreenCapture.CaptureScreenshot("SomeLevel.png");
    }

    //위치를 AR카메라의 상대 좌표로 고정
    void SetCubePosition(Transform anchor) {
        //카메라 위치에서 일정 거리만큼 떨어진 특정 위치 설정
        Vector3 offset = anchor.forward * 0.5f + anchor.up * -0.2f;

        //공 위치를 카메라 위치에서 특정 위치만큼 이동된 거리로 정함
        transform.position = anchor.position + offset;
    }
   public void scr()
    {
        //큐브 카메라 전방 하단에 배치
        SetCubePosition(Camera.main.transform);
        //터치했다면
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            //터치 시작했다면
            if (touch.phase == TouchPhase.Began)
            {
                result.text = Convert.ToString(++count);
                ScreenCapture.CaptureScreenshot("capture" + count + ".png");

            }
        }
    }
}