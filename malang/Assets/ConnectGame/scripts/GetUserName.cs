using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GetUserName : MonoBehaviour
{
  [SerializeField] public TextMeshProUGUI userName;
  [SerializeField] public TextMeshProUGUI userName1;
  [SerializeField] public TextMeshProUGUI userName2;
  [SerializeField] public TextMeshProUGUI userName3;
  [SerializeField] public TextMeshProUGUI userName4;


  AudioSource audioSource;
  int check = 0;
  // Start is called before the first frame update
  private void Start()
  {
    userName.text = NameController.userName;
    userName1.text = NameController.userName;
    userName2.text = NameController.userName;
    userName3.text = NameController.userName;
    userName4.text = NameController.userName;
    
    //StopCoroutine(TestWWW());
    //TestWWW2();
  }

  private void Update()
  {
    this.audioSource = GetComponent<AudioSource>();
    if (check == 0)
    {
      StartCoroutine(TestWWW());
      check = 1;
      //TestWWW2();
    }
  }

  IEnumerator TestWWW()
  {
    string path = "file://" + Application.persistentDataPath + "/tts.mp3";
    string path2 = "file:///storage/emulated/0/Android/data/com.c107.malang/files/tts.mp3";
    string path3 = "file:///storage/emulated/0/Download/tts.mp3";
    WWW www = new WWW(path);
    yield return www;
    audioSource.clip = www.GetAudioClip();
    audioSource.Play();
  }

  void TestWWW2()
  {
    string path = "file:///" + Application.persistentDataPath + "/tts.mp3";
    string path2 = "file:///storage/emulated/0/Android/data/com.c107.malang/files/tts.mp3";
    string path3 = "file:///storage/emulated/0/Download/tts.mp3";
    WWW www = new WWW(path3);
    while (!www.isDone) { }
    Debug.Log(Application.persistentDataPath);
    Debug.Log(path);
    Debug.Log(path2);
    Debug.Log(path3);
    Debug.Log("ffdsafsdfasdfasd12222");
    Debug.Log(www.text);
    Debug.Log(www.GetAudioClip());
    audioSource.clip = www.GetAudioClip();
    audioSource.Play();
  }



  // Update is called once per frame
  public void goBack()
  {
    SceneManager.LoadScene("StartScene", LoadSceneMode.Single);
  }
}
