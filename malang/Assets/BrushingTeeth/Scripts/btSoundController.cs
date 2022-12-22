using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class btSoundController : MonoBehaviour
{
  public AudioClip audio1;
  public AudioClip audio2;
  public AudioClip audio3;
  public AudioClip audio4;
  public AudioClip audio5;
  public AudioClip audio6;
  public AudioClip audio7;
  public AudioClip audio8;
  public AudioClip audio9;
  public AudioClip audio10;
  public AudioClip audio11;
  public AudioClip audio12;

  AudioSource audioSource;

  brushingTeethController bt;
  int max = -10;

  void Awake()
  {
    this.audioSource = GetComponent<AudioSource>();
    audioSource.Play();
    bt = GameObject.Find("Slider").GetComponent<brushingTeethController>();
  }

  private void Update()
  {
    if (bt.step > max)
    {
      switch (bt.step)
      {
        case 0:
          audioSource.clip = audio1; audioSource.Play();
          break;
        case 1:
          GameObject.Find("Game").GetComponent<AudioSource>().Play();
          audioSource.clip = audio2; audioSource.Play();
          break;
        case 2:
          audioSource.clip = audio3; audioSource.Play();
          break;
        case 3:
          audioSource.clip = audio4; audioSource.Play();
          break;
        case 4:
          audioSource.clip = audio5; audioSource.Play();
          break;
        case 5:
          audioSource.clip = audio6; audioSource.Play();
          break;
        case 6:
          audioSource.clip = audio7; audioSource.Play();
          break;
        case 7:
          audioSource.clip = audio8; audioSource.Play();
          break;
        case 8:
          audioSource.clip = audio9; audioSource.Play();
          break;
        case 9:
          audioSource.clip = audio10; audioSource.Play();
          break;
        case 10:
          audioSource.clip = audio11; audioSource.Play();
          break;
        case 11:
          audioSource.clip = audio12; audioSource.Play();
          break;
        default:
          break;
      }
      max = bt.step;
    }

  }
}
