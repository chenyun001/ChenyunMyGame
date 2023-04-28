using System;
using UnityEngine;

namespace Game.UI.Component
{
    public class SetOrderInLayer : MonoBehaviour
    {
        private void Awake()
        {
            FreshOrder(1000,"");
        }

        private void FreshOrder(int _canvasSortingOrder,string _canvasSortingLayerName)
        {
            var ps = GetComponentsInChildren<Renderer>();
            foreach (var t in ps)
            {
                t.sortingOrder += _canvasSortingOrder;
                t.sortingLayerName = _canvasSortingLayerName;
            }

            /*
            SortingGroup[] sg = GetComponentsInChildren<SortingGroup>();
            for (var i = 0; i < sg.Length; i++)
            {
                sg[i].sortingOrder = sg[i].sortingOrder + _canvasSortingOrder;
                sg[i].sortingLayerName = _canvasSortingLayerName;
            }
            */
        }
    }
}