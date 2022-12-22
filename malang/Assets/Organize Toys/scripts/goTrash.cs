using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class goTrash : MonoBehaviour
{
  public void gogoTrash()
  {
    SceneManager.LoadScene("TrashDrop");
    // by hsj ^o^
    //SceneManager.LoadScene("NewTrash");
  }
}
