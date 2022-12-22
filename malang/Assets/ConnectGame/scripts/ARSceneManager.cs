using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ARSceneManager : MonoBehaviour
{
  public Text userName1;
  public Text userName2;
  public Text userName3;
  public GameObject EditName;
  public GameObject CancelBtn;
  public GameObject WritehBtn;

  public void GotoMain()
  {
    SceneManager.LoadScene("MainScene", LoadSceneMode.Single);
  }

  public void GotoScene(string sceneName)
  {

    SceneManager.LoadScene(sceneName);
  }

  public void EnterGame()
  {
    if (NameController.userName == "")
    {
      EditName.SetActive(true);
      CancelBtn.SetActive(true);
      WritehBtn.SetActive(false);
      return;
    }
    else
    {
      SceneManager.LoadScene("StartDescriptionScene");
    }
  }

  public void goBackFind()
  {
    SceneManager.LoadScene("AniTestScene", LoadSceneMode.Single);
  }

}
