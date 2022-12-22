using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

public class CameraManager : MonoBehaviour
{
  WebCamTexture camTexture;
  public RawImage cameraViewImage;

  public void CameraOn()
  {

    //카메라 권한 확인 및 승인요청
    if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
    {
      Permission.RequestUserPermission(Permission.Camera);
    }

    //카메라 없다면
    if (WebCamTexture.devices.Length == 0)
    {
      Debug.Log("no camera!");
      return;
    }

    WebCamDevice[] devices = WebCamTexture.devices;
    int selectedCameraIndex = -1;

    //후면카메라찾기
    for (int i = 0; i < devices.Length; i++)
    {
      if (!devices[i].isFrontFacing)
      {
        selectedCameraIndex = i;
        break;
      }
    }

    //카메라 켜기
    if (selectedCameraIndex >= 0)
    {
      //선택된 후면카메라 가져옴
      camTexture = new WebCamTexture(devices[selectedCameraIndex].name);
      //카메라 프레임설정
      camTexture.requestedFPS = 30;
      //영상을 raw image에 할당
      cameraViewImage.texture = camTexture;
      //카메라 시작
      camTexture.Play();
    }
  }

  public void CameraOff()
  {
    if (camTexture != null)
    {
      //카메라 정지
      camTexture.Stop();
      //카메라 객체 반납
      Destroy(camTexture);
      //변수 초기화
      camTexture = null;
    }

  }

  private void OnEnable()
  {
    CameraOn();
  }

  private void OnDisable()
  {
    CameraOff();
  }

}
