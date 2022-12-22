using UnityEngine;
using UnityEngine.SceneManagement;


public class OcrGameConfig : MonoBehaviour
{
  public static int nameIdx = 0;
  public static string name = "김말랑";

  public static void SetName()
  {
    if (NameController.userName != null || NameController.userName.Equals(""))
    {
      name = NameController.userName;
    }

    nameIdx = 0;
  }

  public static char GetNameChar()
  {
    return name[nameIdx];
  }

  public static bool AddNameIdx()
  {
    //가능하다면 true리턴
    //불가능하면 false(게임 완전히 끝내기)
    return ++nameIdx < name.Length;
  }

  public static int GetNameLength()
  {
    return name.Length;
  }

  //채점
  public static bool CheckNameChar(char ch)
  {
    return name[nameIdx] == ch;
  }

  public void LoadOcrGame()
  {
    SetName();//이름설정
    SceneManager.LoadScene("OcrCanvas");
  }

  public static string GetFileName()
  {
    Debug.Log("name_" + nameIdx + ".png");
    return "name_" + nameIdx + ".png";
  }
}
