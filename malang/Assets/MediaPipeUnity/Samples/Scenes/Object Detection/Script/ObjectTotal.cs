using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class ObjectTotal : MonoBehaviour
{
  public static string[] objectLabel = { "chair", "person", "cup", "refrigerator", "book" };
  public static string[] objectLabel_kor = { "의자", "사람", "컵", "냉장고", "책" };
  public static int _index;

  public Text resultText;
  TextMeshProUGUI timerText;
  float timer = 0;
  int waitingTime;
  public float gameTime;
  public bool stopTimer;
  private bool stopbool = false;

  private void Start()
  {
    //resultText = GameObject.Find("ResultText").GetComponent<Text>();
    timerText = GameObject.FindGameObjectWithTag("SttTimerText").GetComponent<TextMeshProUGUI>();
    stopTimer = false;
    waitingTime = 7;
    gameTime = 7.0f;
  }

  private void Update()
  {
    stopbool = true;
    if (stopbool)
    {
      timer += Time.deltaTime;
      gameTime -= Time.deltaTime; //타이머 타임
      string textTime = gameTime.ToString("f0");
      if (stopTimer == false)
      {
        timerText.text = textTime;
      }

    }

    if (timer > waitingTime)
    {
      timer = 0;
      gameTime = 7.0f; //타이머 시간
      stopTimer = false;
      SceneManager.LoadScene("Object Result Scene");
    }
  }
  public void MissonSuccess()
  {
    resultText.text = "성공";
    SceneManager.LoadScene("Object Start Scene");
  }
}
