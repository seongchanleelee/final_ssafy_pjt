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

    //��ġ�� ARī�޶��� ��� ��ǥ�� ����
    void SetCubePosition(Transform anchor) {
        //ī�޶� ��ġ���� ���� �Ÿ���ŭ ������ Ư�� ��ġ ����
        Vector3 offset = anchor.forward * 0.5f + anchor.up * -0.2f;

        //�� ��ġ�� ī�޶� ��ġ���� Ư�� ��ġ��ŭ �̵��� �Ÿ��� ����
        transform.position = anchor.position + offset;
    }
   public void scr()
    {
        //ť�� ī�޶� ���� �ϴܿ� ��ġ
        SetCubePosition(Camera.main.transform);
        //��ġ�ߴٸ�
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            //��ġ �����ߴٸ�
            if (touch.phase == TouchPhase.Began)
            {
                result.text = Convert.ToString(++count);
                ScreenCapture.CaptureScreenshot("capture" + count + ".png");

            }
        }
    }
}