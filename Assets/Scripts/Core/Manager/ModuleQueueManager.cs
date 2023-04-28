using System.Collections.Generic;
using UnityEngine;


namespace MailingJoy.Core
{
    public class ModuleQueueManager : SingletonBase<ModuleQueueManager>
    {
        private readonly Queue<PanelObject> _panelQueue = new Queue<PanelObject>();

        public void Clear()
        {
            _panelQueue.Clear();
        }

        public void EnqueuePanel(string moduleName, Transform targetTransform = null, object param = null)
        {
            _panelQueue.Enqueue(new PanelObject
            {
                ModuleName = moduleName,
                Obj = param,
                Transform = targetTransform
            });

            if (_panelQueue.Count == 1) DequeuePanel(_panelQueue.Peek());
        }

        private void DequeuePanel(PanelObject panelObject)
        {
            ModulesManager.Instance.OpenPanel(panelObject.ModuleName, UILayerEnum.Default, panelObject.Obj);
        }

        public void RemovePanel()
        {
            if (_panelQueue.Count == 0) return;
            _panelQueue.Dequeue();
            if (_panelQueue.Count >= 1) DequeuePanel(_panelQueue.Peek());
        }
    }

    public struct PanelObject
    {
        public string ModuleName;
        public object Obj;
        public Transform Transform;
    }
}