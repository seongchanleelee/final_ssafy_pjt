using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorPenSetting : MonoBehaviour
{
  public Collider[] colliders;//빨노파검
  public GameObject[] malangs;//빨노파검
  Touch touch;

  public AudioClip audio;
  AudioSource audioSource;

  private void Awake()
  {
    audioSource = GetComponent<AudioSource>();
    audioSource.clip = audio;
  }

  void Update()
  {
    if (Input.touchCount > 0 && (touch = Input.GetTouch(0)).phase == TouchPhase.Began)
    {
      Ray ray;
      var touchPosToVector3 = new Vector3(touch.position.x, touch.position.y, 100);
      //Vector3 touchPos = Camera.main.ScreenToWorldPoint(touchPosToVector3);
      ray = Camera.main.ScreenPointToRay(touchPosToVector3);

      if (Physics.Raycast(ray, out var hit, 100))
      {
        ClickEvent(hit);
      }
    }
  }

  private void ClickEvent(RaycastHit hit)
  {
    for (var i = 0; i < colliders.Length; i++)
    {
      if (colliders[i].CompareTag(hit.collider.tag))
      {
        malangs[i].GetComponent<EnemyAi>().currentState = SlimeAnimationState.Jump;
        audioSource.Play();
        switch (i)
        {
          case 0://빨
            gameObject.GetComponent<FreeDraw.DrawingSettings>().SetMarkerRed();
            break;
          case 1://노
            gameObject.GetComponent<FreeDraw.DrawingSettings>().SetMarkerYellow();
            break;
          case 2://파
            gameObject.GetComponent<FreeDraw.DrawingSettings>().SetMarkerBlue();
            break;
          case 3://검
            gameObject.GetComponent<FreeDraw.DrawingSettings>().SetMarkerBlack();
            break;
        }
      }
    }

  }
}
