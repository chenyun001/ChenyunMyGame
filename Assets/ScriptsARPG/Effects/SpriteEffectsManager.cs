using UnityEngine;
using System.Collections;
[RequireComponent(typeof(SpriteManager))]

public class SpriteEffectsManager : MonoBehaviour
{
    private bl_HUDText HUDRoot;
    public int MaxSprites = 30;

    private ArrayList Sprites = new ArrayList(30);
    private ArrayList Shadows = new ArrayList(30);

    private SpriteManager SpriteManager;

    public static SpriteEffectsManager Instance;

    // Use this for initialization
    void Awake()
    {
        Instance = this;
        SpriteManager = GetComponent<SpriteManager>();
    }

    void Start()
    {
        HUDRoot = bl_UHTUtils.GetHUDText;
    }

    void LateUpdate()
    {
        SpriteEx s;
        for (int i = 0; i < Shadows.Count; i++)
        {
            s = Shadows[i] as SpriteEx;
            if (s.hidden)
                continue;
            SpriteManager.TransformToGround(s);
        }
    }

    void FixedUpdate()
    {
        if (Sprites.Count > MaxSprites)
        {
            SpriteManager.RemoveSprite(Sprites[0] as SpriteEx);
            Sprites.RemoveAt(0);
        }
    }

    public void CreateBloodSlatter(Transform t, float minLen, float maxLen)
    {
        float f = Random.Range(minLen, maxLen);
        GameObject obj = new GameObject("splatter");

		obj.transform.parent = AutoElementManager.Instance.transform;

        obj.transform.position = new Vector3(t.position.x, t.position.y, t.position.z);
        obj.transform.eulerAngles = new Vector3(0, Random.Range(0, 360), 0);

        SpriteEx s = SpriteManager.AddSprite(obj, 0.2f, 0.2f, 0, 128, 128, 128, false);
        StartCoroutine(UpdateSplatter(s, 0.5f, f, 0.8f));
    }

    public void CreateBlood(Transform t)
    {
        float f = Random.Range(0.9f, 1.3f);

        GameObject obj = new GameObject("splash");
        

		obj.transform.parent = AutoElementManager.Instance.transform;

        obj.transform.position = new Vector3(t.position.x, t.position.y, t.position.z);
        //obj.transform.rotation = t.rotation;
        obj.transform.eulerAngles = new Vector3(0, Random.Range(0, 360), 0);
        //Sprites.Add(BloodSplattersManager.AddSprite(obj, f, f, Vector2.zero, new Vector2(1, 1), false));


        switch (Random.Range(0, 10) % 2)
        {
            case 0:
                Sprites.Add(SpriteManager.AddSprite(obj, 1.0f, 1.0f, 128, 128, 128, 128, false));
                break;

            default:
                Sprites.Add(SpriteManager.AddSprite(obj, 1.0f, 1.0f, 0, 256, 128,  128, false));
                break;
        }
    }

    public void CreateShadow(GameObject parent, float width, float height)
    {
        SpriteEx s;
        for (int i = 0; i < Shadows.Count; i++)
        {
            s = Shadows[i] as SpriteEx;
            if (s.hidden == false)
                continue;

            s.client = parent;
            SpriteManager.ShowSprite(s);
            return;
        }
        s = SpriteManager.AddSprite(parent, width, height, 172, 213, 85, 85, false);
        s.offset.y += 0.2f;
        s.SetSizeXZ(width, height);
        Shadows.Add(s);
    }

    public void ReleaseShadow(GameObject parent)
    {
        SpriteEx s;
        for (int i = 0; i < Shadows.Count; i++)
        {
            s = Shadows[i] as SpriteEx;
            if (s.client != parent)
                continue;
            SpriteManager.HideSprite(s);
        }
    }

    public void ReleaseBloodSprites()
    {
        while (Sprites.Count > 0)
        {
            SpriteManager.RemoveSprite(Sprites[0] as SpriteEx);
            Sprites.RemoveAt(0);

		}
    }

    public void ReleaseShadows()
    {
        while (Shadows.Count > 0)
        {
            SpriteManager.RemoveSprite(Shadows[0] as SpriteEx);
            Shadows.RemoveAt(0);
        }
    }

    IEnumerator UpdateSplatter(SpriteEx s, float size, float maxSize, float speed)
    {
        float f = size;

        while (f < maxSize)
        {

            f += speed * Time.deltaTime;
            if (f > maxSize)
                f = maxSize;
            s.SetSizeXZ(f, f);
            yield return new WaitForEndOfFrame();
        }

        Sprites.Add(s);
    }

    public void ShowDemageText(Transform _transform,float demage)
    {
        HUDTextInfo info7 = new HUDTextInfo(_transform, "-"+ demage);
        info7.Color = (Random.Range(0, 2) == 1) ? Color.red : Color.green;
        info7.Size = Random.Range(6, 12);
        info7.Speed = Random.Range(0.2f, 1);
        info7.VerticalAceleration = Random.Range(-2, 2f);
        info7.VerticalPositionOffset = -1.0f;
        info7.VerticalFactorScale = Random.Range(1.2f, 10);
        info7.Side = (Random.Range(0, 2) == 1) ? bl_Guidance.LeftDown : bl_Guidance.RightDown;
        info7.ExtraDelayTime = -1;
        info7.AnimationType = bl_HUDText.TextAnimationType.PingPong;
        info7.FadeSpeed = 200;
        info7.ExtraFloatSpeed = -11;
        //Send the information
        HUDRoot.NewText(info7);
    }
}
