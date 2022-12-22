using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GetGame : MonoBehaviour
{

  public TextMeshProUGUI gameTitle;
  public TextMeshProUGUI gameDesc;
  private string mission;

  public string[] val;
  // Start is called before the first frame update
  public void Start()
  {
    val = GameController.SetMission();
    gameTitle = GameObject.Find("GameTitle").GetComponent<TextMeshProUGUI>();
    gameDesc = GameObject.Find("GameDesc").GetComponent<TextMeshProUGUI>();
    gameTitle.text = val[0];
    gameDesc.text = val[1];
    mission = GameController.mission;
  }

  // Update is called once per frame
  public void StartMission()
  {
    if(val[0].Equals("이름을 써보자!"))
    {
    //  OcrGameConfig.SetName();
    }
    SceneManager.LoadScene(mission, LoadSceneMode.Single);
  }
}
