
    using UnityEngine;

    public interface IItemExtension
    {
        void SetData(int itemId);
        void Destroy();
        void SetParent(Transform transform);
    }
