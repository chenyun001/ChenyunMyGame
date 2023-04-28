 
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace MailingJoy.Core
{
    
    public static class IsPointerUIUtil
    {
        public static bool IsPointerOverGameObject(Vector2 screenPosition)
        {
            PointerEventData eventDataCurrentPosition =
                new PointerEventData(UnityEngine.EventSystems.EventSystem.current);
            eventDataCurrentPosition.position = new Vector2(screenPosition.x, screenPosition.y);
            List<RaycastResult> results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
            return results.Count > 0;
        }

        public static bool IsPointerOverGameObject(Canvas canvas, Vector2 screenPosition)
        {
            PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
            eventDataCurrentPosition.position = screenPosition;
            GraphicRaycaster uiRaycaster = canvas.gameObject.GetComponent<GraphicRaycaster>();
            List<RaycastResult> results = new List<RaycastResult>();
            uiRaycaster.Raycast(eventDataCurrentPosition, results);
            return results.Count > 0;
        }

        
        public static List<RaycastResult> IsPointerOverUI(Canvas canvas, Vector2 screenPosition)
        {
            PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
            eventDataCurrentPosition.position = screenPosition;
            GraphicRaycaster uiRaycaster = canvas.gameObject.GetComponent<GraphicRaycaster>();
            List<RaycastResult> results = new List<RaycastResult>();
            uiRaycaster.Raycast(eventDataCurrentPosition, results);
            return results;
        }
    }
}