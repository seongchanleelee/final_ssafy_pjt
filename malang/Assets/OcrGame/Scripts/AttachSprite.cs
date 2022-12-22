using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttachSprite : MonoBehaviour
{
  string[] names = new string[OcrGameConfig.GetNameLength()];
  private float x = 0;
  private float scale = 0.05f;
  private void Awake()
  {
    for (var i = 0; i < names.Length; i++)
    {
      names[i] = "name_" + (i + 1) + ".png";
    }
  }
  private void Start()
  {
    //GameObject go = new GameObject("ResultObject");//새로운 gameobject 생성

    //이름 글자수만큼 반복
    //반복안에서 renderer 생성하기
    //renderer에 sprite붙이기.
    //sprite는 IMG2Sprite.instance.LoadNewSprite(FilePath, [PixelsPerUnit (optional)]) 이렇게 생성
    //파일이름규칙은 name_번호(1부터 시작).png

    transform.position = new Vector3(0, 0, 0);

    //basic malang
    var pos = Camera.main.transform;
    GameObject.Find("Basic").transform.position = pos.position + pos.forward * 1f + pos.up * -0.5f;

    for (var i = 0; i < OcrGameConfig.GetNameLength(); i++)
    {
      GameObject go = new GameObject(name);
      go.transform.position = new Vector3(0, 0, 0);
      var renderer = go.AddComponent<SpriteRenderer>();
      renderer.sprite = IMG2Sprite.instance.LoadNewSprite(Application.persistentDataPath + "/" + names[i]);
      renderer.transform.localScale = new Vector3(scale, scale, 1f);//width, height
      renderer.transform.position = new Vector3(x + (i - 1) * 0.2f, 0f, 1.01f);
      //renderer.transform.position = pos + transform.right * (i - 1) * 0.2f;

    }

  }


  private void OnDisable()
  {
    //모든 spriterenderer 지우기
    for (var i = 0; i < names.Length; i++)
    {
      DestroyImmediate(GameObject.Find(names[i]));
    }


    //foreach (var comp in gameObject.GetComponents<SpriteRenderer>())
    //{
    //  DestroyImmediate(comp);
    //}
  }
}
