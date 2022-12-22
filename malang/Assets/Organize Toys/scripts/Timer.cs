//using System.Collections;
//using System.Collections.Generic;
//using TMPro;
//using UnityEngine;
//using UnityEngine.UI;

//public class Timer : MonoBehaviour
//{
//    // Start is called before the first frame update
//    public Slider timerSlider;
//    public Text TimerText;
//    public float gameTime;

//    private bool stopTimer;
//    void Start()
//    {
//        stopTimer = false;
//        timerSlider.maxValue = gameTime;
//        timerSlider.value = gameTime;
//        Invoke("Slider", 6f);

//    }
//    void Slider()
//    {
//        float time = gameTime - Time.time;
//        int minutes = Mathf.FloorToInt(time / 60);
//        int seconds = Mathf.FloorToInt(time - minutes * 60f);

//        string textTime = string.Format("{0:0}:{1:00}", minutes, seconds);

//        if (time <= 0)
//        {
//            stopTimer = true;
//        }
//        if (stopTimer == false)
//        {
//            TimerText.text = textTime;
//            timerSlider.value = time;
//            Debug.Log(textTime);
//        }
//    }
//    // Update is called once per frame
//    void Update()
//    {
//        //float time = gameTime - Time.time;
//        //int minutes = Mathf.FloorToInt(time / 60);
//        //int seconds = Mathf.FloorToInt(time - minutes * 60f);

//        //string textTime = string.Format("{0:0}:{1:00}", minutes, seconds);

//        //if (time <=0)
//        //{
//        //    stopTimer = true;
//        //}
//        //if (stopTimer == false)
//        //{
//        //    TimerText.text = textTime;
//        //    timerSlider.value = time;
//        //}
//        // Slider();
//        if (timerSlider.value == 0)
//        {
//            CancelInvoke("Slider");
//        }


//    }
//}



using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
  // Start is called before the first frame update
  public Slider timerSlider;
  public Text TimerText;
  public float gameTime;

  private bool stopTimer;
  
  // 대기시작
  private float time = 0f;

  bool start = false;
  void Start()
  {
    stopTimer = false;
    timerSlider.maxValue = gameTime;
    timerSlider.value = gameTime;
    start = true;
    // Invoke("Slider", 6f);

  }
  void Slider()
  {
    float time = gameTime -= Time.deltaTime;
    int minutes = Mathf.FloorToInt(time / 60);
    int seconds = Mathf.FloorToInt(time - minutes * 60f);

    string textTime = string.Format("{0:0}:{1:00}", minutes, seconds);

    if (time <= 0)
    {
      stopTimer = true;
      SceneManager.LoadScene("FailScene");
      start = false;
    }
    if (stopTimer == false)
    {
      TimerText.text = textTime;
      timerSlider.value = time;
    }
  }
  // Update is called once per frame
  void Update()
  {
    if (start == true)
    {
      this.time += Time.deltaTime;
      Slider();

    }

    // Slider();



  }
}
