using System;
using UnityEngine;
using UnityEngine.UI;
using System.Timers;
using System.Collections;
using System.Collections.Generic;
using TMPro;

public class scr : MonoBehaviour
{
    
    public int count = 0;
    // public Text result;
    public bool isClicked = false;

    // 시간마다 사진
    //public TextMeshProUGUI timer;
    float time;
    void myInvoke()
    {
        string ct = string.Format("{0:N3}", time);
        Debug.Log("Current Time : " + ct + " / Invoke ? " + IsInvoking());
        ScreenCapture.CaptureScreenshot("capture" + (++count) + ".jpg");

    }





    private void Start()
    {
        Invoke("myInvoke", 5f); // 1초 뒤 시작

        InvokeRepeating("myInvoke", 5f, 0.5f); // 2초 뒤 시작하고, 3초마다 반복.          
    }


    // Update is called once per frame
    void Update()
    {
        time += Time.deltaTime;

        //timer.text = string.Format("{0:N3} s", time);

        if (time > 35f)
        {
            if (IsInvoking("myInvoke"))
            {
                CancelInvoke(); // 모든 Invoke 종료.
                //CancelInvoke("myInvoke"); //특정 함수만 종료

                Debug.Log(
                    "myInvoke end : " + string.Format("{0:N3}", time) + " / Invoke ? " + IsInvoking()
                
                    );
            }
        }
    }
    //public void captureEvent()
    //{
    //    if (isClicked == false)
    //    {
    //        Destroy(GameObject.FindGameObjectWithTag("btndestroy"));

    //        isClicked = true;

    //    }

    //    if (isClicked)
    //    {
    //        do
    //        {
    //            ScreenCapture.CaptureScreenshot("capture" + (++count) + ".png");
    //            Debug.Log("11");
    //            result.text = Convert.ToString(count);
    //        } while (dtEndTime > DateTime.Now);
    //    }
        // do
        // {
        //    ScreenCapture.CaptureScreenshot("capture" + (++count) + ".png");
        //    Debug.Log("11");
        //    result.text = Convert.ToString(count);
        // } while (dtEndTime > DateTime.Now);
    //}

}



