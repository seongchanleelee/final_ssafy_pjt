using UnityEngine;
using Mediapipe.Unity;

public class HairColorController : MonoBehaviour
{
  private bool _play = false;
  private AudioSource audioSource;
  public AudioClip sound;
  void Start()
  {
    //시작과 동시에 카메라 교체
    ChangeCamera();
    UnityEngine.Screen.sleepTimeout = SleepTimeout.NeverSleep; //디바이스 화면 꺼짐 방지
    audioSource = GameObject.Find("Main Camera").GetComponent<AudioSource>();

  }

  private void Update()
  {
    if (Time.time >= 2.5f && !_play)
    {
      audioSource.clip = sound;
      audioSource.Play();
      _play = true;
    }
  }

  public void ChangeCamera()
  {
    //셀프카메라로 교체
    var imageSource = ImageSourceProvider.ImageSource;
    imageSource.SelectSource(1);//셀프카메라
    //gameObject.AddComponent<ImageSourceConfig>().InitializeResolution();
    Debug.Log("교체끝");
  }

}
