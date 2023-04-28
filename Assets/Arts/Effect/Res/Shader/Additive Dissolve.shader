// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "ASE/Effect/Additive Dissolve"
{
	Properties
	{
		_TintColor("Tint Color", Color) = (1,1,1,1)
		_ParticleColor("Particle Color", 2D) = "white" {}
		_TextureIntencity("Texture Intencity", Float) = 1
		_Texturepower("Texture power", Float) = 1
		_TextureAlpha("Texture Alpha", Float) = 0
		_particleTextureDissolve("particle Texture Dissolve", 2D) = "white" {}
		_DissolveIntencity("Dissolve Intencity", Float) = 1
		_DissolvePower("Dissolve Power", Float) = 1
		[HideInInspector] _texcoord2( "", 2D ) = "white" {}
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags {
            "Queue"="Geometry+0"
            "RenderType"="Transparent"
            "IsEmissive" = "true"
            "RenderPipeline" = "UniversalPipeline"
        }
		Cull Off
		ZWrite Off
		Blend SrcAlpha One , SrcAlpha One
		
		CGPROGRAM
		#pragma target 3.0
		#pragma exclude_renderers xbox360 xboxone ps4 psp2 n3ds wiiu 
		#pragma surface surf Unlit keepalpha noshadow noambient novertexlights nolightmap  nodynlightmap nodirlightmap nofog nometa noforwardadd 
		struct Input
		{
			float2 uv_texcoord;
			float4 vertexColor : COLOR;
			float2 uv2_texcoord2;
		};

		uniform float4 _TintColor;
		uniform sampler2D _ParticleColor;
		uniform float4 _ParticleColor_ST;
		uniform float _TextureIntencity;
		uniform float _Texturepower;
		uniform float _TextureAlpha;
		uniform sampler2D _particleTextureDissolve;
		uniform float4 _particleTextureDissolve_ST;
		uniform float _DissolvePower;
		uniform float _DissolveIntencity;

		inline half4 LightingUnlit( SurfaceOutput s, half3 lightDir, half atten )
		{
			return half4 ( 0, 0, 0, s.Alpha );
		}

		void surf( Input i , inout SurfaceOutput o )
		{
			float2 uv_ParticleColor = i.uv_texcoord * _ParticleColor_ST.xy + _ParticleColor_ST.zw;
			float4 tex2DNode2 = tex2D( _ParticleColor, uv_ParticleColor );
			o.Emission = ( _TintColor * tex2DNode2 * i.vertexColor * _TextureIntencity ).rgb;
			float2 uv_particleTextureDissolve = i.uv_texcoord * _particleTextureDissolve_ST.xy + _particleTextureDissolve_ST.zw;
			float clampResult26 = clamp( ( i.uv2_texcoord2.x + ( pow( tex2D( _particleTextureDissolve, uv_particleTextureDissolve ).a , _DissolvePower ) * _DissolveIntencity ) ) , 0.0 , 1.0 );
			o.Alpha = ( _TintColor.a * ( pow( tex2DNode2.a , _Texturepower ) * _TextureAlpha ) * i.vertexColor.a * clampResult26 );
		}

		ENDCG
	}
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=17000
7;1;1906;1010;2806.229;856.1783;1.84919;True;True
Node;AmplifyShaderEditor.RangedFloatNode;19;-1778.791,641.1982;Float;False;Property;_DissolvePower;Dissolve Power;8;0;Create;True;0;0;False;0;1;1;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;20;-1872.604,421.7036;Float;True;Property;_particleTextureDissolve;particle Texture Dissolve;6;0;Create;True;0;0;False;0;None;7ea28e7ff24d58749b94583b89ccf307;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.PowerNode;21;-1525.101,625.5455;Float;False;2;0;FLOAT;0;False;1;FLOAT;1;False;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;22;-1794.76,754.3498;Float;False;Property;_DissolveIntencity;Dissolve Intencity;7;0;Create;True;0;0;False;0;1;1;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;23;-1337.662,636.8255;Float;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.TexCoordVertexDataNode;24;-1775.674,279.459;Float;False;1;2;0;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;2;-1300.435,-449.111;Float;True;Property;_ParticleColor;Particle Color;1;0;Create;True;0;0;False;0;21ac14b95e99c1847aad53479cd2aecc;7ea28e7ff24d58749b94583b89ccf307;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;11;-1204.076,-233.4459;Float;False;Property;_Texturepower;Texture power;4;0;Create;True;0;0;False;0;1;1;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;12;-1263.155,-23.53091;Float;False;Property;_TextureAlpha;Texture Alpha;5;0;Create;True;0;0;False;0;0;1;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleAddOpNode;25;-1133.481,304.002;Float;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.PowerNode;10;-921.8393,-277.4402;Float;False;2;0;FLOAT;0;False;1;FLOAT;1;False;1;FLOAT;0
Node;AmplifyShaderEditor.ColorNode;5;-1225.932,-693.131;Float;False;Property;_TintColor;Tint Color;0;0;Create;True;0;0;False;0;1,1,1,1;1,1,1,1;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.ClampOpNode;26;-895.737,316.0745;Float;False;3;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;1;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;13;-666.828,-45.76175;Float;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.VertexColorNode;3;-1245.706,95.12926;Float;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;7;-1233.51,-137.3092;Float;False;Property;_TextureIntencity;Texture Intencity;3;0;Create;True;0;0;False;0;1;1;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;4;-324.3349,-377.1613;Float;False;4;4;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;COLOR;0,0,0,0;False;3;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;8;-343.1116,-105.5952;Float;False;4;4;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;0;False;3;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;-25.86014,-339.1441;Float;False;True;2;Float;ASEMaterialInspector;0;0;Unlit;ASE/Effect/Additive Dissolve;False;False;False;False;True;True;True;True;True;True;True;True;False;False;False;False;False;False;False;False;False;Off;2;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;0.5;True;False;0;True;Transparent;;Geometry;All;True;True;True;True;True;True;True;False;False;False;False;False;False;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;False;8;5;False;-1;1;False;-1;8;5;False;-1;1;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;Relative;0;;2;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;15;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;21;0;20;4
WireConnection;21;1;19;0
WireConnection;23;0;21;0
WireConnection;23;1;22;0
WireConnection;25;0;24;1
WireConnection;25;1;23;0
WireConnection;10;0;2;4
WireConnection;10;1;11;0
WireConnection;26;0;25;0
WireConnection;13;0;10;0
WireConnection;13;1;12;0
WireConnection;4;0;5;0
WireConnection;4;1;2;0
WireConnection;4;2;3;0
WireConnection;4;3;7;0
WireConnection;8;0;5;4
WireConnection;8;1;13;0
WireConnection;8;2;3;4
WireConnection;8;3;26;0
WireConnection;0;2;4;0
WireConnection;0;9;8;0
ASEEND*/
//CHKSM=7B089E2A297D3D38D952DD09529F6DEB85A2F534