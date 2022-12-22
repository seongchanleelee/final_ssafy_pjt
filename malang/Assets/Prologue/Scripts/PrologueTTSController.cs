using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrologueTTSController : MonoBehaviour
{
  public AudioClip audio1;
  public AudioClip audio2;

  AudioSource audioSource;

  void Awake()
  {
    this.audioSource = GetComponent<AudioSource>();
  }

  public void Bnt1()
  {
    audioSource.clip = audio1;
    audioSource.Play();
  }

  public void Bnt2()
  {
    audioSource.clip = audio2;
    audioSource.Play();
  }
}
