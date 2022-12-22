using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SlimeAnimationManager : MonoBehaviour
{
  public GameObject mainSlime;

  public GameObject mainSlimeR;
  public GameObject mainSlimeO;
  public GameObject mainSlimeY;
  public GameObject mainSlimeG;
  public GameObject mainSlimeB;
  public Button idleBut, walkBut, jumpBut, attackBut, damageBut0, damageBut1, damageBut2;
  public Camera cam;
  private void Start()
  {
    InvokeRepeating("ChangeStateToCustom", 1, 3); 
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

  public void ChangeStateToColor(SlimeAnimationState state)
  {
    if (mainSlimeR == null) return;
    if (state == mainSlimeR.GetComponent<EnemyAi>().currentState) return;

    mainSlimeR.GetComponent<EnemyAi>().currentState = state;

    if (mainSlimeO == null) return;
    if (state == mainSlimeO.GetComponent<EnemyAi>().currentState) return;

    mainSlimeO.GetComponent<EnemyAi>().currentState = state;

    if (mainSlimeY == null) return;
    if (state == mainSlimeY.GetComponent<EnemyAi>().currentState) return;

    mainSlimeY.GetComponent<EnemyAi>().currentState = state;

    if (mainSlimeG == null) return;
    if (state == mainSlimeG.GetComponent<EnemyAi>().currentState) return;

    mainSlimeG.GetComponent<EnemyAi>().currentState = state;

    if (mainSlimeB == null) return;
    if (state == mainSlimeB.GetComponent<EnemyAi>().currentState) return;

    mainSlimeB.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToCustom()
  {
      // ChangeStateTo(SlimeAnimationState.Walk);
      ChangeStateTo(SlimeAnimationState.Jump);
      ChangeStateToColor(SlimeAnimationState.Walk);
   }


  void LookAtCamera()
  {
    mainSlime.transform.rotation = Quaternion.Euler(new Vector3(mainSlime.transform.rotation.x, cam.transform.rotation.y, mainSlime.transform.rotation.z));
  }
}
