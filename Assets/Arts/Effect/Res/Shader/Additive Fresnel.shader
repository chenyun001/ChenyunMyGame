// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:2,bsrc:3,bdst:7,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:True,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:4674,x:32909,y:32704,varname:node_4674,prsc:2|emission-8789-OUT,alpha-9076-OUT;n:type:ShaderForge.SFN_Tex2d,id:2168,x:31981,y:32697,ptovrint:False,ptlb:Emission,ptin:_Emission,varname:node_2168,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,ntxv:0,isnm:False|UVIN-5946-OUT;n:type:ShaderForge.SFN_Multiply,id:8789,x:32675,y:32811,varname:node_8789,prsc:2|A-6998-OUT,B-4990-OUT,C-8545-RGB;n:type:ShaderForge.SFN_ValueProperty,id:4990,x:31981,y:33013,ptovrint:False,ptlb:glow,ptin:_glow,varname:node_4990,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:1;n:type:ShaderForge.SFN_Time,id:6864,x:31097,y:32783,varname:node_6864,prsc:2;n:type:ShaderForge.SFN_Multiply,id:421,x:31381,y:32777,varname:node_421,prsc:2|A-6864-T,B-98-OUT;n:type:ShaderForge.SFN_Multiply,id:7510,x:31381,y:32919,varname:node_7510,prsc:2|A-6864-T,B-3150-OUT;n:type:ShaderForge.SFN_ValueProperty,id:98,x:31109,y:32671,ptovrint:False,ptlb:U_speed,ptin:_U_speed,varname:node_98,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0;n:type:ShaderForge.SFN_ValueProperty,id:3150,x:31097,y:32979,ptovrint:False,ptlb:V_speed,ptin:_V_speed,varname:_U_speed_copy,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0;n:type:ShaderForge.SFN_Append,id:2977,x:31604,y:32777,varname:node_2977,prsc:2|A-421-OUT,B-7510-OUT;n:type:ShaderForge.SFN_Add,id:5946,x:31802,y:32697,varname:node_5946,prsc:2|A-6571-UVOUT,B-2977-OUT;n:type:ShaderForge.SFN_TexCoord,id:6571,x:31604,y:32583,varname:node_6571,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_Power,id:6998,x:32355,y:32704,varname:node_6998,prsc:2|VAL-2168-RGB,EXP-3268-OUT;n:type:ShaderForge.SFN_ValueProperty,id:3268,x:31981,y:32906,ptovrint:False,ptlb:Power,ptin:_Power,varname:node_3268,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:1;n:type:ShaderForge.SFN_VertexColor,id:8545,x:31981,y:33076,varname:node_8545,prsc:2;n:type:ShaderForge.SFN_Multiply,id:9076,x:32675,y:32970,varname:node_9076,prsc:2|A-2168-A,B-8545-A;proporder:2168-98-3150-4990-3268;pass:END;sub:END;*/

Shader "ASE/Effect/Additive Fresnel" {
    Properties {
        _Color("Color", Color) = (0,0,0,0)
        _TextureEmission("Texture Emission", 2D) = "white" {}
        _Bias("Bias", Float) = 0
        _Scale("Scale", Float) = 1
        _Power("Power", Float) = 5
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
            Cull Back
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
                uniform sampler2D _TextureEmission;
                uniform float4 _TextureEmission_ST;
                uniform float4 _Color;
                uniform float _Bias;
                uniform float _Scale;
                uniform float _Power;
            CBUFFER_END

            struct VertexInput {
                float4 vertex : POSITION;
                float3 normal:Normal;  // 模型空间法向量
                float2 texcoord0 : TEXCOORD0;
                float4 tangent: TANGENT;// 模型空间切向量
                float4 vertexColor : COLOR;

            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float2 uv_texcoord : TEXCOORD0;
                float4 vertexColor : COLOR;
                float3 worldPos :TEXCOORD1;
                float3 worldNormal :TEXCOORD2;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.uv_texcoord = v.texcoord0;
                o.vertexColor = v.vertexColor;
                VertexNormalInputs normalInput = GetVertexNormalInputs(v.normal, v.tangent);
                o.worldPos = TransformObjectToWorld(v.vertex.xyz);
                o.worldNormal = normalInput.normalWS;
                o.pos = TransformObjectToHClip(v.vertex.xyz);

                return o;
            }
            float4 frag(VertexOutput i, float facing : VFACE) : COLOR {
                float2 uv_TextureEmission = i.uv_texcoord * _TextureEmission_ST.xy + _TextureEmission_ST.zw;
                float4 tex2DNode21 = tex2D(_TextureEmission, uv_TextureEmission);
                float3 ase_worldPos = i.worldPos;
                float3 ase_worldViewDir = normalize(TransformWorldToViewDir(ase_worldPos));
                float3 ase_worldNormal = i.worldNormal;
                float fresnelNdotV13 = dot(ase_worldNormal, ase_worldViewDir);
                float fresnelNode13 = (_Bias + _Scale * pow(1.0 - fresnelNdotV13, _Power));
                half3 Emission = (tex2DNode21.a * _Color.a * i.vertexColor.a * (tex2DNode21 * _Color * fresnelNode13 * i.vertexColor)).rgb;
                half Alpha = 1;
                half4 finalRGBA = half4(Emission, Alpha);
                return finalRGBA;
            }

            ENDHLSL
        }
    }
    FallBack "Diffuse"
   
}
