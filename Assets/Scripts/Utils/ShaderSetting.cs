//=========================================
//Author: 洪金敏
//Create Date: 2019/01/02 15:29:32
//Description: 
//=========================================

using UnityEngine;
using UnityEngine.UI;

namespace MailingJoy.Utils
{
    public class ShaderSetting
    {
        private static readonly int UseSelfColor = Shader.PropertyToID("_UseSelfColor");
        private static readonly int MyColor = Shader.PropertyToID("_MyColor");

        public static void SetGrey(Transform go,bool def)
        {
            if (def == false)
            {
                SetDefault(go);
                return;
            }
            var material = new Material(Shader.Find("Custom/UI-Gray"));
            var self = go.GetComponent<Graphic>();
            if (self)
            {
                self.material = material;
            }
            
        
        }
        
        public static void SetDefault(Transform go)
        {
            Graphic self = go.GetComponent<Graphic>();
            if (self)
            {
                self.material = null;
            }
            
        }
        
  
        
    }
}