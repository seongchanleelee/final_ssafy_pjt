using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Mediapipe.Unity;

public class DetectFind : MonoBehaviour
{
  private Slider sTimer;
  private float BarTime;

  // Start is called before the first frame update
  void Start()
  {
    sTimer = GetComponent<Slider>();
  }

  // Update is called once per frame
  void Update()
  {
    if(sTimer.value > 0.0f)
    {
      sTimer.value -= Time.deltaTime;
    }
    else
    {
      if (MediaPipeController.status())
      {
        SceneManager.LoadScene("Object Detection");
      }
      else
      {
        StartSceneController.ChangeSceneTitle("Object Detection");
        SceneManager.LoadScene("Start Scene");
      }
    }
  }
}
