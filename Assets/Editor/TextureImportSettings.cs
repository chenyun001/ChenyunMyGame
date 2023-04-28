using System;
using System.IO;
using UnityEditor;
using UnityEngine;


public class AssetImporterEditor : EditorWindow
{
    [MenuItem("Tools/Texture Importer Settings")]
    static void Settings()
    {
        EditorWindow.GetWindow<AssetImporterEditor>("TextureImporterSettings");
    }


    public enum TextureSize
    {
        _128 = 128,
        _512 = 512,
        _1024 = 1024,
        _2048 = 2048,
        _4096 = 4096,
    }

    private string assetPath = "Assets/Arts";
    private string folderPath = string.Empty;

    private TextureSize curTextureSize = TextureSize._2048;
    private TextureImporterType curTextureType = TextureImporterType.Default;
    private TextureWrapMode curTextureWrapMode = TextureWrapMode.Clamp;
    private TextureImporterFormat curTextureFormat = TextureImporterFormat.Automatic;
    private TextureImporterShape curTextureShape = TextureImporterShape.Texture2D;
    private FilterMode curFilterMode = FilterMode.Bilinear; 
    
    private bool mipmapEnabled = false;
    private bool isReadable = false;
    private bool alphaIsTransparency = false;
    

    private void OnGUI()
    {
        GUILayout.BeginHorizontal();
        GUILayout.Label("资源路径:", GUILayout.Height(30), GUILayout.Width(50));
        assetPath = GUILayout.TextField(this.assetPath);
        if (GUILayout.Button("open", GUILayout.Height(30), GUILayout.Width(80)))
        {
            folderPath = EditorUtility.OpenFolderPanel("select asset", "Assets/Arts/", "");
            var index = folderPath.IndexOf("Assets");
            var length = folderPath.Length - index;
            var showPath = folderPath.Substring(index, length);
            assetPath = showPath;
        }

        GUILayout.EndHorizontal();

        GUILayout.Label("Texture Size:");
        curTextureSize = (TextureSize) EditorGUI.EnumPopup(new Rect(150, 35, 80, 10), curTextureSize);
        GUILayout.Label("Texture Type:");
        curTextureType = (TextureImporterType) EditorGUI.EnumPopup(new Rect(150, 55, 80, 20), curTextureType);
        GUILayout.Label("Texture WrapMode:");
        curTextureWrapMode = (TextureWrapMode) EditorGUI.EnumPopup(new Rect(150, 75, 80, 20), curTextureWrapMode);
        GUILayout.Label("Texture Format:");
        curTextureFormat = (TextureImporterFormat) EditorGUI.EnumPopup(new Rect(150, 95, 80, 20), curTextureFormat);
        GUILayout.Label("Texture Shape");
        curTextureShape = (TextureImporterShape) EditorGUI.EnumPopup(new Rect(150, 115, 80, 20), curTextureShape);
        GUILayout.Label("Filter Mode");
        curFilterMode = (FilterMode) EditorGUI.EnumPopup(new Rect(150, 135, 80, 20), curFilterMode);

        GUILayout.BeginHorizontal();
        GUILayout.Label("mipmapEnabled");
        mipmapEnabled = GUILayout.Toggle(mipmapEnabled,"",GUILayout.Height(30),GUILayout.Width(30));
        GUILayout.EndHorizontal();
        GUILayout.BeginHorizontal();
        GUILayout.Label("alphaIsTransparency");
        alphaIsTransparency = GUILayout.Toggle(alphaIsTransparency,"",GUILayout.Height(30),GUILayout.Width(30));
        GUILayout.EndHorizontal();
        
        if (GUILayout.Button("Set", GUILayout.Height(40), GUILayout.Width(50)))
        {
            SetTexture();
        }
    }

    void SetTexture()
    {
        try
        {
            LoadTexture(folderPath);
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw;
        }
        finally
        {
        }
    }

    void LoadTexture(string path)
    {
        if (Directory.Exists(path))
        {
            var directInfo = new DirectoryInfo(path);
            var files = directInfo.GetFileSystemInfos();
            foreach (var file in files)
            {
                if (file is FileInfo)
                {
                    if (file.Name.EndsWith(".jpg") || file.Name.EndsWith(".png") || file.Name.EndsWith(".tga"))
                    {
                        var texturePath = file.FullName;
                        var index = texturePath.IndexOf("Assets");
                        var length = texturePath.Length - index;
                        var textureAssetsPath = texturePath.Substring(index, length);
                        var textureImporter = AssetImporter.GetAtPath(textureAssetsPath) as TextureImporter;
                        
                        textureImporter.textureShape = curTextureShape;
                        textureImporter.textureType = curTextureType;
                        textureImporter.alphaIsTransparency = alphaIsTransparency;
                        textureImporter.wrapMode = curTextureWrapMode;
                        textureImporter.textureFormat = curTextureFormat;
                        textureImporter.npotScale = TextureImporterNPOTScale.None;
                        textureImporter.mipmapEnabled = mipmapEnabled;
                        textureImporter.maxTextureSize = (int) curTextureSize;
                        textureImporter.filterMode = curFilterMode;
                    }
                }
                else if (file is DirectoryInfo)
                {
                    LoadTexture(path);
                }
            }
        }
    }
}

public class AutoSetTexture : AssetPostprocessor
{
    void OnPreprocessTexture()
    {
        var assetPath = assetImporter.assetPath;
        if (assetPath.Contains("Arts/Effect/Res/Texture"))
        {
            TextureImporter textureImporter = (TextureImporter) assetImporter;
            // textureImporter.textureType = TextureImporterType.Default;
            // textureImporter.alphaIsTransparency = true;
            // textureImporter.wrapMode = TextureWrapMode.Repeat;
            // textureImporter.textureFormat = TextureImporterFormat.Automatic;
            // textureImporter.npotScale = TextureImporterNPOTScale.None;
            // textureImporter.isReadable = true;
            // textureImporter.mipmapEnabled = false;
            // textureImporter.maxTextureSize = 2048;
        }
    }
}