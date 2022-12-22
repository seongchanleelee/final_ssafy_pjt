using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class CarManager : MonoBehaviour
{
    public GameObject indicator;
    public GameObject myCar;
    ARRaycastManager arManager;
    GameObject placedObject;

    // Start is called before the first frame update
    void Start()
    {
        // ȭ���� ������ �ʵ��� ����
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        // �������ڸ��� �ε������� ��Ȱ��ȭ
        indicator.SetActive(false);
        // AR Raycast Manager ������Ʈ ������
        arManager = GetComponent<ARRaycastManager>();

    }

    // Update is called once per frame
    void Update()
    {
        DetectGround();
        //�ڵ��� �𵨸� ����
        //�ε������Ͱ� Ȱ��ȭ �Ǿ� �����鼭 ȭ�� ��ġ�� �ִٸ�
        if(indicator.activeInHierarchy && Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if(touch.phase == TouchPhase.Began)
            {
                if (placedObject == null)
                {
                    placedObject = Instantiate(myCar, indicator.transform.position, indicator.transform.rotation);
                }
                else
                {
                    placedObject.transform.SetPositionAndRotation(indicator.transform.position, indicator.transform.rotation);
                }
            }
        }
    }

    //�ٴ� ���� �� indicator ��� �Լ�
    void DetectGround()
    {
        Vector2 ScreenSize = new Vector2 (Screen.width * 0.5f, Screen.height * 0.5f);
        List<ARRaycastHit> hitinfos = new List<ARRaycastHit> ();

        //ray�� �̿��� �ٴ� ����
        if (arManager.Raycast(ScreenSize, hitinfos, UnityEngine.XR.ARSubsystems.TrackableType.Planes))
        {
            // �ε������� Ȱ��ȭ
            indicator.SetActive(true);
            // �ε��������� ��ġ�� ȸ�� ���� ���̰� ���� ������ ��ġ
            indicator.transform.position = hitinfos[0].pose.position;
            indicator.transform.rotation = hitinfos[0].pose.rotation;
            //�ε������� ��ġ�� ���� 0.1���� �ø�
            indicator.transform.position += indicator.transform.up * 0.1f;
        }
        else
        {
            indicator.SetActive(false);
        }
        
    }

}

