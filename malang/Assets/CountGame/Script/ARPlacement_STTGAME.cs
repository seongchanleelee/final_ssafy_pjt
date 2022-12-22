using FrostweepGames.Plugins.GoogleCloud.SpeechRecognition.Examples1;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ARPlacement_STTGAME : MonoBehaviour
{
  public GameObject arObjectToSpawn;
  public GameObject placementIndicator;
  //public GameObject shoot;
  //public GameObject GSTT;
  private GameObject spawnedObject;
  private Pose PlacementPose;
  private ARRaycastManager aRRaycastManager;
  private bool placementPoseIsValid = false;
  private bool summonPoseIsValid = false;
  TextMeshProUGUI questText; //퀘스트 텍스트 오브젝트
  public GameObject summonEffect;
  
  public AudioClip audioSummon;
  public AudioClip audioFist;
  public AudioClip audioFist1;
  public AudioClip audioFist2;

  AudioSource audioSource;
  int check = 0;

  // Start is called before the first frame update
  void Start()
  {
    Screen.sleepTimeout = SleepTimeout.NeverSleep; //디바이스 화면 꺼짐 방지
    aRRaycastManager = FindObjectOfType<ARRaycastManager>();
    questText = GameObject.FindGameObjectWithTag("SttGame_Quest").GetComponent<TextMeshProUGUI>(); //퀘스트 텍스트 오브젝트
                                                                                                   //GSTT.SetActive(false);
    this.audioSource = GetComponent<AudioSource>();
    PlaySound("FIRST");
  }

  // Update is called once per frame
  void Update()
  {

    if (spawnedObject == null && placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
    {
      ARPlaceObject();
      questText.text = "말랑이를 눌러주세요!";
      //GSTT.SetActive(true);
      PlaySound("FIRST2");
    }

    UpdatePlacementPose();
    UpdatePlacementIndicator();
  }

  void UpdatePlacementIndicator()
  {
    if (spawnedObject == null && placementPoseIsValid && summonPoseIsValid == false)
    {
      placementIndicator.SetActive(true);
      questText.text = "말랑이를 소환해 주세요!";
      if (check == 0)
      {
        check = 1;
        PlaySound("FIRST1");
      }
      placementIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);

    }
    else
    {
      placementIndicator.SetActive(false);
    }
  }

  void UpdatePlacementPose()
  {
    var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
    var hits = new List<ARRaycastHit>();
    aRRaycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

    placementPoseIsValid = hits.Count > 0;
    if (placementPoseIsValid)
    {
      PlacementPose = hits[0].pose;
    }
  }

  void ARPlaceObject()
  {
    summonEffect.SetActive(true);
    PlaySound("SUMMON");
    summonPoseIsValid = true;
    summonEffect.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
    //spawnedObject = Instantiate(arObjectToSpawn, PlacementPose.position, PlacementPose.rotation
    Handheld.Vibrate();
    Invoke("summon", 1);

  }

  void summon()
  {
    spawnedObject = Instantiate(arObjectToSpawn, PlacementPose.position, PlacementPose.rotation);
    summonEffect.SetActive(false);
    //Invoke("summonEffect.SetActive(true)", 3);
  }

  void PlaySound(string action)
  {
    switch (action)
    {
      case "SUMMON":
        audioSource.clip = audioSummon;
        break;
      case "FIRST":
        audioSource.clip = audioFist;
        break;
      case "FIRST1":
        audioSource.clip = audioFist1;
        break;
      case "FIRST2":
        audioSource.clip = audioFist2;
        break;
    }
    audioSource.Play();
  }
}
