using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Optimizer : MonoBehaviour
{

  void Awake()
  {
    CanvasScaler canvas = GetComponent<CanvasScaler>();

    canvas.referenceResolution = new Vector2(Screen.width, Screen.height);
  }

}
