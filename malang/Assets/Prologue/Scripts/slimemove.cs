using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class slimemove : MonoBehaviour
{
  public GameObject mainSlime;
  public Camera cam;

  private void Start()
  {
  }

  public void SlimeJump()
  {
    ChangeStateToJump(SlimeAnimationState.Jump);
  }
  public void SlimeAttack()
  {
    ChangeStateToAttack(SlimeAnimationState.Attack);
  }

  public void ChangeStateToJump(SlimeAnimationState state)
  {
    if (mainSlime == null) return;
    if (state == mainSlime.GetComponent<EnemyAi>().currentState) return;

    mainSlime.GetComponent<EnemyAi>().currentState = state;
  }

  public void ChangeStateToAttack(SlimeAnimationState state)
  {
    if (mainSlime == null) return;
    if (state == mainSlime.GetComponent<EnemyAi>().currentState) return;

    mainSlime.GetComponent<EnemyAi>().currentState = state;
  }


  void LookAtCamera()
  {
    mainSlime.transform.rotation = Quaternion.Euler(new Vector3(mainSlime.transform.rotation.x, cam.transform.rotation.y, mainSlime.transform.rotation.z));
  }
}
