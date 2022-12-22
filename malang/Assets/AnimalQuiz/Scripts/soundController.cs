using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class soundController : MonoBehaviour
{
  public AudioClip audioCat;
  public AudioClip audioDog;
  public AudioClip audioCow;
  public AudioClip audioPig;
  public AudioClip audioWolf;
  public AudioClip audioTiger;

  public AudioClip audioFailCat;
  public AudioClip audioFailDog;
  public AudioClip audioFailCow;
  public AudioClip audioFailPig;
  public AudioClip audioFailWolf;
  public AudioClip audioFailTiger;
  public AudioClip audioSuccess;

  AudioSource audioSource;

  void Awake()
  {
    this.audioSource = GetComponent<AudioSource>();
  }

  public void CatSound()
  {
    audioSource.clip = audioCat;
    audioSource.Play();
  }
  public void CowSound()
  {
    audioSource.clip = audioCow;
    audioSource.Play();
  }
  public void DogSound()
  {
    audioSource.clip = audioDog;
    audioSource.Play();
  }
  public void PigSound()
  {
    audioSource.clip = audioPig;
    audioSource.Play();
  }
  public void WolfSound()
  {
    audioSource.clip = audioWolf;
    audioSource.Play();
  }
  public void TigerSound()
  {
    audioSource.clip = audioTiger;
    audioSource.Play();
  }

  public void FailSound(string animal)
  {
    switch (animal)
    {
      case "고양이":
        audioSource.clip = audioFailCat;
        audioSource.Play();
        break;
      case "소":
        audioSource.clip = audioFailCow;
        audioSource.Play();
        break;
      case "강아지":
        audioSource.clip = audioFailDog;
        audioSource.Play();
        break;
      case "돼지":
        audioSource.clip = audioFailPig;
        audioSource.Play();
        break;
      case "늑대":
        audioSource.clip = audioFailWolf;
        audioSource.Play();
        break;
      case "호랑이":
        audioSource.clip = audioFailTiger;
        audioSource.Play();
        break;
      default:
        break;
    }
  }

  public void SuccessSound()
  {
    audioSource.clip = audioSuccess;
    audioSource.Play();
  }


}
