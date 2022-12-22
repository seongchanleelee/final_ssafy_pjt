using UnityEngine;

public class GameController : MonoBehaviour
{
  public static string[] _missions = new string[] { "AnimalQuiz", "Object Start Scene", "SttGame_1", "PickColorScene", "TrashDrop", "OcrCanvas", "BrushingTeeth" };
  private static string title = "";
  private static string desc = "";
  public static string mission = "";
  public static string malang = "";
  public static int missionIdx;
  // private static bool canOcr = GetSDK();
  public static string[] SetMission()
  {
    //랜덤으로 미션 선택 후 제목, 설명 세팅.
    //마지막으로 미션스타트씬 이름 반환.
    // var randomObj = new System.Random();
    // missionIdx = randomObj.Next(_missions.Length);
    /*while (!canOcr && missionIdx == 5)
    {
      //ocr 게임 안나올때까지 돌림
      missionIdx = randomObj.Next(_missions.Length);
    }*/

    switch (missionIdx)
    {
      case 0://동물게임 - animalQuiz - 토끼말랑이
        title = "오리는 꽥꽥!";
        desc = "귀와 코가 생겼다!\n무슨 동물일까?\n맞혀 봐!";
        break;
      case 1://사물찾기게임 - Detection Start Scene - 새싹말랑이
        title = "물건 숨바꼭질";
        desc = "물건이 어딨더라?\n내가 말하는걸 찾아서\n 카메라로 찍어봐!";
        break;
      case 2://말하기게임 - SttGame_1 - 킹말랑이
        title = "날 따라 말해봐!";
        desc = "말랑이를 따라\n예쁜 말을 배워보자!";
        break;
      case 3://색깔게임 - PickColorGame - 쫄병말랑이
        title = "빨주노초파남보";
        desc = "내가 원하는 색깔의\n 말랑이를 잡아줘!\n성공하면 머리색을 바꿔줄게!";
        break;
      case 4://쓰레기버리기게임 - TrashDrop - 나뭇잎말랑이
        title = "쓰레기를 버려봐!";
        desc = "바닥에 있는\n쓰레기들을 주워\n쓰레기통에 버려봐!";
        break;
      case 5://글자게임 - OcrGameStart - 감자말랑이
        title = "이름을 써보자!";
        desc = "네 이름은 뭐야?\n같이 써보자!\n종이에 한 글자씩 적어봐!";
        // OcrGameConfig.SetName();
        break;
      case 6: //양치하기게임 - ? - 바이킹말랑이
        title = "치카푸카";
        desc = "이빨에 세균별이 붙었어~ \n양치해서 떼봐!";
        break;
      default:
        break;
    }

    mission = _missions[missionIdx];
    return new string[] { title, desc };
  }

  /*static bool GetSDK()
  {
    //sdk 31 이상인지 체크
    using (var version = new AndroidJavaClass("android.os.Build$VERSION"))
    {
      return version.GetStatic<int>("SDK_INT") >= 31;
    }
  }*/
}
