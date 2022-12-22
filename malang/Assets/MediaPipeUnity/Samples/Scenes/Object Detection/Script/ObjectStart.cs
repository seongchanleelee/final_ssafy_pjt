using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Mediapipe.Unity;
using TMPro;

public class ObjectStart : MonoBehaviour
{
  public int randomIndex;
  public string findword;
  private TextMeshProUGUI myThing;

  // Start is called before the first frame update
  void Start()
  {
    myThing = GameObject.Find("ThingText").GetComponent<TextMeshProUGUI>();
    int osize = ObjectTotal.objectLabel.Length;
    randomIndex = Random.Range(0, osize);
    ObjectTotal._index = randomIndex;
    findword = ObjectTotal.objectLabel_kor[randomIndex];
    SetThingText();
  }

  void SetThingText()
  {
    myThing.text = findword;
  }

  public void goToScene()
  {
    if(MediaPipeController.status()){
      SceneManager.LoadScene("Object Detection");
    }
    else 
    {
      StartSceneController.ChangeSceneTitle("Object Detection");
      SceneManager.LoadScene("Start Scene");
    }
  }
}
