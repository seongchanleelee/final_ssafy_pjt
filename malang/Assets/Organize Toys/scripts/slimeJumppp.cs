using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class slimeJumppp : MonoBehaviour
{
  public GameObject leaf;
  public GameObject basic;
  public GameObject zzol;
  public GameObject rabbit;
  public GameObject viking;
  public GameObject sprout;
  public GameObject king;

  // sound
  public AudioSource mysound;

  public AudioClip rabbitclip;
  public AudioClip sproutclip;
  public AudioClip kingclip;
  public AudioClip zzolclip;
  public AudioClip leafclip;
  public AudioClip basicclip;
  public AudioClip vikingclip;

  // Start is called before the first frame update
  void Start()
  {
    if (GameController.missionIdx == 0)
    {
      leaf.SetActive(false);
      basic.SetActive(false);
      zzol.SetActive(false);
      viking.SetActive(false);
      sprout.SetActive(false);
      king.SetActive(false);
      rabbit.SetActive(true);
      clearSound();
    }

    if (GameController.missionIdx == 1)
    {
      leaf.SetActive(false);
      basic.SetActive(false);
      zzol.SetActive(false);
      viking.SetActive(false);
      sprout.SetActive(true);
      king.SetActive(false);
      rabbit.SetActive(false);
      clearSound();
    }

    if (GameController.missionIdx == 2)
    {
      leaf.SetActive(false);
      basic.SetActive(false);
      zzol.SetActive(false);
      viking.SetActive(false);
      sprout.SetActive(false);
      king.SetActive(true);
      rabbit.SetActive(false);
      clearSound();
    }

    if (GameController.missionIdx == 3)
    {
      leaf.SetActive(false);
      basic.SetActive(false);
      zzol.SetActive(true);
      viking.SetActive(false);
      sprout.SetActive(false);
      king.SetActive(false);
      rabbit.SetActive(false);
      clearSound();
    }

    if (GameController.missionIdx == 4)
    {
      leaf.SetActive(true);
      basic.SetActive(false);
      zzol.SetActive(false);
      viking.SetActive(false);
      sprout.SetActive(false);
      king.SetActive(false);
      rabbit.SetActive(false);
      clearSound();
    }

    if (GameController.missionIdx == 5)
    {
      leaf.SetActive(false);
      basic.SetActive(true);
      zzol.SetActive(false);
      viking.SetActive(false);
      sprout.SetActive(false);
      king.SetActive(false);
      rabbit.SetActive(false);
      clearSound();
    }

    if (GameController.missionIdx == 6)
    {
      leaf.SetActive(false);
      basic.SetActive(false);
      zzol.SetActive(false);
      viking.SetActive(true);
      sprout.SetActive(false);
      king.SetActive(false);
      rabbit.SetActive(false);
      clearSound();
    }
  }

  // Update is called once per frame
  void Update()
  {

    leaf.GetComponent<Animator>().SetTrigger("Jump");
    basic.GetComponent<Animator>().SetTrigger("Jump");
    rabbit.GetComponent<Animator>().SetTrigger("Jump");
    zzol.GetComponent<Animator>().SetTrigger("Jump");
    sprout.GetComponent<Animator>().SetTrigger("Jump");
    king.GetComponent<Animator>().SetTrigger("Jump");
    viking.GetComponent<Animator>().SetTrigger("Jump");

  }

  public void clearSound()
  {
    if (GameController.missionIdx == 0)
    {
      mysound.PlayOneShot(rabbitclip);
      
    }

    if (GameController.missionIdx == 1)
    {
      mysound.PlayOneShot(sproutclip);
    }

    if (GameController.missionIdx == 2)
    {
      mysound.PlayOneShot(kingclip);
    }

    if (GameController.missionIdx == 3)
    {
      mysound.PlayOneShot(zzolclip);
    }

    if (GameController.missionIdx == 4)
    {
      mysound.PlayOneShot(leafclip);
      //mysound.clip = leafclip;
    }

    if (GameController.missionIdx == 5)
    {
      mysound.PlayOneShot(basicclip);
    }

    if (GameController.missionIdx == 6)
    {
      mysound.PlayOneShot(vikingclip);
    }

  }
}
