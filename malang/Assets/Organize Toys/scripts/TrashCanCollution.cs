using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TrashCanCollution : MonoBehaviour
{
  //timer


  public AudioSource mysound;
  public AudioClip myclip;
  private GameObject slime;

  Button SuccessText;
  AudioSource sound;
  int cnt = 0;
  TextMeshProUGUI TrashExplanation;
  TextMeshProUGUI TrashExplanation2;
  // Start is called before the first frame update

  // 성공횟수
  public static int successCnt = 0;
  void Start()
  {
    // timer


    SuccessText = GameObject.FindGameObjectWithTag("success").GetComponent<Button>();
    SuccessText.gameObject.SetActive(false);
    Debug.Log(SuccessText);
    sound = GetComponent<AudioSource>();
    //TrashExplanation = GameObject.FindGameObjectWithTag("TrashExplanation").GetComponent<TextMeshProUGUI>();
    //TrashExplanation2 = GameObject.FindGameObjectWithTag("TrashExplanation2").GetComponent<TextMeshProUGUI>();
  }

  // Update is called once per frame
  void Update()
  {
    slime = GameObject.FindGameObjectWithTag("TrashSlime");

  }

  private void OnTriggerEnter(Collider other)
  {
    if (other.gameObject.tag == "cube")
    {
      Destroy(other.gameObject);
      Destroy(GameObject.Find("myTrash" + "(Clone)"));
      clearSound();
      slime.GetComponent<Animator>().SetTrigger("Jump");
      successCnt++;
      if (successCnt >= 1)
      {
        Invoke("GameSceneCtrl", 3);
      }
      //Invoke("GameSceneCtrl", 3);
      //GameSceneCtrl();
      //TrashExplanation.gameObject.SetActive(false);
      //TrashExplanation2.gameObject.SetActive(false);

    }

  }

  public void clearSound()
  {
    mysound.PlayOneShot(myclip);
  }

  public void GameSceneCtrl()
  {
    
    SceneManager.LoadScene("SuccessScene");
  }




}


