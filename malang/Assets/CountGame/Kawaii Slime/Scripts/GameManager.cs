using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
  public GameObject mainSlime;
  public GameObject mainSlime1;
  public GameObject mainSlime2;
  public GameObject mainSlime3;
  public GameObject mainSlime4;
  public GameObject mainSlime5;
  public GameObject mainSlime6;
  public GameObject mainSlime7;



  public Button idleBut, walkBut, jumpBut, attackBut, damageBut0, damageBut1, damageBut2;
  public Camera cam;
  private void Start()
  {
    InvokeRepeating("ChangeStateToCustom", 1, 2);
    idleBut.onClick.AddListener(delegate { Idle(); });
    walkBut.onClick.AddListener(delegate { ChangeStateTo(SlimeAnimationState.Walk); });
    jumpBut.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Jump); });
    attackBut.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Attack); });
    damageBut0.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 0; });
    damageBut1.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 1; });
    damageBut2.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 2; });
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

  public void ChangeStateTo1(SlimeAnimationState state)
  {
    if (mainSlime1 == null) return;
    if (state == mainSlime1.GetComponent<EnemyAi>().currentState) return;

    mainSlime1.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateTo2(SlimeAnimationState state)
  {
    if (mainSlime2 == null) return;
    if (state == mainSlime2.GetComponent<EnemyAi>().currentState) return;

    mainSlime2.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateTo3(SlimeAnimationState state)
  {
    if (mainSlime3 == null) return;
    if (state == mainSlime3.GetComponent<EnemyAi>().currentState) return;

    mainSlime3.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateTo4(SlimeAnimationState state)
  {
    if (mainSlime4 == null) return;
    if (state == mainSlime4.GetComponent<EnemyAi>().currentState) return;

    mainSlime4.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateTo5(SlimeAnimationState state)
  {
    if (mainSlime5 == null) return;
    if (state == mainSlime5.GetComponent<EnemyAi>().currentState) return;

    mainSlime5.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateTo6(SlimeAnimationState state)
  {
    if (mainSlime6 == null) return;
    if (state == mainSlime6.GetComponent<EnemyAi>().currentState) return;

    mainSlime6.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToTest(SlimeAnimationState state)
  {
    if (mainSlime7 == null) return;
    if (state == mainSlime7.GetComponent<EnemyAi>().currentState) return;

    mainSlime7.GetComponent<EnemyAi>().currentState = state;
  }



  public void ChangeStateToCustom()
  {
    ChangeStateTo(SlimeAnimationState.Walk);
    ChangeStateTo1(SlimeAnimationState.Walk);
    ChangeStateTo2(SlimeAnimationState.Walk);
    ChangeStateTo3(SlimeAnimationState.Walk);
    ChangeStateTo4(SlimeAnimationState.Walk);
    ChangeStateTo5(SlimeAnimationState.Walk);
    ChangeStateTo6(SlimeAnimationState.Walk);
    ChangeStateToTest(SlimeAnimationState.Jump);
    // ChangeStateTo(SlimeAnimationState.Jump);
  }
  void LookAtCamera()
  {
    mainSlime.transform.rotation = Quaternion.Euler(new Vector3(mainSlime.transform.rotation.x, cam.transform.rotation.y, mainSlime.transform.rotation.z));
  }
}
