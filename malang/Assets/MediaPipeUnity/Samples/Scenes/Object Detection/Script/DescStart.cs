using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class DescStart : MonoBehaviour
{
  public void goToGame()
  {
    SceneManager.LoadScene("Object Start Scene");
  }
}
