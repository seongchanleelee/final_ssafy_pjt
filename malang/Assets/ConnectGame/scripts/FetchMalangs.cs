using Mediapipe;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Burst.CompilerServices;
using UnityEngine;

public class FetchMalangs : MonoBehaviour
{

  public GameObject arCamera;

  // 킹말랑이
  public GameObject king1;
  public GameObject king2;
  public GameObject king3;
  public GameObject king4;
  public GameObject king5;

  // 토끼 말랑이
  public GameObject rabbit1;
  public GameObject rabbit2;
  public GameObject rabbit3;
  public GameObject rabbit4;
  public GameObject rabbit5;

  // 감자 말랑이
  public GameObject basic1;
  public GameObject basic2;
  public GameObject basic3;
  public GameObject basic4;
  public GameObject basic5;

  // 쫄병 말랑이
  public GameObject zzol1;
  public GameObject zzol2;
  public GameObject zzol3;
  public GameObject zzol4;
  public GameObject zzol5;

  // 잎 말랑이
  public GameObject leaf1;
  public GameObject leaf2;
  public GameObject leaf3;
  public GameObject leaf4;
  public GameObject leaf5;

  // 새싹 말랑이
  public GameObject sprout1;
  public GameObject sprout2;
  public GameObject sprout3;
  public GameObject sprout4;
  public GameObject sprout5;

  // 바이킹 말랑이
  public GameObject viking1;
  public GameObject viking2;
  public GameObject viking3;
  public GameObject viking4;
  public GameObject viking5;

  // 임티
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

  private int kingCnt = 0;
  private int rabbitCnt = 0;
  private int basicCnt = 0;
  private int zzolCnt = 0;
  private int leafCnt = 0;
  private int sproutCnt = 0;
  private int vikingCnt = 0;


  // Start is called before the first frame update
  void Start()
  {
    InsertIntoDB.getCurrentMalang();
    kingCnt = NameController._getMalangs[0];
    rabbitCnt = NameController._getMalangs[1];
    basicCnt = NameController._getMalangs[2];
    zzolCnt = NameController._getMalangs[3];
    leafCnt = NameController._getMalangs[4];
    sproutCnt = NameController._getMalangs[5];
    vikingCnt = NameController._getMalangs[6];
    Debug.Log("king " + kingCnt);
    Debug.Log("r" + rabbitCnt);
    Debug.Log("b" + basicCnt);
    Debug.Log("z" + zzolCnt);
    Debug.Log("leaf " + leafCnt);
    Debug.Log("sprout" + sproutCnt);
    Debug.Log("viking" + vikingCnt);

    slimeSetFalse();
    slimeSetTrue();


  }

  RaycastHit hit;

  // Update is called once per frame
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

  public void slimeSetFalse()
  {
    king1.SetActive(false);
    king2.SetActive(false);
    king3.SetActive(false);
    king4.SetActive(false);
    king5.SetActive(false);

    kingsay.gameObject.SetActive(false);
    kingsay1.gameObject.SetActive(false);
    kingsay2.gameObject.SetActive(false);
    kingsay3.gameObject.SetActive(false);
    kingsay4.gameObject.SetActive(false);

    rabbit1.SetActive(false);
    rabbit2.SetActive(false);
    rabbit3.SetActive(false);
    rabbit4.SetActive(false);
    rabbit5.SetActive(false);

    rabbitsay.gameObject.SetActive(false);
    rabbitsay1.gameObject.SetActive(false);
    rabbitsay2.gameObject.SetActive(false);
    rabbitsay3.gameObject.SetActive(false);
    rabbitsay4.gameObject.SetActive(false);

    basic1.SetActive(false);
    basic2.SetActive(false);
    basic3.SetActive(false);
    basic4.SetActive(false);
    basic5.SetActive(false);

    basicsay.gameObject.SetActive(false);
    basicsay1.gameObject.SetActive(false);
    basicsay2.gameObject.SetActive(false);
    basicsay3.gameObject.SetActive(false);
    basicsay4.gameObject.SetActive(false);

    zzol1.SetActive(false);
    zzol2.SetActive(false);
    zzol3.SetActive(false);
    zzol4.SetActive(false);
    zzol5.SetActive(false);

    zzolsay.gameObject.SetActive(false);
    zzolsay1.gameObject.SetActive(false);
    zzolsay2.gameObject.SetActive(false);
    zzolsay3.gameObject.SetActive(false);
    zzolsay4.gameObject.SetActive(false);

    leaf1.SetActive(false);
    leaf2.SetActive(false);
    leaf3.SetActive(false);
    leaf4.SetActive(false);
    leaf5.SetActive(false);

    leafsay.gameObject.SetActive(false);
    leafsay1.gameObject.SetActive(false);
    leafsay2.gameObject.SetActive(false);
    leafsay3.gameObject.SetActive(false);
    leafsay4.gameObject.SetActive(false);

    sprout1.SetActive(false);
    sprout2.SetActive(false);
    sprout3.SetActive(false);
    sprout4.SetActive(false);
    sprout5.SetActive(false);

    sproutsay.gameObject.SetActive(false);
    sproutsay1.gameObject.SetActive(false);
    sproutsay2.gameObject.SetActive(false);
    sproutsay3.gameObject.SetActive(false);
    sproutsay4.gameObject.SetActive(false);

    viking1.SetActive(false);
    viking2.SetActive(false);
    viking3.SetActive(false);
    viking4.SetActive(false);
    viking5.SetActive(false);

    vikingsay.gameObject.SetActive(false);
    vikingsay1.gameObject.SetActive(false);
    vikingsay2.gameObject.SetActive(false);
    vikingsay3.gameObject.SetActive(false);
    vikingsay4.gameObject.SetActive(false);
  }

  public void slimeSetTrue()
  {

    if (kingCnt == 1)
    {
      king1.SetActive(true);
      kingsay.SetActive(false);
    }
    else if (kingCnt == 2)
    {
      king1.SetActive(true);
      kingsay.SetActive(false);
      king2.SetActive(true);
      kingsay1.SetActive(false);
    }
    else if (kingCnt == 3)
    {
      king1.SetActive(true);
      kingsay.SetActive(false);
      king2.SetActive(true);
      kingsay1.SetActive(false);
      king3.SetActive(true);
      kingsay2.SetActive(false);
    }
    else if (kingCnt == 4)
    {
      king1.SetActive(true);
      kingsay.SetActive(false);
      king2.SetActive(true);
      kingsay1.SetActive(false);
      king3.SetActive(true);
      kingsay2.SetActive(false);
      king4.SetActive(true);
      kingsay3.SetActive(false);
    }
    else if (kingCnt >= 5)
    {
      king1.SetActive(true);
      kingsay.SetActive(false);
      king2.SetActive(true);
      kingsay1.SetActive(false);
      king3.SetActive(true);
      kingsay2.SetActive(false);
      king4.SetActive(true);
      kingsay3.SetActive(false);
      king5.SetActive(true);
      kingsay4.SetActive(false);
    }

    if (rabbitCnt == 1)
    {
      rabbit1.SetActive(true);
      rabbitsay.SetActive(false);
    }
    else if (rabbitCnt == 2)
    {
      rabbit1.SetActive(true);
      rabbitsay.SetActive(false);
      rabbit2.SetActive(true);
      rabbitsay1.SetActive(false);
    }
    else if (rabbitCnt == 3)
    {
      rabbit1.SetActive(true);
      rabbitsay.SetActive(false);
      rabbit2.SetActive(true);
      rabbitsay1.SetActive(false);
      rabbit3.SetActive(true);
      rabbitsay2.SetActive(false);
    }
    else if (rabbitCnt == 4)
    {
      rabbit1.SetActive(true);
      rabbitsay.SetActive(false);
      rabbit2.SetActive(true);
      rabbitsay1.SetActive(false);
      rabbit3.SetActive(true);
      rabbitsay2.SetActive(false);
      rabbit4.SetActive(true);
      rabbitsay3.SetActive(false);
    }
    else if (rabbitCnt >= 5)
    {
      rabbit1.SetActive(true);
      rabbitsay.SetActive(false);
      rabbit2.SetActive(true);
      rabbitsay1.SetActive(false);
      rabbit3.SetActive(true);
      rabbitsay2.SetActive(false);
      rabbit4.SetActive(true);
      rabbitsay3.SetActive(false);
      rabbit5.SetActive(true);
      rabbitsay4.SetActive(false);
    }


    if (zzolCnt == 1)
    {
      zzol1.SetActive(true);
      zzolsay.SetActive(false);
    }
    else if (zzolCnt == 2)
    {
      zzol1.SetActive(true);
      zzolsay.SetActive(false);
      zzol2.SetActive(true);
      zzolsay1.SetActive(false);
    }
    else if (zzolCnt == 3)
    {
      zzol1.SetActive(true);
      zzolsay.SetActive(false);
      zzol2.SetActive(true);
      zzolsay1.SetActive(false);
      zzol3.SetActive(true);
      zzolsay2.SetActive(false);
    }
    else if (zzolCnt == 4)
    {
      zzol1.SetActive(true);
      zzolsay.SetActive(false);
      zzol2.SetActive(true);
      zzolsay1.SetActive(false);
      zzol3.SetActive(true);
      zzolsay2.SetActive(false);
      zzol4.SetActive(true);
      zzolsay3.SetActive(false);
    }
    else if (zzolCnt >= 5)
    {
      zzol1.SetActive(true);
      zzolsay.SetActive(false);
      zzol2.SetActive(true);
      zzolsay1.SetActive(false);
      zzol3.SetActive(true);
      zzolsay2.SetActive(false);
      zzol4.SetActive(true);
      zzolsay3.SetActive(false);
      zzol5.SetActive(true);
      zzolsay4.SetActive(false);
    }

    if (basicCnt == 1)
    {
      basic1.SetActive(true);
      basicsay.SetActive(false);
    }
    else if (basicCnt == 2)
    {
      basic1.SetActive(true);
      basicsay.SetActive(false);
      basic2.SetActive(true);
      basicsay1.SetActive(false);
    }
    else if (basicCnt == 3)
    {
      basic1.SetActive(true);
      basicsay.SetActive(false);
      basic2.SetActive(true);
      basicsay1.SetActive(false);
      basic3.SetActive(true);
      basicsay2.SetActive(false);
    }
    else if (basicCnt == 4)
    {
      basic1.SetActive(true);
      basicsay.SetActive(false);
      basic2.SetActive(true);
      basicsay1.SetActive(false);
      basic3.SetActive(true);
      basicsay2.SetActive(false);
      basic4.SetActive(true);
      basicsay3.SetActive(false);
    }
    else if (basicCnt >= 5)
    {
      basic1.SetActive(true);
      basicsay.SetActive(false);
      basic2.SetActive(true);
      basicsay1.SetActive(false);
      basic3.SetActive(true);
      basicsay2.SetActive(false);
      basic4.SetActive(true);
      basicsay3.SetActive(false);
      basic5.SetActive(true);
      basicsay4.SetActive(false);
    }

    if (sproutCnt == 1)
    {
      sprout1.SetActive(true);
      sproutsay.SetActive(false);
    }
    else if (sproutCnt == 2)
    {
      sprout1.SetActive(true);
      sproutsay.SetActive(false);
      sprout2.SetActive(true);
      sproutsay1.SetActive(false);
    }
    else if (sproutCnt == 3)
    {
      sprout1.SetActive(true);
      sproutsay.SetActive(false);
      sprout2.SetActive(true);
      sproutsay1.SetActive(false);
      sprout3.SetActive(true);
      sproutsay2.SetActive(false);
    }
    else if (sproutCnt == 4)
    {
      sprout1.SetActive(true);
      sproutsay.SetActive(false);
      sprout2.SetActive(true);
      sproutsay1.SetActive(false);
      sprout3.SetActive(true);
      sproutsay2.SetActive(false);
      sprout4.SetActive(true);
      sproutsay3.SetActive(false);
    }
    else if (sproutCnt >= 5)
    {
      sprout1.SetActive(true);
      sproutsay.SetActive(false);
      sprout2.SetActive(true);
      sproutsay1.SetActive(false);
      sprout3.SetActive(true);
      sproutsay2.SetActive(false);
      sprout4.SetActive(true);
      sproutsay3.SetActive(false);
      sprout5.SetActive(true);
      sproutsay4.SetActive(false);
    }

    if (leafCnt == 1)
    {
      leaf1.SetActive(true);
      leafsay.SetActive(false);
    }
    else if (leafCnt == 2)
    {
      leaf1.SetActive(true);
      leafsay.SetActive(false);
      leaf2.SetActive(true);
      leafsay1.SetActive(false);
    }
    else if (leafCnt == 3)
    {
      leaf1.SetActive(true);
      leafsay.SetActive(false);
      leaf2.SetActive(true);
      leafsay1.SetActive(false);
      leaf3.SetActive(true);
      leafsay2.SetActive(false);
    }
    else if (leafCnt == 4)
    {
      leaf1.SetActive(true);
      leafsay.SetActive(false);
      leaf2.SetActive(true);
      leafsay1.SetActive(false);
      leaf3.SetActive(true);
      leafsay2.SetActive(false);
      leaf4.SetActive(true);
      leafsay3.SetActive(false);
    }
    else if (leafCnt >= 5)
    {
      leaf1.SetActive(true);
      leafsay.SetActive(false);
      leaf2.SetActive(true);
      leafsay1.SetActive(false);
      leaf3.SetActive(true);
      leafsay2.SetActive(false);
      leaf4.SetActive(true);
      leafsay3.SetActive(false);
      leaf5.SetActive(true);
      leafsay4.SetActive(false);
    }

    if (vikingCnt == 1)
    {
      viking1.SetActive(true);
      vikingsay.SetActive(false);
    }
    else if (vikingCnt == 2)
    {
      viking1.SetActive(true);
      vikingsay.SetActive(false);
      viking2.SetActive(true);
      vikingsay1.SetActive(false);
    }
    else if (vikingCnt == 3)
    {
      viking1.SetActive(true);
      vikingsay.SetActive(false);
      viking2.SetActive(true);
      vikingsay1.SetActive(false);
      viking3.SetActive(true);
      vikingsay2.SetActive(false);
    }
    else if (vikingCnt == 4)
    {
      viking1.SetActive(true);
      vikingsay.SetActive(false);
      viking2.SetActive(true);
      vikingsay1.SetActive(false);
      viking3.SetActive(true);
      vikingsay2.SetActive(false);
      viking4.SetActive(true);
      vikingsay3.SetActive(false);
    }
    else if (vikingCnt >= 5)
    {
      viking1.SetActive(true);
      vikingsay.SetActive(false);
      viking2.SetActive(true);
      vikingsay1.SetActive(false);
      viking3.SetActive(true);
      vikingsay2.SetActive(false);
      viking4.SetActive(true);
      vikingsay3.SetActive(false);
      viking5.SetActive(true);
      vikingsay4.SetActive(false);
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
