Shader "MailingJoy/SimpleStandardAlphaNoBRDF"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "" {}
        _Add ("Add Color" , Color) = (1,1,1,1)
        _Overlay ("Overlay Color" , Color) = (0,0,0,0)
    }
    SubShader
    {
        Tags
        {
            "Queue"="Transparent"
        }
        LOD 100

        Pass
        {
            ZWrite off
            Blend SrcAlpha OneMinusSrcAlpha
            CGPROGRAM
            //
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_instancing

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            fixed4 _Add;
            fixed4 _Overlay;

            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                fixed4 col = tex2D(_MainTex, i.uv) * _Add + _Overlay;
                return col;
            }
            ENDCG
        }
    }
}