using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameObjectRun : MonoBehaviour
{
    Vector3 raton;
    // Start is called before the first frame update
    void Start()
    {
        raton = new Vector3(0,0,0);
    }

    // Update is called once per frame
    void Update()
    {
        raton = raton + new Vector3(0, 0, 5);
        transform.localRotation = Quaternion.Euler(raton);
    }
}
