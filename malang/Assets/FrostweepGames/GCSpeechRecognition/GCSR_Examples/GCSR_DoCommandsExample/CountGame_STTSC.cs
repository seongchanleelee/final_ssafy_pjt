using System;
using System.Collections;
using System.ComponentModel;
using System.IO;
using System.Linq.Expressions;
using System.Net;
// using System.Security.Policy;
using System.Text;
using TMPro;
//using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using static UnityEngine.Networking.UnityWebRequest;
//using static System.Net.Mime.MediaTypeNames;
//using static UnityEditor.Experimental.GraphView.GraphView;
using Image = UnityEngine.UI.Image;
using Random = UnityEngine.Random;
using Text = UnityEngine.UI.Text;

namespace FrostweepGames.Plugins.GoogleCloud.SpeechRecognition.Examples1
{
  public class CountGame_STTSC : MonoBehaviour
  {

    private GCSpeechRecognition _speechRecognition;

    private Image _speechRecognitionState;


    private Button _startRecordButton,
             _stopRecordButton;

    private InputField _commandsInputField;

    private Text _resultText;

    private Dropdown _languageDropdown;

    private RectTransform _objectForCommand;

    ///
    public GameObject arCamera;
    RaycastHit hit;

    float timer; //stt지연 호출용
    int waitingTime; //stt지연 호출용
    private bool stopbool = false; //stt지연 용
    TextMeshProUGUI questText; //퀘스트 텍스트 오브젝트

    string[] commands = { "안녕하세요", "감사합니다", "잘 먹겠습니다", "사랑해요", "좋아해요", "다녀오겠습니다" }; //stt 문제 정답 리스트
    string[] commandsPick = { "틀렸습니다", "틀렸습니다", "틀렸습니다" }; //stt 문제 정답 픽스
    string[] commandsQuet = { "선생님을 만났을 땐 뭐라고 인사해야 할까요?", "선물을 받았을 땐 뭐라고 말해야 할까요?", "밥 먹기 전에 하는 인사는 무엇일까요?",
      "날 따라 말해볼까요? \n 사랑해요","날 따라 말해볼까요? \n좋아해요","외출할때 하는 말은 무엇일까요?" }; //stt 문제 리스트
    int commandsSelect;

    TextMeshProUGUI resultSFText; //퀘스트 텍스트 오브젝트
    Button resultButtonS;
    Button resultButtonF;
    Button lastButton; //마지막 버튼
    Button lastButton2; //마지막 버튼
    Button homeButton; //홈버튼

    //타이머 슬라이드
    Slider timerSlider;
    TextMeshProUGUI timerText;
    public float gameTime = 8.0f;  //타이머 시간
    Image fillImage;
    public Color32 normalFillColor;
    public Color32 warningFillColor;
    public float warningLimit;  // as a percentage
    public bool stopTimer;


    //정답 애니메이션
    private GameObject anim;
    private GameObject slimeBody;
    private Material faceMaterial;
    public Face faces;


    int GameSucces;
    int GameFail;

    public GameObject resulfSEffect;
    public GameObject resulfFEffect;
    public GameObject succesEffect;
    //상황 오브젝트
    public GameObject tableFood;
    public GameObject blackBoard;
    public GameObject heartEffect;
    public GameObject presentObj;
    public GameObject doorObj;
    Vector3 SlimePos;


    public AudioClip audioSuccess;
    public AudioClip audioFail;
    public AudioClip audioLast;
    public AudioClip audioLastFail;
    public AudioClip sttgame1;
    public AudioClip sttgame2;
    public AudioClip sttgame3;
    public AudioClip sttgame4;
    public AudioClip sttgame5;
    public AudioClip sttgame6;
    public AudioClip last_ss;
    public AudioClip last_ff;
    AudioSource audioSource;


    bool end;

    int Result;  //최종결과 = 1은 성공 0은 실패

    private void Start()
    {
      _speechRecognition = GCSpeechRecognition.Instance;
      _speechRecognition.RecognizeSuccessEvent += RecognizeSuccessEventHandler;
      _speechRecognition.RecognizeFailedEvent += RecognizeFailedEventHandler;

      _speechRecognition.FinishedRecordEvent += FinishedRecordEventHandler;
      _speechRecognition.StartedRecordEvent += StartedRecordEventHandler;
      _speechRecognition.RecordFailedEvent += RecordFailedEventHandler;

      _speechRecognition.EndTalkigEvent += EndTalkigEventHandler;

      _startRecordButton = transform.Find("Canvas/Button_StartRecord").GetComponent<Button>();
      _stopRecordButton = transform.Find("Canvas/Button_StopRecord").GetComponent<Button>();

      _speechRecognitionState = transform.Find("Canvas/Image_RecordState").GetComponent<Image>();

      _resultText = transform.Find("Canvas/Text_Result").GetComponent<Text>();

      _commandsInputField = transform.Find("Canvas/InputField_Commands").GetComponent<InputField>();

      _languageDropdown = transform.Find("Canvas/Dropdown_Language").GetComponent<Dropdown>();

      _objectForCommand = transform.Find("Canvas/Panel_PointArena/Image_Point").GetComponent<RectTransform>();

      _startRecordButton.onClick.AddListener(StartRecordButtonOnClickHandler);
      _stopRecordButton.onClick.AddListener(StopRecordButtonOnClickHandler);

      _startRecordButton.interactable = true;
      _stopRecordButton.interactable = false;
      _speechRecognitionState.color = Color.yellow;

      _languageDropdown.ClearOptions();

      _speechRecognition.RequestMicrophonePermission(null);

      for (int i = 0; i < Enum.GetNames(typeof(Enumerators.LanguageCode)).Length; i++)
      {
        _languageDropdown.options.Add(new Dropdown.OptionData(((Enumerators.LanguageCode)i).Parse()));
      }

      _languageDropdown.value = _languageDropdown.options.IndexOf(_languageDropdown.options.Find(x => x.text == Enumerators.LanguageCode.en_GB.Parse()));


      // select first microphone device
      if (_speechRecognition.HasConnectedMicrophoneDevices())
      {
        _speechRecognition.SetMicrophoneDevice(_speechRecognition.GetMicrophoneDevices()[0]);
      }
      //
      ////* ------------------------------------------------- *////

      timer = 0;
      waitingTime = 8; //stt 작동 시간 타이머 시간

      questText = GameObject.FindGameObjectWithTag("SttGame_Quest").GetComponent<TextMeshProUGUI>(); //퀘스트 텍스트 오브젝트
      resultButtonS = GameObject.FindGameObjectWithTag("ResultButtonS").GetComponent<Button>(); //성공 버튼
      resultButtonF = GameObject.FindGameObjectWithTag("ResultButtonF").GetComponent<Button>();   //실패 버튼
      lastButton = GameObject.FindGameObjectWithTag("LastButton").GetComponent<Button>();   //마지막 결과 버튼
      lastButton2 = GameObject.FindGameObjectWithTag("lastButton2").GetComponent<Button>();   //마지막 결과 버튼2
      //homeButton = GameObject.FindGameObjectWithTag("GoHome").GetComponent<Button>();

      resultSFText = GameObject.FindGameObjectWithTag("Stt_result").GetComponent<TextMeshProUGUI>();

      resultButtonS.gameObject.SetActive(false);
      resultButtonF.gameObject.SetActive(false);
      lastButton.gameObject.SetActive(false);
      lastButton2.gameObject.SetActive(false);

      lastButton.onClick.AddListener(OutSttGame);
      lastButton2.onClick.AddListener(OutSttGame);
      //homeButton.onClick.AddListener(GoHome);

      //타이머 슬라이드
      stopTimer = false;

      timerSlider = GameObject.FindGameObjectWithTag("SttTimerSlider").GetComponent<Slider>();
      timerText = GameObject.FindGameObjectWithTag("SttTimerText").GetComponent<TextMeshProUGUI>();
      fillImage = GameObject.FindGameObjectWithTag("SttSliderFill").GetComponent<Image>();
      timerText.text = "";
      timerSlider.maxValue = gameTime;
      timerSlider.value = gameTime;
      fillImage.color = normalFillColor;

      GameSucces = 0;
      GameFail = 0;
      gameTime = 8.0f;

      this.audioSource = GetComponent<AudioSource>();





    }

    void Update()
    {

      //Debug.Log(GameFail + "  실패");
      //Debug.Log(GameSucces + "  성공");

      SlimePos = GameObject.FindGameObjectWithTag("SlimeBody").transform.position;

      if (end == false && GameSucces >= 1 || GameFail >= 3)
      {
        end = true;
        Invoke("endGame", 3);

      }

      //정답 애니메이션
      anim = GameObject.FindGameObjectWithTag("Slime_king_180");
      slimeBody = GameObject.FindGameObjectWithTag("SlimeBody");
      faceMaterial = slimeBody.GetComponent<Renderer>().materials[1];


      //stt stop 지연작동 조건
      /*
      if (stopbool == false && GameObject.FindGameObjectWithTag("Slime_king_180") != null && Input.touchCount > 1 && Input.GetTouch(0).phase == TouchPhase.Began)
{
  Debug.Log("녹음시작");
  stopbool = true;
  StartRecordButtonOnClickHandler();
      }
*/

      if (stopbool == true)
      {
        timer += Time.deltaTime;

        // 타이머 슬라이드
        gameTime -= Time.deltaTime; //타이머 타임
        string textTime = gameTime.ToString("f0");

        if (stopTimer == false)
        {
          if (gameTime <= 5)
          {
            timerText.text = textTime;
            timerSlider.value = gameTime;
          }

        }

        if (timerSlider.value < ((warningLimit / 100) * timerSlider.maxValue))
        {
          fillImage.color = warningFillColor;
        }
      }

      if (timer > waitingTime)  //타이머 끝났을떄
      {
        timer = 0;
        gameTime = 8.0f; //타이머 시간
        fillImage.color = normalFillColor;
        stopbool = false;
        stopTimer = false;
        StopRecordButtonOnClickHandler();
      }
      //stt stop 지연작동 조건 끝

      //문제 시작조건 만들기 시작, 다음문제 버튼 리스너 만들기
      //if (GameObject.FindGameObjectWithTag("Slime_king_180") != null)
      //{
      //    int num = Random.Range(0, 3);
      //    questText.text = commands[num];
      //}

      ///
      if (stopbool == false && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began && GameSucces < 1 && GameFail < 3)
      {
        if (Physics.Raycast(arCamera.transform.position, arCamera.transform.forward, out hit))
        {
          if (hit.transform.tag == "Slime_king_180" && GameFail < 3 && GameSucces < 1 || hit.transform.tag == "ResultButtonS" || hit.transform.tag == "ResultButtonF")
          {




            resultButtonS.gameObject.SetActive(false);
            resultButtonF.gameObject.SetActive(false);

            commandsSelect = Random.Range(0, commandsQuet.Length);
            PlaySound(commandsSelect);

            //stt 문제 부분
            questText.text = "" + commandsQuet[commandsSelect] + "";
            commandsPick[0] = commands[commandsSelect];
            stopbool = true;
            faceMaterial.SetTexture("_MainTex", faces.attackFace);

            if (commandsSelect == 0)
            {
              setBlackBoard();
            }
            else if (commandsSelect == 1)
            {
              setPresentObj();
            }
            else if (commandsSelect == 2)
            {
              setTableFood();
            }
            else if (commandsSelect == 3 || commandsSelect == 4)
            {
              setHeartEffect();
            }
            else if (commandsSelect == 5)
            {
              setDoorObj();
            }

            Invoke("changeFaceIdle", 2);
            StartRecordButtonOnClickHandler();
          }


        }
      }

    }


    string AndroidRootPath()
    {
      string[] temp = (Application.persistentDataPath.Replace("Android", "")).Split(new string[] { "//" }, System.StringSplitOptions.None);
      Debug.Log(temp[0] + "rr");
      return (temp[0] + "/");
    }


    private void OnDestroy()
    {
      _speechRecognition.RecognizeSuccessEvent -= RecognizeSuccessEventHandler;
      _speechRecognition.RecognizeFailedEvent -= RecognizeFailedEventHandler;

      _speechRecognition.FinishedRecordEvent -= FinishedRecordEventHandler;
      _speechRecognition.StartedRecordEvent -= StartedRecordEventHandler;
      _speechRecognition.RecordFailedEvent -= RecordFailedEventHandler;

      _speechRecognition.EndTalkigEvent -= EndTalkigEventHandler;
    }

    private void StartRecordButtonOnClickHandler()
    {
      _startRecordButton.interactable = false;
      _stopRecordButton.interactable = true;
      _resultText.text = string.Empty;

      _speechRecognition.StartRecord(false);
    }

    private void StopRecordButtonOnClickHandler()
    {
      _stopRecordButton.interactable = false;
      _startRecordButton.interactable = true;

      _speechRecognition.StopRecord();
    }

    private void StartedRecordEventHandler()
    {
      _speechRecognitionState.color = Color.red;
    }

    private void RecordFailedEventHandler()
    {
      _speechRecognitionState.color = Color.yellow;
      _resultText.text = "<color=red>Start record Failed. Please check microphone device and try again.</color>";

      _stopRecordButton.interactable = false;
      _startRecordButton.interactable = true;
    }

    private void EndTalkigEventHandler(AudioClip clip, float[] raw)
    {
      FinishedRecordEventHandler(clip, raw);
    }

    private void FinishedRecordEventHandler(AudioClip clip, float[] raw)
    {
      if (_startRecordButton.interactable)
      {
        _speechRecognitionState.color = Color.yellow;
      }

      if (clip == null)
        return;

      RecognitionConfig config = RecognitionConfig.GetDefault();
      //config.languageCode = ((Enumerators.LanguageCode)_languageDropdown.value).Parse();
      config.languageCode = Enumerators.LanguageCode.ko_KR.Parse();
      config.audioChannelCount = clip.channels;
      // configure other parameters of the config if need

      GeneralRecognitionRequest recognitionRequest = new GeneralRecognitionRequest()
      {
        audio = new RecognitionAudioContent()
        {
          content = raw.ToBase64()
        },
        //audio = new RecognitionAudioUri() // for Google Cloud Storage object
        //{
        //	uri = "gs://bucketName/object_name"
        //},
        config = config
      };

      _speechRecognition.Recognize(recognitionRequest);
    }

    private void RecognizeFailedEventHandler(string error)
    {
      _resultText.text = "Recognize Failed: " + error;
    }


    private void RecognizeSuccessEventHandler(RecognitionResponse recognitionResponse)
    {
      _resultText.text = "결과: ";

      //가능 명령어
      //string[] commands = _commandsInputField.text.Split(',');
      //string[] commands = { "올라가.", "내려가." };
      //string[] commands = { "감사합니다.", "사랑합니다.", "좋아합니다.", "안녕하세요." };


      foreach (var result in recognitionResponse.results)
      {
        foreach (var alternative in result.alternatives)
        {
          //_resultText.text += "\n들어온 문장: " + alternative.transcript;
          _resultText.text = alternative.transcript;
          foreach (var command in commandsPick)
          {
            Debug.Log("여기서하나 1");
            //command.Trim(' ').ToLowerInvariant() == alternative.transcript.Trim(' ').ToLowerInvariant()

            if (alternative.transcript.Trim(' ').TrimEnd('.').ToLowerInvariant().Contains(command.Trim(' ').TrimEnd('.').ToLowerInvariant()))
            {
              Debug.Log("여기서하나 2");
              GameSucces += 1;
              //_resultText.text += "\n활성명령: " + command + ";"; // debug result command
              DoCommand(command.ToLowerInvariant().TrimEnd(' ').TrimEnd('.').TrimStart(' '));
              goto break1;
            }
            else
            {

            }
          }
        }
      }
      Debug.Log("여기서하나 3");
      DoCommand("틀렸습니다.");
    break1:
      Debug.Log("끝");

    }

    private void DoCommand(string command)
    {

      switch (command)
      {
        case "안녕하세요":
          succesGame();
          break;
        case "감사합니다":
          succesGame();
          break;
        case "잘 먹겠습니다":
        case "잘먹겠습니다":
          succesGame();
          break;
        case "사랑해요":
        case "사랑합니다":
          succesGame();
          break;
        case "좋아해요":
        case "좋아합니다":
          succesGame();
          break;
        case "다녀오겠습니다":
          succesGame();
          break;
        case "틀렸습니다.":
          timerText.text = "";
          Debug.Log("틀렸을때");
          questText.text = "말랑이를 눌러주세요!";
          GameFail += 1;
          resultButtonS.gameObject.SetActive(false);
          resultButtonF.gameObject.SetActive(true);
          faceMaterial.SetTexture("_MainTex", faces.damageFace);
          questObjectFalse();
          anim.GetComponent<Animator>().SetTrigger("Damage2");
          Invoke("changeFaceIdle", 2);
          if (GameFail < 3) PlaySound(98);
          else PlaySound(81);
          break;
        default:
          break;
      }
    }
    private void succesGame()
    {
      questObjectFalse();
      timerText.text = "";
      succesEffect.SetActive(true);
      succesEffect.transform.SetPositionAndRotation(SlimePos, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
      PlaySound(99);
      resultButtonF.gameObject.SetActive(false);
      resultButtonS.gameObject.SetActive(true);
      faceMaterial.SetTexture("_MainTex", faces.jumpFace);
      anim.GetComponent<Animator>().SetTrigger("Jump");
      Invoke("changeFaceIdle", 2);
      Invoke("endEnime", 2);
      questText.text = "말랑이를 눌러주세요!";

    }

    GameObject situationObj;

    private void setTableFood()
    {
      situationObj = Instantiate(tableFood, GameObject.FindGameObjectWithTag("SlimeBody").transform.position, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
    }

    private void setBlackBoard()
    {
      situationObj = Instantiate(blackBoard, GameObject.FindGameObjectWithTag("SlimeBody").transform.position, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
    }

    private void setPresentObj()
    {
      situationObj = Instantiate(presentObj, GameObject.FindGameObjectWithTag("SlimeBody").transform.position, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
    }
    private void setDoorObj()
    {
      situationObj = Instantiate(doorObj, GameObject.FindGameObjectWithTag("SlimeBody").transform.position, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
    }

    private void setHeartEffect()
    {
      heartEffect.SetActive(true);
      heartEffect.transform.SetPositionAndRotation(SlimePos, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
    }

    private void questObjectFalse()
    {
      Destroy(situationObj);
      heartEffect.SetActive(false);
    }

    private void changeFaceIdle()
    {
      faceMaterial.SetTexture("_MainTex", faces.Idleface);
    }

    private void endGame()
    {

      //게임 종료조건
      if (GameSucces >= 1)
      {
        resulfSEffect.SetActive(true);
        SlimePos.y = SlimePos.y + 2;
        resulfSEffect.transform.SetPositionAndRotation(SlimePos, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
        Result = 1;
        questText.text = "";
        timerText.text = "";
        resultButtonF.gameObject.SetActive(false);
        resultButtonS.gameObject.SetActive(false);
        //lastButton.gameObject.SetActive(true);
        //resultSFText.text = "성공";
        PlaySound(80);
        Invoke("OutSttGame", 3);

      }
      else if (GameFail >= 3)
      {
        resulfFEffect.SetActive(true);
        SlimePos.y = SlimePos.y + 2;
        resulfFEffect.transform.SetPositionAndRotation(SlimePos, GameObject.FindGameObjectWithTag("SlimeBody").transform.rotation);
        Result = 0;
        questText.text = "";
        timerText.text = "";
        resultButtonF.gameObject.SetActive(false);
        resultButtonS.gameObject.SetActive(false);
        //lastButton2.gameObject.SetActive(true);
        //resultSFText.text = "실패";
        //PlaySound(81);
        Invoke("OutSttGame", 3);
      }
    }


    void PlaySound(int action)
    {
      switch (action)
      {
        case 80:
          audioSource.clip = last_ss;
          break;
        case 81:
          audioSource.clip = last_ff;
          break;
        case 99:
          audioSource.clip = audioSuccess;
          break;
        case 98:
          audioSource.clip = audioFail;
          break;
        case 90:
          audioSource.clip = audioLast;
          break;
        case 91:
          audioSource.clip = audioLastFail;
          break;
        case 0:
          audioSource.clip = sttgame1;
          break;
        case 1:
          audioSource.clip = sttgame2;
          break;
        case 2:
          audioSource.clip = sttgame3;
          break;
        case 3:
          audioSource.clip = sttgame4;
          break;
        case 4:
          audioSource.clip = sttgame5;
          break;
        case 5:
          audioSource.clip = sttgame6;
          break;
      }
      audioSource.Play();
    }

    private void endEnime()
    {
      succesEffect.SetActive(false);
    }


    private void makeNameSound()
    {
      string text = "좋은 하루 되세요."; // 음성합성할 문자값
      string url = "https://naveropenapi.apigw.ntruss.com/tts-premium/v1/tts";
      HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
      request.Headers.Add("X-NCP-APIGW-API-KEY-ID", "2ww605y0lj");
      request.Headers.Add("X-NCP-APIGW-API-KEY", "wMu6EtfcDC0mGMN2vLguWBCdWWVERaJN9yyJYtfA");
      request.Method = "POST";
      byte[] byteDataParams = Encoding.UTF8.GetBytes("speaker=nara&volume=0&speed=0&pitch=0&format=mp3&text=" + text);
      request.ContentType = "application/x-www-form-urlencoded";
      request.ContentLength = byteDataParams.Length;
      Stream st = request.GetRequestStream();
      st.Write(byteDataParams, 0, byteDataParams.Length);
      st.Close();
      HttpWebResponse response = (HttpWebResponse)request.GetResponse();
      string status = response.StatusCode.ToString();
      using (Stream output = File.OpenWrite("/storage/emulated/0/Download/tts.mp3"))
      using (Stream input = response.GetResponseStream())
      {
        input.CopyTo(output);
      }
    }

    IEnumerator TestWWW()
    {

      // 사용법
      //StartCoroutine(TestWWW());
      // StopCoroutine(TestWWW());


      WWW www = new WWW("file:///storage/emulated/0/Download/tts.mp3");
      yield return www;
      audioSource.clip = www.GetAudioClip();
      audioSource.Play();
    }

    private void OutSttGame()
    {
      if (Result == 1) SceneManager.LoadScene("SuccessScene");
      else if (Result == 0) SceneManager.LoadScene("FailScene");

      // 변수 Result == 1이면 성공 0이면 실패;
      //끝났을때 나가기 버튼
    }

    private void GoHome()
    {
      //홈버튼
      SceneManager.LoadScene("AniTestScene");

    }

  }
}
