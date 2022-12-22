using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class getName : MonoBehaviour
{
  [SerializeField] public TextMeshProUGUI userName;

  // Start is called before the first frame update
  private void Start()
  {
    userName.text = NameController.userName;
  }

  private void Update()
  {

  }

}
