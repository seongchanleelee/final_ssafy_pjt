using UnityEngine;
using UnityEngine.SceneManagement;

public class PickColorController : MonoBehaviour
{
  private static Color[] _colors = new Color[] {
  new Color(1.0f, 0.26f, 0.25f),
  new Color(1.0f, 0.62f, 0.25f),
  new Color(1.0f, 0.80f, 0.25f),
  new Color(0.20f, 0.85f, 0.26f),
  new Color(0.20f, 0.41f, 0.84f),
  new Color(0.65f, 0.20f, 0.84f),
  Color.black,
  Color.white
  };
  private static Color _color = Color.white;
  private static Color _answerColor = Color.white;
  public static int idx = -1;

  public static void SetAnswer()
  {
    idx = Random.Range(0, _colors.Length);
    _answerColor = _colors[idx];
    Debug.Log("answer");
    Debug.Log(_answerColor.ToString());
  }

  public static Color GetAnswer()
  {
    return _answerColor;
  }

  public static bool CheckAnswer()
  {
    Debug.Log("답이 맞는지 찾아보기");
    return _answerColor.Equals(_color);
  }

  public static void SetColor(int colorIdx)
  {
    _color = _colors[colorIdx];
    Debug.Log("선택한컬러");
    Debug.Log(_color.ToString());
  }

  public static Color GetColor()
  {
    return _color;
  }

  public void LoadcolorGame()
  {
    SceneManager.LoadScene("PickColorScene");
  }
}
