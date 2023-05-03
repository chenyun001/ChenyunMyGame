using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class CameraAdd : MonoBehaviour
{
    public Camera MainCamera;
    // Start is called before the first frame update
    void Start()
    {
        Camera m_uiCamera = GameObject.Find("Camera").GetComponent<Camera>();

        MainCamera.GetUniversalAdditionalCameraData().cameraStack.Add(m_uiCamera);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
