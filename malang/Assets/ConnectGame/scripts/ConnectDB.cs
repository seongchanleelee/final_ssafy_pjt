using UnityEngine;
using System.Data;
using Mono.Data.Sqlite;


public class ConnectDB : MonoBehaviour
{
    private string dbName = "URI=file:Inventory.db";



    void Start()
    {
        CreateDB();

        AddWeapon("Seong Jun", 27);

        DisplayWeapons();


    }

    public void CreateDB()
    {
        using (var connection = new SqliteConnection(dbName))
        {
            connection.Open();
            using (var command = connection.CreateCommand())
            {
                command.CommandText = "CREATE TABLE IF NOT EXISTS weapons (name VARCHAR (10), damage INT);";
                command.ExecuteNonQuery();
            }

            connection.Close();
        }
    }

    public void AddWeapon(string weaponName, int weaponDamage)
    {
        using (var connection = new SqliteConnection(dbName))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "INSERT INTO weapons (name, damage) VALUES (' " + weaponName + "','" + weaponDamage + "');";
                command.ExecuteNonQuery();
            }

            connection.Close();
        }
    }

    public void DisplayWeapons()
    {
        using (var connection = new SqliteConnection(dbName))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = "SELECT * FROM weapons;";

                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                        Debug.Log("NAME: " + reader["name"] + "\tDamage: " + reader["damage"]);

                    reader.Close();
                }
            }

            connection.Close();
        }
    }
}


    
