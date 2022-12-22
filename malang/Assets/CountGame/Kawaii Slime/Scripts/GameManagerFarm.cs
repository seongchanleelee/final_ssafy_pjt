using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManagerFarm : MonoBehaviour
{
  public GameObject mainSlime;
  public GameObject arCamera;
  RaycastHit hit;

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



  public Button idleBut, walkBut, jumpBut, attackBut, damageBut0, damageBut1, damageBut2;
  public Camera cam;
  private void Start()
  {
    Screen.sleepTimeout = SleepTimeout.NeverSleep; //디바이스 화면 꺼짐 방지
    //pathFinder.enabled = false;
    //agent.pathFinder.enabled = true;
    InvokeRepeating("ChangeStateToCustom", 1, 2);


    //idleBut.onClick.AddListener(delegate { Idle(); });
    walkBut.onClick.AddListener(delegate { ChangeStateTo(SlimeAnimationState.Walk); });
    //jumpBut.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Jump); });
    //attackBut.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Attack); });
    //damageBut0.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 0; });
    //damageBut1.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 1; });
    //damageBut2.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 2; });

  }

  private void Update()
  {
    
  }
  void Idle()
  {
    LookAtCamera();
    mainSlime.GetComponent<EnemyAi>().CancelGoNextDestination();
    ChangeStateTo(SlimeAnimationState.Idle);
  }
  public void ChangeStateTo(SlimeAnimationState state)
  {
    if (mainSlime == null) return;
    if (state == mainSlime.GetComponent<EnemyAi>().currentState) return;

    mainSlime.GetComponent<EnemyAi>().currentState = state;
  }

  // 디폴트 움직이기(걷기)
  public void ChangeStateToKing(SlimeAnimationState state)
  {
    if (king1 == null) return;
    if (state == king1.GetComponent<EnemyAi>().currentState) return;

    king1.GetComponent<EnemyAi>().currentState = state;

    if (king2 == null) return;
    if (state == king2.GetComponent<EnemyAi>().currentState) return;

    king2.GetComponent<EnemyAi>().currentState = state;

    if (king3 == null) return;
    if (state == king3.GetComponent<EnemyAi>().currentState) return;

    king3.GetComponent<EnemyAi>().currentState = state;

    if (king4 == null) return;
    if (state == king4.GetComponent<EnemyAi>().currentState) return;

    king4.GetComponent<EnemyAi>().currentState = state;

    if (king5 == null) return;
    if (state == king5.GetComponent<EnemyAi>().currentState) return;

    king5.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToRabbit(SlimeAnimationState state)
  {
    if (rabbit1 == null) return;
    if (state == rabbit1.GetComponent<EnemyAi>().currentState) return;

    rabbit1.GetComponent<EnemyAi>().currentState = state;

    if (rabbit2 == null) return;
    if (state == rabbit2.GetComponent<EnemyAi>().currentState) return;

    rabbit2.GetComponent<EnemyAi>().currentState = state;

    if (rabbit3 == null) return;
    if (state == rabbit3.GetComponent<EnemyAi>().currentState) return;

    rabbit3.GetComponent<EnemyAi>().currentState = state;

    if (rabbit4 == null) return;
    if (state == rabbit4.GetComponent<EnemyAi>().currentState) return;

    rabbit4.GetComponent<EnemyAi>().currentState = state;

    if (rabbit5 == null) return;
    if (state == rabbit5.GetComponent<EnemyAi>().currentState) return;

    rabbit5.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToBasic(SlimeAnimationState state)
  {
    if (basic1 == null) return;
    if (state == basic1.GetComponent<EnemyAi>().currentState) return;

    basic1.GetComponent<EnemyAi>().currentState = state;

    if (basic2 == null) return;
    if (state == basic2.GetComponent<EnemyAi>().currentState) return;

    basic2.GetComponent<EnemyAi>().currentState = state;

    if (basic3 == null) return;
    if (state == basic3.GetComponent<EnemyAi>().currentState) return;

    basic3.GetComponent<EnemyAi>().currentState = state;

    if (basic4 == null) return;
    if (state == basic4.GetComponent<EnemyAi>().currentState) return;

    basic4.GetComponent<EnemyAi>().currentState = state;

    if (basic5 == null) return;
    if (state == basic5.GetComponent<EnemyAi>().currentState) return;

    basic5.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToZzol(SlimeAnimationState state)
  {
    if (zzol1 == null) return;
    if (state == zzol1.GetComponent<EnemyAi>().currentState) return;

    zzol1.GetComponent<EnemyAi>().currentState = state;

    if (zzol2 == null) return;
    if (state == zzol2.GetComponent<EnemyAi>().currentState) return;

    zzol2.GetComponent<EnemyAi>().currentState = state;

    if (zzol3 == null) return;
    if (state == zzol3.GetComponent<EnemyAi>().currentState) return;

    zzol3.GetComponent<EnemyAi>().currentState = state;

    if (zzol4 == null) return;
    if (state == zzol4.GetComponent<EnemyAi>().currentState) return;

    zzol4.GetComponent<EnemyAi>().currentState = state;

    if (zzol5 == null) return;
    if (state == zzol5.GetComponent<EnemyAi>().currentState) return;

    zzol5.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToLeaf(SlimeAnimationState state)
  {
    if (leaf1 == null) return;
    if (state == leaf1.GetComponent<EnemyAi>().currentState) return;

    leaf1.GetComponent<EnemyAi>().currentState = state;

    if (leaf2 == null) return;
    if (state == leaf2.GetComponent<EnemyAi>().currentState) return;

    leaf2.GetComponent<EnemyAi>().currentState = state;

    if (leaf3 == null) return;
    if (state == leaf3.GetComponent<EnemyAi>().currentState) return;

    leaf3.GetComponent<EnemyAi>().currentState = state;

    if (leaf4 == null) return;
    if (state == leaf4.GetComponent<EnemyAi>().currentState) return;

    leaf4.GetComponent<EnemyAi>().currentState = state;

    if (leaf5 == null) return;
    if (state == leaf5.GetComponent<EnemyAi>().currentState) return;

    leaf5.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToSprout(SlimeAnimationState state)
  {
    if (sprout1 == null) return;
    if (state == sprout1.GetComponent<EnemyAi>().currentState) return;

    sprout1.GetComponent<EnemyAi>().currentState = state;

    if (sprout2 == null) return;
    if (state == sprout2.GetComponent<EnemyAi>().currentState) return;

    sprout2.GetComponent<EnemyAi>().currentState = state;

    if (sprout3 == null) return;
    if (state == sprout3.GetComponent<EnemyAi>().currentState) return;

    sprout3.GetComponent<EnemyAi>().currentState = state;

    if (sprout4 == null) return;
    if (state == sprout4.GetComponent<EnemyAi>().currentState) return;

    sprout4.GetComponent<EnemyAi>().currentState = state;

    if (sprout5 == null) return;
    if (state == sprout5.GetComponent<EnemyAi>().currentState) return;

    sprout5.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToViking(SlimeAnimationState state)
  {
    if (viking1 == null) return;
    if (state == viking1.GetComponent<EnemyAi>().currentState) return;

    viking1.GetComponent<EnemyAi>().currentState = state;

    if (viking2 == null) return;
    if (state == viking2.GetComponent<EnemyAi>().currentState) return;

    viking2.GetComponent<EnemyAi>().currentState = state;

    if (viking3 == null) return;
    if (state == viking3.GetComponent<EnemyAi>().currentState) return;

    viking3.GetComponent<EnemyAi>().currentState = state;

    if (viking4 == null) return;
    if (state == viking4.GetComponent<EnemyAi>().currentState) return;

    viking4.GetComponent<EnemyAi>().currentState = state;

    if (viking5 == null) return;
    if (state == viking5.GetComponent<EnemyAi>().currentState) return;

    viking5.GetComponent<EnemyAi>().currentState = state;
  }





  public void ChangeStateToCustom()
  {
    ChangeStateTo(SlimeAnimationState.Walk);
    ChangeStateToKing(SlimeAnimationState.Walk);
    ChangeStateToRabbit(SlimeAnimationState.Walk);
    ChangeStateToBasic(SlimeAnimationState.Walk);
    ChangeStateToZzol(SlimeAnimationState.Walk);
    ChangeStateToLeaf(SlimeAnimationState.Walk);
    ChangeStateToSprout(SlimeAnimationState.Walk);
    ChangeStateToViking(SlimeAnimationState.Walk);

    // ChangeStateTo(SlimeAnimationState.Jump);
  }

  public void ChangeStateToTouchKing()
  {
    ChangeStateToKing(SlimeAnimationState.Jump);
  }

  public void ChangeStateToTouchRabbit()
  {
    ChangeStateToRabbit(SlimeAnimationState.Jump);
  }

  public void ChangeStateToTouchBasic()
  {
    ChangeStateToBasic(SlimeAnimationState.Jump);
  }

  public void ChangeStateToTouchZzol()
  {
    ChangeStateToZzol(SlimeAnimationState.Jump);
  }

  public void ChangeStateToTouchLeaf()
  {
    ChangeStateToLeaf(SlimeAnimationState.Jump);
  }

  public void ChangeStateToTouchSprout()
  {
    ChangeStateToSprout(SlimeAnimationState.Jump);
  }

  public void ChangeStateToTouchViking()
  {
    ChangeStateToViking(SlimeAnimationState.Jump);
  }
  void LookAtCamera()
  {
    mainSlime.transform.rotation = Quaternion.Euler(new Vector3(mainSlime.transform.rotation.x, cam.transform.rotation.y, mainSlime.transform.rotation.z));
  }
}
