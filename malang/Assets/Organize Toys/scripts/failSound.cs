using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class failSound : MonoBehaviour
{
  public AudioSource mysound;
  public AudioClip myclip;
  // Start is called before the first frame update
  void Start()
  {
    clearSound();
  }

  // Update is called once per frame
  void Update()
  {

  }

  public void clearSound()
  {
    mysound.PlayOneShot(myclip);
  }
}
