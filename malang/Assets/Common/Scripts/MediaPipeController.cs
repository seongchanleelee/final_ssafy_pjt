using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MediaPipeController : MonoBehaviour
{
  private static bool startscene = false;

  public static bool status()
  {
    return startscene;
  }

  public static void visit()
  {
    startscene = true;
  }

}
