using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Security.Cryptography;
using UnityEngine;
using UnityEngine.UI;

public class btnController : MonoBehaviour
{

  Button btn1;
  Button btn2;
  Button btn3;
  Button btn4;
  Button btn5;
  Button btn6;
  Button MainBtn;
  Button FailBtn;


  // Start is called before the first frame update
  void Start()
  {
    Debug.Log("시작");
    RandomBtn();
  }

  public void RandomBtn()
  {
    Debug.Log("랜덤 버튼 만들기");
    btn1 = GameObject.Find("ButtonPanel").transform.Find("CatButton").GetComponent<Button>();
    btn2 = GameObject.Find("ButtonPanel").transform.Find("DogButton").GetComponent<Button>();
    btn3 = GameObject.Find("ButtonPanel").transform.Find("CowButton").GetComponent<Button>();
    btn4 = GameObject.Find("ButtonPanel").transform.Find("PigButton").GetComponent<Button>();
    btn5 = GameObject.Find("ButtonPanel").transform.Find("WolfButton").GetComponent<Button>();
    btn6 = GameObject.Find("ButtonPanel").transform.Find("TigerButton").GetComponent<Button>();
    MainBtn = GameObject.Find("ButtonPanel").transform.Find("MainButton").GetComponent<Button>();
    FailBtn = GameObject.Find("ButtonPanel").transform.Find("FailButton").GetComponent<Button>();

    btn1.gameObject.SetActive(false);
    btn2.gameObject.SetActive(false);
    btn3.gameObject.SetActive(false);
    btn4.gameObject.SetActive(false);
    btn5.gameObject.SetActive(false);
    btn6.gameObject.SetActive(false);
    MainBtn.gameObject.SetActive(false);
    FailBtn.gameObject.SetActive(false);

    var randomNumber = Random.Range(0, 6);

    Debug.Log(randomNumber);

    switch (randomNumber)
    {
      case 0:
        btn1.gameObject.SetActive(true);
        btn1.onClick.Invoke();
        break;
      case 1:
        btn2.gameObject.SetActive(true);
        btn2.onClick.Invoke();
        break;
      case 2:
        btn3.gameObject.SetActive(true);
        btn3.onClick.Invoke();
        break;
      case 3:
        btn4.gameObject.SetActive(true);
        btn4.onClick.Invoke();
        break;
      case 4:
        btn5.gameObject.SetActive(true);
        btn5.onClick.Invoke();
        break;
      case 5:
        btn6.gameObject.SetActive(true);
        btn6.onClick.Invoke();
        break;
      default:
        break;
    }
  }

}
