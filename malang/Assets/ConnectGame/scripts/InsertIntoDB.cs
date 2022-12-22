using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;
using Mono.Data;
using System.Data;
using UnityEngine.UI;
using System;
using System.Linq;
using TMPro;
using UnityEngine.Android;
using System.IO;
using System.Net;
using System.Text;
using System.Security;
//using UnityEditorInternal;

public class InsertIntoDB : MonoBehaviour
{

  AudioSource audioSource;

  private void Start()
  {

    this.audioSource = GetComponent<AudioSource>();

    StartCoroutine(AskForPermissions());
    DisplayUser();
  }

  private void Update()
  {

  }

  private void makeNameSound(string _name)
  {
    string text = "내 이름은 " + _name + "! 오늘은 말랑 유치원에 가는 날!"; // 음성합성할 문자값
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
    using (Stream output = File.OpenWrite(Application.persistentDataPath + "/tts.mp3"))
    using (Stream input = response.GetResponseStream())
    {
      input.CopyTo(output);
    }
  }


  private IEnumerator AskForPermissions()
  {
#if UNITY_ANDROID
    List<bool> permissions = new List<bool>() { false, false, false, false };
    List<bool> permissionsAsked = new List<bool>() { false, false, false, false };
    List<Action> actions = new List<Action>()
    {
        new Action(() => {
            permissions[0] = Permission.HasUserAuthorizedPermission(Permission.Microphone);
            if (!permissions[0] && !permissionsAsked[0])
            {
                Permission.RequestUserPermission(Permission.Microphone);
                permissionsAsked[0] = true;
                return;
            }
        }),
        new Action(() => {
            permissions[1] = Permission.HasUserAuthorizedPermission(Permission.Camera);
            if (!permissions[1] && !permissionsAsked[1])
            {
                Permission.RequestUserPermission(Permission.Camera);
                permissionsAsked[1] = true;
                return;
            }
        }),
        new Action(() => {
            permissions[2] = Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite);
            if (!permissions[2] && !permissionsAsked[2])
            {
                Permission.RequestUserPermission(Permission.ExternalStorageWrite);
                permissionsAsked[2] = true;
                return;
            }
        }),
      new Action(() => {
            permissions[3] = Permission.HasUserAuthorizedPermission(Permission.ExternalStorageRead);
            if (!permissions[3] && !permissionsAsked[3])
            {
                Permission.RequestUserPermission(Permission.ExternalStorageRead);
                permissionsAsked[3] = true;
                return;
            }
        })
    };
    for (int i = 0; i < permissionsAsked.Count;)
    {
      actions[i].Invoke();
      if (permissions[i])
      {
        ++i;
      }
      yield return new WaitForEndOfFrame();
    }
#endif
  }


  public static string DataBaseName = "test";
  public InputField NameInput;

  public void InsertInto()
  {
    var _NameInput = NameInput.text.Trim();
    if (_NameInput == "")
    {
      return;
    }

    string conn = SetDataBaseClass.SetDataBase(DataBaseName + ".db");
    IDbConnection dbcon;
    IDbCommand dbcmd;
    IDataReader reader;

    dbcon = new SqliteConnection(conn);
    dbcon.Open();
    dbcmd = dbcon.CreateCommand();
    string SQLquery = "Insert Into user (name) " + "Values('" + _NameInput + "')";
    dbcmd.CommandText = SQLquery;
    reader = dbcmd.ExecuteReader();
    while (reader.Read())
    {

    }

    reader.Close();
    reader = null;
    dbcmd.Dispose();
    dbcmd = null;
    dbcon.Close();
    dbcon = null;

    DisplayUser();

  }

  public InputField IDInput;
  public Text NameText;

  public void FindItem()
  {
    var _IDInput = IDInput.text.Trim();
    NameText.text = "";

    string conn = SetDataBaseClass.SetDataBase(DataBaseName + ".db");
    IDbConnection dbcon;
    IDbCommand dbcmd;
    IDataReader reader;

    dbcon = new SqliteConnection(conn);
    dbcon.Open();
    dbcmd = dbcon.CreateCommand();
    string SQLquery = "Select name FROM user Where id='" + _IDInput + "'";
    dbcmd.CommandText = SQLquery;
    reader = dbcmd.ExecuteReader();
    while (reader.Read())
    {
      NameText.text = reader.GetString(0);
      Debug.Log(NameText.text);
      Debug.Log("what?");
    }

    reader.Close();
    reader = null;
    dbcmd.Dispose();
    dbcmd = null;
    dbcon.Close();
    dbcon = null;
  }

  public Text User;
  [SerializeField] public TextMeshProUGUI userName;

  public void DisplayUser()
  {
    User.text = "이름을 입력하세요";

    string[] array = { };
    List<string> list = new List<string>(array.ToList());

    string conn = SetDataBaseClass.SetDataBase(DataBaseName + ".db");
    IDbConnection dbcon;
    IDbCommand dbcmd;
    IDataReader reader;

    dbcon = new SqliteConnection(conn);
    dbcon.Open();
    dbcmd = dbcon.CreateCommand();
    string SQLquery = "Select * FROM user";
    dbcmd.CommandText = SQLquery;
    reader = dbcmd.ExecuteReader();
    while (reader.Read())
    {
      list.Add(reader["name"].ToString());
    }

    reader.Close();
    reader = null;
    dbcmd.Dispose();
    dbcmd = null;
    dbcon.Close();
    dbcon = null;


    array = list.ToArray();
    if (array.Length > 0)
    {
      userName.text = array[array.Length - 1];
      if (array[array.Length - 1] == "")
      {
        User.text = "이름을 입력하세요";
      }
      else
      {
        User.text = array[array.Length - 1];
      }
      
      NameController.userName = array[array.Length - 1];
      Debug.Log("dddddd");
      makeNameSound(array[array.Length - 1]);
    }
  }

  public static void getCurrentMalang()
  {
    string conn = SetDataBaseClass.SetDataBase(DataBaseName + ".db");
    IDbConnection dbcon;
    IDbCommand dbcmd;
    IDataReader reader;

    dbcon = new SqliteConnection(conn);
    dbcon.Open();
    dbcmd = dbcon.CreateCommand();
    string SQLquery = "Select * FROM malang";
    dbcmd.CommandText = SQLquery;
    reader = dbcmd.ExecuteReader();
    // 킹, 토끼, 감자, 쫄병, 잎, 새싹, 바이킹
    NameController._getMalangs = new int[] { 0, 0, 0, 0, 0, 0, 0 };
    while (reader.Read())
    {
      Debug.Log(reader["name"].ToString());
      if (reader["name"].ToString() == "king")
      {
        NameController._getMalangs[0] += 1;
      }
      if (reader["name"].ToString() == "rabbit")
      {
        NameController._getMalangs[1] += 1;
      }
      if (reader["name"].ToString() == "basic")
      {
        NameController._getMalangs[2] += 1;
      }
      if (reader["name"].ToString() == "zzol")
      {
        NameController._getMalangs[3] += 1;
      }
      if (reader["name"].ToString() == "leaf")
      {
        NameController._getMalangs[4] += 1;
      }
      if (reader["name"].ToString() == "sprout")
      {
        NameController._getMalangs[5] += 1;
      }
      if (reader["name"].ToString() == "viking")
      {
        NameController._getMalangs[6] += 1;
      }
    }

    /*// 왕 말랑
    for (int i = 0; i < NameController._getMalangs[0]; i++)
    {
      NameController._kings[i] = 1;
    }

    // 토끼 말랑
    for (int i = 0; i < NameController._getMalangs[1]; i++)
    {
      NameController._rabbits[i] = 1;
    }

    // 감자 말랑
    for (int i = 0; i < NameController._getMalangs[2]; i++)
    {
      NameController._basics[i] = 1;
    }

    // 쫄병 말랑
    for (int i = 0; i < NameController._getMalangs[3]; i++)
    {
      NameController._zzols[i] = 1;
    }

    // 잎 말랑
    for (int i = 0; i < NameController._getMalangs[4]; i++)
    {
      NameController._leafs[i] = 1;
    }

    // 새싹 말랑
    for (int i = 0; i < NameController._getMalangs[5]; i++)
    {
      NameController._sprouts[i] = 1;
    }

    // 바이킹 말랑
    for (int i = 0; i < NameController._getMalangs[6]; i++)
    {
      NameController._vikings[i] = 1;
    }*/



    reader.Close();
    reader = null;
    dbcmd.Dispose();
    dbcmd = null;
    dbcon.Close();
    dbcon = null;


  }
}
