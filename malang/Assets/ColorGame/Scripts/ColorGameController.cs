using UnityEngine;
using Mediapipe.Unity;
using UnityEngine.SceneManagement;
using TMPro;


public class ColorGameController : MonoBehaviour
{
  private static int _count = 0;
  [SerializeField] private TextMeshProUGUI catchColor;
  
  private AudioSource audioSource;
  private bool _play = false;
  public AudioClip red;
  public AudioClip orange;
  public AudioClip yellow;
  public AudioClip green;
  public AudioClip blue;
  public AudioClip purple;
  public AudioClip black;
  public AudioClip white;


  private void Start()
  {
    Debug.Log("시작한다");
    audioSource = GameObject.Find("ColorAns").GetComponent<AudioSource>();
    _count = 0;
    PickColorController.SetAnswer();
    if (PickColorController.idx == 0)
    {
      catchColor.text = "빨간색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = red;
    }
    else if (PickColorController.idx == 1)
    {
      catchColor.text = "주황색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = orange;
    }
    else if (PickColorController.idx == 2)
    {
      catchColor.text = "노랑색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = yellow;
    }
    else if (PickColorController.idx == 3)
    {
      catchColor.text = "초록색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = green;
    }
    else if (PickColorController.idx == 4)
    {
      catchColor.text = "파랑색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = blue;
    }
    else if (PickColorController.idx == 5)
    {
      catchColor.text = "보라색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = purple;
    }
    else if (PickColorController.idx == 6)
    {
      catchColor.text = "검은색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = black;
    }
    else if (PickColorController.idx == 7)
    {
      catchColor.text = "하얀색";
      catchColor.color = PickColorController.GetAnswer();
      audioSource.clip = white;
    }

  }

  private void Update()
  {
    if (Time.time >= 3.5f && !_play)
    {
      audioSource.Play();
      _play = true;
    }
  }

  public static void CheckGame(int colorIdx)
  {
    //채점하는 부분
    //클릭한 색 저장
    PickColorController.SetColor(colorIdx);
    if (PickColorController.CheckAnswer())//정답
    {
      Debug.Log("정답이다!");
      //씬 교체
      LoadGame();
    }
    else if (++_count <= 1) //실패했지만 재도전 기회 있을 때
    {
      Debug.Log("실패했지만 재도전 기회 있을 때");
    }
    else //완전히 실패
    {
      Debug.Log("완전실패");
      //실패 씬으로 이동
      SceneManager.LoadScene("GameOverScene");
    }
  }

  public static void LoadGame()
  {
    //성공했을 때.
    //start scene 후에 들를 씬 이름 설정
    //클릭한(저장한) 색으로 머리 변경
    //start scene으로 이동
    Debug.Log("성공했으니까 이동하러가자");
    if(MediaPipeController.status()){
      SceneManager.LoadScene("HairColorGame");
    }
    else 
    {
      StartSceneController.ChangeSceneTitle("HairColorGame");
      //MaskAnnotation.ChangeColor(PickColorController.GetColor());
      SceneManager.LoadScene("Start Scene");
    }
    
  }


}
