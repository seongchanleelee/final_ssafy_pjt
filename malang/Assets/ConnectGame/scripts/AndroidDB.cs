using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Mono.Data.Sqlite;
using System;
using System.Data;
using System.IO;
using UnityEngine.Networking;


public class AndroidDB : MonoBehaviour
{

    public string DataBaseName;

    public void Awake()
    {
        GenerateConnectionString(DataBaseName + ".db");

    }
    public void GenerateConnectionString(string DatabaseName)
    {
        string dbPath = Application.dataPath + "/StreamingAssets/" + DatabaseName;

        //check if file exists in Application.persistentDataPath
        string filepath = Application.persistentDataPath + "/" + DatabaseName;

        if (!File.Exists(filepath) || new System.IO.FileInfo(filepath).Length == 0)
        {
            // if it doesn't ->
            // open StreamingAssets directory and load the db ->
                WWW loadDb = new WWW("jar:file://" + Application.dataPath + "!/assets/" + DatabaseName);  // this is the path to your StreamingAssets in android
                while (!loadDb.isDone) { }  // CAREFUL here, for safety reasons you shouldn't let this while loop unattended, place a timer and error check
                // then save to Application.persistentDataPath
                File.WriteAllBytes(filepath, loadDb.bytes);
        }
        
        dbPath = filepath;

    }
}
