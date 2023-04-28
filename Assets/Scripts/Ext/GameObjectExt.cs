//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-24 14:41:58
//Description: 
//=========================================

using System;
using UnityEngine;
using XLua;

namespace Ext
{
    [LuaCallCSharp]
    public static class GameObjectExt
    {
        public static T EnsureComponent<T>(this GameObject target) where T : Component
        {
            T comp = target.GetComponent<T>();
            if (comp == null)
            {
                return target.AddComponent<T>();
            }


            return comp;
        }

        public static Component EnsureComponent(this GameObject target, Type type)
        {
            Component comp = target.GetComponent(type);
            if (comp == null)
            {
                return target.AddComponent(type);
            }

            return comp;
        }

        public static T FindComponent<T>(this GameObject target, string path) where T : Component
        {
            GameObject obj = FindGameObject(target, path);
            if (obj != null)
            {
                return obj.GetComponent<T>();
            }

            return default(T);
        }

        public static GameObject FindGameObject(this GameObject target, string path)
        {
            if (target != null)
            {
                Transform t = target.transform.Find(path);
                if (t != null)
                {
                    return t.gameObject;
                }
            }

            return null;
        }


        public static GameObject FindGameObject2(this GameObject target, string path)
        {
            if (target == null)
            {
                return null;
            }

            string[] array = path.Split('.');
            Transform current = target.transform;

            for (int i = 0; i < array.Length; ++i)
            {
                string name = array[i];
                Transform child = current.Find(name);
                if (child != null)
                {
                    current = child;
                }
                else
                {
                    char[] c = name.ToCharArray();
                    if (Char.IsLower(c[0]))
                    {
                        c[0] = Char.ToUpper(c[0]);
                    }
                    else
                    {
                        c[0] = Char.ToLower(c[0]);
                    }

                    name = new string(c);
                    child = current.Find(name);
                    if (child != null)
                    {
                        current = child;
                    }
                    else
                    {
                        current = null;
                        break;
                    }
                }
            }

            if (current == null)
            {
                return null;
            }

            return current.gameObject;
        }

        public static GameObject FindGameObjByName(this GameObject root, string name)
        {
            if (root == null)
            {
                return GameObject.Find(name);
            }

            Transform[] childs = root.GetComponentsInChildren<Transform>();

            foreach (Transform trans in childs)
            {
                if (trans.gameObject.name.Equals(name))
                {
                    return trans.gameObject;
                }
            }

            return null;
        }


        public static GameObject FindFirstGameObjByPrefix(this GameObject root, string prefix)
        {
            Transform[] childs;
            if (root != null)
            {
                childs = root.GetComponentsInChildren<Transform>();
            }
            else
            {
                childs = GameObject.FindObjectsOfType<Transform>();
            }

            foreach (Transform trans in childs)
            {
                if (trans.gameObject.name.Length >= prefix.Length)
                {
                    if (trans.gameObject.name.Substring(0, prefix.Length) == prefix)
                    {
                        return trans.gameObject;
                    }
                }
            }

            return null;
        }

        public static void SetLocalXYZ(this GameObject root, float x,float y,float z)
        {
            root.gameObject.transform.localPosition = new Vector3(x, y, z);

        }
        public static void SetXYZ(this GameObject root, float x,float y,float z)
        {
            root.gameObject.transform.position = new Vector3(x, y, z);

        }
        public static void SetLocalZ(this GameObject root, float z)
        {
            root.gameObject.transform.localPosition = new Vector3(root.gameObject.transform.localPosition.x, root.gameObject.transform.localPosition.y, z);

        }
        public static void SetScaleXYZ(this GameObject root, float x,float y,float z)
        {

            root.gameObject.transform.localScale = new Vector3(x, y, z);

        }
        public static void SetRectXY(this GameObject root, float x,float y)
        {
            root.GetComponent<RectTransform>().sizeDelta = new Vector2(x, y);

        }

        public static void SetAnchorXY(this GameObject root, int type,float x,float y)
        {
            var rect = root.GetComponent<RectTransform>();
            switch (type)
            {
                case 0:
                    rect.anchorMin = new Vector2(0.5f,0.5f);
                    rect.anchorMax = rect.anchorMin;
                    break;
                case 1:
                    rect.anchorMin = Vector2.up;
                    rect.anchorMax = Vector2.up;
                    break;
                case 2:
                    rect.anchorMin = Vector2.one;
                    rect.anchorMax =  Vector2.one;
                    break;
                case 3:
                    rect.anchorMin = Vector2.right;
                    rect.anchorMax =  Vector2.right;
                    break;
                case 4:
                    rect.anchorMin = Vector2.zero;
                    rect.anchorMax =  Vector2.zero;
                    break;
            }
           rect.anchoredPosition = new Vector2(x, y);

        }

        public static void SetRotate(this GameObject root, float x,float y,float z)
        {
            root.transform.Rotate(x,y,z);
        }

        public static void SetActiveRecursively(this GameObject target, bool bActive)
        {
#if (!UNITY_3_5)
            for (int n = target.transform.childCount - 1; 0 <= n; n--)
                if (n < target.transform.childCount)
                    SetActiveRecursively(target.transform.GetChild(n).gameObject, bActive);
            target.SetActive(bActive);
#else
		target.SetActiveRecursively(bActive);
#endif
        }

        public static void SetLayerRecursively(this GameObject target, int layer)
        {
#if (!UNITY_3_5)
            for (int n = target.transform.childCount - 1; 0 <= n; n--)
            {
                if (n < target.transform.childCount)
                {
                    SetLayerRecursively(target.transform.GetChild(n).gameObject, layer);
                }
            }

            target.layer = layer;
#else
		target.SetActiveRecursively(bActive);
#endif
        }
    }
}