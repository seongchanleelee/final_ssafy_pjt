using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonController : MonoBehaviour
{
  public AudioClip audio;

  public void Start()
  {
    Screen.sleepTimeout = SleepTimeout.NeverSleep; //디바이스 화면 꺼짐 방지
  }
  public void PlaySound(AudioSource audioSource)
  {
    audioSource.clip = audio;
    audioSource.Play();
  }
  public void GoSuccessScene()
  {
    SceneManager.LoadScene("SuccessScene");
  }

  public void GoFailScene()
  {
    SceneManager.LoadScene("FailScene");
  }

  public void GoMainScene()
  {
    SceneManager.LoadScene("AniTestScene");
  }

  public void GoFarmScene()
  {
    SceneManager.LoadScene("Farm");
  }

  public void GoStartScene()
  {
    SceneManager.LoadScene("NewStartScene");
  }

  public void GoGameScene(string name)
  {
    SceneManager.LoadScene(name);
  }

  public void ExitGame()
  {
    Application.Quit();
  }
}
