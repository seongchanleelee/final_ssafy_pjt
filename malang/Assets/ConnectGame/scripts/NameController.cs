using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NameController : MonoBehaviour
{
    public static string userName = "";
    // 해당 말랑이 수 저장
    // 킹, 토끼, 감자, 쫄병, 잎, 새싹, 바이킹
    public static int [] _getMalangs = new int[] {0, 0, 0, 0, 0, 0, 0 };
  /*
  public static int[] _kings = new int[] { 0, 0, 0, 0, 0 };
  public static int[] _rabbits = new int[] { 0, 0, 0, 0, 0 };
  public static int[] _zzols = new int[] { 0, 0, 0, 0, 0 };
  public static int[] _basics = new int[] { 0, 0, 0, 0, 0 };
  public static int[] _sprouts = new int[] { 0, 0, 0, 0, 0 };
  public static int[] _leafs = new int[] { 0, 0, 0, 0, 0 };
  public static int[] _vikings = new int[] { 0, 0, 0, 0, 0 };*/

  public static bool isFinalConsonant()
  {
    var num_name = userName[userName.Length - 1] - 44032;//44032:한글시작위치
    return (num_name % 28) > 0;//종성 있으면 true, 없으면 false
  }
}
