using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartGame : MonoBehaviour
{

  Button homeButtonGo;
  Button startGame;
  AudioSource audioSource;
  public AudioClip buttonClick;
  public AudioClip soundTitle;
  public AudioClip soundText;
  // Start is called before the first frame update
  void Start()
  {
    homeButtonGo = GameObject.FindGameObjectWithTag("GoHome").GetComponent<Button>();
    startGame = GameObject.FindGameObjectWithTag("StartGame").GetComponent<Button>();


    homeButtonGo.onClick.AddListener(loadHome);
    startGame.onClick.AddListener(loadsttGame);

    this.audioSource = GetComponent<AudioSource>();
    PlaySound(2);
    Invoke("ttts", 2);

  }

  // Update is called once per frame
  void Update()
  {

  }


  private void loadsttGame()
  {
    PlaySound(1);
    SceneManager.LoadScene("SttGame_1");
  }

  private void loadHome()
  {
    PlaySound(1);
    SceneManager.LoadScene("AniTestScene");
  }

  private void ttts()
  {
    PlaySound(3);
  }


  void PlaySound(int action)
  {
    switch (action)
    {
      case 1:
        audioSource.clip = buttonClick;
        break;

      case 2:
        audioSource.clip = soundTitle;
        break;

      case 3:
        audioSource.clip = soundText;
        break;
    }
    audioSource.Play();
  }

}
