using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class SaveSpriteToPng : MonoBehaviour
{
  public static void SaveTextureToFile(Texture2D texture, string fileName)
  {
    var bytes = texture.EncodeToPNG();
    //using (Stream output = File.OpenWrite(Application.persistentDataPath + "/" + fileName));
    //var file = File.OpenWrite(Application.persistentDataPath + "/" + fileName);//, FileMode.Create);
    var file = File.Open(Application.persistentDataPath + "/" + fileName, FileMode.Create);
    var binary = new BinaryWriter(file);
    binary.Write(bytes);
    file.Close();
  }
}
