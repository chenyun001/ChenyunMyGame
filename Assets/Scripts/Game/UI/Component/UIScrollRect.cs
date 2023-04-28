using UnityEngine;
using UnityEngine.UI;

namespace Game.UI.Component
{
    public class UIScrollRect:ScrollRect
    {
        protected override void SetContentAnchoredPosition(Vector2 position)
        {

            if (float.IsNaN(position.x) || float.IsNaN(position.y))
            {
                position = Vector2.zero;
            }
            base.SetContentAnchoredPosition(position);
            
        }

      
    }
}