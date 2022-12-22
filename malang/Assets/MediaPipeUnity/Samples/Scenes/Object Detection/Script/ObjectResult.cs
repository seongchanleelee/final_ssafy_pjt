using Mediapipe;
using Mediapipe.Unity;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ObjectResult : MonoBehaviour
{
  [SerializeField] DetectionListAnnotationController _detectionListAnnotationController;
  private Hashtable hashtable;
  private string findword = ObjectTotal.objectLabel[ObjectTotal._index];
  public bool resultTF = false;
  [SerializeField] private TMP_Text ThingText;
  [SerializeField] private TMP_Text ExplainText;
  public GameObject successBtn;
  public GameObject failBtn;
  //public GameObject Win;
  public AudioClip[] music;
  AudioSource sound;
  bool _play = false;
  void Start()
  {
    successBtn = GameObject.FindGameObjectWithTag("detectSuccess");
    failBtn = GameObject.FindGameObjectWithTag("detectFail");
    //Win = GameObject.FindGameObjectWithTag("help");
    sound = GetComponent<AudioSource>();
    Helpme();
  }

  public void Helpme()
  {
    //Win.SetActive(false);
    successBtn.SetActive(false);
    failBtn.SetActive(false);
    hashtable = DetectionListAnnotationController.hash;
    foreach (int hkey in hashtable.Keys)
    {
/*      Debug.Log("foreach length: " + hashtable.Count);
      Debug.Log("hkey: " + hkey);*/
      if(hashtable[hkey] == null)
      {
        continue;
      }
      IList<Detection> ListDetect = hashtable[hkey] as IList<Detection>;
      for (int i = 0; i < ListDetect.Count; i++)
      {
        string s1 = ListDetect[i].Label.ToString();
        string[] sarray = s1.Split('"');
        s1 = sarray[1];
/*        Debug.Log("짜증나짜증나");
        Debug.Log("new s1: " + s1);
        Debug.Log("findword: " + findword);*/

/*        Debug.Log("----ObjectResult: " + s1);*/
        if (s1.Equals(findword))
        {
          //Debug.Log("성공 ~");
          resultTF = true;
          goto help;
        }
      }
    }
    help:

    if (resultTF)
    {
      Debug.Log("성공~!");
      ThingText.text = "성공!";
      //Win.SetActive(true);
      successBtn.SetActive(true);
      sound.clip = music[0];
      sound.Play();

      switch (findword)
      {
        case "chair":
          ExplainText.text = "의자를 사용한 후엔\n제자리에 넣어야해!";
          sound.clip = music[2];
          break;
        case "person":
          ExplainText.text = "사람을 만나면\n인사를 해야해!";
          sound.clip = music[3];
          break;
        case "cup":
          ExplainText.text = "컵을 사용한 후엔\n싱크대에 올려줘!";
          sound.clip = music[4];
          break;
        case "refrigerator":
          ExplainText.text = "냉장고를 사용한 후엔\n문을 닫아야 해!";
          sound.clip = music[5];
          break;
        case "book":
          ExplainText.text = "책을 읽고나면\n제자리에 꽂아놓자!";
          sound.clip = music[6];
          break;
      }
      //sound.Play();
    }
    else
    {
      Debug.Log("실패~!");
      sound.clip = music[1];
      sound.Play();
      _play = true;
      //실패씬으로 넘어가기
      failBtn.SetActive(true);
    }
  }
  private void Update()
  {
    if (!_play && Time.time >= 3.5f) {
      sound.Play();
      _play = true;
    }
  }
  public void goToScene()
  {
    if (resultTF)
      SceneManager.LoadScene("SuccessScene");
    else
      SceneManager.LoadScene("FailScene");
  }
}
