using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Mono.Data.Sqlite;
using System;
using System.Data;
using System.IO;
using UnityEngine.Networking;
using UnityEngine.EventSystems;

public class UserManager : MonoBehaviour
{
    public Text nameList;
    public InputField nameInput;
    public Button InsertButton;

    private string conn, sqlQuery;
    IDbConnection dbconn;
    IDbCommand dbcmd;
    private IDataReader reader;
    string DBName = "user.db";

    private void Awake()
    {
        StartCoroutine(DBCreate());
    }

    // Start is called before the first frame update
    private void Start()
    {
        DBConnectionCheck();
    }

    IEnumerator DBCreate()
    {
        string filepath = string.Empty;
        if (Application.platform == RuntimePlatform.Android)
        {
            filepath = Application.persistentDataPath + "/" + DBName;
            if (!File.Exists(filepath))
            {
                UnityWebRequest unityWebRequest = UnityWebRequest.Get("jar:file://" + Application.dataPath + "!/assets/" + DBName); ;
                unityWebRequest.downloadedBytes.ToString();
                yield return unityWebRequest.SendWebRequest().isDone;
                File.WriteAllBytes(filepath, unityWebRequest.downloadHandler.data);
            }
            else
            {
                filepath = Application.dataPath + "/" + DBName;
                if (!File.Exists (filepath))
                {
                    File.Copy(Application.streamingAssetsPath + "/" + DBName, filepath);

                }
                
            }
        }

    }

    public string GetDBFilePath()
    {
        string str = string.Empty;
        if (Application.platform == RuntimePlatform.Android)
        {
            str = "URI=file:" + Application.persistentDataPath + "/" + DBName;

        }
        else
        {
            str = "URI=file:" + Application.dataPath + "/" + DBName;
        }
        return str;
    }

    public void DBConnectionCheck()
    {
        try
        {
            IDbConnection dbConnection = new SqliteConnection(GetDBFilePath());
            dbConnection.Open();

            if (dbConnection.State == ConnectionState.Open)
            {
                Debug.Log("success");
            }
            else
            {
                Debug.Log("fail(error)");
            }
        }
        catch(Exception e)
        {
            Debug.Log(e);
        }
    }

    public void DBInsert()
    {
        IDbConnection dbConnection = new SqliteConnection(GetDBFilePath());
        dbConnection.Open();
        IDbCommand dbCommand = dbConnection.CreateCommand();

        dbCommand.CommandText = "INSERT INTO user (name) VALUES (' " + nameInput.text + "');";
        dbCommand.ExecuteNonQuery();

        dbCommand.Dispose();
        dbCommand = null;
        dbConnection.Close();
        dbConnection = null;
    }

    
    // Update is called once per frame
    void Update()
    {
        
    }
}
