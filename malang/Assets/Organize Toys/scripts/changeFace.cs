using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeFace : MonoBehaviour
{
  public GameObject leaf;
  public GameObject basic;
  public GameObject zzol;
  public GameObject rabbit;
  public GameObject viking;
  public GameObject sprout;
  public GameObject king;

  private GameObject slimeBody;
  private Material faceMaterial;
  public Face faces;

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

    slimeBody = GameObject.FindGameObjectWithTag("SlimeBody");
    faceMaterial = slimeBody.GetComponent<Renderer>().materials[1];
    faceMaterial.SetTexture("_MainTex", faces.damageFace);
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
