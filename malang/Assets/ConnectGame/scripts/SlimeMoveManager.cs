using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SlimeMoveManager : MonoBehaviour
{
  public GameObject mainSlime;

  public GameObject slimeFriend1;
  public GameObject slimeFriend2;
  public GameObject slimeFriend3;
  public GameObject slimeFriend4;
  public GameObject slimeFriend5;
  public GameObject slimeFriend6;

  public Button idleBut, walkBut, jumpBut, attackBut, damageBut0, damageBut1, damageBut2;
  public Camera cam;

  private GameObject _networkCheck;

  private void Start()
  {
    // 인터넷 연결 체크
    _networkCheck = GameObject.FindGameObjectWithTag("NetworkCheck");

    if (Application.internetReachability == NetworkReachability.NotReachable)
    {
      // 인터넷 연결 안되었을 때
      _networkCheck.SetActive(true);
    }
    else
    {
      // 되었을 때
      _networkCheck.SetActive(false);
    }
    // 처음 제목 tts 나오면서 하나씩 점프
    Invoke("JumpAtTTS1", 0);
    Invoke("JumpAtTTS2", 0.5f);
    Invoke("JumpAtTTS3", 1f);
    Invoke("JumpAtTTS4", 1.5f);
    Invoke("JumpAtTTS5", 2f);
    Invoke("JumpAtTTS6", 2.5f);
    // 반복 작동
    InvokeRepeating("ChangeStateToCustom", 3, 2f);

    /*idleBut.onClick.AddListener(delegate { Idle(); });
    walkBut.onClick.AddListener(delegate { ChangeStateTo(SlimeAnimationState.Walk); });
    jumpBut.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Jump); });
    attackBut.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Attack); });
    damageBut0.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 0; });
    damageBut1.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 1; });
    damageBut2.onClick.AddListener(delegate { LookAtCamera(); ChangeStateTo(SlimeAnimationState.Damage); mainSlime.GetComponent<EnemyAi>().damType = 2; });*/
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

  // 점프1
  public void JumpFriend1(SlimeAnimationState state)
  {
    if (slimeFriend1 == null) return;
    if (state == slimeFriend1.GetComponent<EnemyAi>().currentState) return;

    slimeFriend1.GetComponent<EnemyAi>().currentState = state;
  }

  public void JumpAtTTS1()
  {
    JumpFriend1(SlimeAnimationState.Jump);
  }

  // 점프2
  public void JumpFriend2(SlimeAnimationState state)
  {
    if (slimeFriend2 == null) return;
    if (state == slimeFriend2.GetComponent<EnemyAi>().currentState) return;

    slimeFriend2.GetComponent<EnemyAi>().currentState = state;
  }

  public void JumpAtTTS2()
  {
    JumpFriend2(SlimeAnimationState.Jump);
  }

  // 점프3
  public void JumpFriend3(SlimeAnimationState state)
  {
    if (slimeFriend3 == null) return;
    if (state == slimeFriend3.GetComponent<EnemyAi>().currentState) return;

    slimeFriend3.GetComponent<EnemyAi>().currentState = state;
  }

  public void JumpAtTTS3()
  {
    JumpFriend3(SlimeAnimationState.Jump);
  }

  // 점프4
  public void JumpFriend4(SlimeAnimationState state)
  {
    if (slimeFriend4 == null) return;
    if (state == slimeFriend4.GetComponent<EnemyAi>().currentState) return;

    slimeFriend4.GetComponent<EnemyAi>().currentState = state;
  }

  public void JumpAtTTS4()
  {
    JumpFriend4(SlimeAnimationState.Jump);
  }

  // 점프5
  public void JumpFriend5(SlimeAnimationState state)
  {
    if (slimeFriend5 == null) return;
    if (state == slimeFriend5.GetComponent<EnemyAi>().currentState) return;

    slimeFriend5.GetComponent<EnemyAi>().currentState = state;
  }

  public void JumpAtTTS5()
  {
    JumpFriend5(SlimeAnimationState.Jump);
  }

  // 점프6
  public void JumpFriend6(SlimeAnimationState state)
  {
    if (slimeFriend6 == null) return;
    if (state == slimeFriend6.GetComponent<EnemyAi>().currentState) return;

    slimeFriend6.GetComponent<EnemyAi>().currentState = state;
  }

  public void JumpAtTTS6()
  {
    JumpFriend6(SlimeAnimationState.Jump);
  }

  public void ChangeStateToFriends(SlimeAnimationState state)
  {
    if (slimeFriend1 == null) return;
    if (state == slimeFriend1.GetComponent<EnemyAi>().currentState) return;

    slimeFriend1.GetComponent<EnemyAi>().currentState = state;

    if (slimeFriend2 == null) return;
    if (state == slimeFriend2.GetComponent<EnemyAi>().currentState) return;

    slimeFriend2.GetComponent<EnemyAi>().currentState = state;

    if (slimeFriend3 == null) return;
    if (state == slimeFriend3.GetComponent<EnemyAi>().currentState) return;

    slimeFriend3.GetComponent<EnemyAi>().currentState = state;

    if (slimeFriend4 == null) return;
    if (state == slimeFriend4.GetComponent<EnemyAi>().currentState) return;

    slimeFriend4.GetComponent<EnemyAi>().currentState = state;

    if (slimeFriend5 == null) return;
    if (state == slimeFriend5.GetComponent<EnemyAi>().currentState) return;

    slimeFriend5.GetComponent<EnemyAi>().currentState = state;

    if (slimeFriend6 == null) return;
    if (state == slimeFriend6.GetComponent<EnemyAi>().currentState) return;

    slimeFriend6.GetComponent<EnemyAi>().currentState = state;
  }



  public void ChangeStateToCustom()
  {
    ChangeStateTo(SlimeAnimationState.Jump);
    ChangeStateToFriends(SlimeAnimationState.Walk);
  }
  void LookAtCamera()
  {
    mainSlime.transform.rotation = Quaternion.Euler(new Vector3(mainSlime.transform.rotation.x, cam.transform.rotation.y, mainSlime.transform.rotation.z));
  }
}
