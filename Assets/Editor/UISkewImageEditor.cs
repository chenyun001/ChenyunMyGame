
using UnityEngine;
using UnityEditor;
using UnityEditor.UI;
 
[CustomEditor(typeof(UISkewImage), true)]
[CanEditMultipleObjects]
public class UISkewImageEditor: ImageEditor {
	public override void OnInspectorGUI(){
		base.OnInspectorGUI();
 
		UISkewImage uiSkewImage = (UISkewImage)target;
		EditorGUILayout.BeginHorizontal(GUILayout.ExpandWidth(true));
		if (GUILayout.Button("重置", GUILayout.Width(40))){
			uiSkewImage.OffsetLeftTop = Vector3.zero;
		}
		uiSkewImage.OffsetLeftTop = EditorGUILayout.Vector3Field("左上", uiSkewImage.OffsetLeftTop, GUILayout.ExpandWidth(true));
		EditorGUILayout.EndHorizontal();
 
		EditorGUILayout.BeginHorizontal(GUILayout.ExpandWidth(true));
		if (GUILayout.Button("重置", GUILayout.Width(40))){
			uiSkewImage.OffsetRightTop = Vector3.zero;
		}
		uiSkewImage.OffsetRightTop = EditorGUILayout.Vector3Field("右上", uiSkewImage.OffsetRightTop, GUILayout.ExpandWidth(true));
		EditorGUILayout.EndHorizontal();
 
		EditorGUILayout.BeginHorizontal(GUILayout.ExpandWidth(true));
		if (GUILayout.Button("重置", GUILayout.Width(40))){
			uiSkewImage.OffsetLeftButtom = Vector3.zero;
		}
		uiSkewImage.OffsetLeftButtom = EditorGUILayout.Vector3Field("左下", uiSkewImage.OffsetLeftButtom, GUILayout.ExpandWidth(true));
		EditorGUILayout.EndHorizontal();
 
		EditorGUILayout.BeginHorizontal(GUILayout.ExpandWidth(true));
		if (GUILayout.Button("重置", GUILayout.Width(40))){
			uiSkewImage.OffsetRightButtom = Vector3.zero;
		}
		uiSkewImage.OffsetRightButtom = EditorGUILayout.Vector3Field("右下", uiSkewImage.OffsetRightButtom, GUILayout.ExpandWidth(true));
		EditorGUILayout.EndHorizontal();
 
		if (GUI.changed){
			EditorUtility.SetDirty(uiSkewImage);
		}
	}
}