using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    void onClick()
    {
        ScreenCapture.CaptureScreenshot("SomeLevel.png");
        Debug.Log("screenshot");
    }
}
