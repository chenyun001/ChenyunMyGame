using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using MailingJoy.Core.UIFramework.ScreenBase;
using MailingJoy.Game.Modules.Main;
using MailingJoy.Lua;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Build;
using UnityEditor.AddressableAssets.Build.DataBuilders;
using UnityEditor.AddressableAssets.Settings;
using UnityEngine;
using UnityEngine.UI;

public class LuaInjectionEditor : UnityEditor.Editor
{
   
    [MenuItem("GameObject/LuaInjection/WriteByLua")]
    static void Write()
    {
        // var settings = AddressableAssetSettingsDefaultObject.Settings;

        // AddressableAssetSettingsDefaultObject.Settings.ActivePlayerDataBuilderIndex = 0;
        // UnityEditor.AddressableAssets.Settings.GroupSchemas.ContentUpdateGroupSchema
        // AddressableAssetSettings.BuildPlayerContent();
        
        
        var parentTransform = GetSelectionParentTransform();
        var sub = parentTransform.GetComponent<UISubCtrlBase>();
        List<Injection> injections = new List<Injection>();
        List<ButtonInjection> btnInjections = new List<ButtonInjection>();
        List<TextMeshProUGUIInjection> tmpInjections = new List<TextMeshProUGUIInjection>();
        var lua = sub.LuaFilePath;
        var file = File.OpenText($"{Application.dataPath}/Game/Lua/{sub.LuaFilePath}.lua.txt");
        var text = file.ReadToEnd();
        Regex regex = new Regex(@"{[^}]+}");
        var a = regex.Match(text);
        Regex aregex = new Regex(@"(?<=\n).*?(?==)");
        var matches =aregex.Matches(a.Value);
        for (int i = 0; i < matches.Count; i++)
        {
            var head = matches[i].Value;
            head = head.Replace(" ", "");
            Debug.LogError("head"+head);
            if (head.Contains("btn"))
            {
                ButtonInjection injection = new ButtonInjection();
                injection.Name = head;
                btnInjections.Add(injection);
            }
            else if (head.Contains("text"))
            {
                TextMeshProUGUIInjection injection = new TextMeshProUGUIInjection();
                injection.Name = head;
                tmpInjections.Add(injection);
            }
            else if (head.Contains("_go")||head.Contains("obj")||head.Contains("img")||head.Contains("txt")||head.Contains("toggle"))
            {
                Injection injection = new Injection();
                injection.Name = head;
                injections.Add(injection);
        
            }
        }
        
        
        file.Close();
        
        sub.Injections = injections.ToArray();
        sub.TMPInjections = tmpInjections.ToArray();
        sub.BtnInjections = btnInjections.ToArray();
        EditorUtility.SetDirty(parentTransform);
    }


    static Transform GetSelectionParentTransform()
    {
        var parent = Selection.activeObject as GameObject;
        return parent != null ? parent.transform : null;
        
    }
}