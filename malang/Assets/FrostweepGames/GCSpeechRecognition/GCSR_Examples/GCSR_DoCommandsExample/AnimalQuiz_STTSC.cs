using System;
using System.CodeDom;
using TMPro;
// using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using Image = UnityEngine.UI.Image;
using Text = UnityEngine.UI.Text;
using UnityEngine.SceneManagement;

namespace FrostweepGames.Plugins.GoogleCloud.SpeechRecognition.Examples2
{
  public class AnimalQuiz_STTSC : MonoBehaviour
  {
    private GCSpeechRecognition _speechRecognition;
    private Image _speechRecognitionState;
    private Button _startRecordButton, _stopRecordButton;
    private InputField _commandsInputField;
    private Text _resultText;
    private Dropdown _languageDropdown;

    public GameObject arCamera;
    public GameObject arSessionOrigin;

    float timer; //stt지연 호출용
    int waitingTime; //stt지연 호출용
    private bool stopbool = false; //stt지연 용

    TextMeshProUGUI timerText;
    public float gameTime = 7.0f;  //타이머 시간
    public Color32 normalFillColor;
    public Color32 warningFillColor;
    public float warningLimit;  // as a percentage
    public bool stopTimer;

    //정답 애니메이션
    public Face faces;

    GameObject cat;
    GameObject cow;
    GameObject dog;
    GameObject pig;
    GameObject wolf;
    GameObject tiger;

    private int successCnt = 0;
    private int gameCnt = 0;

    public GameObject hitObject;

    private void Start()
    {
      arSessionOrigin = GameObject.Find("AR Session Origin");

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

      timer = 0;
      waitingTime = 7; //stt 작동 시간 타이머 시간

      timerText = GameObject.FindGameObjectWithTag("SttTimerText").GetComponent<TextMeshProUGUI>();
    }


    void Update()
    {
      cat = GameObject.FindGameObjectWithTag("cat");
      cow = GameObject.FindGameObjectWithTag("cow");
      dog = GameObject.FindGameObjectWithTag("dog");
      pig = GameObject.FindGameObjectWithTag("pig");
      wolf = GameObject.FindGameObjectWithTag("wolf");
      tiger = GameObject.FindGameObjectWithTag("tiger");
      //stt stop 지연작동 조건

      if (stopbool)
      {
        timer += Time.deltaTime;

        // 타이머 슬라이드
        gameTime -= Time.deltaTime; //타이머 타임
        string textTime = gameTime.ToString("f0");

        if (stopTimer == false)
        {
          timerText.text = textTime;
        }
      }

      if (timer > waitingTime)  //타이머 끝났을떄
      {
        timer = 0;
        gameTime = 7.0f; //타이머 시간

        stopbool = false;
        stopTimer = false;
        StopRecordButtonOnClickHandler();
      }
      //stt stop 지연작동 조건 끝

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

    public void StartGame()
    {
      Debug.Log("스타트 게임");
      stopbool = true;
      StartRecordButtonOnClickHandler();
    }

    private void StartRecordButtonOnClickHandler()
    {
      Debug.Log("녹음 시작");
      _startRecordButton.interactable = false;
      _stopRecordButton.interactable = true;
      _resultText.text = string.Empty;

      _speechRecognition.StartRecord(false);
    }

    private void StopRecordButtonOnClickHandler()
    {
      Debug.Log("녹음 끝");
      timerText.text = "";
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
      config.languageCode = Enumerators.LanguageCode.ko_KR.Parse();
      config.audioChannelCount = clip.channels;

      GeneralRecognitionRequest recognitionRequest = new GeneralRecognitionRequest()
      {
        audio = new RecognitionAudioContent()
        {
          content = raw.ToBase64()
        },
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

      string[] animal = new string[3];

      animal[0] = "틀렸습니다";
      animal[1] = "틀렸습니다";
      animal[2] = "틀렸습니다";

      if (cat != null)
      {
        animal[0] = "고양이";
      }
      else if (cow != null)
      {
        animal[0] = "소";
        animal[1] = "소오";
        animal[2] = "호";
      }
      else if (dog != null)
      {
        animal[0] = "강아지";
        animal[1] = "개";
      }
      else if (pig != null)
      {
        animal[0] = "돼지";
      }
      else if (wolf != null)
      {
        animal[0] = "늑대";
      }
      else if (tiger != null)
      {
        animal[0] = "호랑이";
        animal[1] = "호랑";
      }

      foreach (var result in recognitionResponse.results)
      {
        foreach (var alternative in result.alternatives)
        {
          _resultText.text += "\n들어온 문장: " + alternative.transcript;
          Debug.Log(_resultText.text + "1111");
          foreach (var command in animal)
          {
            if (alternative.transcript.Trim(' ').TrimEnd('.').ToLowerInvariant().Contains(command.ToLowerInvariant()))
            {
              _resultText.text += "\n활성명령: " + command + ";"; // debug result command
              DoCommand(command.ToLowerInvariant().TrimEnd(' ').TrimEnd('.').TrimStart(' '), animal[0]);

              goto break1;
            }
          }
        }
      }
      DoCommand("틀렸습니다.", animal[0]);

    break1:
      gameCnt++;
    }

    private void DoCommand(string command, string animal)
    {
      Debug.Log("결과: " + animal);

      if(command == "틀렸습니다.")
      {
        FailGame(animal);
      }
      else
      {
        SuccessGame();
      }
    }
    private void SuccessGame()
    {
      successCnt++;
      GameObject.FindGameObjectWithTag("animalSound").GetComponent<soundController>().SuccessSound();
      GameObject.Find("ButtonPanel").transform.Find("MainButton").GetComponent<Button>().gameObject.SetActive(true);
      arSessionOrigin.GetComponent<ARFaceSwitcher>().updateFace();
    }

    private void FailGame(string animal)
    {
      GameObject.FindGameObjectWithTag("animalSound").GetComponent<soundController>().FailSound(animal);
      GameObject.Find("ButtonPanel").transform.Find("FailButton").GetComponent<Button>().gameObject.SetActive(true);
      GameObject.FindGameObjectWithTag("failButton").GetComponent<TextMeshProUGUI>().text = " 땡! 정답은 " + animal + "!";
      arSessionOrigin.GetComponent<ARFaceSwitcher>().updateFace();
    }

    public void EndGame()
    {
      if (successCnt >= 1)
      {
        // 성공 화면
        Debug.Log("성공");
        SceneManager.LoadScene("SuccessScene");
      }
      if (gameCnt >= 3)
      {
        // 실패 화면
        Debug.Log("실패");
        SceneManager.LoadScene("FailScene");
      }

    }

  }
}
