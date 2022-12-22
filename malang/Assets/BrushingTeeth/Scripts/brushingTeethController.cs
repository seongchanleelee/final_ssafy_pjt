using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;   // Silder class 사용하기 위해 추가합니다.

public class brushingTeethController : MonoBehaviour
{
  private Slider slTimer;
  private float fSliderBarTime;

  public int step = 0;
  public bool virus1;
  public bool virus2;
  public bool virus3;

  void Start()
  {
    slTimer = GetComponent<Slider>();
    virus1 = true;
    virus2 = true;
    virus3 = true;
  }

  void Update()
  {
    if (slTimer.value > 0.0f)
    {
      slTimer.value -= Time.deltaTime;
      if (slTimer.value < 7.0f)
      {
        virus1 = false;
      }
      if (slTimer.value < 4.0f)
      {
        virus2 = false;
      }
      if (slTimer.value < 1.0f)
      {
        virus3 = false;
      }
    }
    else
    {
      slTimer.value = 10.0f;
      step += 1;
      virus1 = true;
      virus2 = true;
      virus3 = true;
    }
  }
}
