using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CheckHome : MonoBehaviour
{
  Button homeButton; //홈버튼
  GameObject homeCheck;
  Button homeButtonGo;
  Button homeButtonClose;
  public AudioClip buttonClick;
  AudioSource audioSource;
  TextMeshProUGUI textG;

  // Start is called before the first frame update
  void Start()
  {
    homeCheck = GameObject.FindGameObjectWithTag("CheckHome");
    homeButton = GameObject.FindGameObjectWithTag("GoHome").GetComponent<Button>();
    homeButtonGo = GameObject.FindGameObjectWithTag("CheckHomeGo").GetComponent<Button>();
    homeButtonClose = GameObject.FindGameObjectWithTag("CheckHomeClose").GetComponent<Button>();
    
    textG = GameObject.FindGameObjectWithTag("GameOverText").GetComponent<TextMeshProUGUI>();

    homeButton.onClick.AddListener(OpenHome);
    homeButtonGo.onClick.AddListener(GoHome);
    homeButtonClose.onClick.AddListener(CloseHome);

    this.audioSource = GetComponent<AudioSource>();

    homeCheck.SetActive(false);
  }

  // Update is called once per frame
  // void Update()
  // {
  //   textG.text = "게임을 종료할까요?";

  // }

  private void CloseHome()
  {
    PlaySound(1);
    Invoke("ttt", 0.3f);
    //homeCheck.SetActive(false);
  }

  private void OpenHome()
  {
    homeCheck.SetActive(true);
    PlaySound(1);
  }

  private void GoHome()
  {
    //홈버튼
    //SceneManager.LoadScene("AniTestScene");
    SceneManager.LoadScene("FailScene");
    PlaySound(1);

  }
  private void ttt()
  {
    homeCheck.SetActive(false);
  }

  void PlaySound(int action)
  {
    switch (action)
    {
      case 1:
        audioSource.clip = buttonClick;
        break;
    }
    audioSource.Play();
  }


}
