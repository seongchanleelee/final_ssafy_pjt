using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioSource : MonoBehaviour
{
  public AudioClip[] music;
  AudioSource sound;
  // Start is called before the first frame update
  void Start()
  {
    sound = GetComponent<AudioSource>();
    StartCoroutine("Playlist");
  }

  IEnumerator Playlist()
  {
    sound.clip = music[0];
    sound.Play();
    int i = 1;

    while (true)
    {
      yield return new WaitForSeconds(0.5f);
      if (!sound.isPlaying)
      {
        i++;
        if (i == music.Length)
          break;
        sound.clip = music[i];
        sound.Play();
        sound.loop = false;
      }
    }
  }
}
