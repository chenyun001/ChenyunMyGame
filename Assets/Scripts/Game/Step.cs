using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Step : MonoBehaviour
{
    public float radius = 1 ;
    public int type = 1;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void Init(float _radius,int ntype = 1)
    {
        radius = _radius;
        type = ntype;

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
