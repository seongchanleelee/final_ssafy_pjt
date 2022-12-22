using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bubbleController : MonoBehaviour
{
  // Start is called before the first frame update
  void Start()
  {

  }

  // Update is called once per frame
  void Update()
  {
    SetBallPosition(Camera.main.transform);

  }

  void SetBallPosition(Transform anchor)
  {
    Vector3 offset = anchor.forward * 0.5f + anchor.up * -0.7f;

    transform.position = anchor.position + offset;
    transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
    transform.rotation = Quaternion.Euler(transform.rotation.x - 90, transform.rotation.y, transform.rotation.z);
  }
}
