using UnityEngine;
using UnityEngine.SceneManagement;

namespace MailingJoy.Utils
{
    public class GameObjectUtil
    {
        public static GameObject GetGameObjectInScene(string sceneName, string goName)
        {
            var scene = UnityEngine.SceneManagement.SceneManager.GetSceneByName(sceneName);
            return GetGameObjectInScene(scene, goName);
        }

        public static GameObject GetGameObjectInScene(Scene scene, string goName)
        {
            var gos = scene.GetRootGameObjects();
            for (var index = 0; index < gos.Length; index++)
            {
                var go = gos[index];
                if (go.name == goName)
                {
                    return go;
                }

                var o = go.transform.Find(goName);
                if (o != null)
                {
                    return o.gameObject;
                }
            }

            return null;
        }

        public static GameObject GetGameObjectInSceneByTag(string sceneName, string tagName)
        {
            var scene = UnityEngine.SceneManagement.SceneManager.GetSceneByName(sceneName);
            return GetGameObjectInSceneByTag(scene, tagName);
        }

        public static GameObject GetGameObjectInSceneByTag(Scene scene, string tagName)
        {
            var objects = GameObject.FindGameObjectsWithTag(tagName);
            for (var index = 0; index < objects.Length; index++)
            {
                var gameObject = objects[index];
                if (gameObject.scene == scene)
                {
                    return gameObject;
                }
            }

            return null;
        }

        public static void ClearChildren(Transform container)
        {
            while (container.childCount > 0)
            {
                Object.Destroy(container.GetChild(0));
            }
        }
    }
}