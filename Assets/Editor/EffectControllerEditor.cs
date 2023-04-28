using Spine.Unity;
using UnityEditor;
using UnityEngine;

public class EffectControllerEditor : EditorWindow
{
    private SkeletonGraphic _graphic;
    private GameObject _otherEffect;

    private string _param0 = "UIEffect";
    private string _param1 = "原点";

    EffectControllerEditor()
    {
        this.titleContent = new GUIContent("特效控制");
    }

    [MenuItem("美术工具/特效控制")]
    static void ShowWindow()
    {
        EditorWindow.GetWindow(typeof(EffectControllerEditor));
    }

    void OnGUI()
    {
        GUILayout.BeginVertical();

        //绘制标题
        GUILayout.Space(10);
        GUI.skin.label.fontSize = 10;
        GUI.skin.label.alignment = TextAnchor.MiddleLeft;
        GUILayout.Label("Spine动画放在：\"Spine动画\"下");

        GUILayout.Space(10);
        GUILayout.Label("其他放在\"特效\"下");

        _param0 = EditorGUILayout.TextField("UI层名", _param0);
        _param1 = EditorGUILayout.TextField("游戏层名", _param1);


        EditorGUILayout.Space();

        EditorGUILayout.Space();

        if (GUILayout.Button("播放UI特效"))
        {
            RePlayAll(_param0);
        }

        GUILayout.Space(10);

        if (GUILayout.Button("播放游戏特效"))
        {
            RePlayAll(_param1);
        }
    }

    private void RePlayAll(string objectName)
    {
        PlayEffect(objectName);

        var skeletonAnimations = GameObject.Find(objectName).GetComponentsInChildren<SkeletonAnimation>();
        foreach (var skeletonAnimation in skeletonAnimations)
        {
            if (skeletonAnimation.AnimationName != null)
                skeletonAnimation.AnimationState.SetAnimation(0, skeletonAnimation.AnimationName,
                    skeletonAnimation.loop);
        }

        var skeletonGraphics = GameObject.Find(objectName).GetComponentsInChildren<SkeletonGraphic>();

        foreach (var skeletonGraphic in skeletonGraphics)
        {
            if (skeletonGraphic.startingAnimation != null)
                skeletonGraphic.AnimationState.SetAnimation(0, skeletonGraphic.startingAnimation,
                    skeletonGraphic.startingLoop);
        }
    }


    private void RePlay(string objectName)
    {
        PlayEffect(objectName);
        var skeletonAnimation = GameObject.Find(objectName).GetComponentInChildren<SkeletonAnimation>();
        if (skeletonAnimation != null)
        {
            skeletonAnimation.AnimationState.SetAnimation(0, skeletonAnimation.AnimationName, skeletonAnimation.loop);
        }

        var skeletonGraphic = GameObject.Find(objectName).GetComponentInChildren<SkeletonGraphic>();

        if (skeletonGraphic != null)
        {
            skeletonGraphic.AnimationState.SetAnimation(0, skeletonGraphic.startingAnimation,
                skeletonGraphic.startingLoop);
        }
    }

    private void PlayEffect(string objectName)
    {
        var trans = GameObject.Find(objectName).transform;
        int childCount = trans.childCount;
        for (int i = 0; i < childCount; i++)
        {
            trans.GetChild(i).gameObject.SetActive(false);
            trans.GetChild(i).gameObject.SetActive(true);
        }
    }
}