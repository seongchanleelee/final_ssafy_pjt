using Mediapipe.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FindColor : MonoBehaviour
{
  public GameObject arCamera;
  public GameObject explosion;

  RaycastHit hit;

  public void Start()
  {
    // PickColorController.SetColor();
    // PickColorController.GetAnswer();
    UnityEngine.Screen.sleepTimeout = SleepTimeout.NeverSleep; //디바이스 화면 꺼짐 방지
  }

  void Update()
  {
    GameObject effect;

    if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
    {
      if (Physics.Raycast(arCamera.transform.position, arCamera.transform.forward, out hit))
      {
        if (hit.transform.tag == "basicRed")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(0);
        }

        else if (hit.transform.tag == "basicOrange")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(1);
        }

        else if (hit.transform.tag == "basicYellow")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(2);
        }

        else if (hit.transform.tag == "basicGreen")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(3);
        }

        else if (hit.transform.tag == "basicBlue")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(4);
        }

        else if (hit.transform.tag == "basicPurple")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(5);
        }

        else if (hit.transform.tag == "basicBlack")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(6);
        }

        else if (hit.transform.tag == "basicWhite")
        {
          Handheld.Vibrate();
          // Destroy(hit.transform.gameObject);
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          ColorGameController.CheckGame(7);
        }

      }
    }
  }

}
