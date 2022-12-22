using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FindMonster : MonoBehaviour
{
  public GameObject arCamera;
  public GameObject explosion;

  RaycastHit hit;

  void Update()
  {
    GameObject effect;

    if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
    {
      if (Physics.Raycast(arCamera.transform.position, arCamera.transform.forward, out hit))
      {

        // 따라 말하기 게임 - 왕
        if (hit.transform.tag == "king")
        {
          Handheld.Vibrate();
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          GameController.missionIdx = 2;
          SceneManager.LoadScene("MissionDescription_SttGame", LoadSceneMode.Single);
        }


        // 머리 염색 게임 - 쫄병 말랑이
        if (hit.transform.tag == "zzol")
        {
          Handheld.Vibrate();
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          GameController.missionIdx = 3;
          SceneManager.LoadScene("Desc_Color", LoadSceneMode.Single);
        }


        // 동물 맞추기 게임 - 토끼 말랑 
        if (hit.transform.tag == "rabbit")
        {
          Handheld.Vibrate();
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          GameController.missionIdx = 0;
          SceneManager.LoadScene("Desc_AnimalQuiz", LoadSceneMode.Single);
        }

        // 사물 찾기 게임 - 새싹
        if (hit.transform.tag == "sprout")
        {
          Handheld.Vibrate();
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          GameController.missionIdx = 1;
          SceneManager.LoadScene("Desc_Obj", LoadSceneMode.Single);
        }

        // 쓰레기 버리기 게임 - 잎사귀
        if (hit.transform.tag == "leaf")
        {
          Handheld.Vibrate();
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          GameController.missionIdx = 4;
          SceneManager.LoadScene("Desc_Trash", LoadSceneMode.Single);
        }

        // 글씨 쓰기 게임 - 감자 말랑이
        if (hit.transform.tag == "basic")
        {
          Handheld.Vibrate();
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          GameController.missionIdx = 5;
          SceneManager.LoadScene("Desc_Ocr", LoadSceneMode.Single);
        }

        // 양치하기 게임 - 바이킹
        if (hit.transform.tag == "viking")
        {
          Handheld.Vibrate();
          hit.transform.gameObject.SetActive(false);
          effect = Instantiate(explosion, hit.transform.position, hit.transform.rotation);
          // Destroy(explosion, 2f);  // nothing gets left behind
          Destroy(effect, 2f);
          GameController.missionIdx = 6;
          SceneManager.LoadScene("Desc_BrushingTeeth", LoadSceneMode.Single);
        }
      }
    }
  }

}
