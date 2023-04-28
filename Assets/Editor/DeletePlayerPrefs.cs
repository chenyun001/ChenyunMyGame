using System.IO;
using MailingJoy.Game;
using UnityEditor;
using UnityEngine;

public class
    DeletePlayerPrefs
{
    [MenuItem("Tools/Delete Player Prefs")]
    private static void DeleteUserFile()
    {
        
        PlayerPrefs.DeleteAll();
        Caching.ClearCache();
        var file = Application.persistentDataPath + Path.DirectorySeparatorChar + AppConst.DATA_FILE;
        if (File.Exists(file))
            File.Delete(file);
    }
}