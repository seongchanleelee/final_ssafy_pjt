using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data;
using Mono.Data.Sqlite;
using UnityEngine.UI;

public class UserNameController : MonoBehaviour
{
    public InputField nameInput;
    public Text nameList;

    private string dbName = "URI=file:NameLog.db";

    // Start is called before the first frame update
    void Start()
    {
        CreateDB();

        DisplayName();
    }

    void Update()
    {
        DisplayName();    
    }

    public void CreateDB()
    {
        using (var connection = new SqliteConnection(dbName))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "CREATE TABLE IF NOT EXISTS nameitems (name VARCHAR(8) );";
                command.ExecuteNonQuery();

            }

            connection.Close();
        }
    }

    public void AddName()
    {
        using (var connection = new SqliteConnection(dbName))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "INSERT INTO nameitems (name) VALUES (' " + nameInput.text + "');";
                command.ExecuteNonQuery();
                Debug.Log("addName!");
            }

            connection.Close();
        }

        
    }

    public void DisplayName()
    {
        nameList.text = "";

        using (var connection = new SqliteConnection(dbName))
        {
            connection.Open();
            using (var command = connection.CreateCommand())
            {
                command.CommandText = "SELECT * FROM nameitems;";

                using(IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                        nameList.text += reader["name"] + "\n";

                    reader.Close();
                }
            }
            connection.Close();
        }
    }
}
