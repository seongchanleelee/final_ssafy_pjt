using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

public class WebCam : MonoBehaviour
{

  WebCamTexture webCamTexture;
  public string path;
  public RawImage imageDisplayForPhotoSnap;

  void Start()
  {
    //권한확인
    if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
    {
      Permission.RequestUserPermission(Permission.Camera);
    }

    //카메라 없을때
    if (WebCamTexture.devices.Length == 0)
    {
      Debug.Log("no camera");
      return;
    }

    WebCamDevice[] devices = WebCamTexture.devices;
    int selectedCameraIdx = -1;

    //후면카메라 찾기
    for (int i = 0; i < devices.Length; i++)
    {
      if (!devices[i].isFrontFacing)
      {
        selectedCameraIdx = i;
        break;
      }
    }

    if (selectedCameraIdx < 0) { return; }

    webCamTexture = new WebCamTexture(devices[selectedCameraIdx].name);
    GetComponent<Renderer>().material.mainTexture = webCamTexture;
    webCamTexture.Play();
  }

  private void OnDisable()
  {
    if (webCamTexture != null)
    {
      webCamTexture.Stop();
      Destroy(webCamTexture);
      webCamTexture = null;
    }
  }
}
