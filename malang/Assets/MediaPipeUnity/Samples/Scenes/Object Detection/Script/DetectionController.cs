using UnityEngine;
using Mediapipe.Unity;

public class DetectionController : MonoBehaviour
{
    void Start()
    {
    //후면카메라로 교체
    var imageSource = ImageSourceProvider.ImageSource;
    imageSource.SelectSource(0);//후면카메라
    //gameObject.AddComponent<ImageSourceConfig>().InitializeResolution();
    Debug.Log("교체끝");
  }
}
