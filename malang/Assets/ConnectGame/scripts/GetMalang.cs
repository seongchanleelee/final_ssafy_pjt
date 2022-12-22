using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Mono.Data.Sqlite;
using Mono.Data;
using System.Data;
using UnityEngine.UI;
using System;
using System.Linq;
using UnityEngine.EventSystems;

public class GetMalang : MonoBehaviour
{
  public static string DataBaseName = "test";
  public static string[] _malangs = new string[] { "king", "sprout", "rabbit", "zzol", "leaf", "basic", "viking" };
  private static string malangDesc = "";
  public static string malang = "";
  [SerializeField] public TextMeshProUGUI malangName;

  // Start is called before the first frame update
  void Start()
  {
    //랜덤으로 말랑이 넣기
    //var randomObj = new System.Random();
    //var malangIdx = randomObj.Next(_malangs.Length);
    InsertMalang(_malangs[GameController.missionIdx]);
  }

  // Update is called once per frame
  void Update()
  {

  }

  public void InsertMalang(string malang)
  {
    string conn = SetDataBaseClass.SetDataBase(DataBaseName + ".db");
    IDbConnection dbcon;
    IDbCommand dbcmd;
    IDataReader reader;

    dbcon = new SqliteConnection(conn);
    dbcon.Open();
    dbcmd = dbcon.CreateCommand();
    string SQLquery = "Insert Into malang (name) " + "Values('" + malang + "')";
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

  }

}
