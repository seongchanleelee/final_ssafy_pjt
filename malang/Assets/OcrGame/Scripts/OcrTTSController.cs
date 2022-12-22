using System.Collections;
using UnityEngine;
using System.IO;
using System.Net;
using System.Text;

public class OcrTTSController : MonoBehaviour
{
  AudioSource audioSource;
  bool play = false;

  private void Awake()
  {
    MakeDesc();//오디오설정
  }

  private void Update()
  {
    audioSource = GetComponent<AudioSource>();
    if (!play)
    {
      StartCoroutine(playDesc());
      play = true;
    }
  }

  IEnumerator playDesc()
  {
    var path = "file://" + Application.persistentDataPath + "/ocr_desc.mp3";
    var path2 = "file:///storage/emulated/0/Android/data/com.c107.malang/files/tts.mp3";
    var path3 = "file:///storage/emulated/0/Download/tts.mp3";
    var www = new WWW(path);
    yield return www;
    audioSource.clip = www.GetAudioClip();
    audioSource.Play();
  }

  private void MakeDesc()
  {
    var name = NameController.userName;
    var say = name.Substring(1, name.Length - 1);
    say += NameController.isFinalConsonant() ? "아" : "야";
    MakeDescMp3(say);
  }

  private void MakeDescMp3(string _name)
  {
    string text = _name + "! 이름을 써보자! 색깔 말랑이를 누르면 색이 바뀌어! 지우개로 글자를 지울 수 있어!"; // 음성합성할 문자값
    string url = "https://naveropenapi.apigw.ntruss.com/tts-premium/v1/tts";
    HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
    request.Headers.Add("X-NCP-APIGW-API-KEY-ID", "2ww605y0lj");
    request.Headers.Add("X-NCP-APIGW-API-KEY", "wMu6EtfcDC0mGMN2vLguWBCdWWVERaJN9yyJYtfA");
    request.Method = "POST";
    byte[] byteDataParams = Encoding.UTF8.GetBytes("speaker=ndain&volume=0&speed=0&pitch=-2&format=mp3&text=" + text);
    request.ContentType = "application/x-www-form-urlencoded";
    request.ContentLength = byteDataParams.Length;
    Stream st = request.GetRequestStream();
    st.Write(byteDataParams, 0, byteDataParams.Length);
    st.Close();
    HttpWebResponse response = (HttpWebResponse)request.GetResponse();
    string status = response.StatusCode.ToString();
    //using (Stream output = File.OpenWrite("/storage/emulated/0/Android/data/com.c107.malang/files/tts.mp3"))
    using (Stream output = File.OpenWrite(Application.persistentDataPath + "/ocr_desc.mp3"))
    using (Stream input = response.GetResponseStream())
    {
      input.CopyTo(output);
    }
  }


}
