using FreeDraw;
using UnityEngine;

public class EraserSetting : MonoBehaviour
{
  private Vector3 position;
  private float offset = 0.3f;

  public AudioClip audio;
  AudioSource audioSource;

  private void Awake()
  {
    position = transform.position;
    audioSource = GetComponent<AudioSource>();
    audioSource.clip = audio;
  }
  private void Update()
  {
    //터치했다면
    if (Input.touchCount > 0)
    {
      Touch touch = Input.GetTouch(0);
      Vector3 wp = Camera.main.ScreenToWorldPoint(touch.position);
      Vector2 pos = new Vector2(wp.x, wp.y);
      //RaycastHit2D hitInfo = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(pos), Vector2.zero);
      // RaycastHit2D can be either true or null, but has an implicit conversion to bool, so we can use it like this
      if (GetComponent<Collider2D>() == Physics2D.OverlapPoint(pos))//(hitInfo)
      {
        //Debug.Log(hitInfo.transform.gameObject.name);
        // Here you can check hitInfo to see which collider has been hit, and act appropriately.
        transform.position = new Vector3(position.x, position.y + offset, position.z);
        //GameObject.Find("DrawingSettings").GetComponent<DrawingSettings>()//.SetEraser();
        audioSource.Play();
        GameObject.Find("OcrNotebook").GetComponent<Drawable>().ResetCanvas();
      }
    }
    else
    {
      transform.position = position;
    }
  }
}
