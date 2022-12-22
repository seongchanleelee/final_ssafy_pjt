using System.Collections;
using System.Collections.Generic;
// using System.Drawing.Text;
using UnityEngine;
using UnityEngine.SceneManagement;

public class collution : MonoBehaviour
{
    AudioSource sound;
    private void Start()
    {
        sound = GetComponent<AudioSource>();
    }
    // Start is called before the first frame update
    private void OnCollisionEnter(Collision collision)
    {
        
    }
}
