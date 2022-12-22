using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ChangeTitle : MonoBehaviour
{
  public TMP_Text text;
  private string name = "";
  private void Start()
  {
    name = NameController.userName;
    text.text = MakeJosa() + "네 반";
  }

  private string MakeJosa()
  {
    var say = name.Substring(1, name.Length - 1);
    say += NameController.isFinalConsonant() ? "이" : "";
    return say;

  }
}
