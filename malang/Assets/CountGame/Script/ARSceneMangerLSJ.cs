using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ARSceneMangerLSJ : MonoBehaviour
{
    public void goToScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}
