// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "ASE/Effect/Water" {
Properties {
	_Color0("Color 0", Color) = (0,0,0,0)
	_Color1("Color 1", Color) = (0,0,0,0)
	_TextureColor("Texture Color", 2D) = "white" {}// Ë®ÑÕÉ«ÌùÍ¼
	_TextureFoam("Texture Foam", 2D) = "white" {}// ÅÝÄ­ÌùÍ¼
	_FoamStep("Foam Step", Float) = 0.6
	_FoamIntencity("Foam Intencity", Float) = 0 // ÅÝÄ­Ç¿¶È
	_TextureNoise("Texture Noise", 2D) = "white" {}//ÈÅ¶¯ÌùÍ¼
	_NoiseIntencity("Noise Intencity", Float) = 0 // ÈÅ¶¯Ç¿¶È
	_Noiseuspeed("Noise u speed", Float) = 0 //
	_NoisevSpeed("Noise v Speed", Float) = 0
	_EdgeColor("Edge Color", Color) = (0,0,0,0) //±ßÔµÑÕÉ«
	_EdgeDistance("Edge Distance", Float) = 0  // ±ßÔµ¾àÀë
	[HideInInspector] _texcoord("", 2D) = "white" {}
	[HideInInspector] __dirty("", Int) = 1
}

Category {
		// "Queue"="Background+0" 

	Tags {"IgnoreProjector"="True" "RenderType"="Opaque" "RenderPipeline" = "UniversalPipeline" "IsEmissive" = "true" }
		Cull Back
		Blend SrcAlpha OneMinusSrcAlpha
	
	// ---- Fragment program cards
	SubShader {
		Pass {
		
			HLSLPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma fragmentoption ARB_precision_hint_fastest
			#pragma multi_compile_particles

			#include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
			#include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"
			
			CBUFFER_START(UnityPerMaterial)
				uniform float4 _Color1;
				uniform float _FoamStep;
				uniform sampler2D _TextureFoam;
				uniform float4 _TextureFoam_ST;
				uniform sampler2D _TextureNoise;
				uniform float4 _TextureNoise_ST;
				uniform float _Noiseuspeed;
				uniform float _NoisevSpeed;
				uniform float _NoiseIntencity;
				uniform float _FoamIntencity;
				uniform float4 _Color0;
				uniform sampler2D _TextureColor;
				uniform float4 _TextureColor_ST;
				//UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);
				//uniform float4 _CameraDepthTexture_TexelSize;
				uniform float _EdgeDistance;
				uniform float4 _EdgeColor;
			CBUFFER_END

			TEXTURE2D_X_FLOAT(_CameraDepthTexture);
			SAMPLER(sampler_CameraDepthTexture);
			
			struct appdata_t {
				float4 vertex : POSITION;
				half4 color : COLOR;
				float2 texcoord : TEXCOORD0;
				
			};

			struct v2f {
				float4 vertex : POSITION;
				half4 color : COLOR;
				float2 uv_texcoord : TEXCOORD0;
				float4 screenPos:TEXCOORD1;
				
			};

			v2f vert (appdata_t v)
			{
				v2f o;
				o.vertex = TransformObjectToHClip(v.vertex.xyz);
				o.color = v.color;
				o.uv_texcoord = v.texcoord;
				o.screenPos = ComputeScreenPos(o.vertex);   //ÆÁÄ»¿Õ¼äµÄÆë´Î×ø±ê
				return o;
			}		
			
			half4 frag (v2f i) : COLOR
			{				
				float2 uv0_TextureFoam = i.uv_texcoord * _TextureFoam_ST.xy + _TextureFoam_ST.zw;
				float2 uv0_TextureNoise = i.uv_texcoord * _TextureNoise_ST.xy + _TextureNoise_ST.zw;
				float2 uv_TextureColor = i.uv_texcoord * _TextureColor_ST.xy + _TextureColor_ST.zw;
				float2 appendResult102 = (float2((_Noiseuspeed * _Time.y) , (_Time.y * _NoisevSpeed)));
				float4 lerpResult113 = lerp((_Color1 + (step(_FoamStep , tex2D(_TextureFoam,
					(uv0_TextureFoam + (tex2D(_TextureNoise, (uv0_TextureNoise + appendResult102)).a * _NoiseIntencity))).r)
					* _FoamIntencity)) ,_Color0 , tex2D(_TextureColor, uv_TextureColor).r);
				half3 Albedo = lerpResult113.rgb;
				//---------------------------------------------
				float4 ase_screenPos = float4(i.screenPos.xyz , i.screenPos.w + 0.00000000001);
				float4 ase_screenPosNorm = ase_screenPos / ase_screenPos.w;
				ase_screenPosNorm.z = (UNITY_NEAR_CLIP_VALUE >= 0) ? ase_screenPosNorm.z : ase_screenPosNorm.z * 0.5 + 0.5;
				/*float4 _ZBufferParams;*/
				float depth = SAMPLE_TEXTURE2D(_CameraDepthTexture, sampler_CameraDepthTexture, i.screenPos).r;
				float screenDepth16 = Linear01Depth(depth, _ZBufferParams);
				float distanceDepth16 = abs((screenDepth16 - Linear01Depth(ase_screenPosNorm.z, _ZBufferParams)) / (_EdgeDistance));
				float clampResult63 = clamp((1.0 - distanceDepth16) , 0.0 , 1.0);
				half3 Emission = (clampResult63 * _EdgeColor).rgb;
				half Alpha = 1;	
				//Albedo = half3(0.5,0.5,0.5);
				return half4(Emission+Albedo,Alpha);
			}
			ENDHLSL
		}
	}
}
}
