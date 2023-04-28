using System;
using System.Collections.Generic;
using System.Linq;
using MailingJoy.Core.UIFramework.ScreenBase;
using MailingJoy.Lua;
using NUnit.Framework.Internal;
using TMPro;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;


[CanEditMultipleObjects]
[CustomEditor(typeof(UISubCtrlBase), true)]
public class LuaTextMeshProHelper : UnityEditor.Editor
{
    public List<TextMeshProUGUI> _tmps;
    public List<Text> _texts;

    public override void OnInspectorGUI()
    {
        UISubCtrlBase tar = target as UISubCtrlBase;
        base.OnInspectorGUI();
        EditorGUILayout.BeginHorizontal();
        var scripts = tar.GetComponentsInChildren<UISubCtrlBase>();

        if (GUILayout.Button("获取TMP"))
        {
            _tmps = tar.GetComponentsInChildren<TextMeshProUGUI>().ToList();
            foreach (var VARIABLE in scripts)
            {
                foreach (var tmpInjection in VARIABLE.TMPInjections)
                {
                    if (_tmps.Contains(tmpInjection.Value))
                    {
                        _tmps.Remove(tmpInjection.Value);
                    }
                }
            }


            if (tar.BaseText != null)
            {
                foreach (var baseText in tar.BaseText)
                {
                    if (_tmps.Contains(baseText.Value))
                    {
                        _tmps.Remove(baseText.Value);
                    }
                }
            }
            else
            {
                tar.BaseText = Array.Empty<TextMeshProUGUIInjection>();
            }

            List<TextMeshProUGUIInjection> injections = tar.BaseText.ToList();
            int index = tar.BaseText.Length;
            if (index > 0)
            {
                index = index - 1;
            }

            foreach (var tmp in _tmps)
            {
                var injection = new TextMeshProUGUIInjection();
                injection.Name = "请输入内容";
                injection.Value = tmp;
                injections.Add(injection);
                index++;
            }

            tar.BaseText = injections.ToArray();
            EditorUtility.SetDirty(tar);
        }

        if (GUILayout.Button("Text转TMP"))
        {
            _texts = tar.GetComponentsInChildren<Text>().ToList();
            string message = "有以下text:\n";
            foreach (var text in _texts)
            {
                message += text.name + "、";
            }

            if (EditorUtility.DisplayDialog("text转化tmp", message, "转化", "取消"))
            {
                foreach (var tmp in _texts)
                {
                    UISubCtrlBase script = null;

                    foreach (var VARIABLE in scripts)
                    {
                        foreach (var inj in VARIABLE.Injections)
                        {
                            if (inj.Value == tmp.gameObject) script = VARIABLE;
                        }
                    }

                    string key = null;
                    if (script != null)
                    {
                        var injctions = script.Injections.ToList();
                        var inj = injctions.Find(x => x.Value == tmp.gameObject);
                        key = inj.Name;
                        injctions.Remove(inj);
                        script.Injections = injctions.ToArray();
                    }

                    int fontSize = tmp.fontSize;
                    var obj = tmp.transform;
                    DestroyImmediate(tmp);
                    var a = obj.AddComponent<TextMeshProUGUI>();
                    a.fontSize = fontSize;
                    if (script != null)
                    {
                        TextMeshProUGUIInjection tmpInj = new TextMeshProUGUIInjection();
                        tmpInj.Name = key;
                        tmpInj.Value = a;
                        var L = script.TMPInjections.ToList();
                        L.Add(tmpInj);
                        script.TMPInjections = L.ToArray();
                    }
                }
            }

            EditorUtility.SetDirty(tar);
        }

        EditorGUILayout.EndHorizontal();
    }
}