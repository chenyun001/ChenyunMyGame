// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "ASE/Effect/Alpha Blend Face"
{
	Properties
	{
		_Emission("Emission", 2D) = "white" {}
		_Color0("Color 0", Color) = (1,1,1,0)
		_Color1("Color 1", Color) = (1,1,1,1)
		_TextureDissolve("Texture Dissolve", 2D) = "white" {}
		_softValue("soft Value", Float) = 10
		[HideInInspector] _texcoord2( "", 2D ) = "white" {}
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "Transparent"  "Queue" = "Geometry+0" "IsEmissive" = "true"  }
		Cull Off
		ZWrite Off
		Blend SrcAlpha OneMinusSrcAlpha , SrcAlpha OneMinusSrcAlpha
		
		CGPROGRAM
		#pragma target 3.0
		#pragma exclude_renderers xbox360 xboxone ps4 psp2 n3ds wiiu 
		#pragma surface surf Unlit keepalpha noshadow noambient novertexlights nolightmap  nodynlightmap nodirlightmap nofog nometa noforwardadd 
		struct Input
		{
			half ASEVFace : VFACE;
			float4 vertexColor : COLOR;
			float2 uv_texcoord;
			float2 uv2_texcoord2;
		};

		uniform float4 _Color1;
		uniform float4 _Color0;
		uniform sampler2D _Emission;
		uniform float4 _Emission_ST;
		uniform sampler2D _TextureDissolve;
		uniform float4 _TextureDissolve_ST;
		uniform float _softValue;

		inline half4 LightingUnlit( SurfaceOutput s, half3 lightDir, half atten )
		{
			return half4 ( 0, 0, 0, s.Alpha );
		}

		void surf( Input i , inout SurfaceOutput o )
		{
			float4 lerpResult16 = lerp( _Color1 , _Color0 , i.ASEVFace);
			float2 uv_Emission = i.uv_texcoord * _Emission_ST.xy + _Emission_ST.zw;
			float4 tex2DNode38 = tex2D( _Emission, uv_Emission );
			o.Emission = ( lerpResult16 * i.vertexColor * tex2DNode38 ).rgb;
			float2 uv_TextureDissolve = i.uv_texcoord * _TextureDissolve_ST.xy + _TextureDissolve_ST.zw;
			float lerpResult30 = lerp( _softValue , -1.5 , i.uv2_texcoord2.x);
			float clampResult32 = clamp( ( ( tex2D( _TextureDissolve, uv_TextureDissolve ).a * _softValue ) - lerpResult30 ) , 0.0 , 1.0 );
			o.Alpha = ( i.vertexColor.a * clampResult32 * tex2DNode38.a );
		}

		ENDCG
	}
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=17000
6.4;6.4;2035;1077;1869.674;1284.65;1.23652;True;True
Node;AmplifyShaderEditor.TexCoordVertexDataNode;27;-1297.024,498.3745;Float;False;1;2;0;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SamplerNode;25;-1122.177,-50.9776;Float;True;Property;_TextureDissolve;Texture Dissolve;4;0;Create;True;0;0;False;0;None;682c04cb255fe69428b5ab540a848ca6;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;28;-1017.122,213.2808;Float;False;Property;_softValue;soft Value;5;0;Create;True;0;0;False;0;10;10;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;26;-1021.02,326.2079;Float;False;Constant;_Float0;Float 0;10;0;Create;True;0;0;False;0;-1.5;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.LerpOp;30;-658.7486,258.5492;Float;True;3;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;29;-737.3925,119.1099;Float;False;2;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.ColorNode;24;-794.5383,-1293.436;Float;False;Property;_Color1;Color 1;3;0;Create;True;0;0;False;0;1,1,1,1;1,0.831902,0.3537736,1;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.FaceVariableNode;15;-824.6339,-752.5295;Float;True;0;1;FLOAT;0
Node;AmplifyShaderEditor.ColorNode;21;-793.3595,-1075.189;Float;False;Property;_Color0;Color 0;2;0;Create;True;0;0;False;0;1,1,1,0;0.7735849,0.3505062,0.1423104,1;True;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleSubtractOpNode;31;-326.8154,116.0018;Float;False;2;0;FLOAT;0;False;1;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.LerpOp;16;-20.90945,-576.2119;Float;False;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.SamplerNode;38;-1104.652,-360.8813;Float;True;Property;_Emission;Emission;0;0;Create;True;0;0;False;0;ae6273ca5a17d67469c209f23eb45a61;ae6273ca5a17d67469c209f23eb45a61;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;6;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.ClampOpNode;32;-164.3253,116.4639;Float;False;3;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;1;False;1;FLOAT;0
Node;AmplifyShaderEditor.VertexColorNode;35;-558.8603,-524.6528;Float;False;0;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;36;234.3223,-447.0806;Float;False;3;3;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;2;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;37;48.11844,-17.96729;Float;False;3;3;0;FLOAT;0;False;1;FLOAT;0;False;2;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;455.2343,-459.9302;Float;False;True;2;Float;ASEMaterialInspector;0;0;Unlit;ASE/Effect/Alpha Blend Face;False;False;False;False;True;True;True;True;True;True;True;True;False;False;False;False;False;False;False;False;False;Off;2;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;0.5;True;False;0;True;Transparent;;Geometry;All;True;True;True;True;True;True;True;False;False;False;False;False;False;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;False;2;5;False;-1;10;False;-1;2;5;False;-1;10;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;Relative;0;;1;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;15;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;30;0;28;0
WireConnection;30;1;26;0
WireConnection;30;2;27;1
WireConnection;29;0;25;4
WireConnection;29;1;28;0
WireConnection;31;0;29;0
WireConnection;31;1;30;0
WireConnection;16;0;24;0
WireConnection;16;1;21;0
WireConnection;16;2;15;0
WireConnection;32;0;31;0
WireConnection;36;0;16;0
WireConnection;36;1;35;0
WireConnection;36;2;38;0
WireConnection;37;0;35;4
WireConnection;37;1;32;0
WireConnection;37;2;38;4
WireConnection;0;2;36;0
WireConnection;0;9;37;0
ASEEND*/
//CHKSM=3BBF69957D0C661CAEB1B3974961E15A767C29AA