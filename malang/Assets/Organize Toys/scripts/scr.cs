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

    // �ð����� ����
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
        Invoke("myInvoke", 5f); // 1�� �� ����

        InvokeRepeating("myInvoke", 5f, 0.5f); // 2�� �� �����ϰ�, 3�ʸ��� �ݺ�.          
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
                CancelInvoke(); // ��� Invoke ����.
                //CancelInvoke("myInvoke"); //Ư�� �Լ��� ����

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



