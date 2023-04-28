using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;

namespace MailingJoy.Core.UIFramework.ScreenBase
{
    [CustomEditor(typeof(UINewCtrlBase), true)]
    public class UINewCtrlBaseInspector : Editor
    {
        protected ReorderableList _bindList;
        protected ReorderableList _btnList;
        protected ReorderableList _TMPList;
        protected ReorderableList _BaseTextList;
        protected SerializedObject _serializedObject;
        public List<TextMeshProUGUI> _tmps;
        public List<Text> _texts;
        protected virtual void OnEnable()
        {
            _serializedObject = new SerializedObject(target);
            _bindList = CreateList(_serializedObject,"Injections");
            _btnList = CreateList(_serializedObject, "BtnInjections");
            _TMPList = CreateList(_serializedObject, "TMPInjections");
            _BaseTextList = CreateList(_serializedObject, "BaseText");
        }

        protected virtual ReorderableList CreateList(SerializedObject serializedObject,string PropertyName)
        {
            ReorderableList bindList;
            SerializedProperty prop = serializedObject.FindProperty(PropertyName);//根据名称查找对象中的系列化属性
            bindList = new ReorderableList(serializedObject, prop, true, true, true, true);//以bindVariables为属性创建
                                                                                           //添加元素                                                                              //添加元素回掉
            bindList.onAddCallback = (list) =>
            {
                list.serializedProperty.arraySize++;
                list.index = list.serializedProperty.arraySize - 1;
                var element = list.serializedProperty.GetArrayElementAtIndex(list.index);
                element.FindPropertyRelative("Value").objectReferenceValue = null;
                element.FindPropertyRelative("Name").stringValue = "";
            };
            //绘制元素返回
            bindList.drawElementCallback = (Rect rect, int index, bool selected, bool focused) =>
            {
                var element = bindList.serializedProperty.GetArrayElementAtIndex(index);
                rect.y += 2;
                var half = rect.width / 2;
                var nameProperty = element.FindPropertyRelative("Name");
                var valueProperty = element.FindPropertyRelative("Value");
                EditorGUI.BeginChangeCheck();
                EditorGUI.PropertyField(new Rect(rect.x, rect.y, half, EditorGUIUtility.singleLineHeight), valueProperty, GUIContent.none);
                if (EditorGUI.EndChangeCheck())
                {
                    if (nameProperty.stringValue == "")
                    {

                        nameProperty.stringValue = GenVariableName(valueProperty.objectReferenceValue);
                    }
                }
                EditorGUI.PropertyField(new Rect(rect.x + half, rect.y, half, EditorGUIUtility.singleLineHeight), nameProperty, GUIContent.none);
            };
            //背景色
            bindList.drawElementBackgroundCallback = (rect, index, isAsctive, isFocused) =>
            {
                GUI.backgroundColor = Color.red;
            };
            //头部
            bindList.drawHeaderCallback = (rect) =>
            {
                EditorGUI.LabelField(rect,PropertyName);
            };

            return bindList;
        }

        //获取名字
        protected virtual string GenVariableName(Object obj)
        {
            if (obj == null) return "";
            string suffix = "";
            if (obj is Button)
                suffix = "btn_";
            else if (obj is Slider)
                suffix = "slider_";
            else if (obj is Toggle)
                suffix = "toggle_";
            else if (obj is Text)
                suffix = "txt_";
            else if (obj is Image)
                suffix = "image_";
            else if (obj is InputField)
                suffix = "inputfield_";
            else if (obj is Scrollbar)
                suffix = "scrollbar";
            string name = suffix + obj.name;
            // 先这样
            name = obj.name;
            name = name.Replace(" ", "");
            name = name.Replace("(", "");
            name = name.Replace(")", "");
            return name;
        }
        //重新绘制界面
        public override void OnInspectorGUI()
        {
            base.DrawDefaultInspector();
            EditorGUILayout.Space();
            _serializedObject.Update();
            EditorGUILayout.BeginHorizontal();
            if (GUILayout.Button("编辑(Injections)"))//点击此按键开启窗口
            {
                SerializedObject serializedObject = new SerializedObject(target);
                LuaBehaviourEditor window = (LuaBehaviourEditor)EditorWindow.GetWindow(typeof(LuaBehaviourEditor));
                window.titleContent = new GUIContent(target.name);
                window.Setup(serializedObject, CreateList(serializedObject, "Injections"));
                window.Show();
            }
            if (GUILayout.Button("编辑(BtnInjections)"))//点击此按键开启窗口
            {
                SerializedObject serializedObject = new SerializedObject(target);
                LuaBehaviourEditor window = (LuaBehaviourEditor)EditorWindow.GetWindow(typeof(LuaBehaviourEditor));
                window.titleContent = new GUIContent(target.name);
                window.Setup(serializedObject, CreateList(serializedObject, "BtnInjections"));
                window.Show();
            }
            if (GUILayout.Button("编辑(TMPInjections)"))//点击此按键开启窗口
            {
                SerializedObject serializedObject = new SerializedObject(target);
                LuaBehaviourEditor window = (LuaBehaviourEditor)EditorWindow.GetWindow(typeof(LuaBehaviourEditor));
                window.titleContent = new GUIContent(target.name);
                window.Setup(serializedObject, CreateList(serializedObject, "TMPInjections"));
                window.Show();
            }
            if (GUILayout.Button("编辑(BaseText)"))//点击此按键开启窗口
            {
                SerializedObject serializedObject = new SerializedObject(target);
                LuaBehaviourEditor window = (LuaBehaviourEditor)EditorWindow.GetWindow(typeof(LuaBehaviourEditor));
                window.titleContent = new GUIContent(target.name);
                window.Setup(serializedObject, CreateList(serializedObject, "BaseText"));
                window.Show();
            }
            EditorGUILayout.EndHorizontal();
            //EditorGUILayout.PropertyField(_serializedObject.FindProperty("luaScript"), new GUILayoutOption[0]);
            _bindList.DoLayoutList();
            _btnList.DoLayoutList();
            _TMPList.DoLayoutList();
            _BaseTextList.DoLayoutList();
            _serializedObject.ApplyModifiedProperties();
        }
    }
    //创建一个窗口
    public class LuaBehaviourEditor : EditorWindow
    {
        protected SerializedObject _serializedObject;
        protected ReorderableList _bindList;
        //设定要操作的对象列表
        public virtual void Setup(SerializedObject serializedObject, ReorderableList bindList)
        {
            _serializedObject = serializedObject;
            _bindList = bindList;
        }
        protected virtual void OnGUI()
        {
            if (_serializedObject != null && _bindList != null)
            {
                _serializedObject.Update();
                _bindList.DoLayoutList();
                _serializedObject.ApplyModifiedProperties();
            }
        }

    }

}





