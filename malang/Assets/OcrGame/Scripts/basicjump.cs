using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class basicjump : MonoBehaviour
{
  public GameObject basic;
  // Start is called before the first frame update
  void Start()
  {

  }

  // Update is called once per frame
  void Update()
  {
    basic.GetComponent<Animator>().SetTrigger("Jump");
  }
}
