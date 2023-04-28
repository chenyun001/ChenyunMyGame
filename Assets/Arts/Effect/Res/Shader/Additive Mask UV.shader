// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:2,bsrc:3,bdst:7,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:True,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:4674,x:32909,y:32704,varname:node_4674,prsc:2|emission-8789-OUT,alpha-9076-OUT;n:type:ShaderForge.SFN_Tex2d,id:2168,x:31981,y:32697,ptovrint:False,ptlb:Emission,ptin:_Emission,varname:node_2168,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,ntxv:0,isnm:False|UVIN-5946-OUT;n:type:ShaderForge.SFN_Multiply,id:8789,x:32675,y:32811,varname:node_8789,prsc:2|A-6998-OUT,B-4990-OUT,C-8545-RGB;n:type:ShaderForge.SFN_ValueProperty,id:4990,x:31981,y:33013,ptovrint:False,ptlb:glow,ptin:_glow,varname:node_4990,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:1;n:type:ShaderForge.SFN_Time,id:6864,x:31097,y:32783,varname:node_6864,prsc:2;n:type:ShaderForge.SFN_Multiply,id:421,x:31381,y:32777,varname:node_421,prsc:2|A-6864-T,B-98-OUT;n:type:ShaderForge.SFN_Multiply,id:7510,x:31381,y:32919,varname:node_7510,prsc:2|A-6864-T,B-3150-OUT;n:type:ShaderForge.SFN_ValueProperty,id:98,x:31109,y:32671,ptovrint:False,ptlb:U_speed,ptin:_U_speed,varname:node_98,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0;n:type:ShaderForge.SFN_ValueProperty,id:3150,x:31097,y:32979,ptovrint:False,ptlb:V_speed,ptin:_V_speed,varname:_U_speed_copy,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0;n:type:ShaderForge.SFN_Append,id:2977,x:31604,y:32777,varname:node_2977,prsc:2|A-421-OUT,B-7510-OUT;n:type:ShaderForge.SFN_Add,id:5946,x:31802,y:32697,varname:node_5946,prsc:2|A-6571-UVOUT,B-2977-OUT;n:type:ShaderForge.SFN_TexCoord,id:6571,x:31604,y:32583,varname:node_6571,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_Power,id:6998,x:32355,y:32704,varname:node_6998,prsc:2|VAL-2168-RGB,EXP-3268-OUT;n:type:ShaderForge.SFN_ValueProperty,id:3268,x:31981,y:32906,ptovrint:False,ptlb:Power,ptin:_Power,varname:node_3268,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:1;n:type:ShaderForge.SFN_VertexColor,id:8545,x:31981,y:33076,varname:node_8545,prsc:2;n:type:ShaderForge.SFN_Multiply,id:9076,x:32675,y:32970,varname:node_9076,prsc:2|A-2168-A,B-8545-A;proporder:2168-98-3150-4990-3268;pass:END;sub:END;*/

Shader "ASE/Effect/Additive Mask UV" {
    Properties {
        _TintColor("Tint Color", Color) = (1,1,1,1)
        _ParticleTexture("Particle Texture", 2D) = "white" {}
        _TextureIntencity("Texture Intencity", Float) = 1
        _TexturePower("Texture Power", Float) = 1
        _Uspeed("U speed", Float) = 0
        _Vspeed("V speed", Float) = 0
        _ParticleTextureMask("Particle Texture Mask", 2D) = "white" {}
        _MaskIntencity("Mask Intencity", Float) = 1
        _MaskPower("Mask Power", Float) = 1
        _MaskUspeed("Mask U speed", Float) = 0
        _MaskVspeed("Mask V speed", Float) = 0
        [HideInInspector] _texcoord("", 2D) = "white" {}
        [HideInInspector] __dirty("", Int) = 1
    }
    SubShader {
        Tags {
            "Queue"="Geometry+0"
            "RenderType"="Transparent"
            "IsEmissive" = "true"
            "RenderPipeline" = "UniversalPipeline"
        }
        LOD 100
        Pass {
            Name "FORWARD"
            Tags {
                "LightMode"="UniversalForward"
            }
            Cull Off
            ZWrite Off
            Blend SrcAlpha One , SrcAlpha One
            
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            /*
            #ifndef UNITY_PASS_FORWARDBASE
            #define UNITY_PASS_FORWARDBASE
            #endif*/

            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"

            #pragma multi_compile_fwdbase
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal 
            #pragma target 4.5

            CBUFFER_START(UnityPerMaterial)
                uniform float4 _TintColor;
                uniform sampler2D _ParticleTexture;
                uniform float4 _ParticleTexture_ST;
                uniform float _Uspeed;
                uniform float _Vspeed;
                uniform float _TextureIntencity;
                uniform float _TexturePower;
                uniform sampler2D _ParticleTextureMask;
                uniform float4 _ParticleTextureMask_ST;
                uniform float _MaskUspeed;
                uniform float _MaskVspeed;
                uniform float _MaskPower;
                uniform float _MaskIntencity;
            CBUFFER_END

            struct VertexInput {
                float4 vertex : POSITION;
                float2 texcoord0 : TEXCOORD0;
                float4 vertexColor : COLOR;
            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float2 uv0 : TEXCOORD0;
                float4 vertexColor : COLOR;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.uv0 = v.texcoord0;
                o.vertexColor = v.vertexColor;
                o.pos = TransformObjectToHClip(v.vertex.xyz);
                return o;
            }
            float4 frag(VertexOutput i, float facing : VFACE) : COLOR {
                float2 uv0_ParticleTexture = i.uv0 * _ParticleTexture_ST.xy + _ParticleTexture_ST.zw;
                float2 appendResult23 = (float2((_Uspeed * _Time.y) , (_Time.y * _Vspeed)));
                float4 tex2DNode2 = tex2D(_ParticleTexture, (uv0_ParticleTexture + appendResult23));
                float2 uv0_ParticleTextureMask = i.uv0 * _ParticleTextureMask_ST.xy + _ParticleTextureMask_ST.zw;
                float2 appendResult31 = (float2((_MaskUspeed * _Time.y) , (_Time.y * _MaskVspeed)));
                half3 Emission = ((_TintColor * tex2DNode2 * i.vertexColor * _TextureIntencity) * (_TintColor.a * pow(tex2DNode2.a , _TexturePower) * i.vertexColor.a * (pow(tex2D(_ParticleTextureMask, (uv0_ParticleTextureMask + appendResult31)).a , _MaskPower) * _MaskIntencity))).rgb;
                half Alpha = 1;
                half4 finalRGBA = half4(Emission, Alpha);
                return finalRGBA;
            }

            ENDHLSL
        }
    }
    FallBack "Diffuse"
   
}
