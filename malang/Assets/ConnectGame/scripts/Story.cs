using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Story : MonoBehaviour
{

  GameObject storyBoard;
  TextMeshProUGUI storyLine;
  AudioSource audioSource;
  Button nextButton;
  int chepter;

  public AudioClip story0;
  public AudioClip story1;
  // public AudioClip story2;
  public AudioClip story9;
  public AudioClip buttonclick;
  // Start is called before the first frame update
  void Start()
  {
    Debug.Log("1111111111");
    storyBoard = GameObject.FindGameObjectWithTag("StoryBoard");
    storyLine = GameObject.FindGameObjectWithTag("StoryLine").GetComponent<TextMeshProUGUI>();
    this.audioSource = GetComponent<AudioSource>();
    nextButton = GameObject.FindGameObjectWithTag("StoryButton").GetComponent<Button>();
    nextButton.onClick.AddListener(nextButtonOnClickHandler);
    if (StoryCheck.storyCheckOne == 0)
    {
      chepter = 0;
      PlaySound(chepter);
    }
    else
    {
      chepter = 99;
      storyLine.text = "다른 친구들이랑도\n놀아 보자!";
      PlaySound(9);
    }
    Debug.Log("eeeeeeeeee");
    Debug.Log(nextButton);
    Debug.Log(audioSource);
    Debug.Log(storyBoard);
    Debug.Log(storyLine);
    Debug.Log("effffffffffff");
  }

  // Update is called once per frame
  void Update()
  {

  }

  void nextButtonOnClickHandler()
  {
    if (chepter == 99)
    {
      storyBoard.SetActive(false);
      PlaySound(3);
      return;
    }
    if (StoryCheck.storyCheckOne == 1)
    {
      storyBoard.SetActive(false);
      storyLine.text = "다른 친구들이랑도\n놀아 보자!";
      PlaySound(9);
    }
    else
    {
      chepter += 1;
      if (chepter == 1)
      {
        storyLine.text = "놀이방에 가고싶어?\n미끄럼틀을 눌러 봐!";
        PlaySound(1);
      }
/*      else if (chepter == 2)
      {
        storyLine.text = "가까이 가서 친구들을 눌러보자!";
        PlaySound(2);
      }*/
      else if (chepter == 2)
      {
        //storyLine.text = "다른 친구들이랑도 놀아보자!";
        StoryCheck.storyCheckOne = 1;
        storyBoard.SetActive(false);
        PlaySound(3);
      }
    }


  }


  void PlaySound(int action)
  {
    switch (action)
    {
      case 0:
        audioSource.clip = story0;
        break;
      case 1:
        audioSource.clip = story1;
        break;
      case 2:
        //audioSource.clip = story2;
        break;
      case 3:
        audioSource.clip = buttonclick;
        break;
      case 9:
        audioSource.clip = story9;
        break;
    }
    audioSource.Play();
  }

}
