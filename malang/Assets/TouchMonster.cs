using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TouchMonster : MonoBehaviour
{
  public GameObject arCamera;

  public GameObject kingsay;
  public GameObject kingsay1;
  public GameObject kingsay2;
  public GameObject kingsay3;
  public GameObject kingsay4;
  public GameObject rabbitsay;
  public GameObject rabbitsay1;
  public GameObject rabbitsay2;
  public GameObject rabbitsay3;
  public GameObject rabbitsay4;
  public GameObject basicsay;
  public GameObject basicsay1;
  public GameObject basicsay2;
  public GameObject basicsay3;
  public GameObject basicsay4;
  public GameObject zzolsay;
  public GameObject zzolsay1;
  public GameObject zzolsay2;
  public GameObject zzolsay3;
  public GameObject zzolsay4;
  public GameObject leafsay;
  public GameObject leafsay1;
  public GameObject leafsay2;
  public GameObject leafsay3;
  public GameObject leafsay4;
  public GameObject sproutsay;
  public GameObject sproutsay1;
  public GameObject sproutsay2;
  public GameObject sproutsay3;
  public GameObject sproutsay4;
  public GameObject vikingsay;
  public GameObject vikingsay1;
  public GameObject vikingsay2;
  public GameObject vikingsay3;
  public GameObject vikingsay4;


  private void Start()
  {
    kingsay = GameObject.FindGameObjectWithTag("kingsay");
    kingsay1 = GameObject.FindGameObjectWithTag("kingsay1");
    kingsay2 = GameObject.FindGameObjectWithTag("kingsay2");
    kingsay3 = GameObject.FindGameObjectWithTag("kingsay3");
    kingsay4 = GameObject.FindGameObjectWithTag("kingsay4");
    
    rabbitsay = GameObject.FindGameObjectWithTag("rabbitsay");
    rabbitsay1 = GameObject.FindGameObjectWithTag("rabbitsay1");
    rabbitsay2 = GameObject.FindGameObjectWithTag("rabbitsay2");
    rabbitsay3 = GameObject.FindGameObjectWithTag("rabbitsay3");
    rabbitsay4 = GameObject.FindGameObjectWithTag("rabbitsay4");
    
    basicsay = GameObject.FindGameObjectWithTag("basicsay");
    basicsay1 = GameObject.FindGameObjectWithTag("basicsay1");
    basicsay2 = GameObject.FindGameObjectWithTag("basicsay2");
    basicsay3 = GameObject.FindGameObjectWithTag("basicsay3");
    basicsay4 = GameObject.FindGameObjectWithTag("basicsay4");
    
    zzolsay = GameObject.FindGameObjectWithTag("zzolsay");
    zzolsay1 = GameObject.FindGameObjectWithTag("zzolsay1");
    zzolsay2 = GameObject.FindGameObjectWithTag("zzolsay2");
    zzolsay3 = GameObject.FindGameObjectWithTag("zzolsay3");
    zzolsay4 = GameObject.FindGameObjectWithTag("zzolsay4");
    
    leafsay = GameObject.FindGameObjectWithTag("leafsay");
    leafsay1 = GameObject.FindGameObjectWithTag("leafsay1");
    leafsay2 = GameObject.FindGameObjectWithTag("leafsay2");
    leafsay3 = GameObject.FindGameObjectWithTag("leafsay3");
    leafsay4 = GameObject.FindGameObjectWithTag("leafsay4");
    
    sproutsay = GameObject.FindGameObjectWithTag("sproutsay");
    sproutsay1 = GameObject.FindGameObjectWithTag("sproutsay1");
    sproutsay2 = GameObject.FindGameObjectWithTag("sproutsay2");
    sproutsay3 = GameObject.FindGameObjectWithTag("sproutsay3");
    sproutsay4 = GameObject.FindGameObjectWithTag("sproutsay4");
    
    vikingsay = GameObject.FindGameObjectWithTag("vikingsay");
    vikingsay1 = GameObject.FindGameObjectWithTag("vikingsay1");
    vikingsay2 = GameObject.FindGameObjectWithTag("vikingsay2");
    vikingsay3 = GameObject.FindGameObjectWithTag("vikingsay3");
    vikingsay4 = GameObject.FindGameObjectWithTag("vikingsay4");
    
    
  }

  RaycastHit hit;

  void Update()
  {
    if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
    {
      if (Physics.Raycast(arCamera.transform.position, arCamera.transform.forward, out hit))
      {

        // 따라 말하기 게임 - 왕
        if (hit.transform.tag == "king")
        {
          Handheld.Vibrate();
          kingsay.gameObject.SetActive(true);
          Invoke("cking", 5f);
        }
        if (hit.transform.tag == "king1")
        {
          Handheld.Vibrate();
          kingsay1.gameObject.SetActive(true);
          Invoke("cking1", 5f);
        }
        if (hit.transform.tag == "king2")
        {
          Handheld.Vibrate();
          kingsay2.gameObject.SetActive(true);
          Invoke("cking2", 5f);
        }
        if (hit.transform.tag == "king3")
        {
          Handheld.Vibrate();
          kingsay3.gameObject.SetActive(true);
          Invoke("cking3", 5f);
        }
        if (hit.transform.tag == "king4")
        {
          Handheld.Vibrate();
          kingsay4.gameObject.SetActive(true);
          Invoke("cking4", 5f);
        }


        // 머리 염색 게임 - 쫄병 말랑이
        if (hit.transform.tag == "zzol")
        {
          Handheld.Vibrate();
          zzolsay.gameObject.SetActive(true);
          Invoke("czzol", 5f);
        }
        if (hit.transform.tag == "zzol1")
        {
          Handheld.Vibrate();
          zzolsay1.gameObject.SetActive(true);
          Invoke("czzol1", 5f);
        }
        if (hit.transform.tag == "zzol2")
        {
          Handheld.Vibrate();
          zzolsay2.gameObject.SetActive(true);
          Invoke("czzol2", 5f);
        }
        if (hit.transform.tag == "zzol3")
        {
          Handheld.Vibrate();
          zzolsay3.gameObject.SetActive(true);
          Invoke("czzol3", 5f);
        }
        if (hit.transform.tag == "zzol4")
        {
          Handheld.Vibrate();
          zzolsay4.gameObject.SetActive(true);
          Invoke("czzol4", 5f);
        }


        // 동물 맞추기 게임 - 토끼 말랑 
        if (hit.transform.tag == "rabbit")
        {
          Handheld.Vibrate();
          rabbitsay.gameObject.SetActive(true);
          Debug.Log("why??????");
          Invoke("crabbit", 5f);
        }
        if (hit.transform.tag == "rabbit1")
        {
          Handheld.Vibrate();
          rabbitsay1.SetActive(true);
          Invoke("crabbit1", 5f);
        }
        if (hit.transform.tag == "rabbit2")
        {
          Handheld.Vibrate();
          rabbitsay2.SetActive(true);
          Invoke("crabbit2", 5f);
        }
        if (hit.transform.tag == "rabbit3")
        {
          Handheld.Vibrate();
          rabbitsay3.SetActive(true);
          Invoke("crabbit3", 5f);
        }
        if (hit.transform.tag == "rabbit4")
        {
          Handheld.Vibrate();
          rabbitsay4.SetActive(true);
          Invoke("crabbit4", 5f);
        }

        // 사물 찾기 게임 - 새싹
        if (hit.transform.tag == "sprout")
        {
          Handheld.Vibrate();
          sproutsay.gameObject.SetActive(true);
          Invoke("csprout", 5f);
        }
        if (hit.transform.tag == "sprout1")
        {
          Handheld.Vibrate();
          sproutsay1.gameObject.SetActive(true);
          Invoke("csprout1", 5f);
        }
        if (hit.transform.tag == "sprout2")
        {
          Handheld.Vibrate();
          sproutsay2.gameObject.SetActive(true);
          Invoke("csprout2", 5f);
        }
        if (hit.transform.tag == "sprout3")
        {
          Handheld.Vibrate();
          sproutsay3.gameObject.SetActive(true);
          Invoke("csprout3", 5f);
        }
        if (hit.transform.tag == "sprout4")
        {
          Handheld.Vibrate();
          sproutsay4.gameObject.SetActive(true);
          Invoke("csprout4", 5f);
        }

        // 쓰레기 버리기 게임 - 잎사귀
        if (hit.transform.tag == "leaf")
        {
          Handheld.Vibrate();
          leafsay.gameObject.SetActive(true);
          Invoke("cleaf", 5f);
        }
        if (hit.transform.tag == "leaf1")
        {
          Handheld.Vibrate();
          leafsay1.gameObject.SetActive(true);
          Invoke("cleaf1", 5f);
        }
        if (hit.transform.tag == "leaf2")
        {
          Handheld.Vibrate();
          leafsay2.gameObject.SetActive(true);
          Invoke("cleaf2", 5f);
        }
        if (hit.transform.tag == "leaf3")
        {
          Handheld.Vibrate();
          leafsay3.gameObject.SetActive(true);
          Invoke("cleaf3", 5f);
        }
        if (hit.transform.tag == "leaf4")
        {
          Handheld.Vibrate();
          leafsay4.gameObject.SetActive(true);
          Invoke("cleaf4", 5f);
        }

        // 글씨 쓰기 게임 - 감자 말랑이
        if (hit.transform.tag == "basic")
        {
          Handheld.Vibrate();
          basicsay.gameObject.SetActive(true);
          Invoke("cbasic", 5f);
        }
        if (hit.transform.tag == "basic1")
        {
          Handheld.Vibrate();
          basicsay1.gameObject.SetActive(true);
          Invoke("cbasic1", 5f);
        }
        if (hit.transform.tag == "basic2")
        {
          Handheld.Vibrate();
          basicsay2.gameObject.SetActive(true);
          Invoke("cbasic2", 5f);
        }
        if (hit.transform.tag == "basic3")
        {
          Handheld.Vibrate();
          basicsay3.gameObject.SetActive(true);
          Invoke("cbas2ic3", 5f);
        }
        if (hit.transform.tag == "basic4")
        {
          Handheld.Vibrate();
          basicsay4.gameObject.SetActive(true);
          Invoke("cbasic4", 5f);
        }
        // 양치하기 게임 - 바이킹
        if (hit.transform.tag == "viking")
        {
          Handheld.Vibrate();
          vikingsay.gameObject.SetActive(true);
          Invoke("cviking", 5f);
        }
        if (hit.transform.tag == "viking1")
        {
          Handheld.Vibrate();
          vikingsay1.gameObject.SetActive(true);
          Invoke("cviking1", 5f);
        }
        if (hit.transform.tag == "viking2")
        {
          Handheld.Vibrate();
          vikingsay2.gameObject.SetActive(true);
          Invoke("cviking2", 5f);
        }
        if (hit.transform.tag == "viking3")
        {
          Handheld.Vibrate();
          vikingsay3.gameObject.SetActive(true);
          Invoke("cviking3", 5f);
        }
        if (hit.transform.tag == "viking4")
        {
          Handheld.Vibrate();
          vikingsay4.gameObject.SetActive(true);
          Invoke("cviking4", 5f);
        }
      }
    }
  }
  //여기에 invoke함수 넣어주기
  void cking()
  {
    kingsay.gameObject.SetActive(false);
  }
  void cking1()
  {
    kingsay1.gameObject.SetActive(false);
  }
  void cking2()
  {
    kingsay2.gameObject.SetActive(false);
  }
  void cking3()
  {
    kingsay3.gameObject.SetActive(false);
  }
  void cking4()
  {
    kingsay4.gameObject.SetActive(false);
  }

  void czzol()
  {
    zzolsay.gameObject.SetActive(false);
  }
  void czzol1()
  {
    zzolsay1.gameObject.SetActive(false);
  }
  void czzol2()
  {
    zzolsay2.gameObject.SetActive(false);
  }
  void czzol3()
  {
    zzolsay3.gameObject.SetActive(false);
  }
  void czzol4()
  {
    zzolsay4.gameObject.SetActive(false);
  }
  void crabbit()
  {
    rabbitsay.gameObject.SetActive(false);
  }
  void crabbit1()
  {
    rabbitsay1.gameObject.SetActive(false);
  }
  void crabbit2()
  {
    rabbitsay2.gameObject.SetActive(false);
  }
  void crabbit3()
  {
    rabbitsay3.gameObject.SetActive(false);
  }
  void crabbit4()
  {
    rabbitsay4.gameObject.SetActive(false);
  }

  void csprout()
  {
    sproutsay.gameObject.SetActive(false);
  }
  void csprout1()
  {
    sproutsay1.gameObject.SetActive(false);
  }
  void csprout2()
  {
    sproutsay2.gameObject.SetActive(false);
  }
  void csprout3()
  {
    sproutsay3.gameObject.SetActive(false);
  }
  void csprout4()
  {
    sproutsay4.gameObject.SetActive(false);
  }

  void cleaf()
  {
    leafsay.gameObject.SetActive(false);
  }
  void cleaf1()
  {
    leafsay1.gameObject.SetActive(false);
  }
  void cleaf2()
  {
    leafsay2.gameObject.SetActive(false);
  }
  void cleaf3()
  {
    leafsay3.gameObject.SetActive(false);
  }
  void cleaf4()
  {
    leafsay4.gameObject.SetActive(false);
  }
  void cbasic()
  {
    basicsay.gameObject.SetActive(false);
  }
  void cbasic1()
  {
    basicsay1.gameObject.SetActive(false);
  }
  void cbasic2()
  {
    basicsay2.gameObject.SetActive(false);
  }
  void cbasic3()
  {
    basicsay3.gameObject.SetActive(false);
  }
  void cbasic4()
  {
    basicsay4.gameObject.SetActive(false);
  }

  void cviking()
  {
    vikingsay.gameObject.SetActive(false);
  }
  void cviking1()
  {
    vikingsay1.gameObject.SetActive(false);
  }
  void cviking2()
  {
    vikingsay2.gameObject.SetActive(false);
  }
  void cviking3()
  {
    vikingsay3.gameObject.SetActive(false);
  }
  void cviking4()
  {
    vikingsay4.gameObject.SetActive(false);
  }
}



