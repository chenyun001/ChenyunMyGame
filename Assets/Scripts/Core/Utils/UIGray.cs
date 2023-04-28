using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.UI;

namespace MailingJoy.Core.Utils
{
    public static class UIGray
    {
        private static Shader shader;
        private static Material material;

        public static Material GetGrayMaterial()
        {
            if (shader == null)
                shader = Shader.Find("Custom/UI-Gray");
            if (material == null)
                material = new Material(shader);
            return material;
        }

        public static void SetUIGray(Image image)
        {
            if (image == null)
                return;
            if (material != null)
            {
                image.material = material;
                image.SetMaterialDirty();
            }
            else
            {
                Addressables.LoadAssetAsync<Material>("UIGrayMat.mat").Completed += handler =>
                {
                    var result = handler.Result;
                    material = result;
                    image.material = material;
                    image.SetMaterialDirty();
                };
            }
        }

        public static void Recovery(Image image)
        {
            if (image == null)
                return;
            image.material = null;
        }
    }
}