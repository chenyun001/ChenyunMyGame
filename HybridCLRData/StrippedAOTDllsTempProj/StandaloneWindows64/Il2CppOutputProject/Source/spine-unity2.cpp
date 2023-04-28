﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>
struct Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t48934936522AEB6F71D7681E71616505B5032D05;
// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>
struct Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24;
// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816;
// System.Collections.Generic.Dictionary`2<Spine.Skin/SkinKey,Spine.Skin/SkinEntry>
struct Dictionary_2_tE01DC6E7E7C4B50EADD6954477AC5E8D0B755E8A;
// Spine.ExposedList`1<Spine.Animation>
struct ExposedList_1_tB85C18F6CA42A913025B77D04CB352D919551517;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t734F3FFC62C3FB3580CB3758CC2C119B16BD1DDE;
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE;
// Spine.ExposedList`1<Spine.ConstraintData>
struct ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_tDCE2BEA5D559AEBD08F0B1FBC12941780EED707C;
// Spine.ExposedList`1<Spine.EventData>
struct ExposedList_1_t28EA396FF523AC0F8E4E3D9FC8ABD97A1723B4FE;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t9365BAAA69E843DC913050C5C098F8ECF16521EC;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_t701CF995239AEA9B1FACF4F4CD79DEC59EAAE82E;
// Spine.ExposedList`1<Spine.IkConstraintData>
struct ExposedList_1_t7EBF79A37EB76BB19A48F7D0173CCF43BFA924D0;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_tA74F78C5C26C3019503E84FA8D33FF1A952A7800;
// Spine.ExposedList`1<System.Object>
struct ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_t383E11F1454AA3CA3B6766E2B546B3D633736DCD;
// Spine.ExposedList`1<Spine.PathConstraintData>
struct ExposedList_1_t6B78F1C0212291932DB2D8E512B526ADAF32ACBA;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A;
// Spine.ExposedList`1<Spine.Skin>
struct ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C;
// Spine.ExposedList`1<Spine.SlotData>
struct ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t3BF4AD6EAEB81764FB54F5B7FB472692105B43C4;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t1E90C754AE49BD952696404668135EEB57F3EB03;
// Spine.ExposedList`1<Spine.TransformConstraintData>
struct ExposedList_1_t9FCA33B64DBE9B22C1AFEDD65942E2E8ABD792AC;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.ICollection`1<Spine.Skin/SkinEntry>
struct ICollection_1_tB9D15938BF467874CC8E2F28AB8ACE53BF431B22;
// System.Collections.Generic.IEnumerable`1<Spine.Attachment>
struct IEnumerable_1_t04E5BBC6CA53DD42D6AFB6605B56F0EE737F4140;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<Spine.AtlasRegion>
struct IEqualityComparer_1_tF8A8CA264A948946A0B31BD96074366DC57C7B36;
// System.Collections.Generic.IEqualityComparer`1<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey>
struct IEqualityComparer_1_tCC4FC4F415454EC615BC55218E0294F323E5834E;
// System.Collections.Generic.Dictionary`2/KeyCollection<Spine.AtlasRegion,System.Int32>
struct KeyCollection_t01208E351585C7D95EFB54CBDA38BB46FC5445BB;
// System.Collections.Generic.Dictionary`2/KeyCollection<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct KeyCollection_t46BDEFA90A33CF94B6B9461FFAF52B292BA7403E;
// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0;
// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonDataModifierAsset>
struct List_1_tBFA73B26AF72BABC85549F091C4BA5A95B9FB412;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_tC0DB86C8C8EEBD50C33C1B9B8B375EBE994F49D8;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// Spine.Pool`1<Spine.TrackEntry>
struct Pool_1_t6A4D5C235C17499A31640750A06B651EA752FEC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<Spine.AtlasRegion,System.Int32>
struct ValueCollection_t3609D250DDE5F92F9273396067558C83AB36C9E7;
// System.Collections.Generic.Dictionary`2/ValueCollection<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct ValueCollection_tADEDDB40941ECD036A604E7F06AE9F56C3BC13F2;
// System.Collections.Generic.Dictionary`2/Entry<Spine.AtlasRegion,System.Int32>[]
struct EntryU5BU5D_t296AB519359CB6CB847233035B363A8074E866B3;
// System.Collections.Generic.Dictionary`2/Entry<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>[]
struct EntryU5BU5D_t7FA08D9D8FD8F380325F9A123DC0ED71AC62B885;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>[]
struct List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Spine.Unity.AtlasAssetBase[]
struct AtlasAssetBaseU5BU5D_t6D8EAEA3267D1DFC3FBFAA3ECE699B48E92E5C82;
// Spine.AtlasRegion[]
struct AtlasRegionU5BU5D_t0801B5D0EA2D5C01F8C7B0DE1B49EBC1DED2929C;
// Spine.Attachment[]
struct AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44;
// Spine.BoneData[]
struct BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// Spine.ConstraintData[]
struct ConstraintDataU5BU5D_t32B2B7ED484E60002DC4CC761A3DBDC83EE23585;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// UnityEngine.TextureFormat[]
struct TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9;
// Spine.Timeline[]
struct TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// Spine.Animation
struct Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8;
// Spine.AnimationState
struct AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41;
// Spine.AnimationStateData
struct AnimationStateData_t47D4F60C663435EF5F6514A679B9711A837244DB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Spine.AtlasPage
struct AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7;
// Spine.AtlasRegion
struct AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0;
// Spine.Attachment
struct Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Spine.Unity.BlendModeMaterials
struct BlendModeMaterials_t3DA4B85DB36B60D661B6403BD49E7D62F56B81D8;
// Spine.Bone
struct Bone_tC5BB616A04722279E675558888991F720C090467;
// Spine.BoneData
struct BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Spine.Event
struct Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97;
// Spine.EventData
struct EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3;
// Spine.EventQueue
struct EventQueue_t64394043A26C0B5D5687C80C8BEA6903705F6FE6;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Spine.MeshAttachment
struct MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t754492D79919D913B93BE05E83D270CEACAC392C;
// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t799773C2F6BEC0D47D27646DB0FBE22A28821E8B;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Spine.Unity.MeshRendererBuffers
struct MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Spine.PointAttachment
struct PointAttachment_tF918D9D4CC59EB88F5B0737E23A34DD0FB0FEDE8;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// Spine.RegionAttachment
struct RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Spine.Skeleton
struct Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A;
// Spine.SkeletonData
struct SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163;
// Spine.Skin
struct Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481;
// Spine.Slot
struct Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0;
// Spine.SlotData
struct SlotData_t0301519741B248AFC95ADFF4C882677A25D70548;
// Spine.Unity.SpineAnimation
struct SpineAnimation_t25ECBA3C591187CAF5DE85B0EE952F9F03FE832A;
// Spine.Unity.SpineAtlasRegion
struct SpineAtlasRegion_t58B3C62106E367910DD495D3840342DD53A8FCC9;
// Spine.Unity.SpineAttachment
struct SpineAttachment_t2DEB754FAA7065ED053D9E9948EBD039D08298BC;
// Spine.Unity.SpineAttributeBase
struct SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9;
// Spine.Unity.SpineBone
struct SpineBone_t855441E02B336B2C3D80D9EE10920812BEBD2DD9;
// Spine.Unity.SpineEvent
struct SpineEvent_t7D7BE1E21FECF355463D0023B9C8DF34E1DB666A;
// Spine.Unity.SpineIkConstraint
struct SpineIkConstraint_t2A744051EE31939B3AC45D95153E328422360853;
// Spine.Unity.SpinePathConstraint
struct SpinePathConstraint_tB9D652C85421BD4A98F8A1F923EFF61E1DD3A194;
// Spine.Unity.SpineSkin
struct SpineSkin_tA4008B5386DB558EE2F03005519ADA4460A9C036;
// Spine.Unity.SpineSlot
struct SpineSlot_tBBA9FF469D97132159B295A44F251379953C610D;
// Spine.Unity.SpineTransformConstraint
struct SpineTransformConstraint_tFA692585158AABF47E1286DF0FCFE7C7F9181250;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Spine.Timeline
struct Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF;
// Spine.TrackEntry
struct TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Spine.TranslateTimeline
struct TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852;
// System.Type
struct Type_t;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD;
// Spine.VertexAttachment
struct VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Spine.Unity.WaitForSpineAnimation
struct WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6;
// Spine.Unity.WaitForSpineAnimationComplete
struct WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D;
// Spine.Unity.WaitForSpineAnimationEnd
struct WaitForSpineAnimationEnd_t950B01E840B68416BB05D6CDAC1ED1A5B4DFDFE3;
// Spine.Unity.WaitForSpineEvent
struct WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D;
// Spine.Unity.WaitForSpineTrackEntryEnd
struct WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t751C3C0C3012ADBD85CD298FF1DCCDE3541B57B6;
// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7;
// Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials
struct SpriteMaskInteractionMaterials_tF9C97C34FC619F4BCF4E47C16262899351C10720;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t414DAE16C7EC801051018A87565EC121F4208987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBB0CCF991B5727BC04ED2735D48D686A3129E9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776;
IL2CPP_EXTERN_C String_t* _stringLiteral17507BA2A7941191B3EFC1C1112526FB466FD8CA;
IL2CPP_EXTERN_C String_t* _stringLiteral23848C2545B01CCE5A2ACA8DABB267A41AD846B7;
IL2CPP_EXTERN_C String_t* _stringLiteral3268CC5880671BBDF5D869E216CA687EC74C9F00;
IL2CPP_EXTERN_C String_t* _stringLiteral3B628C84D2E8012E8A9E62D59FACCEC32C50079F;
IL2CPP_EXTERN_C String_t* _stringLiteral456332094C775858DEAAF1DCBE59858947F2F4A2;
IL2CPP_EXTERN_C String_t* _stringLiteral7F907E97CEBB2F289D6DAFF932A32A6927EF50E9;
IL2CPP_EXTERN_C String_t* _stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89;
IL2CPP_EXTERN_C String_t* _stringLiteral95834A87D74B874FA2D0E60D439038ABD10BCBB5;
IL2CPP_EXTERN_C String_t* _stringLiteral958DE918771A6C70C78B59D2B3D51FC3B4AAE0B0;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E8EAA7C9BC4E951A68B3775994DF8C02C0BB69;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC7453D784A8909E62B8E93E94A5E22CA83D87811;
IL2CPP_EXTERN_C String_t* _stringLiteralC97FADBB19DF94D28E4601AE7B8198FDC83D934C;
IL2CPP_EXTERN_C String_t* _stringLiteralCD6E305656420A9ACB8E93771C902592D240E70F;
IL2CPP_EXTERN_C String_t* _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B;
IL2CPP_EXTERN_C String_t* _stringLiteralD76813C9010F8F6833AC58AC7AA5C4B3742C6CDB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0CE978812A584DC7C8972751B3A9F52A24BAE6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisList_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_m62FAECE2EDADCC144856687368D8E71BE16328B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AtlasUtilities_GetRepackedAttachments_m74B57AABD97659245BBD695C192DB5788DC33482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AtlasUtilities_GetRepackedSkin_m79996C16231D3834BBC06C5C830D10521F45BBC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AtlasUtilities_ToAtlasRegion_m81FFD41991D370CB12999C06399B36C42855E758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttachmentRegionExtensions_SetRegion_m75CFA3FDEE411B2C1721EFBB3FCA18E3375BFA85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttachmentRegionExtensions_SetRegion_mC36BC4AA5D284DFAD527193D55DAD7008B085DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttachmentRegionExtensions_ToRegionAttachmentPMAClone_mF79B9F7CDC7B6784AC4B0DF4C784FF3756F55637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttachmentRegionExtensions_ToRegionAttachment_m52A713CB6320B05B08E5274A95DD7090DB3049F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttachmentRegionExtensions_ToRegionAttachment_mCA58174908B9979D78402165211E63041B77906E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m24AD6798A13B262A3CEA131C99453B382939A574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAF5248DC06650A05B1B26E2B2C152A1BA43E8530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mD4A1F074F726A7FA1305CC1347ABC1574A98BCD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m86DDB255F4F255DC252600894FB638E08C3E2427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m979AD5AFF90FB491C9A74964ED06D6FFA4ED5A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_AddRange_m3D267120E3FC107FD12FF948330B0CABC5FB7BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_AddRange_mC176EBADC6A0876BDB5BAF1FC6EC062D59C04649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy__ctor_m3FA32C3CA17C5C814487525237DE8815395BF1EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m9798F867573319C482DAC5C898969BBE82F03970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m44BA843042417312F5B0DE949C2635BA54430E49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFE440E8FEB92EBC041C49048CB57707ADF37AC32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6E5EEA896768B2FBBC7B60D4177F59F139D6FAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m209E5F09A1686595EFD5A277913C1C7F5C8B6B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m55DE11F59FF173D0761F346406B180BA50C90D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE5CA5310F5312AA5CEAE5E6ED687D1F24300AC3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m41F9D0682DC2DEC45DFE466C6AFE6D89379BC9A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCB22AE8FAA1AE329E0501CFF07B106F08CF2DFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m74524EA7D41E994655E1E3EC461772673DBA5E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonExtensions_GetLocalVertices_m76C5769DC0EA4C7BC19F646FA9173A530CE88C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeletonExtensions_GetWorldVertices_m943F15DA3AAB27C80A9D665F0B0127DCB1267427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaitForSpineTrackEntryEnd_HandleEnd_m8372388BA8818CA17F300DADEE21F3C845B192FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88;
struct BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
struct TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>
struct Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t296AB519359CB6CB847233035B363A8074E866B3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t01208E351585C7D95EFB54CBDA38BB46FC5445BB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3609D250DDE5F92F9273396067558C83AB36C9E7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>
struct Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7FA08D9D8FD8F380325F9A123DC0ED71AC62B885* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t46BDEFA90A33CF94B6B9461FFAF52B292BA7403E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tADEDDB40941ECD036A604E7F06AE9F56C3BC13F2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

// Spine.ExposedList`1<Spine.ConstraintData>
struct ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	ConstraintDataU5BU5D_t32B2B7ED484E60002DC4CC761A3DBDC83EE23585* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AtlasRegionU5BU5D_t0801B5D0EA2D5C01F8C7B0DE1B49EBC1DED2929C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Spine.Animation
struct Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8  : public RuntimeObject
{
	// System.String Spine.Animation::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::timelines
	ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* ___timelines_1;
	// System.Collections.Generic.HashSet`1<System.String> Spine.Animation::timelineIds
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___timelineIds_2;
	// System.Single Spine.Animation::duration
	float ___duration_3;
};

// Spine.AnimationState
struct AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41  : public RuntimeObject
{
	// Spine.AnimationStateData Spine.AnimationState::data
	AnimationStateData_t47D4F60C663435EF5F6514A679B9711A837244DB* ___data_8;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::tracks
	ExposedList_1_t3BF4AD6EAEB81764FB54F5B7FB472692105B43C4* ___tracks_9;
	// Spine.ExposedList`1<Spine.Event> Spine.AnimationState::events
	ExposedList_1_tDCE2BEA5D559AEBD08F0B1FBC12941780EED707C* ___events_10;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Start
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Start_11;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Interrupt
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Interrupt_12;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::End
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___End_13;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Dispose
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Dispose_14;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Complete
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Complete_15;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.AnimationState::Event
	TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* ___Event_16;
	// Spine.EventQueue Spine.AnimationState::queue
	EventQueue_t64394043A26C0B5D5687C80C8BEA6903705F6FE6* ___queue_17;
	// System.Collections.Generic.HashSet`1<System.String> Spine.AnimationState::propertyIds
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___propertyIds_18;
	// System.Boolean Spine.AnimationState::animationsChanged
	bool ___animationsChanged_19;
	// System.Single Spine.AnimationState::timeScale
	float ___timeScale_20;
	// System.Int32 Spine.AnimationState::unkeyedState
	int32_t ___unkeyedState_21;
	// Spine.Pool`1<Spine.TrackEntry> Spine.AnimationState::trackEntryPool
	Pool_1_t6A4D5C235C17499A31640750A06B651EA752FEC4* ___trackEntryPool_22;
};

// Spine.AtlasPage
struct AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7  : public RuntimeObject
{
	// System.String Spine.AtlasPage::name
	String_t* ___name_0;
	// System.Int32 Spine.AtlasPage::width
	int32_t ___width_1;
	// System.Int32 Spine.AtlasPage::height
	int32_t ___height_2;
	// Spine.Format Spine.AtlasPage::format
	int32_t ___format_3;
	// Spine.TextureFilter Spine.AtlasPage::minFilter
	int32_t ___minFilter_4;
	// Spine.TextureFilter Spine.AtlasPage::magFilter
	int32_t ___magFilter_5;
	// Spine.TextureWrap Spine.AtlasPage::uWrap
	int32_t ___uWrap_6;
	// Spine.TextureWrap Spine.AtlasPage::vWrap
	int32_t ___vWrap_7;
	// System.Boolean Spine.AtlasPage::pma
	bool ___pma_8;
	// System.Object Spine.AtlasPage::rendererObject
	RuntimeObject* ___rendererObject_9;
};

// Spine.AtlasRegion
struct AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0  : public RuntimeObject
{
	// Spine.AtlasPage Spine.AtlasRegion::page
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___page_0;
	// System.String Spine.AtlasRegion::name
	String_t* ___name_1;
	// System.Int32 Spine.AtlasRegion::x
	int32_t ___x_2;
	// System.Int32 Spine.AtlasRegion::y
	int32_t ___y_3;
	// System.Int32 Spine.AtlasRegion::width
	int32_t ___width_4;
	// System.Int32 Spine.AtlasRegion::height
	int32_t ___height_5;
	// System.Single Spine.AtlasRegion::u
	float ___u_6;
	// System.Single Spine.AtlasRegion::v
	float ___v_7;
	// System.Single Spine.AtlasRegion::u2
	float ___u2_8;
	// System.Single Spine.AtlasRegion::v2
	float ___v2_9;
	// System.Single Spine.AtlasRegion::offsetX
	float ___offsetX_10;
	// System.Single Spine.AtlasRegion::offsetY
	float ___offsetY_11;
	// System.Int32 Spine.AtlasRegion::originalWidth
	int32_t ___originalWidth_12;
	// System.Int32 Spine.AtlasRegion::originalHeight
	int32_t ___originalHeight_13;
	// System.Int32 Spine.AtlasRegion::degrees
	int32_t ___degrees_14;
	// System.Boolean Spine.AtlasRegion::rotate
	bool ___rotate_15;
	// System.Int32 Spine.AtlasRegion::index
	int32_t ___index_16;
	// System.String[] Spine.AtlasRegion::names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names_17;
	// System.Int32[][] Spine.AtlasRegion::values
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___values_18;
};

// Spine.Unity.AttachmentTools.AtlasUtilities
struct AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461  : public RuntimeObject
{
};

// Spine.Attachment
struct Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75  : public RuntimeObject
{
	// System.String Spine.Attachment::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// Spine.Unity.AttachmentTools.AttachmentCloneExtensions
struct AttachmentCloneExtensions_t4061B205E9364F33C63F08337C29F603CF7121D3  : public RuntimeObject
{
};

// Spine.Unity.AttachmentTools.AttachmentRegionExtensions
struct AttachmentRegionExtensions_tA3275D9F0592C8829489F3C9242B211594FC6666  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Spine.Bone
struct Bone_tC5BB616A04722279E675558888991F720C090467  : public RuntimeObject
{
	// Spine.BoneData Spine.Bone::data
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_tC5BB616A04722279E675558888991F720C090467* ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t734F3FFC62C3FB3580CB3758CC2C119B16BD1DDE* ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::ax
	float ___ax_12;
	// System.Single Spine.Bone::ay
	float ___ay_13;
	// System.Single Spine.Bone::arotation
	float ___arotation_14;
	// System.Single Spine.Bone::ascaleX
	float ___ascaleX_15;
	// System.Single Spine.Bone::ascaleY
	float ___ascaleY_16;
	// System.Single Spine.Bone::ashearX
	float ___ashearX_17;
	// System.Single Spine.Bone::ashearY
	float ___ashearY_18;
	// System.Single Spine.Bone::a
	float ___a_19;
	// System.Single Spine.Bone::b
	float ___b_20;
	// System.Single Spine.Bone::worldX
	float ___worldX_21;
	// System.Single Spine.Bone::c
	float ___c_22;
	// System.Single Spine.Bone::d
	float ___d_23;
	// System.Single Spine.Bone::worldY
	float ___worldY_24;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_25;
	// System.Boolean Spine.Bone::active
	bool ___active_26;
};

// Spine.BoneData
struct BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77  : public RuntimeObject
{
	// System.Int32 Spine.BoneData::index
	int32_t ___index_0;
	// System.String Spine.BoneData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.BoneData::parent
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* ___parent_2;
	// System.Single Spine.BoneData::length
	float ___length_3;
	// System.Single Spine.BoneData::x
	float ___x_4;
	// System.Single Spine.BoneData::y
	float ___y_5;
	// System.Single Spine.BoneData::rotation
	float ___rotation_6;
	// System.Single Spine.BoneData::scaleX
	float ___scaleX_7;
	// System.Single Spine.BoneData::scaleY
	float ___scaleY_8;
	// System.Single Spine.BoneData::shearX
	float ___shearX_9;
	// System.Single Spine.BoneData::shearY
	float ___shearY_10;
	// Spine.TransformMode Spine.BoneData::transformMode
	int32_t ___transformMode_11;
	// System.Boolean Spine.BoneData::skinRequired
	bool ___skinRequired_12;
};

// Spine.Event
struct Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97  : public RuntimeObject
{
	// Spine.EventData Spine.Event::data
	EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* ___data_0;
	// System.Single Spine.Event::time
	float ___time_1;
	// System.Int32 Spine.Event::intValue
	int32_t ___intValue_2;
	// System.Single Spine.Event::floatValue
	float ___floatValue_3;
	// System.String Spine.Event::stringValue
	String_t* ___stringValue_4;
	// System.Single Spine.Event::volume
	float ___volume_5;
	// System.Single Spine.Event::balance
	float ___balance_6;
};

// Spine.EventData
struct EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3  : public RuntimeObject
{
	// System.String Spine.EventData::name
	String_t* ___name_0;
	// System.Int32 Spine.EventData::<Int>k__BackingField
	int32_t ___U3CIntU3Ek__BackingField_1;
	// System.Single Spine.EventData::<Float>k__BackingField
	float ___U3CFloatU3Ek__BackingField_2;
	// System.String Spine.EventData::<String>k__BackingField
	String_t* ___U3CStringU3Ek__BackingField_3;
	// System.String Spine.EventData::<AudioPath>k__BackingField
	String_t* ___U3CAudioPathU3Ek__BackingField_4;
	// System.Single Spine.EventData::<Volume>k__BackingField
	float ___U3CVolumeU3Ek__BackingField_5;
	// System.Single Spine.EventData::<Balance>k__BackingField
	float ___U3CBalanceU3Ek__BackingField_6;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Spine.Skeleton
struct Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3  : public RuntimeObject
{
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t734F3FFC62C3FB3580CB3758CC2C119B16BD1DDE* ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_t832DB618999898C4507FEDF55884721C3E514B2C* ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_t701CF995239AEA9B1FACF4F4CD79DEC59EAAE82E* ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t1E90C754AE49BD952696404668135EEB57F3EB03* ___transformConstraints_5;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_t383E11F1454AA3CA3B6766E2B546B3D633736DCD* ___pathConstraints_6;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t9365BAAA69E843DC913050C5C098F8ECF16521EC* ___updateCache_7;
	// Spine.Skin Spine.Skeleton::skin
	Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___skin_8;
	// System.Single Spine.Skeleton::r
	float ___r_9;
	// System.Single Spine.Skeleton::g
	float ___g_10;
	// System.Single Spine.Skeleton::b
	float ___b_11;
	// System.Single Spine.Skeleton::a
	float ___a_12;
	// System.Single Spine.Skeleton::time
	float ___time_13;
	// System.Single Spine.Skeleton::scaleX
	float ___scaleX_14;
	// System.Single Spine.Skeleton::scaleY
	float ___scaleY_15;
	// System.Single Spine.Skeleton::x
	float ___x_16;
	// System.Single Spine.Skeleton::y
	float ___y_17;
};

// Spine.SkeletonData
struct SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254  : public RuntimeObject
{
	// System.String Spine.SkeletonData::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.BoneData> Spine.SkeletonData::bones
	ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* ___bones_1;
	// Spine.ExposedList`1<Spine.SlotData> Spine.SkeletonData::slots
	ExposedList_1_t91DB309B7AA43B52841EC0CF8EBADD1D9D73DCA3* ___slots_2;
	// Spine.ExposedList`1<Spine.Skin> Spine.SkeletonData::skins
	ExposedList_1_t6FF735095BAC811A2AD50E52AE368F9A5D48B59D* ___skins_3;
	// Spine.Skin Spine.SkeletonData::defaultSkin
	Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___defaultSkin_4;
	// Spine.ExposedList`1<Spine.EventData> Spine.SkeletonData::events
	ExposedList_1_t28EA396FF523AC0F8E4E3D9FC8ABD97A1723B4FE* ___events_5;
	// Spine.ExposedList`1<Spine.Animation> Spine.SkeletonData::animations
	ExposedList_1_tB85C18F6CA42A913025B77D04CB352D919551517* ___animations_6;
	// Spine.ExposedList`1<Spine.IkConstraintData> Spine.SkeletonData::ikConstraints
	ExposedList_1_t7EBF79A37EB76BB19A48F7D0173CCF43BFA924D0* ___ikConstraints_7;
	// Spine.ExposedList`1<Spine.TransformConstraintData> Spine.SkeletonData::transformConstraints
	ExposedList_1_t9FCA33B64DBE9B22C1AFEDD65942E2E8ABD792AC* ___transformConstraints_8;
	// Spine.ExposedList`1<Spine.PathConstraintData> Spine.SkeletonData::pathConstraints
	ExposedList_1_t6B78F1C0212291932DB2D8E512B526ADAF32ACBA* ___pathConstraints_9;
	// System.Single Spine.SkeletonData::x
	float ___x_10;
	// System.Single Spine.SkeletonData::y
	float ___y_11;
	// System.Single Spine.SkeletonData::width
	float ___width_12;
	// System.Single Spine.SkeletonData::height
	float ___height_13;
	// System.String Spine.SkeletonData::version
	String_t* ___version_14;
	// System.String Spine.SkeletonData::hash
	String_t* ___hash_15;
	// System.Single Spine.SkeletonData::fps
	float ___fps_16;
	// System.String Spine.SkeletonData::imagesPath
	String_t* ___imagesPath_17;
	// System.String Spine.SkeletonData::audioPath
	String_t* ___audioPath_18;
};

// Spine.Unity.SkeletonExtensions
struct SkeletonExtensions_tB800A0B6643B09713DC202CAD1FFFE33CE4E4024  : public RuntimeObject
{
};

// Spine.Skin
struct Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481  : public RuntimeObject
{
	// System.String Spine.Skin::name
	String_t* ___name_0;
	// System.Collections.Generic.Dictionary`2<Spine.Skin/SkinKey,Spine.Skin/SkinEntry> Spine.Skin::attachments
	Dictionary_2_tE01DC6E7E7C4B50EADD6954477AC5E8D0B755E8A* ___attachments_1;
	// Spine.ExposedList`1<Spine.BoneData> Spine.Skin::bones
	ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* ___bones_2;
	// Spine.ExposedList`1<Spine.ConstraintData> Spine.Skin::constraints
	ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* ___constraints_3;
};

// Spine.Slot
struct Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0  : public RuntimeObject
{
	// Spine.SlotData Spine.Slot::data
	SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* ___data_0;
	// Spine.Bone Spine.Slot::bone
	Bone_tC5BB616A04722279E675558888991F720C090467* ___bone_1;
	// System.Single Spine.Slot::r
	float ___r_2;
	// System.Single Spine.Slot::g
	float ___g_3;
	// System.Single Spine.Slot::b
	float ___b_4;
	// System.Single Spine.Slot::a
	float ___a_5;
	// System.Single Spine.Slot::r2
	float ___r2_6;
	// System.Single Spine.Slot::g2
	float ___g2_7;
	// System.Single Spine.Slot::b2
	float ___b2_8;
	// System.Boolean Spine.Slot::hasSecondColor
	bool ___hasSecondColor_9;
	// Spine.Attachment Spine.Slot::attachment
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_10;
	// System.Single Spine.Slot::attachmentTime
	float ___attachmentTime_11;
	// Spine.ExposedList`1<System.Single> Spine.Slot::deform
	ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A* ___deform_12;
	// System.Int32 Spine.Slot::attachmentState
	int32_t ___attachmentState_13;
};

// Spine.SlotData
struct SlotData_t0301519741B248AFC95ADFF4C882677A25D70548  : public RuntimeObject
{
	// System.Int32 Spine.SlotData::index
	int32_t ___index_0;
	// System.String Spine.SlotData::name
	String_t* ___name_1;
	// Spine.BoneData Spine.SlotData::boneData
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* ___boneData_2;
	// System.Single Spine.SlotData::r
	float ___r_3;
	// System.Single Spine.SlotData::g
	float ___g_4;
	// System.Single Spine.SlotData::b
	float ___b_5;
	// System.Single Spine.SlotData::a
	float ___a_6;
	// System.Single Spine.SlotData::r2
	float ___r2_7;
	// System.Single Spine.SlotData::g2
	float ___g2_8;
	// System.Single Spine.SlotData::b2
	float ___b2_9;
	// System.Boolean Spine.SlotData::hasSecondColor
	bool ___hasSecondColor_10;
	// System.String Spine.SlotData::attachmentName
	String_t* ___attachmentName_11;
	// Spine.BlendMode Spine.SlotData::blendMode
	int32_t ___blendMode_12;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Spine.Timeline
struct Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF  : public RuntimeObject
{
	// System.String[] Spine.Timeline::propertyIds
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyIds_0;
	// System.Single[] Spine.Timeline::frames
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___frames_1;
};

// Spine.Unity.AnimationTools.TimelineExtensions
struct TimelineExtensions_t7592B34010DAA8AD97542034D1941C1D61443063  : public RuntimeObject
{
};

// Spine.TrackEntry
struct TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676  : public RuntimeObject
{
	// Spine.Animation Spine.TrackEntry::animation
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___animation_0;
	// Spine.TrackEntry Spine.TrackEntry::previous
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___previous_1;
	// Spine.TrackEntry Spine.TrackEntry::next
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___next_2;
	// Spine.TrackEntry Spine.TrackEntry::mixingFrom
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___mixingFrom_3;
	// Spine.TrackEntry Spine.TrackEntry::mixingTo
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___mixingTo_4;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Start
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Start_5;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Interrupt
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Interrupt_6;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::End
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___End_7;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Dispose
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Dispose_8;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Complete
	TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___Complete_9;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.TrackEntry::Event
	TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* ___Event_10;
	// System.Int32 Spine.TrackEntry::trackIndex
	int32_t ___trackIndex_11;
	// System.Boolean Spine.TrackEntry::loop
	bool ___loop_12;
	// System.Boolean Spine.TrackEntry::holdPrevious
	bool ___holdPrevious_13;
	// System.Boolean Spine.TrackEntry::reverse
	bool ___reverse_14;
	// System.Single Spine.TrackEntry::eventThreshold
	float ___eventThreshold_15;
	// System.Single Spine.TrackEntry::attachmentThreshold
	float ___attachmentThreshold_16;
	// System.Single Spine.TrackEntry::drawOrderThreshold
	float ___drawOrderThreshold_17;
	// System.Single Spine.TrackEntry::animationStart
	float ___animationStart_18;
	// System.Single Spine.TrackEntry::animationEnd
	float ___animationEnd_19;
	// System.Single Spine.TrackEntry::animationLast
	float ___animationLast_20;
	// System.Single Spine.TrackEntry::nextAnimationLast
	float ___nextAnimationLast_21;
	// System.Single Spine.TrackEntry::delay
	float ___delay_22;
	// System.Single Spine.TrackEntry::trackTime
	float ___trackTime_23;
	// System.Single Spine.TrackEntry::trackLast
	float ___trackLast_24;
	// System.Single Spine.TrackEntry::nextTrackLast
	float ___nextTrackLast_25;
	// System.Single Spine.TrackEntry::trackEnd
	float ___trackEnd_26;
	// System.Single Spine.TrackEntry::timeScale
	float ___timeScale_27;
	// System.Single Spine.TrackEntry::alpha
	float ___alpha_28;
	// System.Single Spine.TrackEntry::mixTime
	float ___mixTime_29;
	// System.Single Spine.TrackEntry::mixDuration
	float ___mixDuration_30;
	// System.Single Spine.TrackEntry::interruptAlpha
	float ___interruptAlpha_31;
	// System.Single Spine.TrackEntry::totalAlpha
	float ___totalAlpha_32;
	// Spine.MixBlend Spine.TrackEntry::mixBlend
	int32_t ___mixBlend_33;
	// Spine.ExposedList`1<System.Int32> Spine.TrackEntry::timelineMode
	ExposedList_1_tA74F78C5C26C3019503E84FA8D33FF1A952A7800* ___timelineMode_34;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.TrackEntry::timelineHoldMix
	ExposedList_1_t3BF4AD6EAEB81764FB54F5B7FB472692105B43C4* ___timelineHoldMix_35;
	// Spine.ExposedList`1<System.Single> Spine.TrackEntry::timelinesRotation
	ExposedList_1_tDD3820FCA0A1AA9D314E2E1FCE0A16BE3CE5E80A* ___timelinesRotation_36;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Spine.Unity.WaitForSpineAnimation
struct WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6  : public RuntimeObject
{
	// System.Boolean Spine.Unity.WaitForSpineAnimation::m_WasFired
	bool ___m_WasFired_0;
};

// Spine.Unity.WaitForSpineEvent
struct WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D  : public RuntimeObject
{
	// Spine.EventData Spine.Unity.WaitForSpineEvent::m_TargetEvent
	EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* ___m_TargetEvent_0;
	// System.String Spine.Unity.WaitForSpineEvent::m_EventName
	String_t* ___m_EventName_1;
	// Spine.AnimationState Spine.Unity.WaitForSpineEvent::m_AnimationState
	AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___m_AnimationState_2;
	// System.Boolean Spine.Unity.WaitForSpineEvent::m_WasFired
	bool ___m_WasFired_3;
	// System.Boolean Spine.Unity.WaitForSpineEvent::m_unsubscribeAfterFiring
	bool ___m_unsubscribeAfterFiring_4;
};

// Spine.Unity.WaitForSpineTrackEntryEnd
struct WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872  : public RuntimeObject
{
	// System.Boolean Spine.Unity.WaitForSpineTrackEntryEnd::m_WasFired
	bool ___m_WasFired_0;
};

// Spine.ExposedList`1/Enumerator<System.Object>
struct Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453 
{
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	RuntimeObject* ___current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>
struct Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____current_3;
};

// Spine.ExposedList`1/Enumerator<Spine.Timeline>
struct Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 
{
	// Spine.ExposedList`1<T> Spine.ExposedList`1/Enumerator::l
	ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* ___l_0;
	// System.Int32 Spine.ExposedList`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 Spine.ExposedList`1/Enumerator::ver
	int32_t ___ver_2;
	// T Spine.ExposedList`1/Enumerator::current
	Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* ___current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// Spine.CurveTimeline
struct CurveTimeline_tF590CEE203806A2BA7E2B603C6DB6421B231BF34  : public Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF
{
	// System.Single[] Spine.CurveTimeline::curves
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___curves_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// Spine.PointAttachment
struct PointAttachment_tF918D9D4CC59EB88F5B0737E23A34DD0FB0FEDE8  : public Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75
{
	// System.Single Spine.PointAttachment::x
	float ___x_1;
	// System.Single Spine.PointAttachment::y
	float ___y_2;
	// System.Single Spine.PointAttachment::rotation
	float ___rotation_3;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Spine.RegionAttachment
struct RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D  : public Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75
{
	// System.Single Spine.RegionAttachment::x
	float ___x_9;
	// System.Single Spine.RegionAttachment::y
	float ___y_10;
	// System.Single Spine.RegionAttachment::rotation
	float ___rotation_11;
	// System.Single Spine.RegionAttachment::scaleX
	float ___scaleX_12;
	// System.Single Spine.RegionAttachment::scaleY
	float ___scaleY_13;
	// System.Single Spine.RegionAttachment::width
	float ___width_14;
	// System.Single Spine.RegionAttachment::height
	float ___height_15;
	// System.Single Spine.RegionAttachment::regionOffsetX
	float ___regionOffsetX_16;
	// System.Single Spine.RegionAttachment::regionOffsetY
	float ___regionOffsetY_17;
	// System.Single Spine.RegionAttachment::regionWidth
	float ___regionWidth_18;
	// System.Single Spine.RegionAttachment::regionHeight
	float ___regionHeight_19;
	// System.Single Spine.RegionAttachment::regionOriginalWidth
	float ___regionOriginalWidth_20;
	// System.Single Spine.RegionAttachment::regionOriginalHeight
	float ___regionOriginalHeight_21;
	// System.Single[] Spine.RegionAttachment::offset
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___offset_22;
	// System.Single[] Spine.RegionAttachment::uvs
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___uvs_23;
	// System.Single Spine.RegionAttachment::r
	float ___r_24;
	// System.Single Spine.RegionAttachment::g
	float ___g_25;
	// System.Single Spine.RegionAttachment::b
	float ___b_26;
	// System.Single Spine.RegionAttachment::a
	float ___a_27;
	// System.String Spine.RegionAttachment::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_28;
	// System.Object Spine.RegionAttachment::<RendererObject>k__BackingField
	RuntimeObject* ___U3CRendererObjectU3Ek__BackingField_29;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// Spine.VertexAttachment
struct VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27  : public Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75
{
	// System.Int32 Spine.VertexAttachment::id
	int32_t ___id_3;
	// System.Int32[] Spine.VertexAttachment::bones
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bones_4;
	// System.Single[] Spine.VertexAttachment::vertices
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___vertices_5;
	// System.Int32 Spine.VertexAttachment::worldVerticesLength
	int32_t ___worldVerticesLength_6;
	// Spine.VertexAttachment Spine.VertexAttachment::deformAttachment
	VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* ___deformAttachment_7;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Spine.Unity.WaitForSpineAnimationComplete
struct WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D  : public WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6
{
};

// Spine.Unity.WaitForSpineAnimationEnd
struct WaitForSpineAnimationEnd_t950B01E840B68416BB05D6CDAC1ED1A5B4DFDFE3  : public WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t7DFBA915BF3CCBD700ED46D913E2C95A85864ED2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t7DFBA915BF3CCBD700ED46D913E2C95A85864ED2__padding[24];
	};
};

// Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A 
{
	// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::i
	int32_t ___i_0;
	// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::region
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___region_1;
};
// Native definition for P/Invoke marshalling of Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke
{
	int32_t ___i_0;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___region_1;
};
// Native definition for COM marshalling of Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
struct IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com
{
	int32_t ___i_0;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___region_1;
};

// Spine.Skin/SkinEntry
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F 
{
	// System.Int32 Spine.Skin/SkinEntry::slotIndex
	int32_t ___slotIndex_0;
	// System.String Spine.Skin/SkinEntry::name
	String_t* ___name_1;
	// Spine.Attachment Spine.Skin/SkinEntry::attachment
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_2;
};
// Native definition for P/Invoke marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F_marshaled_pinvoke
{
	int32_t ___slotIndex_0;
	char* ___name_1;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_2;
};
// Native definition for COM marshalling of Spine.Skin/SkinEntry
struct SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F_marshaled_com
{
	int32_t ___slotIndex_0;
	Il2CppChar* ___name_1;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___attachment_2;
};

// Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED 
{
	// System.String Spine.Unity.SpineAttachment/Hierarchy::skin
	String_t* ___skin_0;
	// System.String Spine.Unity.SpineAttachment/Hierarchy::slot
	String_t* ___slot_1;
	// System.String Spine.Unity.SpineAttachment/Hierarchy::name
	String_t* ___name_2;
};
// Native definition for P/Invoke marshalling of Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_pinvoke
{
	char* ___skin_0;
	char* ___slot_1;
	char* ___name_2;
};
// Native definition for COM marshalling of Spine.Unity.SpineAttachment/Hierarchy
struct Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_com
{
	Il2CppChar* ___skin_0;
	Il2CppChar* ___slot_1;
	Il2CppChar* ___name_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t130CF6E2EE02AEEBDEDE8D9B2BC12967F7A46B24  : public RuntimeObject
{
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// Spine.CurveTimeline2
struct CurveTimeline2_t6206FD4B2E6BA6CE14D85744DEC9268D470D66D9  : public CurveTimeline_tF590CEE203806A2BA7E2B603C6DB6421B231BF34
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Spine.MeshAttachment
struct MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E  : public VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27
{
	// System.Single Spine.MeshAttachment::regionOffsetX
	float ___regionOffsetX_8;
	// System.Single Spine.MeshAttachment::regionOffsetY
	float ___regionOffsetY_9;
	// System.Single Spine.MeshAttachment::regionWidth
	float ___regionWidth_10;
	// System.Single Spine.MeshAttachment::regionHeight
	float ___regionHeight_11;
	// System.Single Spine.MeshAttachment::regionOriginalWidth
	float ___regionOriginalWidth_12;
	// System.Single Spine.MeshAttachment::regionOriginalHeight
	float ___regionOriginalHeight_13;
	// Spine.MeshAttachment Spine.MeshAttachment::parentMesh
	MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* ___parentMesh_14;
	// System.Single[] Spine.MeshAttachment::uvs
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___uvs_15;
	// System.Single[] Spine.MeshAttachment::regionUVs
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___regionUVs_16;
	// System.Int32[] Spine.MeshAttachment::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_17;
	// System.Single Spine.MeshAttachment::r
	float ___r_18;
	// System.Single Spine.MeshAttachment::g
	float ___g_19;
	// System.Single Spine.MeshAttachment::b
	float ___b_20;
	// System.Single Spine.MeshAttachment::a
	float ___a_21;
	// System.Int32 Spine.MeshAttachment::hulllength
	int32_t ___hulllength_22;
	// System.String Spine.MeshAttachment::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_23;
	// System.Object Spine.MeshAttachment::<RendererObject>k__BackingField
	RuntimeObject* ___U3CRendererObjectU3Ek__BackingField_24;
	// System.Single Spine.MeshAttachment::<RegionU>k__BackingField
	float ___U3CRegionUU3Ek__BackingField_25;
	// System.Single Spine.MeshAttachment::<RegionV>k__BackingField
	float ___U3CRegionVU3Ek__BackingField_26;
	// System.Single Spine.MeshAttachment::<RegionU2>k__BackingField
	float ___U3CRegionU2U3Ek__BackingField_27;
	// System.Single Spine.MeshAttachment::<RegionV2>k__BackingField
	float ___U3CRegionV2U3Ek__BackingField_28;
	// System.Int32 Spine.MeshAttachment::<RegionDegrees>k__BackingField
	int32_t ___U3CRegionDegreesU3Ek__BackingField_29;
	// System.Int32[] Spine.MeshAttachment::<Edges>k__BackingField
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CEdgesU3Ek__BackingField_30;
	// System.Single Spine.MeshAttachment::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_31;
	// System.Single Spine.MeshAttachment::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_32;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Spine.Unity.SpineAtlasRegion
struct SpineAtlasRegion_t58B3C62106E367910DD495D3840342DD53A8FCC9  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Spine.Unity.SpineAtlasRegion::atlasAssetField
	String_t* ___atlasAssetField_0;
};

// Spine.Unity.SpineAttributeBase
struct SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Spine.Unity.SpineAttributeBase::dataField
	String_t* ___dataField_0;
	// System.String Spine.Unity.SpineAttributeBase::startsWith
	String_t* ___startsWith_1;
	// System.Boolean Spine.Unity.SpineAttributeBase::includeNone
	bool ___includeNone_2;
	// System.Boolean Spine.Unity.SpineAttributeBase::fallbackToTextField
	bool ___fallbackToTextField_3;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Spine.Unity.SpineAnimation
struct SpineAnimation_t25ECBA3C591187CAF5DE85B0EE952F9F03FE832A  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
};

// Spine.Unity.SpineAttachment
struct SpineAttachment_t2DEB754FAA7065ED053D9E9948EBD039D08298BC  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
	// System.Boolean Spine.Unity.SpineAttachment::returnAttachmentPath
	bool ___returnAttachmentPath_4;
	// System.Boolean Spine.Unity.SpineAttachment::currentSkinOnly
	bool ___currentSkinOnly_5;
	// System.Boolean Spine.Unity.SpineAttachment::placeholdersOnly
	bool ___placeholdersOnly_6;
	// System.String Spine.Unity.SpineAttachment::skinField
	String_t* ___skinField_7;
	// System.String Spine.Unity.SpineAttachment::slotField
	String_t* ___slotField_8;
};

// Spine.Unity.SpineBone
struct SpineBone_t855441E02B336B2C3D80D9EE10920812BEBD2DD9  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
};

// Spine.Unity.SpineEvent
struct SpineEvent_t7D7BE1E21FECF355463D0023B9C8DF34E1DB666A  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
	// System.Boolean Spine.Unity.SpineEvent::audioOnly
	bool ___audioOnly_4;
};

// Spine.Unity.SpineIkConstraint
struct SpineIkConstraint_t2A744051EE31939B3AC45D95153E328422360853  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
};

// Spine.Unity.SpinePathConstraint
struct SpinePathConstraint_tB9D652C85421BD4A98F8A1F923EFF61E1DD3A194  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
};

// Spine.Unity.SpineSkin
struct SpineSkin_tA4008B5386DB558EE2F03005519ADA4460A9C036  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
	// System.Boolean Spine.Unity.SpineSkin::defaultAsEmptyString
	bool ___defaultAsEmptyString_4;
};

// Spine.Unity.SpineSlot
struct SpineSlot_tBBA9FF469D97132159B295A44F251379953C610D  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
	// System.Boolean Spine.Unity.SpineSlot::containsBoundingBoxes
	bool ___containsBoundingBoxes_4;
};

// Spine.Unity.SpineTransformConstraint
struct SpineTransformConstraint_tFA692585158AABF47E1286DF0FCFE7C7F9181250  : public SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Spine.TranslateTimeline
struct TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852  : public CurveTimeline2_t6206FD4B2E6BA6CE14D85744DEC9268D470D66D9
{
	// System.Int32 Spine.TranslateTimeline::boneIndex
	int32_t ___boneIndex_10;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Spine.Unity.AtlasAssetBase[] Spine.Unity.SkeletonDataAsset::atlasAssets
	AtlasAssetBaseU5BU5D_t6D8EAEA3267D1DFC3FBFAA3ECE699B48E92E5C82* ___atlasAssets_4;
	// System.Single Spine.Unity.SkeletonDataAsset::scale
	float ___scale_5;
	// UnityEngine.TextAsset Spine.Unity.SkeletonDataAsset::skeletonJSON
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___skeletonJSON_6;
	// System.Boolean Spine.Unity.SkeletonDataAsset::isUpgradingBlendModeMaterials
	bool ___isUpgradingBlendModeMaterials_7;
	// Spine.Unity.BlendModeMaterials Spine.Unity.SkeletonDataAsset::blendModeMaterials
	BlendModeMaterials_t3DA4B85DB36B60D661B6403BD49E7D62F56B81D8* ___blendModeMaterials_8;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonDataModifierAsset> Spine.Unity.SkeletonDataAsset::skeletonDataModifiers
	List_1_tBFA73B26AF72BABC85549F091C4BA5A95B9FB412* ___skeletonDataModifiers_9;
	// System.String[] Spine.Unity.SkeletonDataAsset::fromAnimation
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fromAnimation_10;
	// System.String[] Spine.Unity.SkeletonDataAsset::toAnimation
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___toAnimation_11;
	// System.Single[] Spine.Unity.SkeletonDataAsset::duration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___duration_12;
	// System.Single Spine.Unity.SkeletonDataAsset::defaultMix
	float ___defaultMix_13;
	// UnityEngine.RuntimeAnimatorController Spine.Unity.SkeletonDataAsset::controller
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___controller_14;
	// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::skeletonData
	SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___skeletonData_15;
	// Spine.AnimationStateData Spine.Unity.SkeletonDataAsset::stateData
	AnimationStateData_t47D4F60C663435EF5F6514A679B9711A837244DB* ___stateData_16;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924  : public MulticastDelegate_t
{
};

// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::skeletonDataAsset
	SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___skeletonDataAsset_4;
	// System.String Spine.Unity.SkeletonRenderer::initialSkinName
	String_t* ___initialSkinName_5;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipX
	bool ___initialFlipX_6;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipY
	bool ___initialFlipY_7;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonRenderer::updateMode
	int32_t ___updateMode_8;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonRenderer::updateWhenInvisible
	int32_t ___updateWhenInvisible_9;
	// System.String[] Spine.Unity.SkeletonRenderer::separatorSlotNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separatorSlotNames_10;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonRenderer::separatorSlots
	List_1_tC0DB86C8C8EEBD50C33C1B9B8B375EBE994F49D8* ___separatorSlots_11;
	// System.Single Spine.Unity.SkeletonRenderer::zSpacing
	float ___zSpacing_12;
	// System.Boolean Spine.Unity.SkeletonRenderer::useClipping
	bool ___useClipping_13;
	// System.Boolean Spine.Unity.SkeletonRenderer::immutableTriangles
	bool ___immutableTriangles_14;
	// System.Boolean Spine.Unity.SkeletonRenderer::pmaVertexColors
	bool ___pmaVertexColors_15;
	// System.Boolean Spine.Unity.SkeletonRenderer::clearStateOnDisable
	bool ___clearStateOnDisable_16;
	// System.Boolean Spine.Unity.SkeletonRenderer::tintBlack
	bool ___tintBlack_17;
	// System.Boolean Spine.Unity.SkeletonRenderer::singleSubmesh
	bool ___singleSubmesh_18;
	// System.Boolean Spine.Unity.SkeletonRenderer::fixDrawOrder
	bool ___fixDrawOrder_19;
	// System.Boolean Spine.Unity.SkeletonRenderer::addNormals
	bool ___addNormals_20;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateTangents
	bool ___calculateTangents_21;
	// UnityEngine.SpriteMaskInteraction Spine.Unity.SkeletonRenderer::maskInteraction
	int32_t ___maskInteraction_22;
	// Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials Spine.Unity.SkeletonRenderer::maskMaterials
	SpriteMaskInteractionMaterials_tF9C97C34FC619F4BCF4E47C16262899351C10720* ___maskMaterials_23;
	// System.Boolean Spine.Unity.SkeletonRenderer::disableRenderingOnOverride
	bool ___disableRenderingOnOverride_28;
	// Spine.Unity.SkeletonRenderer/InstructionDelegate Spine.Unity.SkeletonRenderer::generateMeshOverride
	InstructionDelegate_t751C3C0C3012ADBD85CD298FF1DCCDE3541B57B6* ___generateMeshOverride_29;
	// Spine.Unity.MeshGeneratorDelegate Spine.Unity.SkeletonRenderer::OnPostProcessVertices
	MeshGeneratorDelegate_t799773C2F6BEC0D47D27646DB0FBE22A28821E8B* ___OnPostProcessVertices_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customMaterialOverride
	Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* ___customMaterialOverride_31;
	// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customSlotMaterials
	Dictionary_2_t48934936522AEB6F71D7681E71616505B5032D05* ___customSlotMaterials_32;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonRenderer::currentInstructions
	SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___currentInstructions_33;
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonRenderer::meshGenerator
	MeshGenerator_t754492D79919D913B93BE05E83D270CEACAC392C* ___meshGenerator_34;
	// Spine.Unity.MeshRendererBuffers Spine.Unity.SkeletonRenderer::rendererBuffers
	MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* ___rendererBuffers_35;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonRenderer::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_36;
	// UnityEngine.MeshFilter Spine.Unity.SkeletonRenderer::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_37;
	// System.Boolean Spine.Unity.SkeletonRenderer::valid
	bool ___valid_38;
	// Spine.Skeleton Spine.Unity.SkeletonRenderer::skeleton
	Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___skeleton_39;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnRebuild
	SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7* ___OnRebuild_40;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnMeshAndMaterialsUpdated
	SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7* ___OnMeshAndMaterialsUpdated_41;
	// UnityEngine.MaterialPropertyBlock Spine.Unity.SkeletonRenderer::reusedPropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___reusedPropertyBlock_42;
};

// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A  : public SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A
{
	// Spine.AnimationState Spine.Unity.SkeletonAnimation::state
	AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___state_44;
	// System.Boolean Spine.Unity.SkeletonAnimation::wasUpdatedAfterInit
	bool ___wasUpdatedAfterInit_45;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_BeforeApply
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____BeforeApply_46;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateLocal
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____UpdateLocal_47;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateWorld
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____UpdateWorld_48;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateComplete
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____UpdateComplete_49;
	// System.String Spine.Unity.SkeletonAnimation::_animationName
	String_t* ____animationName_50;
	// System.Boolean Spine.Unity.SkeletonAnimation::loop
	bool ___loop_51;
	// System.Single Spine.Unity.SkeletonAnimation::timeScale
	float ___timeScale_52;
};

// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>

// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>

// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>

// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>

// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.BoneData>

// Spine.ExposedList`1<Spine.ConstraintData>
struct ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	ConstraintDataU5BU5D_t32B2B7ED484E60002DC4CC761A3DBDC83EE23585* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.ConstraintData>

// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	TimelineU5BU5D_t8B04D17CE2EACC9AC7F16E46E610622EF95882F8* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.Timeline>

// System.Collections.Generic.List`1<Spine.AtlasRegion>
struct List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AtlasRegionU5BU5D_t0801B5D0EA2D5C01F8C7B0DE1B49EBC1DED2929C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Spine.AtlasRegion>

// System.Collections.Generic.List`1<Spine.Attachment>
struct List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AttachmentU5BU5D_tD6AB46FF81FE423600D45F39A75768ED11BD9D44* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Spine.Attachment>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Texture2D>

// Spine.Animation

// Spine.Animation

// Spine.AnimationState
struct AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41_StaticFields
{
	// Spine.Animation Spine.AnimationState::EmptyAnimation
	Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___EmptyAnimation_0;
};

// Spine.AnimationState

// Spine.AtlasPage

// Spine.AtlasPage

// Spine.AtlasRegion

// Spine.AtlasRegion

// Spine.Unity.AttachmentTools.AtlasUtilities
struct AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32> Spine.Unity.AttachmentTools.AtlasUtilities::existingRegions
	Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* ___existingRegions_5;
	// System.Collections.Generic.List`1<System.Int32> Spine.Unity.AttachmentTools.AtlasUtilities::regionIndices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___regionIndices_6;
	// System.Collections.Generic.List`1<Spine.AtlasRegion> Spine.Unity.AttachmentTools.AtlasUtilities::originalRegions
	List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* ___originalRegions_7;
	// System.Collections.Generic.List`1<Spine.AtlasRegion> Spine.Unity.AttachmentTools.AtlasUtilities::repackedRegions
	List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* ___repackedRegions_8;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D>[] Spine.Unity.AttachmentTools.AtlasUtilities::texturesToPackAtParam
	List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* ___texturesToPackAtParam_9;
	// System.Collections.Generic.List`1<Spine.Attachment> Spine.Unity.AttachmentTools.AtlasUtilities::inoutAttachments
	List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___inoutAttachments_10;
	// System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D> Spine.Unity.AttachmentTools.AtlasUtilities::CachedRegionTextures
	Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* ___CachedRegionTextures_11;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> Spine.Unity.AttachmentTools.AtlasUtilities::CachedRegionTexturesList
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___CachedRegionTexturesList_12;
};

// Spine.Unity.AttachmentTools.AtlasUtilities

// Spine.Attachment

// Spine.Attachment

// Spine.Unity.AttachmentTools.AttachmentCloneExtensions

// Spine.Unity.AttachmentTools.AttachmentCloneExtensions

// Spine.Unity.AttachmentTools.AttachmentRegionExtensions

// Spine.Unity.AttachmentTools.AttachmentRegionExtensions

// System.Attribute

// System.Attribute

// Spine.Bone
struct Bone_tC5BB616A04722279E675558888991F720C090467_StaticFields
{
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;
};

// Spine.Bone

// Spine.BoneData

// Spine.BoneData

// Spine.Event

// Spine.Event

// Spine.EventData

// Spine.EventData

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Spine.Skeleton

// Spine.Skeleton

// Spine.SkeletonData

// Spine.SkeletonData

// Spine.Unity.SkeletonExtensions

// Spine.Unity.SkeletonExtensions

// Spine.Skin

// Spine.Skin

// Spine.Slot

// Spine.Slot

// Spine.SlotData

// Spine.SlotData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Spine.Timeline

// Spine.Timeline

// Spine.Unity.AnimationTools.TimelineExtensions

// Spine.Unity.AnimationTools.TimelineExtensions

// Spine.TrackEntry

// Spine.TrackEntry

// System.ValueType

// System.ValueType

// Spine.Unity.WaitForSpineAnimation

// Spine.Unity.WaitForSpineAnimation

// Spine.Unity.WaitForSpineEvent

// Spine.Unity.WaitForSpineEvent

// Spine.Unity.WaitForSpineTrackEntryEnd

// Spine.Unity.WaitForSpineTrackEntryEnd

// Spine.ExposedList`1/Enumerator<System.Object>

// Spine.ExposedList`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>

// Spine.ExposedList`1/Enumerator<Spine.Timeline>

// Spine.ExposedList`1/Enumerator<Spine.Timeline>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// Spine.CurveTimeline

// Spine.CurveTimeline

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// Spine.PointAttachment

// Spine.PointAttachment

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// Spine.RegionAttachment

// Spine.RegionAttachment

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// Spine.VertexAttachment
struct VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27_StaticFields
{
	// System.Int32 Spine.VertexAttachment::nextID
	int32_t ___nextID_1;
	// System.Object Spine.VertexAttachment::nextIdLock
	RuntimeObject* ___nextIdLock_2;
};

// Spine.VertexAttachment

// System.Void

// System.Void

// Spine.Unity.WaitForSpineAnimationComplete

// Spine.Unity.WaitForSpineAnimationComplete

// Spine.Unity.WaitForSpineAnimationEnd

// Spine.Unity.WaitForSpineAnimationEnd

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey

// Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey

// Spine.Skin/SkinEntry

// Spine.Skin/SkinEntry

// Spine.Unity.SpineAttachment/Hierarchy

// Spine.Unity.SpineAttachment/Hierarchy

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t130CF6E2EE02AEEBDEDE8D9B2BC12967F7A46B24_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::0C6A9A02BE5F7EB53FB20C6B5B3C610B857B50E630614FEC5F4BFCD7FC6F1567
	__StaticArrayInitTypeSizeU3D24_t7DFBA915BF3CCBD700ED46D913E2C95A85864ED2 ___0C6A9A02BE5F7EB53FB20C6B5B3C610B857B50E630614FEC5F4BFCD7FC6F1567_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t7DFBA915BF3CCBD700ED46D913E2C95A85864ED2 ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_1;
};

// <PrivateImplementationDetails>

// UnityEngine.Bounds

// UnityEngine.Bounds

// Spine.CurveTimeline2

// Spine.CurveTimeline2

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Spine.MeshAttachment

// Spine.MeshAttachment

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Spine.Unity.SpineAtlasRegion

// Spine.Unity.SpineAtlasRegion

// Spine.Unity.SpineAttributeBase

// Spine.Unity.SpineAttributeBase

// UnityEngine.TextureFormat

// UnityEngine.TextureFormat

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Shader

// UnityEngine.Shader

// Spine.Unity.SpineAnimation

// Spine.Unity.SpineAnimation

// Spine.Unity.SpineAttachment

// Spine.Unity.SpineAttachment

// Spine.Unity.SpineBone

// Spine.Unity.SpineBone

// Spine.Unity.SpineEvent

// Spine.Unity.SpineEvent

// Spine.Unity.SpineIkConstraint

// Spine.Unity.SpineIkConstraint

// Spine.Unity.SpinePathConstraint

// Spine.Unity.SpinePathConstraint

// Spine.Unity.SpineSkin

// Spine.Unity.SpineSkin

// Spine.Unity.SpineSlot

// Spine.Unity.SpineSlot

// Spine.Unity.SpineTransformConstraint

// Spine.Unity.SpineTransformConstraint

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// Spine.TranslateTimeline

// Spine.TranslateTimeline

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NullReferenceException

// System.NullReferenceException

// Spine.Unity.SkeletonDataAsset

// Spine.Unity.SkeletonDataAsset

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// Spine.AnimationState/TrackEntryDelegate

// Spine.AnimationState/TrackEntryDelegate

// Spine.AnimationState/TrackEntryEventDelegate

// Spine.AnimationState/TrackEntryEventDelegate

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_StaticFields
{
	// System.Int32 Spine.Unity.SkeletonRenderer::STENCIL_COMP_PARAM_ID
	int32_t ___STENCIL_COMP_PARAM_ID_24;
	// System.Int32 Spine.Unity.SkeletonRenderer::SUBMESH_DUMMY_PARAM_ID
	int32_t ___SUBMESH_DUMMY_PARAM_ID_43;
};

// Spine.Unity.SkeletonRenderer

// Spine.Unity.SkeletonAnimation

// Spine.Unity.SkeletonAnimation
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Spine.BoneData[]
struct BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* m_Items[1];

	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* m_Items[1];

	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.TextureFormat[]
struct TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993  : public RuntimeArray
{
	ALIGN_FIELD (8) Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D m_Items[1];

	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.List`1<UnityEngine.Texture2D>[]
struct List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* m_Items[1];

	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453 ExposedList_1_GetEnumerator_m3FBC2F5FB0D42C43E9CC9179CCEE0155B7C6D71B_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m07F4232A73E7B6D24AE24206FF0567655DE6A552_gshared (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) ;
// T Spine.ExposedList`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m498B7803B408E95A6D75A8E951E008D9ABED33DD_gshared_inline (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) ;
// System.Boolean Spine.ExposedList`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA3711E6F31721CD471A7EEABF16E029A413B99B5_gshared (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m931E25EF2557C3A386E4B9DC8D8212B7D9D3F5AE_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<System.Object>::AddRange(Spine.ExposedList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExposedList_1_AddRange_m90B01B3F2FFFB6C8B353691458AB8CE253783EAE_gshared (ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* __this, ExposedList_1_t90C5D64C7E11EBF0854CF0859FD55DF94D6ED6B7* ___0_list, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0F20C45B5CE4BF0BF8DAA9039EB54C04F618EC7B_gshared (Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m87E09AAB8C1DC14CF6D613508A3353C01951D5CB_gshared (Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24* __this, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1D0719C10584FA1EC40A4998CD193633F40A234E_gshared (Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24* __this, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEE283B78A6DBFCF9C7189F732BF991A13E409432_gshared (Dictionary_2_t703573FCB9C9178FBB719FCBEC8B9ADF1AED3A24* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SpineAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D (SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9* __this, const RuntimeMethod* method) ;
// Spine.Bone Spine.Skeleton::FindBone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* Skeleton_FindBone_m9031B1DD1DEF943D4A310F02E29EC0954F598725 (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, String_t* ___0_boneName, const RuntimeMethod* method) ;
// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::GetSkeletonData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* SkeletonDataAsset_GetSkeletonData_m36E09447A45E617B389578FCBFE63DF6F4F40758 (SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* __this, bool ___0_quiet, const RuntimeMethod* method) ;
// Spine.BoneData Spine.SkeletonData::FindBone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* SkeletonData_FindBone_mF7D9E21ECEF8A69804B18B1B650CAD608BC68071 (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, String_t* ___0_boneName, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SpineAttachment/Hierarchy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy__ctor_m3FA32C3CA17C5C814487525237DE8815395BF1EF (Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED* __this, String_t* ___0_fullPath, const RuntimeMethod* method) ;
// Spine.Unity.SpineAttachment/Hierarchy Spine.Unity.SpineAttachment::GetHierarchy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED SpineAttachment_GetHierarchy_mA9C431888A5D7378C2C69C917720E0F08A793D5D (String_t* ___0_fullPath, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// Spine.SlotData Spine.SkeletonData::FindSlot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* SkeletonData_FindSlot_mC308C59663EEEC0C92CFE30133E05A0B1A1DB741 (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, String_t* ___0_slotName, const RuntimeMethod* method) ;
// Spine.Skin Spine.SkeletonData::FindSkin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* SkeletonData_FindSkin_mDA3C606247669FB4D0EC2C78E572FD9E48AA64D4 (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, String_t* ___0_skinName, const RuntimeMethod* method) ;
// System.Int32 Spine.SlotData::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlotData_get_Index_m1121CFC71E439C552906D3A9A6FF38A1B76748CC_inline (SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* __this, const RuntimeMethod* method) ;
// Spine.Attachment Spine.Skin::GetAttachment(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* Skin_GetAttachment_mA47938B1658AB2EDDC0AE1B4AECBA4C222C44F57 (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, int32_t ___0_slotIndex, String_t* ___1_name, const RuntimeMethod* method) ;
// Spine.Attachment Spine.Unity.SpineAttachment::GetAttachment(System.String,Spine.SkeletonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* SpineAttachment_GetAttachment_mFDD05E8F8D3BAB0FE27B38BE7BAFB92C105DB79B (String_t* ___0_attachmentPath, SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___1_skeletonData, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Single Spine.Skeleton::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_R_m957C55591D3D8C9A1F0A5C59D019EC2E71F069D2_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) ;
// System.Single Spine.Skeleton::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_G_m7C34E91BB1A6E7B390DB23151F896A99652F3CC6_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) ;
// System.Single Spine.Skeleton::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_B_mB0A93D0B45200CAA6E8240A7A9ADA53D262CB7BE_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) ;
// System.Single Spine.Skeleton::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_A_m227FF903C89CC109C815B007E933246C39EFAD1C_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single Spine.RegionAttachment::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_R_m7445C818B40C2A8EE25F0E322449C7D36110DFA6_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// System.Single Spine.RegionAttachment::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_G_m2CCFE953B4C43C41AABDF2C4F6A43EE21B056D4D_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// System.Single Spine.RegionAttachment::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_B_mA934F931230C6AAB6FFAD0D5A90D7522C5C74009_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// System.Single Spine.RegionAttachment::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_A_m05117209BC3B9AA2B58D597A97C07B3EDBE331A5_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// System.Single Spine.MeshAttachment::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_R_mC6D8DA19828398596A6AB5A93D9CC7FD38E7F659_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) ;
// System.Single Spine.MeshAttachment::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_G_m9DED61D7E52E18C44074B184E3AC115712DDF37B_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) ;
// System.Single Spine.MeshAttachment::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_B_m4D3207F0138F1FA9B3109DDC1CB439260F03DEB7_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) ;
// System.Single Spine.MeshAttachment::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_A_m699B94DB8923F85FC6FA6EDDBF1BF6CCF5C39946_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) ;
// System.Single Spine.Slot::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_R_m32B8F1985A30590340042C156F1681D82ECAEE5C_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Single Spine.Slot::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_G_m80B6DD9DEB62F4EFEE501C2E34D7E3016F62BF5E_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Single Spine.Slot::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_B_m4463970E3F74E12ED29B819D5C1332AE328D730E_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Single Spine.Slot::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_A_m1FB5C342FD9FB97FE5EC82B55397C35C99D49272_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Single Spine.Slot::get_R2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_R2_mFFF8E092B186942D9EB7B6513511093FB5C07E65_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Single Spine.Slot::get_G2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_G2_m72AB1BBEA9E769AD1FC36FC760751D73B9037843_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Single Spine.Slot::get_B2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_B2_mB4BEF912A63EC95AE4EAAB70E686FE198A769B0B_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_A(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_A_mD9FC576C115D119B76ECA978FC14A1D4D4191E24_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_R(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_R_m914D7E1F23A31D100D167DF2DC5513825C441BC7_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_G(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_G_m64EACF26B14B2B242648482ACE9CCE063A0117AE_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_B(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_B_m06359B96A97EEC04CA6104AF4F8A2CB1D3E85302_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Slot::set_A(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_A_m2D9500F8CC69A46F2BAD01C8E4368E678AE58A6F_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Slot::set_R(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_R_m5A7F17AF272D985848BF9271CF1AD4C8C1253CC6_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Slot::set_G(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_G_mC469AC792B8A90D09B01E7E984AD6B0491A57160_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Slot::set_B(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_B_m39EB0F3969EBAE9EB0D06A1BABC39319353D611F_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_A(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_A_mDA7BD3D9848F651029D33DE745011881A80BBB6C_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_R(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_R_m801BE04357A97DD6784929D25F7387B4AA70A1E4_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_G(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_G_mC3535255A8FD5348DF13AF7A3498C5E99B989A36_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_B(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_B_mDF37D72C03FD51DCAB15568D50DDE05CD5A5E48C_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_A(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_A_mA9CD59B4EE888B7D3EE2BD6FE6891E31D28EE91C_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_R(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_R_m862AF2698571C62D0122172408487D6A111A4084_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_G(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_G_m3CBF7A645DD974CDEE9C29D05659365F78D23724_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_B(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_B_m6580B6F65BF03D2BE31DCC00AD891DB61649A32C_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_ScaleX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_ScaleX_m07D3147D70FE2A979795A4F240CFF98D4C9AB9CB_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::set_ScaleY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_ScaleY_m1FC455B365B1472CFAFBD55B2AC18FD8819FE99E_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_A()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_B()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_B_m152872772FD282B96B00D119D28753129DA33AA1_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_WorldX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_C()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_D()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_D_m1D033C2256BB965C9E2BEB1072435B07CD633B7F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_WorldY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Void Spine.Bone::set_X(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_X_m4A643D9A72A10C964E507E98F7321FC074C3B213_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Bone::set_Y(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_Y_m5B63469F4E472827B5F5A64533C32FF60E302910_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_X_mEC9CB3AAE55AFA83AA82CE6E318405F310264A88_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_Y_mF88B9D57D60E689706A2F1D898A0BEBFF9AA5B57_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void Spine.Bone::LocalToWorld(System.Single,System.Single,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_LocalToWorld_m70348BC6C8B121E50DE1A4CF57C90A9075C3AE75 (Bone_tC5BB616A04722279E675558888991F720C090467* __this, float ___0_localX, float ___1_localY, float* ___2_worldX, float* ___3_worldY, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_Rotation_m6CE4F553C65C091D012FB16F08375D2503670087_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Single Spine.Skeleton::get_ScaleX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_ScaleX_mE232B30B8D60A1ECCAD49A101B0EA4A2C7A80FB4_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) ;
// System.Single Spine.Skeleton::get_ScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Skeleton_get_ScaleY_m7C17F055B8DCEE33CA3BC718B84D0341B23264C2 (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) ;
// System.Void Spine.Bone::WorldToLocal(System.Single,System.Single,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bone_WorldToLocal_m8C7FCAE8806F57DD50CC4FE78E806D074736A030 (Bone_tC5BB616A04722279E675558888991F720C090467* __this, float ___0_worldX, float ___1_worldY, float* ___2_localX, float* ___3_localY, const RuntimeMethod* method) ;
// Spine.Bone Spine.Bone::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* Bone_get_Parent_m067C034AB2EABF1E88DE960D5C3CBF69EFDA57C0_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonExtensions::SetLocalPosition(Spine.Bone,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetLocalPosition_mDC89EA50E46F3A877108078CE2AAC2B490C401CD (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Spine.Unity.SkeletonExtensions::WorldToLocal(Spine.Bone,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SkeletonExtensions_WorldToLocal_m3329DC8FBD7EF4B9B14B0903FCC6C8BFC697B491 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_worldPosition, const RuntimeMethod* method) ;
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_WorldVerticesLength_m18500A21BFC7C7DB4E81B4AC345345F1122B5D44_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) ;
// System.String Spine.Attachment::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Attachment_get_Name_m3F6ED5BB3D0A221C137F0371ED65AD2815508D4B_inline (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Int32[] Spine.VertexAttachment::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VertexAttachment_get_Bones_m22C6003E3CE1F95FF21B2D5C8553460ADD059D81_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) ;
// Spine.VertexAttachment Spine.VertexAttachment::get_DeformAttachment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* VertexAttachment_get_DeformAttachment_m48C0B426AFF30F228AC898C76CB5BC635A62E32C_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) ;
// System.Single[] Spine.VertexAttachment::get_Vertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* VertexAttachment_get_Vertices_mB5661F9B123FB5BEBA04853B24E72B54C6C61F14_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) ;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexAttachment_ComputeWorldVertices_mDC989D27CD6FA8578F1D54CECD810C780C6A2B4F (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___0_slot, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_worldVertices, const RuntimeMethod* method) ;
// Spine.Bone Spine.Slot::get_Bone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonExtensions::GetWorldToLocalMatrix(Spine.Bone,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_GetWorldToLocalMatrix_mD26AFE2F558336C668B4024913FCF27DE9F05C10 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, float* ___1_ia, float* ___2_ib, float* ___3_ic, float* ___4_id, const RuntimeMethod* method) ;
// System.Void Spine.PointAttachment::ComputeWorldPosition(Spine.Bone,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAttachment_ComputeWorldPosition_mFAD1A20A88322D7A11886C31F4A6BF5A5991456C (PointAttachment_tF918D9D4CC59EB88F5B0737E23A34DD0FB0FEDE8* __this, Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, float* ___1_ox, float* ___2_oy, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.WaitForSpineAnimation::SafeSubscribe(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_SafeSubscribe_mB22FC2FD3F65437E3641B1BAAF82C28EA522DF62 (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, int32_t ___1_eventsToWaitFor, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState/TrackEntryDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate__ctor_m710590CF03EC9B3FB519427B7DE724820779AE7D (TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Spine.TrackEntry::add_Start(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Start_m8B758A2E87412FF863592CED212BEEFC2222BDDF (TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* __this, TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.TrackEntry::add_Interrupt(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Interrupt_m928EC3BB181E6DE84CF74241A464C9C564E29780 (TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* __this, TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.TrackEntry::add_End(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_End_m8DFB9580750A29F665B0CCDE52A24ED781380608 (TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* __this, TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.TrackEntry::add_Dispose(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Dispose_mE7E1F192E90F99EBCDF049D74007F3524D68E59D (TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* __this, TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.TrackEntry::add_Complete(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntry_add_Complete_m80846502138B680008FC7A8C8BA964D635ED87AD (TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* __this, TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Unity.WaitForSpineAnimation::.ctor(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation__ctor_m6D73BEA00F0BBA00BCECF0F9ADB1D66B382D78CA (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, int32_t ___1_eventsToWaitFor, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState/TrackEntryEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate__ctor_mDFC1742F6F52727BF1B1547F177356B159B7C6A2 (TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState::add_Event(Spine.AnimationState/TrackEntryEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_add_Event_m3284371A7287AD8995586449D10FA57996A033DF (AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* __this, TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Unity.WaitForSpineEvent::Subscribe(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Subscribe_mD05394C6D4F80F638F2D30970AF314553131105A (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* ___1_eventDataReference, bool ___2_unsubscribe, const RuntimeMethod* method) ;
// System.Void Spine.Unity.WaitForSpineEvent::SubscribeByName(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_SubscribeByName_m30B8E80B55EAE02C62081A66E76C0FEFF3EB6B79 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, String_t* ___1_eventName, bool ___2_unsubscribe, const RuntimeMethod* method) ;
// Spine.EventData Spine.Event::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* Event_get_Data_m899DC3B549F8513883467B512265A1B0E5781462_inline (Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* __this, const RuntimeMethod* method) ;
// System.String Spine.EventData::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventData_get_Name_m3CF55169F0E56015B249B382A578B4407F9CD167_inline (EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState::remove_Event(Spine.AnimationState/TrackEntryEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_remove_Event_m52FDB1D85B01BC7258BF52E498623B3E2A73C55E (AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* __this, TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Unity.WaitForSpineEvent::Clear(Spine.AnimationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Clear_m1F79CD6FA2B4A8212E1F78BC985A29E94F542551 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, const RuntimeMethod* method) ;
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::SafeSubscribe(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_SafeSubscribe_m18DBDC01094EF14ABCDEE7FC20471BDD18847A90 (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) ;
// System.Single[] Spine.Timeline::get_Frames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline (Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void Spine.TranslateTimeline::GetCurveValue(System.Single&,System.Single&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateTimeline_GetCurveValue_mA5A2285AEABE1C0DAB56F1BA4B00E5DF1F637CB3 (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* __this, float* ___0_x, float* ___1_y, float ___2_time, const RuntimeMethod* method) ;
// Spine.ExposedList`1<Spine.BoneData> Spine.SkeletonData::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.TranslateTimeline::get_BoneIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* __this, const RuntimeMethod* method) ;
// System.Single Spine.BoneData::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_X_m41AC5529BDF4FEC10AE8B87431A04E0A1B2B3DA0_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) ;
// System.Single Spine.BoneData::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_Y_mC11A04D53C0EAEFA456866ECFB98247C1297D762_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) ;
// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::get_Timelines()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* __this, const RuntimeMethod* method) ;
// Spine.ExposedList`1/Enumerator<T> Spine.ExposedList`1<Spine.Timeline>::GetEnumerator()
inline Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3 (ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 (*) (ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF*, const RuntimeMethod*))ExposedList_1_GetEnumerator_m3FBC2F5FB0D42C43E9CC9179CCEE0155B7C6D71B_gshared)(__this, method);
}
// System.Void Spine.ExposedList`1/Enumerator<Spine.Timeline>::Dispose()
inline void Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_Dispose_m07F4232A73E7B6D24AE24206FF0567655DE6A552_gshared)(__this, method);
}
// T Spine.ExposedList`1/Enumerator<Spine.Timeline>::get_Current()
inline Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_inline (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	return ((  Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_get_Current_m498B7803B408E95A6D75A8E951E008D9ABED33DD_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean Spine.ExposedList`1/Enumerator<Spine.Timeline>::MoveNext()
inline bool Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7*, const RuntimeMethod*))Enumerator_MoveNext_mA3711E6F31721CD471A7EEABF16E029A413B99B5_gshared)(__this, method);
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_ClearCache_mEBB54853312D663E0F8CF01053402BA1FB93B26B (const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Texture2D,UnityEngine.Shader,System.Single,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_mD38BF13DD1B70AEA26B51B9339DFA7F63B56E197 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, float ___2_scale, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___3_materialPropertySource, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Material::get_shaderKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Material_get_shaderKeywords_m11982F09EED6BB0A892342E1A72AEA470C44B105 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shaderKeywords(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// Spine.AtlasPage Spine.Unity.AttachmentTools.AtlasUtilities::ToSpineAtlasPage(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_m, const RuntimeMethod* method) ;
// System.Void Spine.AtlasRegion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasRegion__ctor_mA555A6539F86AA183781E5C1AF65286593C98370 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single Spine.Unity.AttachmentTools.AtlasUtilities::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AtlasUtilities_InverseLerp_m104DD7BDE4D521C72596E07FCF424F80616A7283 (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegionPMAClone(UnityEngine.Texture2D,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegionPMAClone_mE92F0C56F148E4DD1CE8A3C10DAC7DC4F709F8D3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, int32_t ___2_textureFormat, bool ___3_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_materialPropertySource, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::GetClone(UnityEngine.Texture2D,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_GetClone_mFE57D6E2CFFE90D6B1239E798B61DF0564684CA4 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, int32_t ___1_textureFormat, bool ___2_mipmaps, bool ___3_linear, bool ___4_applyPMA, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.AtlasPage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasPage__ctor_mEBA2B7CBE5A2C39B8DBCDA598CA19739464FBA27 (AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Sprite,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_m87666541ED7CC3AAEF3DDE3E1FE6F9C6366DDAB5 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, bool ___1_isolatedTexture, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegionPMAClone(UnityEngine.Sprite,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegionPMAClone_m5F7AC7F498528B9613878E1C13E379F9D0FB6FFE (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, int32_t ___2_textureFormat, bool ___3_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_materialPropertySource, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::ToTexture(UnityEngine.Sprite,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_ToTexture_m1CFA3A38F6BEEACC4E8CF70CF1AEA8423B5358DC (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, int32_t ___1_textureFormat, bool ___2_mipmaps, bool ___3_linear, bool ___4_applyPMA, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Sprite::get_packed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sprite_get_packed_m6B6B98A3891B350711499532C07F8D393AAB868E (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.SpritePackingRotation UnityEngine.Sprite::get_packingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sprite_get_packingRotation_m3FD3489CC43013B2D5228AEB1ED8099E6C5B1D10 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Sprite::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::SpineUnityFlipRect(UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_SpineUnityFlipRect_mC4AC6AE83BFA9896FDEAF444A548745E304AA5AA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, int32_t ___1_textureHeight, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::TextureRectToUVRect(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_TextureRectToUVRect_mB658924451774DA548E22101424F01046B68E849 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_textureRect, int32_t ___1_texWidth, int32_t ___2_texHeight, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::GetRepackedAttachments(System.Collections.Generic.List`1<Spine.Attachment>,System.Collections.Generic.List`1<Spine.Attachment>,UnityEngine.Shader,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.String,UnityEngine.Material,System.Boolean,System.Boolean,System.Int32[],UnityEngine.Texture2D[],UnityEngine.TextureFormat[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_GetRepackedAttachments_m74B57AABD97659245BBD695C192DB5788DC33482 (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___0_sourceAttachments, List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___1_outputAttachments, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___2_shader, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_outputMaterial, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___4_outputTexture, int32_t ___5_maxAtlasSize, int32_t ___6_padding, int32_t ___7_textureFormat, bool ___8_mipmaps, String_t* ___9_newAssetName, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___10_materialPropertySource, bool ___11_clearCache, bool ___12_useOriginalNonrenderables, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___13_additionalTexturePropertyIDsToCopy, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___14_additionalOutputTextures, TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* ___15_additionalTextureFormats, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___16_additionalTextureIsLinear, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>::Clear()
inline void Dictionary_2_Clear_mD4A1F074F726A7FA1305CC1347ABC1574A98BCD8 (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388*, const RuntimeMethod*))Dictionary_2_Clear_m931E25EF2557C3A386E4B9DC8D8212B7D9D3F5AE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Array::Resize<System.Collections.Generic.List`1<UnityEngine.Texture2D>>(T[]&,System.Int32)
inline void Array_Resize_TisList_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_m62FAECE2EDADCC144856687368D8E71BE16328B9 (List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Clear()
inline void List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor()
inline void List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28 (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Spine.AtlasRegion>::Clear()
inline void List_1_Clear_m6E5EEA896768B2FBBC7B60D4177F59F139D6FAE1_inline (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Spine.Attachment>::Clear()
inline void List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_inline (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Spine.Attachment>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m9798F867573319C482DAC5C898969BBE82F03970 (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Int32 System.Collections.Generic.List`1<Spine.Attachment>::get_Count()
inline int32_t List_1_get_Count_m55DE11F59FF173D0761F346406B180BA50C90D2C_inline (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Spine.Attachment>::get_Item(System.Int32)
inline Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// Spine.MeshAttachment Spine.MeshAttachment::NewLinkedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* MeshAttachment_NewLinkedMesh_mB9F9C1166D8E47820A1576EBE1FE60BCA9979477 (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m979AD5AFF90FB491C9A74964ED06D6FFA4ED5A2A (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* __this, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388*, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Spine.AtlasRegion>::Add(T)
inline void List_1_Add_mFE440E8FEB92EBC041C49048CB57707ADF37AC32_inline (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* __this, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::ToTexture(Spine.AtlasRegion,UnityEngine.TextureFormat,System.Boolean,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_ToTexture_mA8C6798331D65E2CA8C5FC27CC3DE1E674F068DE (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_ar, int32_t ___1_textureFormat, bool ___2_mipmaps, int32_t ___3_texturePropertyId, bool ___4_linear, bool ___5_applyPMA, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Add(T)
inline void List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m24AD6798A13B262A3CEA131C99453B382939A574 (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* __this, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388*, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m63897227AFA7035F1772315ABBBE7FD0A250E10C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<Spine.Attachment>::set_Item(System.Int32,T)
inline void List_1_set_Item_m74524EA7D41E994655E1E3EC461772673DBA5E00 (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, int32_t ___0_index, Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, int32_t, Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, bool ___4_linear, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Count()
inline int32_t List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Item(System.Int32)
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* List_1_get_Item_m41F9D0682DC2DEC45DFE466C6AFE6D89379BC9A3 (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::CopyTextureAttributesFrom(UnityEngine.Texture2D,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_CopyTextureAttributesFrom_mC2F97DBF0EE5E0056692DD49100EF83C3E3AB40B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_destination, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_source, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Texture2D>::ToArray()
inline Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* List_1_ToArray_m209E5F09A1686595EFD5A277913C1C7F5C8B6B03 (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	return ((  Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Rect[] UnityEngine.Texture2D::PackTextures(UnityEngine.Texture2D[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* Texture2D_PackTextures_m61CBEB4F2461710C9755ED2A5A34165C0B20E34A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___0_textures, int32_t ___1_padding, int32_t ___2_maximumAtlasSize, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Spine.AtlasRegion>::get_Count()
inline int32_t List_1_get_Count_mE5CA5310F5312AA5CEAE5E6ED687D1F24300AC3D_inline (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Spine.AtlasRegion>::get_Item(System.Int32)
inline AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* List_1_get_Item_mCB22AE8FAA1AE329E0501CFF07B106F08CF2DFA0 (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* (*) (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::UVRectToAtlasRegion(UnityEngine.Rect,Spine.AtlasRegion,Spine.AtlasPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_UVRectToAtlasRegion_m0F3820FCF7857D96E5831703D33FA1AFCC6F118E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_uvRect, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_referenceRegion, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___2_page, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.Attachment,Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetRegion_mA5054A4B65BE1398631636975A02F76EEFDC9F67 (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_attachment, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, bool ___2_updateOffset, const RuntimeMethod* method) ;
// Spine.Skin Spine.Unity.AttachmentTools.AtlasUtilities::GetRepackedSkin(Spine.Skin,System.String,UnityEngine.Shader,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material,System.Boolean,System.Boolean,System.Int32[],UnityEngine.Texture2D[],UnityEngine.TextureFormat[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* AtlasUtilities_GetRepackedSkin_m79996C16231D3834BBC06C5C830D10521F45BBC7 (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___0_o, String_t* ___1_newName, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___2_shader, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_outputMaterial, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___4_outputTexture, int32_t ___5_maxAtlasSize, int32_t ___6_padding, int32_t ___7_textureFormat, bool ___8_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___9_materialPropertySource, bool ___10_clearCache, bool ___11_useOriginalNonrenderables, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___12_additionalTexturePropertyIDsToCopy, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___13_additionalOutputTextures, TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* ___14_additionalTextureFormats, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___15_additionalTextureIsLinear, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<Spine.Skin/SkinEntry> Spine.Skin::get_Attachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Skin_get_Attachments_m6E8D5DA48E3B7E7668E80BD42F2D64482CE6FEEA (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, const RuntimeMethod* method) ;
// System.Void Spine.Skin::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skin__ctor_m1970D321873E8F6334B18A4AD51C1CF842FFDB52 (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// Spine.ExposedList`1<Spine.BoneData> Spine.Skin::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* Skin_get_Bones_m289A6AD20D75A430417207821295FEC988AB3B42_inline (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<Spine.BoneData>::AddRange(Spine.ExposedList`1<T>)
inline void ExposedList_1_AddRange_mC176EBADC6A0876BDB5BAF1FC6EC062D59C04649 (ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* __this, ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE*, ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE*, const RuntimeMethod*))ExposedList_1_AddRange_m90B01B3F2FFFB6C8B353691458AB8CE253783EAE_gshared)(__this, ___0_list, method);
}
// Spine.ExposedList`1<Spine.ConstraintData> Spine.Skin::get_Constraints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* Skin_get_Constraints_mCB8C4773B732A935E54D0F8179924ECC1ACA4AE0_inline (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, const RuntimeMethod* method) ;
// System.Void Spine.ExposedList`1<Spine.ConstraintData>::AddRange(Spine.ExposedList`1<T>)
inline void ExposedList_1_AddRange_m3D267120E3FC107FD12FF948330B0CABC5FB7BD4 (ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* __this, ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826*, ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826*, const RuntimeMethod*))ExposedList_1_AddRange_m90B01B3F2FFFB6C8B353691458AB8CE253783EAE_gshared)(__this, ___0_list, method);
}
// Spine.Attachment Spine.Skin/SkinEntry::get_Attachment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* SkinEntry_get_Attachment_mD3F3972C2C175630ABA63A7806AEED63CE8A665C_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Attachment>::Add(T)
inline void List_1_Add_m44BA843042417312F5B0DE949C2635BA54430E49_inline (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::GetRepackedAttachments(System.Collections.Generic.List`1<Spine.Attachment>,System.Collections.Generic.List`1<Spine.Attachment>,UnityEngine.Material,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.String,System.Boolean,System.Boolean,System.Int32[],UnityEngine.Texture2D[],UnityEngine.TextureFormat[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_GetRepackedAttachments_mC50A4BBE5BDF4F75363F74FBFEB3263057FCFB0B (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___0_sourceAttachments, List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___1_outputAttachments, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_materialPropertySource, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_outputMaterial, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___4_outputTexture, int32_t ___5_maxAtlasSize, int32_t ___6_padding, int32_t ___7_textureFormat, bool ___8_mipmaps, String_t* ___9_newAssetName, bool ___10_clearCache, bool ___11_useOriginalNonrenderables, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___12_additionalTexturePropertyIDsToCopy, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___13_additionalOutputTextures, TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* ___14_additionalTextureFormats, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___15_additionalTextureIsLinear, const RuntimeMethod* method) ;
// System.Int32 Spine.Skin/SkinEntry::get_SlotIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_mBE57F47A41B161443A05B81B9F4CB37BCE8664C6_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) ;
// System.String Spine.Skin/SkinEntry::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_mD30118D3C18473ACF7BD87BAF0E8F728C80504D8_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) ;
// System.Void Spine.Skin::SetAttachment(System.Int32,System.String,Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skin_SetAttachment_mAD7B9C1C5BBDEA473BF90DE5A6695AB9378395D6 (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, int32_t ___0_slotIndex, String_t* ___1_name, Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___2_attachment, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::GetMainTexture(Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_GetMainTexture_m859D5A47C637E7669F0896FE75B1FBA33E59AE72 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, const RuntimeMethod* method) ;
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::GetUnityRect(Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_GetUnityRect_m3E04CF754EA27554C204AA4E280B78CB899893EB (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m95F90AD74982187C087F4FA00947045A033D0BA1 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivot, float ___3_pixelsPerUnit, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::GetEnumerator()
inline Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::Dispose()
inline void Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245 (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::get_Current()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_inline (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::MoveNext()
inline bool Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35 (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>::Clear()
inline void Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*, const RuntimeMethod*))Dictionary_2_Clear_m0F20C45B5CE4BF0BF8DAA9039EB54C04F618EC7B_gshared)(__this, method);
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::.ctor(System.Int32,Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntAndAtlasRegionKey__ctor_mDFD162AC2460EDF3D893352331273DA78EC3E71D (IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* __this, int32_t ___0_i, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m86DDB255F4F255DC252600894FB638E08C3E2427 (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* __this, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A ___0_key, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4**, const RuntimeMethod*))Dictionary_2_TryGetValue_m87E09AAB8C1DC14CF6D613508A3353C01951D5CB_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::GetTexture(Spine.AtlasRegion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_GetTexture_m9DB96ADBE178CD619F335F92CC58B2CD84394997 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, int32_t ___1_texturePropertyId, const RuntimeMethod* method) ;
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::CopyTextureApplyPMA(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_CopyTextureApplyPMA_m1B4A85CBF8A8A404330E3CFE7126B5FDDFE756C2 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_source, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_sourceRect, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_destination, const RuntimeMethod* method) ;
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::CopyTexture(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_CopyTexture_m296B658FCE1FAEEBDAE3F9501D4761146A658091 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_source, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_sourceRect, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_destination, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAF5248DC06650A05B1B26E2B2C152A1BA43E8530 (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* __this, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A ___0_key, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Dictionary_2_Add_m1D0719C10584FA1EC40A4998CD193633F40A234E_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.SpritePackingMode UnityEngine.Sprite::get_packingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sprite_get_packingMode_m26DD01B9EC3E832120B4AFB3090F300ACC864A8A (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.Sprite::get_uv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::get_copyTextureSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2 (const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m009D80DF4554A3B45EE4007ACA38E33764A080DE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_blockWidth, int32_t ___3_blockHeight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_colors, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_mA6F9298621B0493A08483EF57028B66C93FFCBA8 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, int32_t ___1_srcElement, int32_t ___2_srcMip, int32_t ___3_srcX, int32_t ___4_srcY, int32_t ___5_srcWidth, int32_t ___6_srcHeight, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___7_dst, int32_t ___8_dstElement, int32_t ___9_dstMip, int32_t ___10_dstX, int32_t ___11_dstY, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::GetSpineAtlasRect(Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_GetSpineAtlasRect_m8FDDAD6C2DA4217E26BD1C37330C3D6AD0D96594 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, bool ___1_includeRotate, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::UVRectToTextureRect(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_UVRectToTextureRect_mC1178D1E6F8291D790240A1D6226779F39E3518A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_uvRect, int32_t ___1_texWidth, int32_t ___2_texHeight, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mE5D02B13E7AF35ABAE4FFC49E69FAF8F36F91191 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, const RuntimeMethod* method) ;
// UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_filterMode_mFEF0AEA29E8468450EF85533965DCEBE66D02A45 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Texture::get_anisoLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_anisoLevel_m49CB873A0A3A71281BAE34A9512803D76D2EA27F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapModeU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapModeU_m9217A53AC4A40DA2486AAD664F286C28A32D7716 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeU(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapModeV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapModeV_mDD1FD069227720CAA9433145CDFBAD42E680A212 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeV(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapModeW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapModeW_mE0C1A36F3EB7ABC2D4CD8CAB7BD0226E00229EB8 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapModeW(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Spine.AtlasRegion,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231 (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Spine.AtlasRegion>::.ctor()
inline void List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Spine.Attachment>::.ctor()
inline void List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5 (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey,UnityEngine.Texture2D>::.ctor()
inline void Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211 (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*, const RuntimeMethod*))Dictionary_2__ctor_mEE283B78A6DBFCF9C7189F732BF991A13E409432_gshared)(__this, method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF (IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Sprite,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_m7F5F8420A6B9931B3084BF7F6D8FC6C602031DB2 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegionPMAClone(UnityEngine.Sprite,UnityEngine.Material,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegionPMAClone_mE3717F5332D8441EE93A797BF707051F9CFBA475 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_materialPropertySource, int32_t ___2_textureFormat, bool ___3_mipmaps, const RuntimeMethod* method) ;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Sprite_get_pixelsPerUnit_m5A5984BC298062DF4CD2CB3E8534443FFCF31826 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Single Spine.RegionAttachment::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_Width_m14141567360E0454B2FD8E7843505EDE3F3333F3_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// System.Single Spine.RegionAttachment::get_RegionOriginalWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_RegionOriginalWidth_m8851323F6B4EE8356AF37A6151908ECAF0920717_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// Spine.Attachment Spine.Unity.AttachmentTools.AttachmentCloneExtensions::GetRemappedClone(Spine.Attachment,Spine.AtlasRegion,System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* AttachmentCloneExtensions_GetRemappedClone_mCB365C1CF503BF9FD54E42624E4D95E48BFBFE65 (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_o, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_atlasRegion, bool ___2_cloneMeshAsLinked, bool ___3_useOriginalRegionSize, float ___4_scale, const RuntimeMethod* method) ;
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.RegionAttachment,Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetRegion_mC36BC4AA5D284DFAD527193D55DAD7008B085DE1 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_attachment, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, bool ___2_updateOffset, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_Width(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Width_mDA18FF1DD1896F3D0FCEF7BA5210D23F69AA1111_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_Height(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Height_m6DA767C64695CE512D739BFFA4F62B010A6FAF23_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::UpdateOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionAttachment_UpdateOffset_mB6A01A3DAC5E71C1E54004D3D82BA60BE88D2CB6 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.MeshAttachment,Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetRegion_m75CFA3FDEE411B2C1721EFBB3FCA18E3375BFA85 (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* ___0_attachment, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, bool ___2_updateUVs, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_RendererObject(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RendererObject_m8EEE8E64012964F145B7C56323F23F58B4F75D7F_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::SetUVs(System.Single,System.Single,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionAttachment_SetUVs_m2193D51DDEEF9EFA366FE9C2BA7EC0BBA6F67F30 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_u, float ___1_v, float ___2_u2, float ___3_v2, int32_t ___4_degrees, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_RegionOffsetX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOffsetX_m3C50AA60A13162B8A70EAB94E68EA89125FE47F3_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_RegionOffsetY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOffsetY_m5AA61B1532C08DBB7E01DCAB848F3659A05E0246_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_RegionWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionWidth_mF4BD144BE00C59B00BD6E13409978B40E5653466_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_RegionHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionHeight_mFE627A8FD8D3E654CA6296FD3D1F5B6CB00D5332_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_RegionOriginalWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOriginalWidth_mBDEF05EA1766E307117D1FBF8664C15A9DD4A802_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_RegionOriginalHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOriginalHeight_m4523E2E8A3979ED2303E7933658AB0C6E2F589FE_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RendererObject(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RendererObject_m7F6EDB8B7B44540EC7F2B74A59F62F41F7651B85_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionU(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionU_mA29BBC820A268D47F122CF93D81CF7585428FF71_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionV(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionV_m17296274EE0D8E7B92F3550C005ECA85E13A979A_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionU2(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionU2_m9D498345B1212A71F74DED27E2E693A7EB18B9E4_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionV2(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionV2_m44E726428EB25BC0405B6650030F2CC29863EA0E_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionDegrees(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionDegrees_mB0ED3B8FDF03BA726B4F16A13050E26E5B0B018D_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionOffsetX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOffsetX_mED74235E246F081A01DAA96BFC350C8F30B64DD0_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionOffsetY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOffsetY_m7D95F835B1C753B69FD91C61B1D0A5ED8DDCF203_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionWidth_m4258CEDF5057AA64914DF7E6B539D89133D7815E_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionHeight_mFD4E04C0A9BEA1C41802E5D6035A2384C10EC1F5_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionOriginalWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOriginalWidth_m07B195E4DCD0BA72D15ACDA1E515CEE86C3D2E07_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::set_RegionOriginalHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOriginalHeight_m3BEC85EC85B76C31288D27B53A149E9D1B68DE96_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.MeshAttachment::UpdateUVs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshAttachment_UpdateUVs_m6A54FC6078DC22BBDA266722EF74B1F995C81AA3 (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) ;
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(UnityEngine.Sprite,Spine.AtlasPage,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachment_mCA58174908B9979D78402165211E63041B77906E (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___1_page, float ___2_rotation, const RuntimeMethod* method) ;
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Sprite,Spine.AtlasPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_m81FFD41991D370CB12999C06399B36C42855E758 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___1_page, const RuntimeMethod* method) ;
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(Spine.AtlasRegion,System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachment_m52A713CB6320B05B08E5274A95DD7090DB3049F7 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, String_t* ___1_attachmentName, float ___2_scale, float ___3_rotation, const RuntimeMethod* method) ;
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachmentPMAClone(UnityEngine.Sprite,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachmentPMAClone_mF79B9F7CDC7B6784AC4B0DF4C784FF3756F55637 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, int32_t ___2_textureFormat, bool ___3_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_materialPropertySource, float ___5_rotation, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegionAttachment__ctor_m2DB4465297C74AA14C4BF3B5EB73893CD06DD72F (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_Path(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Path_mBA2FD73DCE3335E6B2F34DF80800CE1B5C74DF6D_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_ScaleX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_ScaleX_m388F66518403BB44D706961891A1959D90983239_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_ScaleY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_ScaleY_m4365C70D54331ECCD92840F3BFE1A20217BF6153_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_Rotation(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Rotation_m7397C163BE93035882E1C2E24D14CC6BCCCB9266_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Spine.RegionAttachment::get_RegionOriginalHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_RegionOriginalHeight_m01E32623A29206F945E583CDC584B7F1D6685164_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.RegionAttachment,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_mE724E85D78279FB618CA6AD80682C8974DF0AD7D (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_attachment, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_X(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_X_m400D0EAC2A15262F88D1FE77FF8001CFA267373B_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.RegionAttachment::set_Y(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Y_mC9652C8FE69CE45766637A25C1BC577085BDB31E_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D (SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string dataField = "";
		__this->___dataField_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataField_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string startsWith = "";
		__this->___startsWith_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startsWith_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool includeNone = true;
		__this->___includeNone_2 = (bool)1;
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineBone::.ctor(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineBone__ctor_m9B53DFBE1C563B7A6CB2CCFD434EAD8567023BCF (SpineBone_t855441E02B336B2C3D80D9EE10920812BEBD2DD9* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_includeNone, bool ___3_fallbackToTextField, const RuntimeMethod* method) 
{
	{
		// public SpineBone (string startsWith = "", string dataField = "", bool includeNone = true, bool fallbackToTextField = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.includeNone = includeNone;
		bool L_2 = ___2_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_2;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_3 = ___3_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_3;
		// }
		return;
	}
}
// Spine.Bone Spine.Unity.SpineBone::GetBone(System.String,Spine.Unity.SkeletonRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* SpineBone_GetBone_m8C240AD766474A5BD17074A8E084B57359512955 (String_t* ___0_boneName, SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* ___1_renderer, const RuntimeMethod* method) 
{
	{
		// return renderer.skeleton == null ? null : renderer.skeleton.FindBone(boneName);
		SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* L_0 = ___1_renderer;
		NullCheck(L_0);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_1 = L_0->___skeleton_39;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* L_2 = ___1_renderer;
		NullCheck(L_2);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_3 = L_2->___skeleton_39;
		String_t* L_4 = ___0_boneName;
		NullCheck(L_3);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_5;
		L_5 = Skeleton_FindBone_m9031B1DD1DEF943D4A310F02E29EC0954F598725(L_3, L_4, NULL);
		return L_5;
	}

IL_0015:
	{
		return (Bone_tC5BB616A04722279E675558888991F720C090467*)NULL;
	}
}
// Spine.BoneData Spine.Unity.SpineBone::GetBoneData(System.String,Spine.Unity.SkeletonDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* SpineBone_GetBoneData_mAD720091ACD6D8B6EA35C1E2B98D7518812F0D0A (String_t* ___0_boneName, SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___1_skeletonDataAsset, const RuntimeMethod* method) 
{
	{
		// var data = skeletonDataAsset.GetSkeletonData(true);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_0 = ___1_skeletonDataAsset;
		NullCheck(L_0);
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_1;
		L_1 = SkeletonDataAsset_GetSkeletonData_m36E09447A45E617B389578FCBFE63DF6F4F40758(L_0, (bool)1, NULL);
		// return data.FindBone(boneName);
		String_t* L_2 = ___0_boneName;
		NullCheck(L_1);
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_3;
		L_3 = SkeletonData_FindBone_mF7D9E21ECEF8A69804B18B1B650CAD608BC68071(L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineSlot::.ctor(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineSlot__ctor_m0770D26C2BEB968EDAF8804B6FD7FB7348B5BE9B (SpineSlot_tBBA9FF469D97132159B295A44F251379953C610D* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_containsBoundingBoxes, bool ___3_includeNone, bool ___4_fallbackToTextField, const RuntimeMethod* method) 
{
	{
		// public SpineSlot (string startsWith = "", string dataField = "", bool containsBoundingBoxes = false, bool includeNone = true, bool fallbackToTextField = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.containsBoundingBoxes = containsBoundingBoxes;
		bool L_2 = ___2_containsBoundingBoxes;
		__this->___containsBoundingBoxes_4 = L_2;
		// this.includeNone = includeNone;
		bool L_3 = ___3_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_3;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_4 = ___4_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_4;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineAnimation::.ctor(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineAnimation__ctor_m03BBD2A187E44098FFDE4526202C4FC341AD2AF2 (SpineAnimation_t25ECBA3C591187CAF5DE85B0EE952F9F03FE832A* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_includeNone, bool ___3_fallbackToTextField, const RuntimeMethod* method) 
{
	{
		// public SpineAnimation (string startsWith = "", string dataField = "", bool includeNone = true, bool fallbackToTextField = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.includeNone = includeNone;
		bool L_2 = ___2_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_2;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_3 = ___3_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineEvent::.ctor(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineEvent__ctor_mADFEEECC57CC1AB4930EE0FC63B6218A06F532AD (SpineEvent_t7D7BE1E21FECF355463D0023B9C8DF34E1DB666A* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_includeNone, bool ___3_fallbackToTextField, bool ___4_audioOnly, const RuntimeMethod* method) 
{
	{
		// public SpineEvent (string startsWith = "", string dataField = "", bool includeNone = true, bool fallbackToTextField = false, bool audioOnly = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.includeNone = includeNone;
		bool L_2 = ___2_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_2;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_3 = ___3_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_3;
		// this.audioOnly = audioOnly;
		bool L_4 = ___4_audioOnly;
		__this->___audioOnly_4 = L_4;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineIkConstraint::.ctor(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineIkConstraint__ctor_m211B88C3BC54720F315A7D4EC7B1CD49F56AAB37 (SpineIkConstraint_t2A744051EE31939B3AC45D95153E328422360853* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_includeNone, bool ___3_fallbackToTextField, const RuntimeMethod* method) 
{
	{
		// public SpineIkConstraint (string startsWith = "", string dataField = "", bool includeNone = true, bool fallbackToTextField = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.includeNone = includeNone;
		bool L_2 = ___2_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_2;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_3 = ___3_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineTransformConstraint::.ctor(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineTransformConstraint__ctor_m6E44E554C9CADD6A6F342D544DA72C32C97D8409 (SpineTransformConstraint_tFA692585158AABF47E1286DF0FCFE7C7F9181250* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_includeNone, bool ___3_fallbackToTextField, const RuntimeMethod* method) 
{
	{
		// public SpineTransformConstraint (string startsWith = "", string dataField = "", bool includeNone = true, bool fallbackToTextField = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.includeNone = includeNone;
		bool L_2 = ___2_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_2;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_3 = ___3_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpinePathConstraint::.ctor(System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinePathConstraint__ctor_mDA082EF1A3426ABBBE80373EB6B03977CD96C504 (SpinePathConstraint_tB9D652C85421BD4A98F8A1F923EFF61E1DD3A194* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_includeNone, bool ___3_fallbackToTextField, const RuntimeMethod* method) 
{
	{
		// public SpinePathConstraint (string startsWith = "", string dataField = "", bool includeNone = true, bool fallbackToTextField = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.includeNone = includeNone;
		bool L_2 = ___2_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_2;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_3 = ___3_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_3;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineSkin::.ctor(System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineSkin__ctor_m96AE422289963997825598B1DDB8E7D17BB3E8BF (SpineSkin_tA4008B5386DB558EE2F03005519ADA4460A9C036* __this, String_t* ___0_startsWith, String_t* ___1_dataField, bool ___2_includeNone, bool ___3_fallbackToTextField, bool ___4_defaultAsEmptyString, const RuntimeMethod* method) 
{
	{
		// public SpineSkin (string startsWith = "", string dataField = "", bool includeNone = true, bool fallbackToTextField = false, bool defaultAsEmptyString = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.startsWith = startsWith;
		String_t* L_0 = ___0_startsWith;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___startsWith_1), (void*)L_0);
		// this.dataField = dataField;
		String_t* L_1 = ___1_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_1);
		// this.includeNone = includeNone;
		bool L_2 = ___2_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_2;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_3 = ___3_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_3;
		// this.defaultAsEmptyString = defaultAsEmptyString;
		bool L_4 = ___4_defaultAsEmptyString;
		__this->___defaultAsEmptyString_4 = L_4;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineAttachment::.ctor(System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineAttachment__ctor_mF372EEFFDD6F76373BE684DF3C5776FA0A0A48BA (SpineAttachment_t2DEB754FAA7065ED053D9E9948EBD039D08298BC* __this, bool ___0_currentSkinOnly, bool ___1_returnAttachmentPath, bool ___2_placeholdersOnly, String_t* ___3_slotField, String_t* ___4_dataField, String_t* ___5_skinField, bool ___6_includeNone, bool ___7_fallbackToTextField, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string skinField = "";
		__this->___skinField_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skinField_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string slotField = "";
		__this->___slotField_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slotField_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public SpineAttachment (bool currentSkinOnly = true, bool returnAttachmentPath = false, bool placeholdersOnly = false, string slotField = "", string dataField = "", string skinField = "", bool includeNone = true, bool fallbackToTextField = false) {
		SpineAttributeBase__ctor_m9163D476D1E30DE6175C5D899C078F23DA3AC82D(__this, NULL);
		// this.currentSkinOnly = currentSkinOnly;
		bool L_0 = ___0_currentSkinOnly;
		__this->___currentSkinOnly_5 = L_0;
		// this.returnAttachmentPath = returnAttachmentPath;
		bool L_1 = ___1_returnAttachmentPath;
		__this->___returnAttachmentPath_4 = L_1;
		// this.placeholdersOnly = placeholdersOnly;
		bool L_2 = ___2_placeholdersOnly;
		__this->___placeholdersOnly_6 = L_2;
		// this.slotField = slotField;
		String_t* L_3 = ___3_slotField;
		__this->___slotField_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slotField_8), (void*)L_3);
		// this.dataField = dataField;
		String_t* L_4 = ___4_dataField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___dataField_0), (void*)L_4);
		// this.skinField = skinField;
		String_t* L_5 = ___5_skinField;
		__this->___skinField_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skinField_7), (void*)L_5);
		// this.includeNone = includeNone;
		bool L_6 = ___6_includeNone;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___includeNone_2 = L_6;
		// this.fallbackToTextField = fallbackToTextField;
		bool L_7 = ___7_fallbackToTextField;
		((SpineAttributeBase_tD5F4C530CABD0FDD55585C260FDC2B99FFB917B9*)__this)->___fallbackToTextField_3 = L_7;
		// }
		return;
	}
}
// Spine.Unity.SpineAttachment/Hierarchy Spine.Unity.SpineAttachment::GetHierarchy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED SpineAttachment_GetHierarchy_mA9C431888A5D7378C2C69C917720E0F08A793D5D (String_t* ___0_fullPath, const RuntimeMethod* method) 
{
	{
		// return new SpineAttachment.Hierarchy(fullPath);
		String_t* L_0 = ___0_fullPath;
		Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED L_1;
		memset((&L_1), 0, sizeof(L_1));
		Hierarchy__ctor_m3FA32C3CA17C5C814487525237DE8815395BF1EF((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Spine.Attachment Spine.Unity.SpineAttachment::GetAttachment(System.String,Spine.SkeletonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* SpineAttachment_GetAttachment_mFDD05E8F8D3BAB0FE27B38BE7BAFB92C105DB79B (String_t* ___0_attachmentPath, SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___1_skeletonData, const RuntimeMethod* method) 
{
	Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* V_1 = NULL;
	{
		// var hierarchy = SpineAttachment.GetHierarchy(attachmentPath);
		String_t* L_0 = ___0_attachmentPath;
		Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED L_1;
		L_1 = SpineAttachment_GetHierarchy_mA9C431888A5D7378C2C69C917720E0F08A793D5D(L_0, NULL);
		V_0 = L_1;
		// if (string.IsNullOrEmpty(hierarchy.name)) return null;
		Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED L_2 = V_0;
		String_t* L_3 = L_2.___name_2;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// if (string.IsNullOrEmpty(hierarchy.name)) return null;
		return (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*)NULL;
	}

IL_0016:
	{
		// SlotData slot = skeletonData.FindSlot(hierarchy.slot);
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_5 = ___1_skeletonData;
		Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED L_6 = V_0;
		String_t* L_7 = L_6.___slot_1;
		NullCheck(L_5);
		SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* L_8;
		L_8 = SkeletonData_FindSlot_mC308C59663EEEC0C92CFE30133E05A0B1A1DB741(L_5, L_7, NULL);
		V_1 = L_8;
		// if (slot == null) return null;
		SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* L_9 = V_1;
		if (L_9)
		{
			goto IL_0028;
		}
	}
	{
		// if (slot == null) return null;
		return (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*)NULL;
	}

IL_0028:
	{
		// return skeletonData.FindSkin(hierarchy.skin).GetAttachment(slot.Index, hierarchy.name);
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_10 = ___1_skeletonData;
		Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED L_11 = V_0;
		String_t* L_12 = L_11.___skin_0;
		NullCheck(L_10);
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_13;
		L_13 = SkeletonData_FindSkin_mDA3C606247669FB4D0EC2C78E572FD9E48AA64D4(L_10, L_12, NULL);
		SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = SlotData_get_Index_m1121CFC71E439C552906D3A9A6FF38A1B76748CC_inline(L_14, NULL);
		Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED L_16 = V_0;
		String_t* L_17 = L_16.___name_2;
		NullCheck(L_13);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_18;
		L_18 = Skin_GetAttachment_mA47938B1658AB2EDDC0AE1B4AECBA4C222C44F57(L_13, L_15, L_17, NULL);
		return L_18;
	}
}
// Spine.Attachment Spine.Unity.SpineAttachment::GetAttachment(System.String,Spine.Unity.SkeletonDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* SpineAttachment_GetAttachment_m2927879FE81C9D08B79793EDAAB0FC7D82C88684 (String_t* ___0_attachmentPath, SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___1_skeletonDataAsset, const RuntimeMethod* method) 
{
	{
		// return GetAttachment(attachmentPath, skeletonDataAsset.GetSkeletonData(true));
		String_t* L_0 = ___0_attachmentPath;
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_1 = ___1_skeletonDataAsset;
		NullCheck(L_1);
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_2;
		L_2 = SkeletonDataAsset_GetSkeletonData_m36E09447A45E617B389578FCBFE63DF6F4F40758(L_1, (bool)1, NULL);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_3;
		L_3 = SpineAttachment_GetAttachment_mFDD05E8F8D3BAB0FE27B38BE7BAFB92C105DB79B(L_0, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshal_pinvoke(const Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED& unmarshaled, Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_pinvoke& marshaled)
{
	marshaled.___skin_0 = il2cpp_codegen_marshal_string(unmarshaled.___skin_0);
	marshaled.___slot_1 = il2cpp_codegen_marshal_string(unmarshaled.___slot_1);
	marshaled.___name_2 = il2cpp_codegen_marshal_string(unmarshaled.___name_2);
}
IL2CPP_EXTERN_C void Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshal_pinvoke_back(const Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_pinvoke& marshaled, Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED& unmarshaled)
{
	unmarshaled.___skin_0 = il2cpp_codegen_marshal_string_result(marshaled.___skin_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skin_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___skin_0));
	unmarshaled.___slot_1 = il2cpp_codegen_marshal_string_result(marshaled.___slot_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___slot_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___slot_1));
	unmarshaled.___name_2 = il2cpp_codegen_marshal_string_result(marshaled.___name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_2));
}
// Conversion method for clean up from marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshal_pinvoke_cleanup(Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___skin_0);
	marshaled.___skin_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___slot_1);
	marshaled.___slot_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___name_2);
	marshaled.___name_2 = NULL;
}
// Conversion methods for marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshal_com(const Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED& unmarshaled, Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_com& marshaled)
{
	marshaled.___skin_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___skin_0);
	marshaled.___slot_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___slot_1);
	marshaled.___name_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_2);
}
IL2CPP_EXTERN_C void Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshal_com_back(const Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_com& marshaled, Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED& unmarshaled)
{
	unmarshaled.___skin_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___skin_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skin_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___skin_0));
	unmarshaled.___slot_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___slot_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___slot_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___slot_1));
	unmarshaled.___name_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_2));
}
// Conversion method for clean up from marshalling of: Spine.Unity.SpineAttachment/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshal_com_cleanup(Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___skin_0);
	marshaled.___skin_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___slot_1);
	marshaled.___slot_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_2);
	marshaled.___name_2 = NULL;
}
// System.Void Spine.Unity.SpineAttachment/Hierarchy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hierarchy__ctor_m3FA32C3CA17C5C814487525237DE8815395BF1EF (Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED* __this, String_t* ___0_fullPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string[] chunks = fullPath.Split(new char[] { '/' }, System.StringSplitOptions.RemoveEmptyEntries);
		String_t* L_0 = ___0_fullPath;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m6811F7CF4DE7C68019D76E9DC6D17B2293BA8B12(L_0, L_2, 1, NULL);
		V_0 = L_3;
		// if (chunks.Length == 0) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0039;
		}
	}
	{
		// skin = "";
		__this->___skin_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skin_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// slot = "";
		__this->___slot_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slot_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// name = "";
		__this->___name_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// return;
		return;
	}

IL_0039:
	{
		// } else if (chunks.Length < 2) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		// throw new System.Exception("Cannot generate Attachment Hierarchy from string! Not enough components! [" + fullPath + "]");
		String_t* L_6 = ___0_fullPath;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD76813C9010F8F6833AC58AC7AA5C4B3742C6CDB)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC)), NULL);
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hierarchy__ctor_m3FA32C3CA17C5C814487525237DE8815395BF1EF_RuntimeMethod_var)));
	}

IL_0055:
	{
		// skin = chunks[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___skin_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skin_0), (void*)L_11);
		// slot = chunks[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->___slot_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slot_1), (void*)L_14);
		// name = "";
		__this->___name_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// for (int i = 2; i < chunks.Length; i++) {
		V_1 = 2;
		goto IL_008e;
	}

IL_0076:
	{
		// name += chunks[i];
		String_t* L_15 = __this->___name_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, L_19, NULL);
		__this->___name_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_20);
		// for (int i = 2; i < chunks.Length; i++) {
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008e:
	{
		// for (int i = 2; i < chunks.Length; i++) {
		int32_t L_22 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0076;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Hierarchy__ctor_m3FA32C3CA17C5C814487525237DE8815395BF1EF_AdjustorThunk (RuntimeObject* __this, String_t* ___0_fullPath, const RuntimeMethod* method)
{
	Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Hierarchy_tD893460E2ADF103F6598BFC7B5B556EB9E6B02ED*>(__this + _offset);
	Hierarchy__ctor_m3FA32C3CA17C5C814487525237DE8815395BF1EF(_thisAdjusted, ___0_fullPath, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.SpineAtlasRegion::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineAtlasRegion__ctor_mD65357C3466D3C681E03F54C3F45CBC3F60A4F41 (SpineAtlasRegion_t58B3C62106E367910DD495D3840342DD53A8FCC9* __this, String_t* ___0_atlasAssetField, const RuntimeMethod* method) 
{
	{
		// public SpineAtlasRegion (string atlasAssetField = "") {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.atlasAssetField = atlasAssetField;
		String_t* L_0 = ___0_atlasAssetField;
		__this->___atlasAssetField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___atlasAssetField_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color Spine.Unity.SkeletonExtensions::GetColor(Spine.Skeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonExtensions_GetColor_mD91D571FB922DAADBBEB305ED9E0EEE8F603C0E4 (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___0_s, const RuntimeMethod* method) 
{
	{
		// public static Color GetColor (this Skeleton s) { return new Color(s.R, s.G, s.B, s.A); }
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_0 = ___0_s;
		NullCheck(L_0);
		float L_1;
		L_1 = Skeleton_get_R_m957C55591D3D8C9A1F0A5C59D019EC2E71F069D2_inline(L_0, NULL);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_2 = ___0_s;
		NullCheck(L_2);
		float L_3;
		L_3 = Skeleton_get_G_m7C34E91BB1A6E7B390DB23151F896A99652F3CC6_inline(L_2, NULL);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_4 = ___0_s;
		NullCheck(L_4);
		float L_5;
		L_5 = Skeleton_get_B_mB0A93D0B45200CAA6E8240A7A9ADA53D262CB7BE_inline(L_4, NULL);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_6 = ___0_s;
		NullCheck(L_6);
		float L_7;
		L_7 = Skeleton_get_A_m227FF903C89CC109C815B007E933246C39EFAD1C_inline(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color Spine.Unity.SkeletonExtensions::GetColor(Spine.RegionAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonExtensions_GetColor_mD9265AA7BB7456D55B43C2AC86274AD7050B0316 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_a, const RuntimeMethod* method) 
{
	{
		// public static Color GetColor (this RegionAttachment a) { return new Color(a.R, a.G, a.B, a.A); }
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_a;
		NullCheck(L_0);
		float L_1;
		L_1 = RegionAttachment_get_R_m7445C818B40C2A8EE25F0E322449C7D36110DFA6_inline(L_0, NULL);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_2 = ___0_a;
		NullCheck(L_2);
		float L_3;
		L_3 = RegionAttachment_get_G_m2CCFE953B4C43C41AABDF2C4F6A43EE21B056D4D_inline(L_2, NULL);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_4 = ___0_a;
		NullCheck(L_4);
		float L_5;
		L_5 = RegionAttachment_get_B_mA934F931230C6AAB6FFAD0D5A90D7522C5C74009_inline(L_4, NULL);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_6 = ___0_a;
		NullCheck(L_6);
		float L_7;
		L_7 = RegionAttachment_get_A_m05117209BC3B9AA2B58D597A97C07B3EDBE331A5_inline(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color Spine.Unity.SkeletonExtensions::GetColor(Spine.MeshAttachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonExtensions_GetColor_m0A61C01695B31F935F05C48825C74B6181A972CE (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* ___0_a, const RuntimeMethod* method) 
{
	{
		// public static Color GetColor (this MeshAttachment a) { return new Color(a.R, a.G, a.B, a.A); }
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_0 = ___0_a;
		NullCheck(L_0);
		float L_1;
		L_1 = MeshAttachment_get_R_mC6D8DA19828398596A6AB5A93D9CC7FD38E7F659_inline(L_0, NULL);
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_2 = ___0_a;
		NullCheck(L_2);
		float L_3;
		L_3 = MeshAttachment_get_G_m9DED61D7E52E18C44074B184E3AC115712DDF37B_inline(L_2, NULL);
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_4 = ___0_a;
		NullCheck(L_4);
		float L_5;
		L_5 = MeshAttachment_get_B_m4D3207F0138F1FA9B3109DDC1CB439260F03DEB7_inline(L_4, NULL);
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_6 = ___0_a;
		NullCheck(L_6);
		float L_7;
		L_7 = MeshAttachment_get_A_m699B94DB8923F85FC6FA6EDDBF1BF6CCF5C39946_inline(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color Spine.Unity.SkeletonExtensions::GetColor(Spine.Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonExtensions_GetColor_mEC84F41E625698A7BAD406E4530F4370F89B13D9 (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___0_s, const RuntimeMethod* method) 
{
	{
		// public static Color GetColor (this Slot s) { return new Color(s.R, s.G, s.B, s.A); }
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_0 = ___0_s;
		NullCheck(L_0);
		float L_1;
		L_1 = Slot_get_R_m32B8F1985A30590340042C156F1681D82ECAEE5C_inline(L_0, NULL);
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_2 = ___0_s;
		NullCheck(L_2);
		float L_3;
		L_3 = Slot_get_G_m80B6DD9DEB62F4EFEE501C2E34D7E3016F62BF5E_inline(L_2, NULL);
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_4 = ___0_s;
		NullCheck(L_4);
		float L_5;
		L_5 = Slot_get_B_m4463970E3F74E12ED29B819D5C1332AE328D730E_inline(L_4, NULL);
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_6 = ___0_s;
		NullCheck(L_6);
		float L_7;
		L_7 = Slot_get_A_m1FB5C342FD9FB97FE5EC82B55397C35C99D49272_inline(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color Spine.Unity.SkeletonExtensions::GetColorTintBlack(Spine.Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonExtensions_GetColorTintBlack_m3E80F765F2479242646F9E8B1870CCA4023A852A (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___0_s, const RuntimeMethod* method) 
{
	{
		// public static Color GetColorTintBlack (this Slot s) { return new Color(s.R2, s.G2, s.B2, 1f); }
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_0 = ___0_s;
		NullCheck(L_0);
		float L_1;
		L_1 = Slot_get_R2_mFFF8E092B186942D9EB7B6513511093FB5C07E65_inline(L_0, NULL);
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_2 = ___0_s;
		NullCheck(L_2);
		float L_3;
		L_3 = Slot_get_G2_m72AB1BBEA9E769AD1FC36FC760751D73B9037843_inline(L_2, NULL);
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_4 = ___0_s;
		NullCheck(L_4);
		float L_5;
		L_5 = Slot_get_B2_mB4BEF912A63EC95AE4EAAB70E686FE198A769B0B_inline(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), L_1, L_3, L_5, (1.0f), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.Skeleton,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_m1EF8E56F3CBFF9DED2CBB82C12A4ACBC2BD8416D (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___0_skeleton, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	{
		// skeleton.A = color.a;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_0 = ___0_skeleton;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		float L_2 = L_1.___a_3;
		NullCheck(L_0);
		Skeleton_set_A_mD9FC576C115D119B76ECA978FC14A1D4D4191E24_inline(L_0, L_2, NULL);
		// skeleton.R = color.r;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_3 = ___0_skeleton;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		float L_5 = L_4.___r_0;
		NullCheck(L_3);
		Skeleton_set_R_m914D7E1F23A31D100D167DF2DC5513825C441BC7_inline(L_3, L_5, NULL);
		// skeleton.G = color.g;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_6 = ___0_skeleton;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___1_color;
		float L_8 = L_7.___g_1;
		NullCheck(L_6);
		Skeleton_set_G_m64EACF26B14B2B242648482ACE9CCE063A0117AE_inline(L_6, L_8, NULL);
		// skeleton.B = color.b;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_9 = ___0_skeleton;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_color;
		float L_11 = L_10.___b_2;
		NullCheck(L_9);
		Skeleton_set_B_m06359B96A97EEC04CA6104AF4F8A2CB1D3E85302_inline(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.Skeleton,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_m8EBA3EF316183B0521A35F49EC9F2FBBF535AA71 (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___0_skeleton, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_color, const RuntimeMethod* method) 
{
	{
		// skeleton.A = color.a * ByteToFloat;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_0 = ___0_skeleton;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_color;
		uint8_t L_2 = L_1.___a_4;
		NullCheck(L_0);
		Skeleton_set_A_mD9FC576C115D119B76ECA978FC14A1D4D4191E24_inline(L_0, ((float)il2cpp_codegen_multiply(((float)L_2), (0.00392156886f))), NULL);
		// skeleton.R = color.r * ByteToFloat;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_3 = ___0_skeleton;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___1_color;
		uint8_t L_5 = L_4.___r_1;
		NullCheck(L_3);
		Skeleton_set_R_m914D7E1F23A31D100D167DF2DC5513825C441BC7_inline(L_3, ((float)il2cpp_codegen_multiply(((float)L_5), (0.00392156886f))), NULL);
		// skeleton.G = color.g * ByteToFloat;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_6 = ___0_skeleton;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___1_color;
		uint8_t L_8 = L_7.___g_2;
		NullCheck(L_6);
		Skeleton_set_G_m64EACF26B14B2B242648482ACE9CCE063A0117AE_inline(L_6, ((float)il2cpp_codegen_multiply(((float)L_8), (0.00392156886f))), NULL);
		// skeleton.B = color.b * ByteToFloat;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_9 = ___0_skeleton;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___1_color;
		uint8_t L_11 = L_10.___b_3;
		NullCheck(L_9);
		Skeleton_set_B_m06359B96A97EEC04CA6104AF4F8A2CB1D3E85302_inline(L_9, ((float)il2cpp_codegen_multiply(((float)L_11), (0.00392156886f))), NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.Slot,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_mEF0494837D0DB84671084299EABFEEE39538DE55 (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___0_slot, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	{
		// slot.A = color.a;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_0 = ___0_slot;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		float L_2 = L_1.___a_3;
		NullCheck(L_0);
		Slot_set_A_m2D9500F8CC69A46F2BAD01C8E4368E678AE58A6F_inline(L_0, L_2, NULL);
		// slot.R = color.r;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_3 = ___0_slot;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		float L_5 = L_4.___r_0;
		NullCheck(L_3);
		Slot_set_R_m5A7F17AF272D985848BF9271CF1AD4C8C1253CC6_inline(L_3, L_5, NULL);
		// slot.G = color.g;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_6 = ___0_slot;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___1_color;
		float L_8 = L_7.___g_1;
		NullCheck(L_6);
		Slot_set_G_mC469AC792B8A90D09B01E7E984AD6B0491A57160_inline(L_6, L_8, NULL);
		// slot.B = color.b;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_9 = ___0_slot;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_color;
		float L_11 = L_10.___b_2;
		NullCheck(L_9);
		Slot_set_B_m39EB0F3969EBAE9EB0D06A1BABC39319353D611F_inline(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.Slot,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_m7DD8E1B4B09C02CED026DE442F0CCC5307B8F872 (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___0_slot, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_color, const RuntimeMethod* method) 
{
	{
		// slot.A = color.a * ByteToFloat;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_0 = ___0_slot;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_color;
		uint8_t L_2 = L_1.___a_4;
		NullCheck(L_0);
		Slot_set_A_m2D9500F8CC69A46F2BAD01C8E4368E678AE58A6F_inline(L_0, ((float)il2cpp_codegen_multiply(((float)L_2), (0.00392156886f))), NULL);
		// slot.R = color.r * ByteToFloat;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_3 = ___0_slot;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___1_color;
		uint8_t L_5 = L_4.___r_1;
		NullCheck(L_3);
		Slot_set_R_m5A7F17AF272D985848BF9271CF1AD4C8C1253CC6_inline(L_3, ((float)il2cpp_codegen_multiply(((float)L_5), (0.00392156886f))), NULL);
		// slot.G = color.g * ByteToFloat;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_6 = ___0_slot;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___1_color;
		uint8_t L_8 = L_7.___g_2;
		NullCheck(L_6);
		Slot_set_G_mC469AC792B8A90D09B01E7E984AD6B0491A57160_inline(L_6, ((float)il2cpp_codegen_multiply(((float)L_8), (0.00392156886f))), NULL);
		// slot.B = color.b * ByteToFloat;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_9 = ___0_slot;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___1_color;
		uint8_t L_11 = L_10.___b_3;
		NullCheck(L_9);
		Slot_set_B_m39EB0F3969EBAE9EB0D06A1BABC39319353D611F_inline(L_9, ((float)il2cpp_codegen_multiply(((float)L_11), (0.00392156886f))), NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.RegionAttachment,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_mE724E85D78279FB618CA6AD80682C8974DF0AD7D (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_attachment, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	{
		// attachment.A = color.a;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		float L_2 = L_1.___a_3;
		NullCheck(L_0);
		RegionAttachment_set_A_mDA7BD3D9848F651029D33DE745011881A80BBB6C_inline(L_0, L_2, NULL);
		// attachment.R = color.r;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_3 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		float L_5 = L_4.___r_0;
		NullCheck(L_3);
		RegionAttachment_set_R_m801BE04357A97DD6784929D25F7387B4AA70A1E4_inline(L_3, L_5, NULL);
		// attachment.G = color.g;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_6 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___1_color;
		float L_8 = L_7.___g_1;
		NullCheck(L_6);
		RegionAttachment_set_G_mC3535255A8FD5348DF13AF7A3498C5E99B989A36_inline(L_6, L_8, NULL);
		// attachment.B = color.b;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_9 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_color;
		float L_11 = L_10.___b_2;
		NullCheck(L_9);
		RegionAttachment_set_B_mDF37D72C03FD51DCAB15568D50DDE05CD5A5E48C_inline(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.RegionAttachment,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_m396F3F7BE7388ABA9BA48DBF191B099A3FAA1674 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_attachment, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_color, const RuntimeMethod* method) 
{
	{
		// attachment.A = color.a * ByteToFloat;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_color;
		uint8_t L_2 = L_1.___a_4;
		NullCheck(L_0);
		RegionAttachment_set_A_mDA7BD3D9848F651029D33DE745011881A80BBB6C_inline(L_0, ((float)il2cpp_codegen_multiply(((float)L_2), (0.00392156886f))), NULL);
		// attachment.R = color.r * ByteToFloat;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_3 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___1_color;
		uint8_t L_5 = L_4.___r_1;
		NullCheck(L_3);
		RegionAttachment_set_R_m801BE04357A97DD6784929D25F7387B4AA70A1E4_inline(L_3, ((float)il2cpp_codegen_multiply(((float)L_5), (0.00392156886f))), NULL);
		// attachment.G = color.g * ByteToFloat;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_6 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___1_color;
		uint8_t L_8 = L_7.___g_2;
		NullCheck(L_6);
		RegionAttachment_set_G_mC3535255A8FD5348DF13AF7A3498C5E99B989A36_inline(L_6, ((float)il2cpp_codegen_multiply(((float)L_8), (0.00392156886f))), NULL);
		// attachment.B = color.b * ByteToFloat;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_9 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___1_color;
		uint8_t L_11 = L_10.___b_3;
		NullCheck(L_9);
		RegionAttachment_set_B_mDF37D72C03FD51DCAB15568D50DDE05CD5A5E48C_inline(L_9, ((float)il2cpp_codegen_multiply(((float)L_11), (0.00392156886f))), NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.MeshAttachment,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_m6B3B94A1753D83D9FE6ED0D777BB788FB621CC4B (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* ___0_attachment, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	{
		// attachment.A = color.a;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_0 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		float L_2 = L_1.___a_3;
		NullCheck(L_0);
		MeshAttachment_set_A_mA9CD59B4EE888B7D3EE2BD6FE6891E31D28EE91C_inline(L_0, L_2, NULL);
		// attachment.R = color.r;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_3 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_color;
		float L_5 = L_4.___r_0;
		NullCheck(L_3);
		MeshAttachment_set_R_m862AF2698571C62D0122172408487D6A111A4084_inline(L_3, L_5, NULL);
		// attachment.G = color.g;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_6 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___1_color;
		float L_8 = L_7.___g_1;
		NullCheck(L_6);
		MeshAttachment_set_G_m3CBF7A645DD974CDEE9C29D05659365F78D23724_inline(L_6, L_8, NULL);
		// attachment.B = color.b;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_9 = ___0_attachment;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_color;
		float L_11 = L_10.___b_2;
		NullCheck(L_9);
		MeshAttachment_set_B_m6580B6F65BF03D2BE31DCC00AD891DB61649A32C_inline(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetColor(Spine.MeshAttachment,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetColor_m2B166586AA4B37F06E44262AF2CA9AF1BC56F7BC (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* ___0_attachment, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___1_color, const RuntimeMethod* method) 
{
	{
		// attachment.A = color.a * ByteToFloat;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_0 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___1_color;
		uint8_t L_2 = L_1.___a_4;
		NullCheck(L_0);
		MeshAttachment_set_A_mA9CD59B4EE888B7D3EE2BD6FE6891E31D28EE91C_inline(L_0, ((float)il2cpp_codegen_multiply(((float)L_2), (0.00392156886f))), NULL);
		// attachment.R = color.r * ByteToFloat;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_3 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___1_color;
		uint8_t L_5 = L_4.___r_1;
		NullCheck(L_3);
		MeshAttachment_set_R_m862AF2698571C62D0122172408487D6A111A4084_inline(L_3, ((float)il2cpp_codegen_multiply(((float)L_5), (0.00392156886f))), NULL);
		// attachment.G = color.g * ByteToFloat;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_6 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___1_color;
		uint8_t L_8 = L_7.___g_2;
		NullCheck(L_6);
		MeshAttachment_set_G_m3CBF7A645DD974CDEE9C29D05659365F78D23724_inline(L_6, ((float)il2cpp_codegen_multiply(((float)L_8), (0.00392156886f))), NULL);
		// attachment.B = color.b * ByteToFloat;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_9 = ___0_attachment;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___1_color;
		uint8_t L_11 = L_10.___b_3;
		NullCheck(L_9);
		MeshAttachment_set_B_m6580B6F65BF03D2BE31DCC00AD891DB61649A32C_inline(L_9, ((float)il2cpp_codegen_multiply(((float)L_11), (0.00392156886f))), NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetLocalScale(Spine.Skeleton,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetLocalScale_mF4CBC804C57B2E15BC95DDA320A55B07930987D0 (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___0_skeleton, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scale, const RuntimeMethod* method) 
{
	{
		// skeleton.ScaleX = scale.x;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_0 = ___0_skeleton;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_scale;
		float L_2 = L_1.___x_0;
		NullCheck(L_0);
		Skeleton_set_ScaleX_m07D3147D70FE2A979795A4F240CFF98D4C9AB9CB_inline(L_0, L_2, NULL);
		// skeleton.ScaleY = scale.y;
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_3 = ___0_skeleton;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_scale;
		float L_5 = L_4.___y_1;
		NullCheck(L_3);
		Skeleton_set_ScaleY_m1FC455B365B1472CFAFBD55B2AC18FD8819FE99E_inline(L_3, L_5, NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Spine.Unity.SkeletonExtensions::GetMatrix4x4(Spine.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 SkeletonExtensions_GetMatrix4x4_mF86498E2B3F01CFAA0A616B8981C4EFC745B1C57 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Matrix4x4 {
		//     m00 = bone.A,
		//     m01 = bone.B,
		//     m03 = bone.WorldX,
		//     m10 = bone.C,
		//     m11 = bone.D,
		//     m13 = bone.WorldY,
		//     m33 = 1
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline(L_0, NULL);
		(&V_0)->___m00_0 = L_1;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___0_bone;
		NullCheck(L_2);
		float L_3;
		L_3 = Bone_get_B_m152872772FD282B96B00D119D28753129DA33AA1_inline(L_2, NULL);
		(&V_0)->___m01_4 = L_3;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_4 = ___0_bone;
		NullCheck(L_4);
		float L_5;
		L_5 = Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline(L_4, NULL);
		(&V_0)->___m03_12 = L_5;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_6 = ___0_bone;
		NullCheck(L_6);
		float L_7;
		L_7 = Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline(L_6, NULL);
		(&V_0)->___m10_1 = L_7;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_8 = ___0_bone;
		NullCheck(L_8);
		float L_9;
		L_9 = Bone_get_D_m1D033C2256BB965C9E2BEB1072435B07CD633B7F_inline(L_8, NULL);
		(&V_0)->___m11_5 = L_9;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_10 = ___0_bone;
		NullCheck(L_10);
		float L_11;
		L_11 = Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline(L_10, NULL);
		(&V_0)->___m13_13 = L_11;
		(&V_0)->___m33_15 = (1.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		return L_12;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetLocalPosition(Spine.Bone,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetLocalPosition_mDC89EA50E46F3A877108078CE2AAC2B490C401CD (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_position, const RuntimeMethod* method) 
{
	{
		// bone.X = position.x;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_position;
		float L_2 = L_1.___x_0;
		NullCheck(L_0);
		Bone_set_X_m4A643D9A72A10C964E507E98F7321FC074C3B213_inline(L_0, L_2, NULL);
		// bone.Y = position.y;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_3 = ___0_bone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_position;
		float L_5 = L_4.___y_1;
		NullCheck(L_3);
		Bone_set_Y_m5B63469F4E472827B5F5A64533C32FF60E302910_inline(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::SetLocalPosition(Spine.Bone,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetLocalPosition_m2528D21A16238264DC6EFCDCD46C3C85A006EEA0 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		// bone.X = position.x;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		float L_2 = L_1.___x_2;
		NullCheck(L_0);
		Bone_set_X_m4A643D9A72A10C964E507E98F7321FC074C3B213_inline(L_0, L_2, NULL);
		// bone.Y = position.y;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_3 = ___0_bone;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_position;
		float L_5 = L_4.___y_3;
		NullCheck(L_3);
		Bone_set_Y_m5B63469F4E472827B5F5A64533C32FF60E302910_inline(L_3, L_5, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Spine.Unity.SkeletonExtensions::GetLocalPosition(Spine.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SkeletonExtensions_GetLocalPosition_m9FE888E01D87394AAD87AB337924E69B4EBDCB20 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, const RuntimeMethod* method) 
{
	{
		// return new Vector2(bone.X, bone.Y);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_X_mEC9CB3AAE55AFA83AA82CE6E318405F310264A88_inline(L_0, NULL);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___0_bone;
		NullCheck(L_2);
		float L_3;
		L_3 = Bone_get_Y_mF88B9D57D60E689706A2F1D898A0BEBFF9AA5B57_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 Spine.Unity.SkeletonExtensions::GetSkeletonSpacePosition(Spine.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SkeletonExtensions_GetSkeletonSpacePosition_m1296DBC8F0F0E08C71C9FDFC3FF202693E532F65 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, const RuntimeMethod* method) 
{
	{
		// return new Vector2(bone.WorldX, bone.WorldY);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline(L_0, NULL);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___0_bone;
		NullCheck(L_2);
		float L_3;
		L_3 = Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 Spine.Unity.SkeletonExtensions::GetSkeletonSpacePosition(Spine.Bone,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SkeletonExtensions_GetSkeletonSpacePosition_mECC3DDAFB7A44673ED2C8947327EC1C09A4AAEAC (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_boneLocal, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bone.LocalToWorld(boneLocal.x, boneLocal.y, out o.x, out o.y);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_boneLocal;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_boneLocal;
		float L_4 = L_3.___y_1;
		float* L_5 = (&(&V_0)->___x_0);
		float* L_6 = (&(&V_0)->___y_1);
		NullCheck(L_0);
		Bone_LocalToWorld_m70348BC6C8B121E50DE1A4CF57C90A9075C3AE75(L_0, L_2, L_4, L_5, L_6, NULL);
		// return o;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 Spine.Unity.SkeletonExtensions::GetWorldPosition(Spine.Bone,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SkeletonExtensions_GetWorldPosition_m500C8598E0A6B0DE58F60E87FC43C02508EAF913 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_spineGameObjectTransform, const RuntimeMethod* method) 
{
	{
		// return spineGameObjectTransform.TransformPoint(new Vector3(bone.WorldX, bone.WorldY));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___1_spineGameObjectTransform;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_1 = ___0_bone;
		NullCheck(L_1);
		float L_2;
		L_2 = Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline(L_1, NULL);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_3 = ___0_bone;
		NullCheck(L_3);
		float L_4;
		L_4 = Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Spine.Unity.SkeletonExtensions::GetWorldPosition(Spine.Bone,UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SkeletonExtensions_GetWorldPosition_m84B64C4B136B7F68AFC8E523676EA9581F7CB068 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_spineGameObjectTransform, float ___2_positionScale, const RuntimeMethod* method) 
{
	{
		// return spineGameObjectTransform.TransformPoint(new Vector3(bone.WorldX * positionScale, bone.WorldY * positionScale));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___1_spineGameObjectTransform;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_1 = ___0_bone;
		NullCheck(L_1);
		float L_2;
		L_2 = Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline(L_1, NULL);
		float L_3 = ___2_positionScale;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_4 = ___0_bone;
		NullCheck(L_4);
		float L_5;
		L_5 = Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline(L_4, NULL);
		float L_6 = ___2_positionScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_7), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Quaternion Spine.Unity.SkeletonExtensions::GetQuaternion(Spine.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SkeletonExtensions_GetQuaternion_mAFFF752102BE2EC37FAD96DF64CDB567F158D00F (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var halfRotation = Mathf.Atan2(bone.C, bone.A) * 0.5f;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline(L_0, NULL);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___0_bone;
		NullCheck(L_2);
		float L_3;
		L_3 = Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline(L_2, NULL);
		float L_4;
		L_4 = atan2f(L_1, L_3);
		V_0 = ((float)il2cpp_codegen_multiply(L_4, (0.5f)));
		// return new Quaternion(0, 0, Mathf.Sin(halfRotation), Mathf.Cos(halfRotation));
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		float L_7 = V_0;
		float L_8;
		L_8 = cosf(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_9), (0.0f), (0.0f), L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Quaternion Spine.Unity.SkeletonExtensions::GetLocalQuaternion(Spine.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SkeletonExtensions_GetLocalQuaternion_m668BD3FA92D9028235C50E3EDFDDEF01476C2F04 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var halfRotation = bone.Rotation * Mathf.Deg2Rad * 0.5f;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_Rotation_m6CE4F553C65C091D012FB16F08375D2503670087_inline(L_0, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.0174532924f))), (0.5f)));
		// return new Quaternion(0, 0, Mathf.Sin(halfRotation), Mathf.Cos(halfRotation));
		float L_2 = V_0;
		float L_3;
		L_3 = sinf(L_2);
		float L_4 = V_0;
		float L_5;
		L_5 = cosf(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_6), (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 Spine.Unity.SkeletonExtensions::GetLocalScale(Spine.Skeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SkeletonExtensions_GetLocalScale_mEF61ACA8CCA27605AFF1649EBCFD9C185FAA0B81 (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* ___0_skeleton, const RuntimeMethod* method) 
{
	{
		// return new Vector2(skeleton.ScaleX, skeleton.ScaleY);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_0 = ___0_skeleton;
		NullCheck(L_0);
		float L_1;
		L_1 = Skeleton_get_ScaleX_mE232B30B8D60A1ECCAD49A101B0EA4A2C7A80FB4_inline(L_0, NULL);
		Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* L_2 = ___0_skeleton;
		NullCheck(L_2);
		float L_3;
		L_3 = Skeleton_get_ScaleY_m7C17F055B8DCEE33CA3BC718B84D0341B23264C2(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Spine.Unity.SkeletonExtensions::GetWorldToLocalMatrix(Spine.Bone,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_GetWorldToLocalMatrix_mD26AFE2F558336C668B4024913FCF27DE9F05C10 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, float* ___1_ia, float* ___2_ib, float* ___3_ic, float* ___4_id, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		NullCheck(L_0);
		float L_1;
		L_1 = Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline(L_0, NULL);
		V_0 = L_1;
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___0_bone;
		NullCheck(L_2);
		float L_3;
		L_3 = Bone_get_B_m152872772FD282B96B00D119D28753129DA33AA1_inline(L_2, NULL);
		V_1 = L_3;
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_4 = ___0_bone;
		NullCheck(L_4);
		float L_5;
		L_5 = Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline(L_4, NULL);
		V_2 = L_5;
		// float a = bone.A, b = bone.B, c = bone.C, d = bone.D;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_6 = ___0_bone;
		NullCheck(L_6);
		float L_7;
		L_7 = Bone_get_D_m1D033C2256BB965C9E2BEB1072435B07CD633B7F_inline(L_6, NULL);
		V_3 = L_7;
		// float invDet = 1 / (a * d - b * c);
		float L_8 = V_0;
		float L_9 = V_3;
		float L_10 = V_1;
		float L_11 = V_2;
		V_4 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		// ia = invDet * d;
		float* L_12 = ___1_ia;
		float L_13 = V_4;
		float L_14 = V_3;
		*((float*)L_12) = (float)((float)il2cpp_codegen_multiply(L_13, L_14));
		// ib = invDet * -b;
		float* L_15 = ___2_ib;
		float L_16 = V_4;
		float L_17 = V_1;
		*((float*)L_15) = (float)((float)il2cpp_codegen_multiply(L_16, ((-L_17))));
		// ic = invDet * -c;
		float* L_18 = ___3_ic;
		float L_19 = V_4;
		float L_20 = V_2;
		*((float*)L_18) = (float)((float)il2cpp_codegen_multiply(L_19, ((-L_20))));
		// id = invDet * a;
		float* L_21 = ___4_id;
		float L_22 = V_4;
		float L_23 = V_0;
		*((float*)L_21) = (float)((float)il2cpp_codegen_multiply(L_22, L_23));
		// }
		return;
	}
}
// UnityEngine.Vector2 Spine.Unity.SkeletonExtensions::WorldToLocal(Spine.Bone,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SkeletonExtensions_WorldToLocal_m3329DC8FBD7EF4B9B14B0903FCC6C8BFC697B491 (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_worldPosition, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bone.WorldToLocal(worldPosition.x, worldPosition.y, out o.x, out o.y);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_worldPosition;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_worldPosition;
		float L_4 = L_3.___y_1;
		float* L_5 = (&(&V_0)->___x_0);
		float* L_6 = (&(&V_0)->___y_1);
		NullCheck(L_0);
		Bone_WorldToLocal_m8C7FCAE8806F57DD50CC4FE78E806D074736A030(L_0, L_2, L_4, L_5, L_6, NULL);
		// return o;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector2 Spine.Unity.SkeletonExtensions::SetPositionSkeletonSpace(Spine.Bone,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SkeletonExtensions_SetPositionSkeletonSpace_m971857B6CDA30DD037FA8A1C1CA53E0511CFDE3B (Bone_tC5BB616A04722279E675558888991F720C090467* ___0_bone, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_skeletonSpacePosition, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (bone.Parent == null) { // root bone
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = ___0_bone;
		NullCheck(L_0);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_1;
		L_1 = Bone_get_Parent_m067C034AB2EABF1E88DE960D5C3CBF69EFDA57C0_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// bone.SetLocalPosition(skeletonSpacePosition);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2 = ___0_bone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_skeletonSpacePosition;
		SkeletonExtensions_SetLocalPosition_mDC89EA50E46F3A877108078CE2AAC2B490C401CD(L_2, L_3, NULL);
		// return skeletonSpacePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_skeletonSpacePosition;
		return L_4;
	}

IL_0011:
	{
		// var parent = bone.Parent;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_5 = ___0_bone;
		NullCheck(L_5);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_6;
		L_6 = Bone_get_Parent_m067C034AB2EABF1E88DE960D5C3CBF69EFDA57C0_inline(L_5, NULL);
		// Vector2 parentLocal = parent.WorldToLocal(skeletonSpacePosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___1_skeletonSpacePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = SkeletonExtensions_WorldToLocal_m3329DC8FBD7EF4B9B14B0903FCC6C8BFC697B491(L_6, L_7, NULL);
		V_0 = L_8;
		// bone.SetLocalPosition(parentLocal);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_9 = ___0_bone;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		SkeletonExtensions_SetLocalPosition_mDC89EA50E46F3A877108078CE2AAC2B490C401CD(L_9, L_10, NULL);
		// return parentLocal;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.Material Spine.Unity.SkeletonExtensions::GetMaterial(Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SkeletonExtensions_GetMaterial_m5963475AD086F929858E07D2C5A24228DF499E35 (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// object rendererObject = null;
		V_0 = NULL;
		// var renderableAttachment = a as IHasRendererObject;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_0 = ___0_a;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var));
		// if (renderableAttachment != null)
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// rendererObject = renderableAttachment.RendererObject;
		RuntimeObject* L_2 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Spine.IHasRendererObject::get_RendererObject() */, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0013:
	{
		// if (rendererObject == null)
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0018:
	{
		// return (Material)((AtlasRegion)rendererObject).page.rendererObject;
		RuntimeObject* L_5 = V_0;
		NullCheck(((AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*)CastclassClass((RuntimeObject*)L_5, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var)));
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_6 = ((AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*)CastclassClass((RuntimeObject*)L_5, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var))->___page_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___rendererObject_9;
		return ((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_7, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Vector2[] Spine.Unity.SkeletonExtensions::GetLocalVertices(Spine.VertexAttachment,Spine.Slot,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* SkeletonExtensions_GetLocalVertices_m76C5769DC0EA4C7BC19F646FA9173A530CE88C8B (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* ___0_va, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___1_slot, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B2_0 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B1_0 = NULL;
	{
		// int floatsCount = va.WorldVerticesLength;
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_0 = ___0_va;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VertexAttachment_get_WorldVerticesLength_m18500A21BFC7C7DB4E81B4AC345345F1122B5D44_inline(L_0, NULL);
		V_0 = L_1;
		// int bufferTargetSize = floatsCount >> 1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2>>1));
		// buffer = buffer ?? new Vector2[bufferTargetSize];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = ___2_buffer;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0016;
		}
	}
	{
		int32_t L_5 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_5);
		G_B2_0 = L_6;
	}

IL_0016:
	{
		___2_buffer = G_B2_0;
		// if (buffer.Length < bufferTargetSize) throw new System.ArgumentException(string.Format("Vector2 buffer too small. {0} requires an array of size {1}. Use the attachment's .WorldVerticesLength to get the correct size.", va.Name, floatsCount), "buffer");
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___2_buffer;
		NullCheck(L_7);
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		// if (buffer.Length < bufferTargetSize) throw new System.ArgumentException(string.Format("Vector2 buffer too small. {0} requires an array of size {1}. Use the attachment's .WorldVerticesLength to get the correct size.", va.Name, floatsCount), "buffer");
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_9 = ___0_va;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Attachment_get_Name_m3F6ED5BB3D0A221C137F0371ED65AD2815508D4B_inline(L_9, NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC97FADBB19DF94D28E4601AE7B8198FDC83D934C)), L_10, L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_15, L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonExtensions_GetLocalVertices_m76C5769DC0EA4C7BC19F646FA9173A530CE88C8B_RuntimeMethod_var)));
	}

IL_003f:
	{
		// if (va.Bones == null && va.DeformAttachment == null) {
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_16 = ___0_va;
		NullCheck(L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17;
		L_17 = VertexAttachment_get_Bones_m22C6003E3CE1F95FF21B2D5C8553460ADD059D81_inline(L_16, NULL);
		if (L_17)
		{
			goto IL_0082;
		}
	}
	{
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_18 = ___0_va;
		NullCheck(L_18);
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_19;
		L_19 = VertexAttachment_get_DeformAttachment_m48C0B426AFF30F228AC898C76CB5BC635A62E32C_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_0082;
		}
	}
	{
		// var localVerts = va.Vertices;
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_20 = ___0_va;
		NullCheck(L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21;
		L_21 = VertexAttachment_get_Vertices_mB5661F9B123FB5BEBA04853B24E72B54C6C61F14_inline(L_20, NULL);
		V_2 = L_21;
		// for (int i = 0; i < bufferTargetSize; i++) {
		V_3 = 0;
		goto IL_0079;
	}

IL_005a:
	{
		// int j = i * 2;
		int32_t L_22 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_22, 2));
		// buffer[i] = new Vector2(localVerts[j], localVerts[j + 1]);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = ___2_buffer;
		int32_t L_24 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = V_2;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = V_2;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), L_28, L_32, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_33);
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0079:
	{
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_35 = V_3;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_005a;
		}
	}
	{
		goto IL_0105;
	}

IL_0082:
	{
		// var floats = new float[floatsCount];
		int32_t L_37 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_37);
		V_5 = L_38;
		// va.ComputeWorldVertices(slot, floats);
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_39 = ___0_va;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_40 = ___1_slot;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = V_5;
		NullCheck(L_39);
		VertexAttachment_ComputeWorldVertices_mDC989D27CD6FA8578F1D54CECD810C780C6A2B4F(L_39, L_40, L_41, NULL);
		// Bone sb = slot.Bone;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_42 = ___1_slot;
		NullCheck(L_42);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_43;
		L_43 = Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline(L_42, NULL);
		// float ia, ib, ic, id, bwx = sb.WorldX, bwy = sb.WorldY;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_44 = L_43;
		NullCheck(L_44);
		float L_45;
		L_45 = Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline(L_44, NULL);
		V_10 = L_45;
		// float ia, ib, ic, id, bwx = sb.WorldX, bwy = sb.WorldY;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_46 = L_44;
		NullCheck(L_46);
		float L_47;
		L_47 = Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline(L_46, NULL);
		V_11 = L_47;
		// sb.GetWorldToLocalMatrix(out ia, out ib, out ic, out id);
		SkeletonExtensions_GetWorldToLocalMatrix_mD26AFE2F558336C668B4024913FCF27DE9F05C10(L_46, (&V_6), (&V_7), (&V_8), (&V_9), NULL);
		// for (int i = 0; i < bufferTargetSize; i++) {
		V_12 = 0;
		goto IL_0100;
	}

IL_00bb:
	{
		// int j = i * 2;
		int32_t L_48 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_multiply(L_48, 2));
		// float x = floats[j] - bwx, y = floats[j + 1] - bwy;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_5;
		int32_t L_50 = V_13;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		float L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		float L_53 = V_10;
		V_14 = ((float)il2cpp_codegen_subtract(L_52, L_53));
		// float x = floats[j] - bwx, y = floats[j + 1] - bwy;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = V_5;
		int32_t L_55 = V_13;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		float L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		float L_58 = V_11;
		V_15 = ((float)il2cpp_codegen_subtract(L_57, L_58));
		// buffer[i] = new Vector2(x * ia + y * ib, x * ic + y * id);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_59 = ___2_buffer;
		int32_t L_60 = V_12;
		float L_61 = V_14;
		float L_62 = V_6;
		float L_63 = V_15;
		float L_64 = V_7;
		float L_65 = V_14;
		float L_66 = V_8;
		float L_67 = V_15;
		float L_68 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_61, L_62)), ((float)il2cpp_codegen_multiply(L_63, L_64)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_65, L_66)), ((float)il2cpp_codegen_multiply(L_67, L_68)))), /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_69);
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_70 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0100:
	{
		// for (int i = 0; i < bufferTargetSize; i++) {
		int32_t L_71 = V_12;
		int32_t L_72 = V_1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00bb;
		}
	}

IL_0105:
	{
		// return buffer;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_73 = ___2_buffer;
		return L_73;
	}
}
// UnityEngine.Vector2[] Spine.Unity.SkeletonExtensions::GetWorldVertices(Spine.VertexAttachment,Spine.Slot,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* SkeletonExtensions_GetWorldVertices_m943F15DA3AAB27C80A9D665F0B0127DCB1267427 (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* ___0_a, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___1_slot, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B2_0 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* G_B1_0 = NULL;
	{
		// int worldVertsLength = a.WorldVerticesLength;
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VertexAttachment_get_WorldVerticesLength_m18500A21BFC7C7DB4E81B4AC345345F1122B5D44_inline(L_0, NULL);
		V_0 = L_1;
		// int bufferTargetSize = worldVertsLength >> 1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2>>1));
		// buffer = buffer ?? new Vector2[bufferTargetSize];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = ___2_buffer;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0016;
		}
	}
	{
		int32_t L_5 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_5);
		G_B2_0 = L_6;
	}

IL_0016:
	{
		___2_buffer = G_B2_0;
		// if (buffer.Length < bufferTargetSize) throw new System.ArgumentException(string.Format("Vector2 buffer too small. {0} requires an array of size {1}. Use the attachment's .WorldVerticesLength to get the correct size.", a.Name, worldVertsLength), "buffer");
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___2_buffer;
		NullCheck(L_7);
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		// if (buffer.Length < bufferTargetSize) throw new System.ArgumentException(string.Format("Vector2 buffer too small. {0} requires an array of size {1}. Use the attachment's .WorldVerticesLength to get the correct size.", a.Name, worldVertsLength), "buffer");
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_9 = ___0_a;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Attachment_get_Name_m3F6ED5BB3D0A221C137F0371ED65AD2815508D4B_inline(L_9, NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC97FADBB19DF94D28E4601AE7B8198FDC83D934C)), L_10, L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_15, L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeletonExtensions_GetWorldVertices_m943F15DA3AAB27C80A9D665F0B0127DCB1267427_RuntimeMethod_var)));
	}

IL_003f:
	{
		// var floats = new float[worldVertsLength];
		int32_t L_16 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_2 = L_17;
		// a.ComputeWorldVertices(slot, floats);
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_18 = ___0_a;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_19 = ___1_slot;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = V_2;
		NullCheck(L_18);
		VertexAttachment_ComputeWorldVertices_mDC989D27CD6FA8578F1D54CECD810C780C6A2B4F(L_18, L_19, L_20, NULL);
		// for (int i = 0, n = worldVertsLength >> 1; i < n; i++) {
		V_3 = 0;
		// for (int i = 0, n = worldVertsLength >> 1; i < n; i++) {
		int32_t L_21 = V_0;
		V_4 = ((int32_t)(L_21>>1));
		goto IL_0076;
	}

IL_0057:
	{
		// int j = i * 2;
		int32_t L_22 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_22, 2));
		// buffer[i] = new Vector2(floats[j], floats[j + 1]);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = ___2_buffer;
		int32_t L_24 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = V_2;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = V_2;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), L_28, L_32, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_33);
		// for (int i = 0, n = worldVertsLength >> 1; i < n; i++) {
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0076:
	{
		// for (int i = 0, n = worldVertsLength >> 1; i < n; i++) {
		int32_t L_35 = V_3;
		int32_t L_36 = V_4;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0057;
		}
	}
	{
		// return buffer;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = ___2_buffer;
		return L_37;
	}
}
// UnityEngine.Vector3 Spine.Unity.SkeletonExtensions::GetWorldPosition(Spine.PointAttachment,Spine.Slot,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SkeletonExtensions_GetWorldPosition_mD9B97217838F64F8DBC6288B8CB833E3273D4FBF (PointAttachment_tF918D9D4CC59EB88F5B0737E23A34DD0FB0FEDE8* ___0_attachment, Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* ___1_slot, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_spineGameObjectTransform, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// skeletonSpacePosition.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// attachment.ComputeWorldPosition(slot.Bone, out skeletonSpacePosition.x, out skeletonSpacePosition.y);
		PointAttachment_tF918D9D4CC59EB88F5B0737E23A34DD0FB0FEDE8* L_0 = ___0_attachment;
		Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* L_1 = ___1_slot;
		NullCheck(L_1);
		Bone_tC5BB616A04722279E675558888991F720C090467* L_2;
		L_2 = Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline(L_1, NULL);
		float* L_3 = (&(&V_0)->___x_2);
		float* L_4 = (&(&V_0)->___y_3);
		NullCheck(L_0);
		PointAttachment_ComputeWorldPosition_mFAD1A20A88322D7A11886C31F4A6BF5A5991456C(L_0, L_2, L_3, L_4, NULL);
		// return spineGameObjectTransform.TransformPoint(skeletonSpacePosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___2_spineGameObjectTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 Spine.Unity.SkeletonExtensions::GetWorldPosition(Spine.PointAttachment,Spine.Bone,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SkeletonExtensions_GetWorldPosition_m2942611978602D6AD31C85C10DDFA18D9AD2F5BF (PointAttachment_tF918D9D4CC59EB88F5B0737E23A34DD0FB0FEDE8* ___0_attachment, Bone_tC5BB616A04722279E675558888991F720C090467* ___1_bone, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_spineGameObjectTransform, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// skeletonSpacePosition.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// attachment.ComputeWorldPosition(bone, out skeletonSpacePosition.x, out skeletonSpacePosition.y);
		PointAttachment_tF918D9D4CC59EB88F5B0737E23A34DD0FB0FEDE8* L_0 = ___0_attachment;
		Bone_tC5BB616A04722279E675558888991F720C090467* L_1 = ___1_bone;
		float* L_2 = (&(&V_0)->___x_2);
		float* L_3 = (&(&V_0)->___y_3);
		NullCheck(L_0);
		PointAttachment_ComputeWorldPosition_mFAD1A20A88322D7A11886C31F4A6BF5A5991456C(L_0, L_1, L_2, L_3, NULL);
		// return spineGameObjectTransform.TransformPoint(skeletonSpacePosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___2_spineGameObjectTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.WaitForSpineAnimation::.ctor(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation__ctor_m6D73BEA00F0BBA00BCECF0F9ADB1D66B382D78CA (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, int32_t ___1_eventsToWaitFor, const RuntimeMethod* method) 
{
	{
		// public WaitForSpineAnimation (Spine.TrackEntry trackEntry, AnimationEventTypes eventsToWaitFor) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SafeSubscribe(trackEntry, eventsToWaitFor);
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		int32_t L_1 = ___1_eventsToWaitFor;
		WaitForSpineAnimation_SafeSubscribe_mB22FC2FD3F65437E3641B1BAAF82C28EA522DF62(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineAnimation Spine.Unity.WaitForSpineAnimation::NowWaitFor(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* WaitForSpineAnimation_NowWaitFor_m8665852AD25C35A523B8DE6A497AC4DAD1A6D593 (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, int32_t ___1_eventsToWaitFor, const RuntimeMethod* method) 
{
	{
		// SafeSubscribe(trackEntry, eventsToWaitFor);
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		int32_t L_1 = ___1_eventsToWaitFor;
		WaitForSpineAnimation_SafeSubscribe_mB22FC2FD3F65437E3641B1BAAF82C28EA522DF62(__this, L_0, L_1, NULL);
		// return this;
		return __this;
	}
}
// System.Boolean Spine.Unity.WaitForSpineAnimation::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineAnimation_System_Collections_IEnumerator_MoveNext_m34AB052AF84D01AF026A8F19CB5E1254FADD9F4D (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_WasFired) {
		bool L_0 = __this->___m_WasFired_0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ((IEnumerator)this).Reset();    // auto-reset for YieldInstruction reuse
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, __this);
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Spine.Unity.WaitForSpineAnimation::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_System_Collections_IEnumerator_Reset_mF3013E7FD7683A528AEBBBC537C2A150B6137FFC (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, const RuntimeMethod* method) 
{
	{
		// void IEnumerator.Reset () { m_WasFired = false; }
		__this->___m_WasFired_0 = (bool)0;
		// void IEnumerator.Reset () { m_WasFired = false; }
		return;
	}
}
// System.Object Spine.Unity.WaitForSpineAnimation::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForSpineAnimation_System_Collections_IEnumerator_get_Current_mC3492BEBFC28399EF6050B7C843A5D5629181084 (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, const RuntimeMethod* method) 
{
	{
		// object IEnumerator.Current { get { return null; } }
		return NULL;
	}
}
// System.Void Spine.Unity.WaitForSpineAnimation::SafeSubscribe(Spine.TrackEntry,Spine.Unity.WaitForSpineAnimation/AnimationEventTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_SafeSubscribe_mB22FC2FD3F65437E3641B1BAAF82C28EA522DF62 (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, int32_t ___1_eventsToWaitFor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackEntry == null) {
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("TrackEntry was null. Coroutine will continue immediately.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776, NULL);
		// m_WasFired = true;
		__this->___m_WasFired_0 = (bool)1;
		return;
	}

IL_0015:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Start) != 0)
		int32_t L_1 = ___1_eventsToWaitFor;
		if (!((int32_t)((int32_t)L_1&1)))
		{
			goto IL_002c;
		}
	}
	{
		// trackEntry.Start += HandleComplete;
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_2 = ___0_trackEntry;
		TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* L_3 = (TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924*)il2cpp_codegen_object_new(TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TrackEntryDelegate__ctor_m710590CF03EC9B3FB519427B7DE724820779AE7D(L_3, __this, (intptr_t)((void*)WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TrackEntry_add_Start_m8B758A2E87412FF863592CED212BEEFC2222BDDF(L_2, L_3, NULL);
	}

IL_002c:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Interrupt) != 0)
		int32_t L_4 = ___1_eventsToWaitFor;
		if (!((int32_t)((int32_t)L_4&2)))
		{
			goto IL_0043;
		}
	}
	{
		// trackEntry.Interrupt += HandleComplete;
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_5 = ___0_trackEntry;
		TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* L_6 = (TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924*)il2cpp_codegen_object_new(TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TrackEntryDelegate__ctor_m710590CF03EC9B3FB519427B7DE724820779AE7D(L_6, __this, (intptr_t)((void*)WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		TrackEntry_add_Interrupt_m928EC3BB181E6DE84CF74241A464C9C564E29780(L_5, L_6, NULL);
	}

IL_0043:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.End) != 0)
		int32_t L_7 = ___1_eventsToWaitFor;
		if (!((int32_t)((int32_t)L_7&4)))
		{
			goto IL_005a;
		}
	}
	{
		// trackEntry.End += HandleComplete;
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_8 = ___0_trackEntry;
		TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* L_9 = (TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924*)il2cpp_codegen_object_new(TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TrackEntryDelegate__ctor_m710590CF03EC9B3FB519427B7DE724820779AE7D(L_9, __this, (intptr_t)((void*)WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		TrackEntry_add_End_m8DFB9580750A29F665B0CCDE52A24ED781380608(L_8, L_9, NULL);
	}

IL_005a:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Dispose) != 0)
		int32_t L_10 = ___1_eventsToWaitFor;
		if (!((int32_t)((int32_t)L_10&8)))
		{
			goto IL_0071;
		}
	}
	{
		// trackEntry.Dispose += HandleComplete;
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_11 = ___0_trackEntry;
		TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* L_12 = (TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924*)il2cpp_codegen_object_new(TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		TrackEntryDelegate__ctor_m710590CF03EC9B3FB519427B7DE724820779AE7D(L_12, __this, (intptr_t)((void*)WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		TrackEntry_add_Dispose_mE7E1F192E90F99EBCDF049D74007F3524D68E59D(L_11, L_12, NULL);
	}

IL_0071:
	{
		// if ((eventsToWaitFor & AnimationEventTypes.Complete) != 0)
		int32_t L_13 = ___1_eventsToWaitFor;
		if (!((int32_t)((int32_t)L_13&((int32_t)16))))
		{
			goto IL_0089;
		}
	}
	{
		// trackEntry.Complete += HandleComplete;
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_14 = ___0_trackEntry;
		TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* L_15 = (TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924*)il2cpp_codegen_object_new(TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		TrackEntryDelegate__ctor_m710590CF03EC9B3FB519427B7DE724820779AE7D(L_15, __this, (intptr_t)((void*)WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		TrackEntry_add_Complete_m80846502138B680008FC7A8C8BA964D635ED87AD(L_14, L_15, NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineAnimation::HandleComplete(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimation_HandleComplete_m5BB8B36A842471C7965B84E74A8D18723A2FD528 (WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) 
{
	{
		// m_WasFired = true;
		__this->___m_WasFired_0 = (bool)1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.WaitForSpineAnimationComplete::.ctor(Spine.TrackEntry,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimationComplete__ctor_mA45334F7FB8EB2CCA48CB81E9B54806EBF1CBDE3 (WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, bool ___1_includeEndEvent, const RuntimeMethod* method) 
{
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* G_B2_0 = NULL;
	WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* G_B2_1 = NULL;
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* G_B1_0 = NULL;
	WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* G_B3_1 = NULL;
	WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* G_B3_2 = NULL;
	{
		// base(trackEntry,
		//     includeEndEvent ? (AnimationEventTypes.Complete | AnimationEventTypes.End) : AnimationEventTypes.Complete) {
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		bool L_1 = ___1_includeEndEvent;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = ((int32_t)16);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000b;
	}

IL_0009:
	{
		G_B3_0 = ((int32_t)20);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000b:
	{
		WaitForSpineAnimation__ctor_m6D73BEA00F0BBA00BCECF0F9ADB1D66B382D78CA(G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineAnimationComplete Spine.Unity.WaitForSpineAnimationComplete::NowWaitFor(Spine.TrackEntry,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* WaitForSpineAnimationComplete_NowWaitFor_m7E1DA47A80D529769346482DE6D4D2FD5F541A87 (WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, bool ___1_includeEndEvent, const RuntimeMethod* method) 
{
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* G_B2_0 = NULL;
	WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* G_B2_1 = NULL;
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* G_B1_0 = NULL;
	WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* G_B3_1 = NULL;
	WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* G_B3_2 = NULL;
	{
		// SafeSubscribe(trackEntry,
		//     includeEndEvent ? (AnimationEventTypes.Complete | AnimationEventTypes.End) : AnimationEventTypes.Complete);
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		bool L_1 = ___1_includeEndEvent;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = ((int32_t)16);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000b;
	}

IL_0009:
	{
		G_B3_0 = ((int32_t)20);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000b:
	{
		NullCheck(G_B3_2);
		WaitForSpineAnimation_SafeSubscribe_mB22FC2FD3F65437E3641B1BAAF82C28EA522DF62(G_B3_2, G_B3_1, G_B3_0, NULL);
		// return this;
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.WaitForSpineAnimationEnd::.ctor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimationEnd__ctor_m1A7039E1C8D010C1644188F287B0A559873BD2D1 (WaitForSpineAnimationEnd_t950B01E840B68416BB05D6CDAC1ED1A5B4DFDFE3* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) 
{
	{
		// base(trackEntry, AnimationEventTypes.End) {
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		WaitForSpineAnimation__ctor_m6D73BEA00F0BBA00BCECF0F9ADB1D66B382D78CA(__this, L_0, 4, NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineAnimationEnd Spine.Unity.WaitForSpineAnimationEnd::NowWaitFor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineAnimationEnd_t950B01E840B68416BB05D6CDAC1ED1A5B4DFDFE3* WaitForSpineAnimationEnd_NowWaitFor_m0F144CE75D58BCD798B5DB6B4C07CCFD84E82256 (WaitForSpineAnimationEnd_t950B01E840B68416BB05D6CDAC1ED1A5B4DFDFE3* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) 
{
	{
		// SafeSubscribe(trackEntry, AnimationEventTypes.End);
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		WaitForSpineAnimation_SafeSubscribe_mB22FC2FD3F65437E3641B1BAAF82C28EA522DF62(__this, L_0, 4, NULL);
		// return this;
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.WaitForSpineEvent::Subscribe(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Subscribe_mD05394C6D4F80F638F2D30970AF314553131105A (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* ___1_eventDataReference, bool ___2_unsubscribe, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0CE978812A584DC7C8972751B3A9F52A24BAE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == null) {
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_0 = ___0_state;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("AnimationState argument was null. Coroutine will continue immediately.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1, NULL);
		// m_WasFired = true;
		__this->___m_WasFired_3 = (bool)1;
		// return;
		return;
	}

IL_0015:
	{
		// } else if (eventDataReference == null) {
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_1 = ___1_eventDataReference;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// Debug.LogWarning("eventDataReference argument was null. Coroutine will continue immediately.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralFE0CE978812A584DC7C8972751B3A9F52A24BAE6, NULL);
		// m_WasFired = true;
		__this->___m_WasFired_3 = (bool)1;
		// return;
		return;
	}

IL_002a:
	{
		// m_AnimationState = state;
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_2 = ___0_state;
		__this->___m_AnimationState_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationState_2), (void*)L_2);
		// m_TargetEvent = eventDataReference;
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_3 = ___1_eventDataReference;
		__this->___m_TargetEvent_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetEvent_0), (void*)L_3);
		// state.Event += HandleAnimationStateEvent;
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_4 = ___0_state;
		TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* L_5 = (TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B*)il2cpp_codegen_object_new(TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TrackEntryEventDelegate__ctor_mDFC1742F6F52727BF1B1547F177356B159B7C6A2(L_5, __this, (intptr_t)((void*)WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		AnimationState_add_Event_m3284371A7287AD8995586449D10FA57996A033DF(L_4, L_5, NULL);
		// m_unsubscribeAfterFiring = unsubscribe;
		bool L_6 = ___2_unsubscribe;
		__this->___m_unsubscribeAfterFiring_4 = L_6;
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::SubscribeByName(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_SubscribeByName_m30B8E80B55EAE02C62081A66E76C0FEFF3EB6B79 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, String_t* ___1_eventName, bool ___2_unsubscribe, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3268CC5880671BBDF5D869E216CA687EC74C9F00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == null) {
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_0 = ___0_state;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("AnimationState argument was null. Coroutine will continue immediately.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral89A35131C28824EBA9F7C752300D853A340C8FC1, NULL);
		// m_WasFired = true;
		__this->___m_WasFired_3 = (bool)1;
		// return;
		return;
	}

IL_0015:
	{
		// } else if (string.IsNullOrEmpty(eventName)) {
		String_t* L_1 = ___1_eventName;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogWarning("eventName argument was null. Coroutine will continue immediately.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral3268CC5880671BBDF5D869E216CA687EC74C9F00, NULL);
		// m_WasFired = true;
		__this->___m_WasFired_3 = (bool)1;
		// return;
		return;
	}

IL_002f:
	{
		// m_AnimationState = state;
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_3 = ___0_state;
		__this->___m_AnimationState_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationState_2), (void*)L_3);
		// m_EventName = eventName;
		String_t* L_4 = ___1_eventName;
		__this->___m_EventName_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventName_1), (void*)L_4);
		// state.Event += HandleAnimationStateEventByName;
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_5 = ___0_state;
		TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* L_6 = (TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B*)il2cpp_codegen_object_new(TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TrackEntryEventDelegate__ctor_mDFC1742F6F52727BF1B1547F177356B159B7C6A2(L_6, __this, (intptr_t)((void*)WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		AnimationState_add_Event_m3284371A7287AD8995586449D10FA57996A033DF(L_5, L_6, NULL);
		// m_unsubscribeAfterFiring = unsubscribe;
		bool L_7 = ___2_unsubscribe;
		__this->___m_unsubscribeAfterFiring_4 = L_7;
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_m12E2EB3C680CCF1D2D3BA27EE98276E40FA238B6 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* ___1_eventDataReference, bool ___2_unsubscribeAfterFiring, const RuntimeMethod* method) 
{
	{
		// public WaitForSpineEvent (Spine.AnimationState state, Spine.EventData eventDataReference, bool unsubscribeAfterFiring = true) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Subscribe(state, eventDataReference, unsubscribeAfterFiring);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_0 = ___0_state;
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_1 = ___1_eventDataReference;
		bool L_2 = ___2_unsubscribeAfterFiring;
		WaitForSpineEvent_Subscribe_mD05394C6D4F80F638F2D30970AF314553131105A(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_m6F9ABFD4087FEC040EA5F6C7C5A9E5ECC4AEF93E (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* ___0_skeletonAnimation, EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* ___1_eventDataReference, bool ___2_unsubscribeAfterFiring, const RuntimeMethod* method) 
{
	{
		// public WaitForSpineEvent (SkeletonAnimation skeletonAnimation, Spine.EventData eventDataReference, bool unsubscribeAfterFiring = true) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Subscribe(skeletonAnimation.state, eventDataReference, unsubscribeAfterFiring);
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_0 = ___0_skeletonAnimation;
		NullCheck(L_0);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_1 = L_0->___state_44;
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_2 = ___1_eventDataReference;
		bool L_3 = ___2_unsubscribeAfterFiring;
		WaitForSpineEvent_Subscribe_mD05394C6D4F80F638F2D30970AF314553131105A(__this, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_m98466929B180E3D0375DFD3E88F2267EC744FC1D (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, String_t* ___1_eventName, bool ___2_unsubscribeAfterFiring, const RuntimeMethod* method) 
{
	{
		// public WaitForSpineEvent (Spine.AnimationState state, string eventName, bool unsubscribeAfterFiring = true) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SubscribeByName(state, eventName, unsubscribeAfterFiring);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_0 = ___0_state;
		String_t* L_1 = ___1_eventName;
		bool L_2 = ___2_unsubscribeAfterFiring;
		WaitForSpineEvent_SubscribeByName_m30B8E80B55EAE02C62081A66E76C0FEFF3EB6B79(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::.ctor(Spine.Unity.SkeletonAnimation,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent__ctor_mD541223D95C3BA3101DCBE807E2CB837EDAC106B (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* ___0_skeletonAnimation, String_t* ___1_eventName, bool ___2_unsubscribeAfterFiring, const RuntimeMethod* method) 
{
	{
		// public WaitForSpineEvent (SkeletonAnimation skeletonAnimation, string eventName, bool unsubscribeAfterFiring = true) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SubscribeByName(skeletonAnimation.state, eventName, unsubscribeAfterFiring);
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_0 = ___0_skeletonAnimation;
		NullCheck(L_0);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_1 = L_0->___state_44;
		String_t* L_2 = ___1_eventName;
		bool L_3 = ___2_unsubscribeAfterFiring;
		WaitForSpineEvent_SubscribeByName_m30B8E80B55EAE02C62081A66E76C0FEFF3EB6B79(__this, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEventByName(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_WasFired |= (e.Data.Name == m_EventName);         // Check event name string match.
		bool L_0 = __this->___m_WasFired_3;
		Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* L_1 = ___1_e;
		NullCheck(L_1);
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_2;
		L_2 = Event_get_Data_m899DC3B549F8513883467B512265A1B0E5781462_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = EventData_get_Name_m3CF55169F0E56015B249B382A578B4407F9CD167_inline(L_2, NULL);
		String_t* L_4 = __this->___m_EventName_1;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		__this->___m_WasFired_3 = (bool)((int32_t)((int32_t)L_0|(int32_t)L_5));
		// if (m_WasFired && m_unsubscribeAfterFiring)
		bool L_6 = __this->___m_WasFired_3;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		bool L_7 = __this->___m_unsubscribeAfterFiring_4;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// m_AnimationState.Event -= HandleAnimationStateEventByName;  // Unsubscribe after correct event fires.
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_8 = __this->___m_AnimationState_2;
		TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* L_9 = (TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B*)il2cpp_codegen_object_new(TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TrackEntryEventDelegate__ctor_mDFC1742F6F52727BF1B1547F177356B159B7C6A2(L_9, __this, (intptr_t)((void*)WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		AnimationState_remove_Event_m52FDB1D85B01BC7258BF52E498623B3E2A73C55E(L_8, L_9, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::HandleAnimationStateEvent(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_WasFired |= (e.Data == m_TargetEvent);            // Check event data reference match.
		bool L_0 = __this->___m_WasFired_3;
		Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* L_1 = ___1_e;
		NullCheck(L_1);
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_2;
		L_2 = Event_get_Data_m899DC3B549F8513883467B512265A1B0E5781462_inline(L_1, NULL);
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_3 = __this->___m_TargetEvent_0;
		__this->___m_WasFired_3 = (bool)((int32_t)((int32_t)L_0|((((RuntimeObject*)(EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3*)L_2) == ((RuntimeObject*)(EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3*)L_3))? 1 : 0)));
		// if (m_WasFired && m_unsubscribeAfterFiring)
		bool L_4 = __this->___m_WasFired_3;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		bool L_5 = __this->___m_unsubscribeAfterFiring_4;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// m_AnimationState.Event -= HandleAnimationStateEvent;        // Usubscribe after correct event fires.
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_6 = __this->___m_AnimationState_2;
		TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* L_7 = (TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B*)il2cpp_codegen_object_new(TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TrackEntryEventDelegate__ctor_mDFC1742F6F52727BF1B1547F177356B159B7C6A2(L_7, __this, (intptr_t)((void*)WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		AnimationState_remove_Event_m52FDB1D85B01BC7258BF52E498623B3E2A73C55E(L_6, L_7, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Boolean Spine.Unity.WaitForSpineEvent::get_WillUnsubscribeAfterFiring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineEvent_get_WillUnsubscribeAfterFiring_mF97396642839496A0F6988E272D551E9520583B0 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, const RuntimeMethod* method) 
{
	{
		// public bool WillUnsubscribeAfterFiring { get { return m_unsubscribeAfterFiring; } set { m_unsubscribeAfterFiring = value; } }
		bool L_0 = __this->___m_unsubscribeAfterFiring_4;
		return L_0;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::set_WillUnsubscribeAfterFiring(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_set_WillUnsubscribeAfterFiring_m228203E6693BA288A022A33BF57D5B6BEE884FC0 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool WillUnsubscribeAfterFiring { get { return m_unsubscribeAfterFiring; } set { m_unsubscribeAfterFiring = value; } }
		bool L_0 = ___0_value;
		__this->___m_unsubscribeAfterFiring_4 = L_0;
		// public bool WillUnsubscribeAfterFiring { get { return m_unsubscribeAfterFiring; } set { m_unsubscribeAfterFiring = value; } }
		return;
	}
}
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,Spine.EventData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* WaitForSpineEvent_NowWaitFor_m8C1013519B2E6BFC7DEE0E3D2FA2710ED3676679 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* ___1_eventDataReference, bool ___2_unsubscribeAfterFiring, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IEnumerator)this).Reset();
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, __this);
		// Clear(state);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_0 = ___0_state;
		WaitForSpineEvent_Clear_m1F79CD6FA2B4A8212E1F78BC985A29E94F542551(__this, L_0, NULL);
		// Subscribe(state, eventDataReference, unsubscribeAfterFiring);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_1 = ___0_state;
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_2 = ___1_eventDataReference;
		bool L_3 = ___2_unsubscribeAfterFiring;
		WaitForSpineEvent_Subscribe_mD05394C6D4F80F638F2D30970AF314553131105A(__this, L_1, L_2, L_3, NULL);
		// return this;
		return __this;
	}
}
// Spine.Unity.WaitForSpineEvent Spine.Unity.WaitForSpineEvent::NowWaitFor(Spine.AnimationState,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* WaitForSpineEvent_NowWaitFor_m7A6BD158808C3C29FBB5412DD6CE4138C5BF8B8C (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, String_t* ___1_eventName, bool ___2_unsubscribeAfterFiring, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IEnumerator)this).Reset();
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, __this);
		// Clear(state);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_0 = ___0_state;
		WaitForSpineEvent_Clear_m1F79CD6FA2B4A8212E1F78BC985A29E94F542551(__this, L_0, NULL);
		// SubscribeByName(state, eventName, unsubscribeAfterFiring);
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_1 = ___0_state;
		String_t* L_2 = ___1_eventName;
		bool L_3 = ___2_unsubscribeAfterFiring;
		WaitForSpineEvent_SubscribeByName_m30B8E80B55EAE02C62081A66E76C0FEFF3EB6B79(__this, L_1, L_2, L_3, NULL);
		// return this;
		return __this;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::Clear(Spine.AnimationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_Clear_m1F79CD6FA2B4A8212E1F78BC985A29E94F542551 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// state.Event -= HandleAnimationStateEvent;
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_0 = ___0_state;
		TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* L_1 = (TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B*)il2cpp_codegen_object_new(TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TrackEntryEventDelegate__ctor_mDFC1742F6F52727BF1B1547F177356B159B7C6A2(L_1, __this, (intptr_t)((void*)WaitForSpineEvent_HandleAnimationStateEvent_m4B14B294E05316B30C2D14E01408273CDB44878F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		AnimationState_remove_Event_m52FDB1D85B01BC7258BF52E498623B3E2A73C55E(L_0, L_1, NULL);
		// state.Event -= HandleAnimationStateEventByName;
		AnimationState_t0D97CF3E19AA7FBB3BB8B8D1C0CEC02461B67A41* L_2 = ___0_state;
		TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B* L_3 = (TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B*)il2cpp_codegen_object_new(TrackEntryEventDelegate_t5FDD973D4F21F2FC93007CE2E5F4B33467FDFC2B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TrackEntryEventDelegate__ctor_mDFC1742F6F52727BF1B1547F177356B159B7C6A2(L_3, __this, (intptr_t)((void*)WaitForSpineEvent_HandleAnimationStateEventByName_m18C6F4AB207EF35BC4EADCECFF642A64A6ABB95F_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AnimationState_remove_Event_m52FDB1D85B01BC7258BF52E498623B3E2A73C55E(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineEvent_System_Collections_IEnumerator_MoveNext_mA51DCA409B1A3691E950B944A9BCFDDBD1590C3C (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_WasFired) {
		bool L_0 = __this->___m_WasFired_3;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ((IEnumerator)this).Reset();    // auto-reset for YieldInstruction reuse
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, __this);
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineEvent_System_Collections_IEnumerator_Reset_mFF7933C255033AAC27D2F9BA2D7C13141F251073 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, const RuntimeMethod* method) 
{
	{
		// void IEnumerator.Reset () { m_WasFired = false; }
		__this->___m_WasFired_3 = (bool)0;
		// void IEnumerator.Reset () { m_WasFired = false; }
		return;
	}
}
// System.Object Spine.Unity.WaitForSpineEvent::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForSpineEvent_System_Collections_IEnumerator_get_Current_m62452CCCE60B0B7541BBB2DE0A99586B8BF86ED5 (WaitForSpineEvent_t412E6A34CDBF61E60C67963C1535DAF6738A168D* __this, const RuntimeMethod* method) 
{
	{
		// object IEnumerator.Current { get { return null; } }
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::.ctor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd__ctor_mEBC8E4CAE439A21474497FE82E5682FCAFFCAABC (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) 
{
	{
		// public WaitForSpineTrackEntryEnd (Spine.TrackEntry trackEntry) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SafeSubscribe(trackEntry);
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		WaitForSpineTrackEntryEnd_SafeSubscribe_m18DBDC01094EF14ABCDEE7FC20471BDD18847A90(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::HandleEnd(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_HandleEnd_m8372388BA8818CA17F300DADEE21F3C845B192FD (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) 
{
	{
		// m_WasFired = true;
		__this->___m_WasFired_0 = (bool)1;
		// }
		return;
	}
}
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::SafeSubscribe(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_SafeSubscribe_m18DBDC01094EF14ABCDEE7FC20471BDD18847A90 (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineTrackEntryEnd_HandleEnd_m8372388BA8818CA17F300DADEE21F3C845B192FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackEntry == null) {
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogWarning("TrackEntry was null. Coroutine will continue immediately.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral068D32A44FD7B0AEB9A21A798E396ED146BAE776, NULL);
		// m_WasFired = true;
		__this->___m_WasFired_0 = (bool)1;
		return;
	}

IL_0015:
	{
		// trackEntry.End += HandleEnd;
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_1 = ___0_trackEntry;
		TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924* L_2 = (TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924*)il2cpp_codegen_object_new(TrackEntryDelegate_t4DF8DBC2CF34E89C93F607591258EC237294E924_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TrackEntryDelegate__ctor_m710590CF03EC9B3FB519427B7DE724820779AE7D(L_2, __this, (intptr_t)((void*)WaitForSpineTrackEntryEnd_HandleEnd_m8372388BA8818CA17F300DADEE21F3C845B192FD_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		TrackEntry_add_End_m8DFB9580750A29F665B0CCDE52A24ED781380608(L_1, L_2, NULL);
		// }
		return;
	}
}
// Spine.Unity.WaitForSpineTrackEntryEnd Spine.Unity.WaitForSpineTrackEntryEnd::NowWaitFor(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* WaitForSpineTrackEntryEnd_NowWaitFor_m20A8CE84BFD3C2C9006D0243BC0082B9FE7BD5B1 (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* ___0_trackEntry, const RuntimeMethod* method) 
{
	{
		// SafeSubscribe(trackEntry);
		TrackEntry_tB5520FCFE5AB9FFE33EA8A5514AA3F92F4E9B676* L_0 = ___0_trackEntry;
		WaitForSpineTrackEntryEnd_SafeSubscribe_m18DBDC01094EF14ABCDEE7FC20471BDD18847A90(__this, L_0, NULL);
		// return this;
		return __this;
	}
}
// System.Boolean Spine.Unity.WaitForSpineTrackEntryEnd::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSpineTrackEntryEnd_System_Collections_IEnumerator_MoveNext_m4BE97A4B771FC8E1794F63125DD135A209788113 (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_WasFired) {
		bool L_0 = __this->___m_WasFired_0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ((IEnumerator)this).Reset();    // auto-reset for YieldInstruction reuse
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, __this);
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Spine.Unity.WaitForSpineTrackEntryEnd::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineTrackEntryEnd_System_Collections_IEnumerator_Reset_m0DEDF9879C0C0A4257C54AABF661349822CED95C (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, const RuntimeMethod* method) 
{
	{
		// void IEnumerator.Reset () { m_WasFired = false; }
		__this->___m_WasFired_0 = (bool)0;
		// void IEnumerator.Reset () { m_WasFired = false; }
		return;
	}
}
// System.Object Spine.Unity.WaitForSpineTrackEntryEnd::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForSpineTrackEntryEnd_System_Collections_IEnumerator_get_Current_m8EA46C9D13C1570E25374AAD21F838E559D4A5DD (WaitForSpineTrackEntryEnd_tB3C47FA888EF94EEC93195C384C37ADDC6D84872* __this, const RuntimeMethod* method) 
{
	{
		// object IEnumerator.Current { get { return null; } }
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 Spine.Unity.AnimationTools.TimelineExtensions::Evaluate(Spine.TranslateTimeline,System.Single,Spine.SkeletonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TimelineExtensions_Evaluate_mCC3290F17E6B0195B11184C08D7A6C1B89D45004 (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* ___0_timeline, float ___1_time, SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* ___2_skeletonData, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* V_2 = NULL;
	{
		// if (time < timeline.Frames[0]) return Vector2.zero;
		float L_0 = ___1_time;
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_1 = ___0_timeline;
		NullCheck(L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((float)L_0) < ((float)L_4))))
		{
			goto IL_0011;
		}
	}
	{
		// if (time < timeline.Frames[0]) return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_5;
	}

IL_0011:
	{
		// timeline.GetCurveValue(out x, out y, time);
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_6 = ___0_timeline;
		float L_7 = ___1_time;
		NullCheck(L_6);
		TranslateTimeline_GetCurveValue_mA5A2285AEABE1C0DAB56F1BA4B00E5DF1F637CB3(L_6, (&V_0), (&V_1), L_7, NULL);
		// if (skeletonData == null) {
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_8 = ___2_skeletonData;
		if (L_8)
		{
			goto IL_0027;
		}
	}
	{
		// return new Vector2(x, y);
		float L_9 = V_0;
		float L_10 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0027:
	{
		// BoneData boneData = skeletonData.Bones.Items[timeline.BoneIndex];
		SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* L_12 = ___2_skeletonData;
		NullCheck(L_12);
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_13;
		L_13 = SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline(L_12, NULL);
		NullCheck(L_13);
		BoneDataU5BU5D_tADACEBE8328638952B7718F3A0E834BBFF9E2EFB* L_14 = L_13->___Items_0;
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_15 = ___0_timeline;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline(L_15, NULL);
		NullCheck(L_14);
		int32_t L_17 = L_16;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		// return new Vector2(boneData.X + x, boneData.Y + y);
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_19 = V_2;
		NullCheck(L_19);
		float L_20;
		L_20 = BoneData_get_X_m41AC5529BDF4FEC10AE8B87431A04E0A1B2B3DA0_inline(L_19, NULL);
		float L_21 = V_0;
		BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* L_22 = V_2;
		NullCheck(L_22);
		float L_23;
		L_23 = BoneData_get_Y_mC11A04D53C0EAEFA456866ECFB98247C1297D762_inline(L_22, NULL);
		float L_24 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), ((float)il2cpp_codegen_add(L_20, L_21)), ((float)il2cpp_codegen_add(L_23, L_24)), /*hidden argument*/NULL);
		return L_25;
	}
}
// Spine.TranslateTimeline Spine.Unity.AnimationTools.TimelineExtensions::FindTranslateTimelineForBone(Spine.Animation,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* TimelineExtensions_FindTranslateTimelineForBone_m82C76B616DB8AF3F665FE04465EC8D44F1B3A2A8 (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* ___0_a, int32_t ___1_boneIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* V_1 = NULL;
	TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* V_2 = NULL;
	TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* V_3 = NULL;
	{
		// foreach (var timeline in a.Timelines) {
		Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* L_0 = ___0_a;
		NullCheck(L_0);
		ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* L_1;
		L_1 = Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_tF0F854B75FBDC50B1D5CE62D2C7F6195D4049AB7 L_2;
		L_2 = ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3(L_1, ExposedList_1_GetEnumerator_mAAC0E50314A8728B642DCD37F7E8FE623D4164F3_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D((&V_0), Enumerator_Dispose_m1A391DDB217D33A00F83EF26F3F79B8DF839190D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_000e_1:
			{
				// foreach (var timeline in a.Timelines) {
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_3;
				L_3 = Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_inline((&V_0), Enumerator_get_Current_m6F5B5815FEEF6CABE89E550B1C3501C2810FBCB3_RuntimeMethod_var);
				V_1 = L_3;
				// if (timeline.GetType().IsSubclassOf(typeof(TranslateTimeline)))
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_4 = V_1;
				NullCheck(L_4);
				Type_t* L_5;
				L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_7;
				L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
				NullCheck(L_5);
				bool L_8;
				L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(36 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_5, L_7);
				if (L_8)
				{
					goto IL_0044_1;
				}
			}
			{
				// var translateTimeline = timeline as TranslateTimeline;
				Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* L_9 = V_1;
				V_2 = ((TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852*)IsInstClass((RuntimeObject*)L_9, TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852_il2cpp_TypeInfo_var));
				// if (translateTimeline != null && translateTimeline.BoneIndex == boneIndex)
				TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_10 = V_2;
				if (!L_10)
				{
					goto IL_0044_1;
				}
			}
			{
				TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_11 = V_2;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline(L_11, NULL);
				int32_t L_13 = ___1_boneIndex;
				if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
				{
					goto IL_0044_1;
				}
			}
			{
				// return translateTimeline;
				TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_14 = V_2;
				V_3 = L_14;
				goto IL_005f;
			}

IL_0044_1:
			{
				// foreach (var timeline in a.Timelines) {
				bool L_15;
				L_15 = Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB((&V_0), Enumerator_MoveNext_mBC7AB4D5664AD175631397B9694FC553E0C76FAB_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// return null;
		return (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852*)NULL;
	}

IL_005f:
	{
		// }
		TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* L_16 = V_3;
		return L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_Init_m1AB0C0F1DA32B13762C5AC7481597F821485B97B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AtlasUtilities.ClearCache();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_ClearCache_mEBB54853312D663E0F8CF01053402BA1FB93B26B(NULL);
		// }
		return;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Texture2D,UnityEngine.Material,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_mB65B027ABAADB060FE4C6C98E7EFD70684A55634 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_materialPropertySource, float ___2_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return t.ToAtlasRegion(materialPropertySource.shader, scale, materialPropertySource);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_t;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___1_materialPropertySource;
		NullCheck(L_1);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_1, NULL);
		float L_3 = ___2_scale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___1_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_5;
		L_5 = AtlasUtilities_ToAtlasRegion_mD38BF13DD1B70AEA26B51B9339DFA7F63B56E197(L_0, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Texture2D,UnityEngine.Shader,System.Single,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_mD38BF13DD1B70AEA26B51B9339DFA7F63B56E197 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, float ___2_scale, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___3_materialPropertySource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var material = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___1_shader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		V_0 = L_1;
		// if (materialPropertySource != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___3_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// material.CopyPropertiesFromMaterial(materialPropertySource);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___3_materialPropertySource;
		NullCheck(L_4);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_4, L_5, NULL);
		// material.shaderKeywords = materialPropertySource.shaderKeywords;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___3_materialPropertySource;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = Material_get_shaderKeywords_m11982F09EED6BB0A892342E1A72AEA470C44B105(L_7, NULL);
		NullCheck(L_6);
		Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_6, L_8, NULL);
	}

IL_0023:
	{
		// material.mainTexture = t;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___0_t;
		NullCheck(L_9);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_9, L_10, NULL);
		// var page = material.ToSpineAtlasPage();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_12;
		L_12 = AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25(L_11, NULL);
		V_1 = L_12;
		// float width = t.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___0_t;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		V_2 = ((float)L_14);
		// float height = t.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___0_t;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		V_3 = ((float)L_16);
		// var region = new AtlasRegion();
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_17 = (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*)il2cpp_codegen_object_new(AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		AtlasRegion__ctor_mA555A6539F86AA183781E5C1AF65286593C98370(L_17, NULL);
		// region.name = t.name;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_18 = L_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = ___0_t;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		NullCheck(L_18);
		L_18->___name_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___name_1), (void*)L_20);
		// Vector2 boundsMin = Vector2.zero, boundsMax = new Vector2(width, height) * scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_4 = L_21;
		// Vector2 boundsMin = Vector2.zero, boundsMax = new Vector2(width, height) * scale;
		float L_22 = V_2;
		float L_23 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), L_22, L_23, /*hidden argument*/NULL);
		float L_25 = ___2_scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_24, L_25, NULL);
		V_5 = L_26;
		// region.width = (int)width;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_27 = L_18;
		float L_28 = V_2;
		NullCheck(L_27);
		L_27->___width_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_28);
		// region.originalWidth = (int)width;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_29 = L_27;
		float L_30 = V_2;
		NullCheck(L_29);
		L_29->___originalWidth_12 = il2cpp_codegen_cast_double_to_int<int32_t>(L_30);
		// region.height = (int)height;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_31 = L_29;
		float L_32 = V_3;
		NullCheck(L_31);
		L_31->___height_5 = il2cpp_codegen_cast_double_to_int<int32_t>(L_32);
		// region.originalHeight = (int)height;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_33 = L_31;
		float L_34 = V_3;
		NullCheck(L_33);
		L_33->___originalHeight_13 = il2cpp_codegen_cast_double_to_int<int32_t>(L_34);
		// region.offsetX = width * (0.5f - InverseLerp(boundsMin.x, boundsMax.x, 0));
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_35 = L_33;
		float L_36 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_4;
		float L_38 = L_37.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_5;
		float L_40 = L_39.___x_0;
		float L_41;
		L_41 = AtlasUtilities_InverseLerp_m104DD7BDE4D521C72596E07FCF424F80616A7283(L_38, L_40, (0.0f), NULL);
		NullCheck(L_35);
		L_35->___offsetX_10 = ((float)il2cpp_codegen_multiply(L_36, ((float)il2cpp_codegen_subtract((0.5f), L_41))));
		// region.offsetY = height * (0.5f - InverseLerp(boundsMin.y, boundsMax.y, 0));
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_42 = L_35;
		float L_43 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_4;
		float L_45 = L_44.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_5;
		float L_47 = L_46.___y_1;
		float L_48;
		L_48 = AtlasUtilities_InverseLerp_m104DD7BDE4D521C72596E07FCF424F80616A7283(L_45, L_47, (0.0f), NULL);
		NullCheck(L_42);
		L_42->___offsetY_11 = ((float)il2cpp_codegen_multiply(L_43, ((float)il2cpp_codegen_subtract((0.5f), L_48))));
		// region.u = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_49 = L_42;
		NullCheck(L_49);
		L_49->___u_6 = (0.0f);
		// region.v = 1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_50 = L_49;
		NullCheck(L_50);
		L_50->___v_7 = (1.0f);
		// region.u2 = 1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_51 = L_50;
		NullCheck(L_51);
		L_51->___u2_8 = (1.0f);
		// region.v2 = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_52 = L_51;
		NullCheck(L_52);
		L_52->___v2_9 = (0.0f);
		// region.x = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_53 = L_52;
		NullCheck(L_53);
		L_53->___x_2 = 0;
		// region.y = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_54 = L_53;
		NullCheck(L_54);
		L_54->___y_3 = 0;
		// region.page = page;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_55 = L_54;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_56 = V_1;
		NullCheck(L_55);
		L_55->___page_0 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&L_55->___page_0), (void*)L_56);
		// return region;
		return L_55;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegionPMAClone(UnityEngine.Texture2D,UnityEngine.Material,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegionPMAClone_mFE5EF71A108D88B74F3B2A9513FD14B0C4E0BB0D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_materialPropertySource, int32_t ___2_textureFormat, bool ___3_mipmaps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return t.ToAtlasRegionPMAClone(materialPropertySource.shader, textureFormat, mipmaps, materialPropertySource);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_t;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___1_materialPropertySource;
		NullCheck(L_1);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_1, NULL);
		int32_t L_3 = ___2_textureFormat;
		bool L_4 = ___3_mipmaps;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___1_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_6;
		L_6 = AtlasUtilities_ToAtlasRegionPMAClone_mE92F0C56F148E4DD1CE8A3C10DAC7DC4F709F8D3(L_0, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegionPMAClone(UnityEngine.Texture2D,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegionPMAClone_mE92F0C56F148E4DD1CE8A3C10DAC7DC4F709F8D3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, int32_t ___2_textureFormat, bool ___3_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_materialPropertySource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral456332094C775858DEAAF1DCBE59858947F2F4A2);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* V_2 = NULL;
	{
		// var material = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___1_shader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		V_0 = L_1;
		// if (materialPropertySource != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___4_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// material.CopyPropertiesFromMaterial(materialPropertySource);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___4_materialPropertySource;
		NullCheck(L_4);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_4, L_5, NULL);
		// material.shaderKeywords = materialPropertySource.shaderKeywords;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___4_materialPropertySource;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = Material_get_shaderKeywords_m11982F09EED6BB0A892342E1A72AEA470C44B105(L_7, NULL);
		NullCheck(L_6);
		Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_6, L_8, NULL);
	}

IL_0026:
	{
		// var newTexture = t.GetClone(textureFormat, mipmaps, applyPMA: true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___0_t;
		int32_t L_10 = ___2_textureFormat;
		bool L_11 = ___3_mipmaps;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = AtlasUtilities_GetClone_mFE57D6E2CFFE90D6B1239E798B61DF0564684CA4(L_9, L_10, L_11, (bool)0, (bool)1, NULL);
		V_1 = L_12;
		// newTexture.name = t.name + "-pma-";
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = ___0_t;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteral456332094C775858DEAAF1DCBE59858947F2F4A2, NULL);
		NullCheck(L_13);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_13, L_16, NULL);
		// material.name = t.name + shader.name;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_t;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20 = ___1_shader;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, L_21, NULL);
		NullCheck(L_17);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_17, L_22, NULL);
		// material.mainTexture = newTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_1;
		NullCheck(L_23);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_23, L_24, NULL);
		// var page = material.ToSpineAtlasPage();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_0;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_26;
		L_26 = AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25(L_25, NULL);
		V_2 = L_26;
		// var region = newTexture.ToAtlasRegion(shader);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_28 = ___1_shader;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_29;
		L_29 = AtlasUtilities_ToAtlasRegion_mD38BF13DD1B70AEA26B51B9339DFA7F63B56E197(L_27, L_28, (0.00999999978f), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL, NULL);
		// region.page = page;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_30 = L_29;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_31 = V_2;
		NullCheck(L_30);
		L_30->___page_0 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___page_0), (void*)L_31);
		// return region;
		return L_30;
	}
}
// Spine.AtlasPage Spine.Unity.AttachmentTools.AtlasUtilities::ToSpineAtlasPage(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* V_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_1 = NULL;
	{
		// var newPage = new AtlasPage {
		//     rendererObject = m,
		//     name = m.name
		// };
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_0 = (AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7*)il2cpp_codegen_object_new(AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AtlasPage__ctor_mEBA2B7CBE5A2C39B8DBCDA598CA19739464FBA27(L_0, NULL);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_1 = L_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___0_m;
		NullCheck(L_1);
		L_1->___rendererObject_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___rendererObject_9), (void*)L_2);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_3 = L_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___0_m;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_3);
		L_3->___name_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___name_0), (void*)L_5);
		V_0 = L_3;
		// var t = m.mainTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___0_m;
		NullCheck(L_6);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7;
		L_7 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_6, NULL);
		V_1 = L_7;
		// if (t != null) {
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		// newPage.width = t.width;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_10 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		NullCheck(L_10);
		L_10->___width_1 = L_12;
		// newPage.height = t.height;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_13 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		NullCheck(L_13);
		L_13->___height_2 = L_15;
	}

IL_0041:
	{
		// return newPage;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_16 = V_0;
		return L_16;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Sprite,Spine.AtlasPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_m81FFD41991D370CB12999C06399B36C42855E758 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___1_page, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (page == null) throw new System.ArgumentNullException("page", "page cannot be null. AtlasPage determines which texture region belongs and how it should be rendered. You can use material.ToSpineAtlasPage() to get a shareable AtlasPage from a Material, or use the sprite.ToAtlasRegion(material) overload.");
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_0 = ___1_page;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (page == null) throw new System.ArgumentNullException("page", "page cannot be null. AtlasPage determines which texture region belongs and how it should be rendered. You can use material.ToSpineAtlasPage() to get a shareable AtlasPage from a Material, or use the sprite.ToAtlasRegion(material) overload.");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95834A87D74B874FA2D0E60D439038ABD10BCBB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17507BA2A7941191B3EFC1C1112526FB466FD8CA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AtlasUtilities_ToAtlasRegion_m81FFD41991D370CB12999C06399B36C42855E758_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var region = s.ToAtlasRegion();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_3;
		L_3 = AtlasUtilities_ToAtlasRegion_m87666541ED7CC3AAEF3DDE3E1FE6F9C6366DDAB5(L_2, (bool)0, NULL);
		// region.page = page;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_4 = L_3;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_5 = ___1_page;
		NullCheck(L_4);
		L_4->___page_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___page_0), (void*)L_5);
		// return region;
		return L_4;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Sprite,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_m7F5F8420A6B9931B3084BF7F6D8FC6C602031DB2 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var region = s.ToAtlasRegion();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_1;
		L_1 = AtlasUtilities_ToAtlasRegion_m87666541ED7CC3AAEF3DDE3E1FE6F9C6366DDAB5(L_0, (bool)0, NULL);
		// region.page = material.ToSpineAtlasPage();
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_2 = L_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___1_material;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_4;
		L_4 = AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25(L_3, NULL);
		NullCheck(L_2);
		L_2->___page_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___page_0), (void*)L_4);
		// return region;
		return L_2;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegionPMAClone(UnityEngine.Sprite,UnityEngine.Material,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegionPMAClone_mE3717F5332D8441EE93A797BF707051F9CFBA475 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_materialPropertySource, int32_t ___2_textureFormat, bool ___3_mipmaps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s.ToAtlasRegionPMAClone(materialPropertySource.shader, textureFormat, mipmaps, materialPropertySource);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_s;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___1_materialPropertySource;
		NullCheck(L_1);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_1, NULL);
		int32_t L_3 = ___2_textureFormat;
		bool L_4 = ___3_mipmaps;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___1_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_6;
		L_6 = AtlasUtilities_ToAtlasRegionPMAClone_m5F7AC7F498528B9613878E1C13E379F9D0FB6FFE(L_0, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegionPMAClone(UnityEngine.Sprite,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegionPMAClone_m5F7AC7F498528B9613878E1C13E379F9D0FB6FFE (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, int32_t ___2_textureFormat, bool ___3_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_materialPropertySource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral456332094C775858DEAAF1DCBE59858947F2F4A2);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* V_2 = NULL;
	{
		// var material = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___1_shader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_1, L_0, NULL);
		V_0 = L_1;
		// if (materialPropertySource != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___4_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// material.CopyPropertiesFromMaterial(materialPropertySource);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___4_materialPropertySource;
		NullCheck(L_4);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_4, L_5, NULL);
		// material.shaderKeywords = materialPropertySource.shaderKeywords;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___4_materialPropertySource;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = Material_get_shaderKeywords_m11982F09EED6BB0A892342E1A72AEA470C44B105(L_7, NULL);
		NullCheck(L_6);
		Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_6, L_8, NULL);
	}

IL_0026:
	{
		// var tex = s.ToTexture(textureFormat, mipmaps, applyPMA: true);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = ___0_s;
		int32_t L_10 = ___2_textureFormat;
		bool L_11 = ___3_mipmaps;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = AtlasUtilities_ToTexture_m1CFA3A38F6BEEACC4E8CF70CF1AEA8423B5358DC(L_9, L_10, L_11, (bool)0, (bool)1, NULL);
		V_1 = L_12;
		// tex.name = s.name + "-pma-";
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = ___0_s;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteral456332094C775858DEAAF1DCBE59858947F2F4A2, NULL);
		NullCheck(L_13);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_13, L_16, NULL);
		// material.name = tex.name + shader.name;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20 = ___1_shader;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, L_21, NULL);
		NullCheck(L_17);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_17, L_22, NULL);
		// material.mainTexture = tex;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_1;
		NullCheck(L_23);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_23, L_24, NULL);
		// var page = material.ToSpineAtlasPage();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_0;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_26;
		L_26 = AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25(L_25, NULL);
		V_2 = L_26;
		// var region = s.ToAtlasRegion(true);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27 = ___0_s;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_28;
		L_28 = AtlasUtilities_ToAtlasRegion_m87666541ED7CC3AAEF3DDE3E1FE6F9C6366DDAB5(L_27, (bool)1, NULL);
		// region.page = page;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_29 = L_28;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_30 = V_2;
		NullCheck(L_29);
		L_29->___page_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___page_0), (void*)L_30);
		// return region;
		return L_29;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::ToAtlasRegion(UnityEngine.Sprite,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_ToAtlasRegion_m87666541ED7CC3AAEF3DDE3E1FE6F9C6366DDAB5 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, bool ___1_isolatedTexture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* V_0 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_5 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B2_0 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B1_0 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B4_1 = NULL;
	{
		// var region = new AtlasRegion();
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*)il2cpp_codegen_object_new(AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AtlasRegion__ctor_mA555A6539F86AA183781E5C1AF65286593C98370(L_0, NULL);
		V_0 = L_0;
		// region.name = s.name;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_1 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_s;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		NullCheck(L_1);
		L_1->___name_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_1), (void*)L_3);
		// region.index = -1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_4 = V_0;
		NullCheck(L_4);
		L_4->___index_16 = (-1);
		// region.degrees = s.packed && s.packingRotation != SpritePackingRotation.None ? 90 : 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_5 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = ___0_s;
		NullCheck(L_6);
		bool L_7;
		L_7 = Sprite_get_packed_m6B6B98A3891B350711499532C07F8D393AAB868E(L_6, NULL);
		G_B1_0 = L_5;
		if (!L_7)
		{
			G_B2_0 = L_5;
			goto IL_002a;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = ___0_s;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Sprite_get_packingRotation_m3FD3489CC43013B2D5228AEB1ED8099E6C5B1D10(L_8, NULL);
		G_B2_0 = G_B1_0;
		if (L_9)
		{
			G_B3_0 = G_B1_0;
			goto IL_002d;
		}
	}

IL_002a:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_002d:
	{
		G_B4_0 = ((int32_t)90);
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		NullCheck(G_B4_1);
		G_B4_1->___degrees_14 = G_B4_0;
		// Bounds bounds = s.bounds;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = ___0_s;
		NullCheck(L_10);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_11;
		L_11 = Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452(L_10, NULL);
		V_1 = L_11;
		// Vector2 boundsMin = bounds.min, boundsMax = bounds.max;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
		V_2 = L_13;
		// Vector2 boundsMin = bounds.min, boundsMax = bounds.max;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		V_3 = L_15;
		// Rect spineRect = s.rect.SpineUnityFlipRect(s.texture.height);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = ___0_s;
		NullCheck(L_16);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
		L_17 = Sprite_get_rect_m2D85032EBEDC505E346E49291B8816BDB18DF625(L_16, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = ___0_s;
		NullCheck(L_18);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19;
		L_19 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		L_21 = AtlasUtilities_SpineUnityFlipRect_mC4AC6AE83BFA9896FDEAF444A548745E304AA5AA(L_17, L_20, NULL);
		V_4 = L_21;
		// region.width = (int)spineRect.width;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_22 = V_0;
		float L_23;
		L_23 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		NullCheck(L_22);
		L_22->___width_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_23);
		// region.originalWidth = (int)spineRect.width;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_24 = V_0;
		float L_25;
		L_25 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		NullCheck(L_24);
		L_24->___originalWidth_12 = il2cpp_codegen_cast_double_to_int<int32_t>(L_25);
		// region.height = (int)spineRect.height;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_26 = V_0;
		float L_27;
		L_27 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		NullCheck(L_26);
		L_26->___height_5 = il2cpp_codegen_cast_double_to_int<int32_t>(L_27);
		// region.originalHeight = (int)spineRect.height;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_28 = V_0;
		float L_29;
		L_29 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		NullCheck(L_28);
		L_28->___originalHeight_13 = il2cpp_codegen_cast_double_to_int<int32_t>(L_29);
		// region.offsetX = spineRect.width * (0.5f - InverseLerp(boundsMin.x, boundsMax.x, 0));
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_30 = V_0;
		float L_31;
		L_31 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_2;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_3;
		float L_35 = L_34.___x_0;
		float L_36;
		L_36 = AtlasUtilities_InverseLerp_m104DD7BDE4D521C72596E07FCF424F80616A7283(L_33, L_35, (0.0f), NULL);
		NullCheck(L_30);
		L_30->___offsetX_10 = ((float)il2cpp_codegen_multiply(L_31, ((float)il2cpp_codegen_subtract((0.5f), L_36))));
		// region.offsetY = spineRect.height * (0.5f - InverseLerp(boundsMin.y, boundsMax.y, 0));
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_37 = V_0;
		float L_38;
		L_38 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_2;
		float L_40 = L_39.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_3;
		float L_42 = L_41.___y_1;
		float L_43;
		L_43 = AtlasUtilities_InverseLerp_m104DD7BDE4D521C72596E07FCF424F80616A7283(L_40, L_42, (0.0f), NULL);
		NullCheck(L_37);
		L_37->___offsetY_11 = ((float)il2cpp_codegen_multiply(L_38, ((float)il2cpp_codegen_subtract((0.5f), L_43))));
		// if (isolatedTexture) {
		bool L_44 = ___1_isolatedTexture;
		if (!L_44)
		{
			goto IL_0138;
		}
	}
	{
		// region.u = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_45 = V_0;
		NullCheck(L_45);
		L_45->___u_6 = (0.0f);
		// region.v = 1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_46 = V_0;
		NullCheck(L_46);
		L_46->___v_7 = (1.0f);
		// region.u2 = 1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_47 = V_0;
		NullCheck(L_47);
		L_47->___u2_8 = (1.0f);
		// region.v2 = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_48 = V_0;
		NullCheck(L_48);
		L_48->___v2_9 = (0.0f);
		// region.x = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_49 = V_0;
		NullCheck(L_49);
		L_49->___x_2 = 0;
		// region.y = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_50 = V_0;
		NullCheck(L_50);
		L_50->___y_3 = 0;
		goto IL_01ab;
	}

IL_0138:
	{
		// Texture2D tex = s.texture;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_51 = ___0_s;
		NullCheck(L_51);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52;
		L_52 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_51, NULL);
		V_5 = L_52;
		// Rect uvRect = TextureRectToUVRect(s.textureRect, tex.width, tex.height);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_53 = ___0_s;
		NullCheck(L_53);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_54;
		L_54 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_53, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_55 = V_5;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_57 = V_5;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_57);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_59;
		L_59 = AtlasUtilities_TextureRectToUVRect_mB658924451774DA548E22101424F01046B68E849(L_54, L_56, L_58, NULL);
		V_6 = L_59;
		// region.u = uvRect.xMin;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_60 = V_0;
		float L_61;
		L_61 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_6), NULL);
		NullCheck(L_60);
		L_60->___u_6 = L_61;
		// region.v = uvRect.yMax;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_62 = V_0;
		float L_63;
		L_63 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_6), NULL);
		NullCheck(L_62);
		L_62->___v_7 = L_63;
		// region.u2 = uvRect.xMax;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_64 = V_0;
		float L_65;
		L_65 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_6), NULL);
		NullCheck(L_64);
		L_64->___u2_8 = L_65;
		// region.v2 = uvRect.yMin;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_66 = V_0;
		float L_67;
		L_67 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_6), NULL);
		NullCheck(L_66);
		L_66->___v2_9 = L_67;
		// region.x = (int)spineRect.x;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_68 = V_0;
		float L_69;
		L_69 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_4), NULL);
		NullCheck(L_68);
		L_68->___x_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_69);
		// region.y = (int)spineRect.y;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_70 = V_0;
		float L_71;
		L_71 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_4), NULL);
		NullCheck(L_70);
		L_70->___y_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_71);
	}

IL_01ab:
	{
		// return region;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_72 = V_0;
		return L_72;
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::GetRepackedAttachments(System.Collections.Generic.List`1<Spine.Attachment>,System.Collections.Generic.List`1<Spine.Attachment>,UnityEngine.Material,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.String,System.Boolean,System.Boolean,System.Int32[],UnityEngine.Texture2D[],UnityEngine.TextureFormat[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_GetRepackedAttachments_mC50A4BBE5BDF4F75363F74FBFEB3263057FCFB0B (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___0_sourceAttachments, List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___1_outputAttachments, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_materialPropertySource, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_outputMaterial, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___4_outputTexture, int32_t ___5_maxAtlasSize, int32_t ___6_padding, int32_t ___7_textureFormat, bool ___8_mipmaps, String_t* ___9_newAssetName, bool ___10_clearCache, bool ___11_useOriginalNonrenderables, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___12_additionalTexturePropertyIDsToCopy, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___13_additionalOutputTextures, TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* ___14_additionalTextureFormats, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___15_additionalTextureIsLinear, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral958DE918771A6C70C78B59D2B3D51FC3B4AAE0B0);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* G_B3_0 = NULL;
	{
		// Shader shader = materialPropertySource == null ? Shader.Find("Spine/Skeleton") : materialPropertySource.shader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___2_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___2_materialPropertySource;
		NullCheck(L_2);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_2, NULL);
		G_B3_0 = L_3;
		goto IL_001b;
	}

IL_0011:
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral958DE918771A6C70C78B59D2B3D51FC3B4AAE0B0, NULL);
		G_B3_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// GetRepackedAttachments(sourceAttachments, outputAttachments, shader, out outputMaterial, out outputTexture,
		//     maxAtlasSize, padding, textureFormat, mipmaps, newAssetName,
		//     materialPropertySource, clearCache, useOriginalNonrenderables,
		//     additionalTexturePropertyIDsToCopy, additionalOutputTextures,
		//     additionalTextureFormats, additionalTextureIsLinear);
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_5 = ___0_sourceAttachments;
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_6 = ___1_outputAttachments;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_8 = ___3_outputMaterial;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_9 = ___4_outputTexture;
		int32_t L_10 = ___5_maxAtlasSize;
		int32_t L_11 = ___6_padding;
		int32_t L_12 = ___7_textureFormat;
		bool L_13 = ___8_mipmaps;
		String_t* L_14 = ___9_newAssetName;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___2_materialPropertySource;
		bool L_16 = ___10_clearCache;
		bool L_17 = ___11_useOriginalNonrenderables;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___12_additionalTexturePropertyIDsToCopy;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_19 = ___13_additionalOutputTextures;
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_20 = ___14_additionalTextureFormats;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = ___15_additionalTextureIsLinear;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_GetRepackedAttachments_m74B57AABD97659245BBD695C192DB5788DC33482(L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::GetRepackedAttachments(System.Collections.Generic.List`1<Spine.Attachment>,System.Collections.Generic.List`1<Spine.Attachment>,UnityEngine.Shader,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.String,UnityEngine.Material,System.Boolean,System.Boolean,System.Int32[],UnityEngine.Texture2D[],UnityEngine.TextureFormat[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_GetRepackedAttachments_m74B57AABD97659245BBD695C192DB5788DC33482 (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___0_sourceAttachments, List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* ___1_outputAttachments, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___2_shader, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_outputMaterial, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___4_outputTexture, int32_t ___5_maxAtlasSize, int32_t ___6_padding, int32_t ___7_textureFormat, bool ___8_mipmaps, String_t* ___9_newAssetName, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___10_materialPropertySource, bool ___11_clearCache, bool ___12_useOriginalNonrenderables, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___13_additionalTexturePropertyIDsToCopy, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___14_additionalOutputTextures, TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* ___15_additionalTextureFormats, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___16_additionalTextureIsLinear, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisList_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_m62FAECE2EDADCC144856687368D8E71BE16328B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m24AD6798A13B262A3CEA131C99453B382939A574_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mD4A1F074F726A7FA1305CC1347ABC1574A98BCD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m979AD5AFF90FB491C9A74964ED06D6FFA4ED5A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m9798F867573319C482DAC5C898969BBE82F03970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFE440E8FEB92EBC041C49048CB57707ADF37AC32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6E5EEA896768B2FBBC7B60D4177F59F139D6FAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m209E5F09A1686595EFD5A277913C1C7F5C8B6B03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m55DE11F59FF173D0761F346406B180BA50C90D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE5CA5310F5312AA5CEAE5E6ED687D1F24300AC3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m41F9D0682DC2DEC45DFE466C6AFE6D89379BC9A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCB22AE8FAA1AE329E0501CFF07B106F08CF2DFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m74524EA7D41E994655E1E3EC461772673DBA5E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* V_3 = NULL;
	AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* V_9 = NULL;
	MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* V_10 = NULL;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* V_11 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_15 = NULL;
	int32_t V_16 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_17 = NULL;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* V_18 = NULL;
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* V_19 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_20 = NULL;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* V_23 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* V_24 = NULL;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* V_27 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* G_B15_0 = NULL;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* G_B30_0 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B36_0 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B35_0 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B37_0 = NULL;
	int32_t G_B38_0 = 0;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B38_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B40_0 = NULL;
	int32_t G_B46_0 = 0;
	List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* G_B46_1 = NULL;
	int32_t G_B45_0 = 0;
	List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* G_B45_1 = NULL;
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* G_B47_0 = NULL;
	int32_t G_B47_1 = 0;
	List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* G_B47_2 = NULL;
	int32_t G_B56_0 = 0;
	int32_t G_B56_1 = 0;
	int32_t G_B54_0 = 0;
	int32_t G_B54_1 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B55_1 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B57_1 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B58_1 = 0;
	int32_t G_B58_2 = 0;
	bool G_B60_0 = false;
	int32_t G_B60_1 = 0;
	int32_t G_B60_2 = 0;
	int32_t G_B60_3 = 0;
	bool G_B59_0 = false;
	int32_t G_B59_1 = 0;
	int32_t G_B59_2 = 0;
	int32_t G_B59_3 = 0;
	int32_t G_B61_0 = 0;
	bool G_B61_1 = false;
	int32_t G_B61_2 = 0;
	int32_t G_B61_3 = 0;
	int32_t G_B61_4 = 0;
	{
		// if (sourceAttachments == null) throw new System.ArgumentNullException("sourceAttachments");
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_0 = ___0_sourceAttachments;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (sourceAttachments == null) throw new System.ArgumentNullException("sourceAttachments");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B628C84D2E8012E8A9E62D59FACCEC32C50079F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AtlasUtilities_GetRepackedAttachments_m74B57AABD97659245BBD695C192DB5788DC33482_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (outputAttachments == null) throw new System.ArgumentNullException("outputAttachments");
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_2 = ___1_outputAttachments;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (outputAttachments == null) throw new System.ArgumentNullException("outputAttachments");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCD6E305656420A9ACB8E93771C902592D240E70F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AtlasUtilities_GetRepackedAttachments_m74B57AABD97659245BBD695C192DB5788DC33482_RuntimeMethod_var)));
	}

IL_001c:
	{
		// outputTexture = null;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_4 = ___4_outputTexture;
		*((RuntimeObject**)L_4) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)NULL);
		// if (additionalTexturePropertyIDsToCopy != null && additionalTextureIsLinear == null) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___13_additionalTexturePropertyIDsToCopy;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___16_additionalTextureIsLinear;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// additionalTextureIsLinear = new bool[additionalTexturePropertyIDsToCopy.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___13_additionalTexturePropertyIDsToCopy;
		NullCheck(L_7);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
		___16_additionalTextureIsLinear = L_8;
		// for (int i = 0; i < additionalTextureIsLinear.Length; ++i) {
		V_5 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		// additionalTextureIsLinear[i] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = ___16_additionalTextureIsLinear;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (bool)1);
		// for (int i = 0; i < additionalTextureIsLinear.Length; ++i) {
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < additionalTextureIsLinear.Length; ++i) {
		int32_t L_12 = V_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = ___16_additionalTextureIsLinear;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0038;
		}
	}

IL_004c:
	{
		// existingRegions.Clear();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* L_14 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___existingRegions_5;
		NullCheck(L_14);
		Dictionary_2_Clear_mD4A1F074F726A7FA1305CC1347ABC1574A98BCD8(L_14, Dictionary_2_Clear_mD4A1F074F726A7FA1305CC1347ABC1574A98BCD8_RuntimeMethod_var);
		// regionIndices.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_6;
		NullCheck(L_15);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_15, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// int numTextureParamsToRepack = 1 + (additionalTexturePropertyIDsToCopy == null ? 0 : additionalTexturePropertyIDsToCopy.Length);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___13_additionalTexturePropertyIDsToCopy;
		G_B10_0 = 1;
		if (!L_16)
		{
			G_B11_0 = 1;
			goto IL_006b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___13_additionalTexturePropertyIDsToCopy;
		NullCheck(L_17);
		G_B12_0 = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		G_B12_1 = G_B10_0;
		goto IL_006c;
	}

IL_006b:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_006c:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B12_1, G_B12_0));
		// additionalOutputTextures = (additionalTexturePropertyIDsToCopy == null ? null : new Texture2D[additionalTexturePropertyIDsToCopy.Length]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___13_additionalTexturePropertyIDsToCopy;
		if (!L_18)
		{
			goto IL_007d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___13_additionalTexturePropertyIDsToCopy;
		NullCheck(L_19);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_20 = (Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)SZArrayNew(Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)));
		G_B15_0 = L_20;
		goto IL_007e;
	}

IL_007d:
	{
		G_B15_0 = ((Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*)(NULL));
	}

IL_007e:
	{
		___14_additionalOutputTextures = G_B15_0;
		// if (texturesToPackAtParam.Length < numTextureParamsToRepack)
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_21 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9;
		NullCheck(L_21);
		int32_t L_22 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))) >= ((int32_t)L_22)))
		{
			goto IL_0095;
		}
	}
	{
		// Array.Resize(ref texturesToPackAtParam, numTextureParamsToRepack);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		int32_t L_23 = V_0;
		Array_Resize_TisList_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_m62FAECE2EDADCC144856687368D8E71BE16328B9((&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9), L_23, Array_Resize_TisList_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_m62FAECE2EDADCC144856687368D8E71BE16328B9_RuntimeMethod_var);
	}

IL_0095:
	{
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		V_6 = 0;
		goto IL_00c6;
	}

IL_009a:
	{
		// if (texturesToPackAtParam[i] != null)
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_24 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9;
		int32_t L_25 = V_6;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (!L_27)
		{
			goto IL_00b3;
		}
	}
	{
		// texturesToPackAtParam[i].Clear();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_28 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_inline(L_31, List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		goto IL_00c0;
	}

IL_00b3:
	{
		// texturesToPackAtParam[i] = new List<Texture2D>();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_32 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9;
		int32_t L_33 = V_6;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_34 = (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*)il2cpp_codegen_object_new(List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28(L_34, List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*)L_34);
	}

IL_00c0:
	{
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c6:
	{
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		int32_t L_36 = V_6;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_009a;
		}
	}
	{
		// originalRegions.Clear();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_38 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_7;
		NullCheck(L_38);
		List_1_Clear_m6E5EEA896768B2FBBC7B60D4177F59F139D6FAE1_inline(L_38, List_1_Clear_m6E5EEA896768B2FBBC7B60D4177F59F139D6FAE1_RuntimeMethod_var);
		// if (!object.ReferenceEquals(sourceAttachments, outputAttachments)) {
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_39 = ___0_sourceAttachments;
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_40 = ___1_outputAttachments;
		if ((((RuntimeObject*)(List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*)L_39) == ((RuntimeObject*)(List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*)L_40)))
		{
			goto IL_00e6;
		}
	}
	{
		// outputAttachments.Clear();
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_41 = ___1_outputAttachments;
		NullCheck(L_41);
		List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_inline(L_41, List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_RuntimeMethod_var);
		// outputAttachments.AddRange(sourceAttachments);
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_42 = ___1_outputAttachments;
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_43 = ___0_sourceAttachments;
		NullCheck(L_42);
		List_1_AddRange_m9798F867573319C482DAC5C898969BBE82F03970(L_42, L_43, List_1_AddRange_m9798F867573319C482DAC5C898969BBE82F03970_RuntimeMethod_var);
	}

IL_00e6:
	{
		// int newRegionIndex = 0;
		V_1 = 0;
		// for (int attachmentIndex = 0, n = sourceAttachments.Count; attachmentIndex < n; attachmentIndex++) {
		V_7 = 0;
		// for (int attachmentIndex = 0, n = sourceAttachments.Count; attachmentIndex < n; attachmentIndex++) {
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_44 = ___0_sourceAttachments;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = List_1_get_Count_m55DE11F59FF173D0761F346406B180BA50C90D2C_inline(L_44, List_1_get_Count_m55DE11F59FF173D0761F346406B180BA50C90D2C_RuntimeMethod_var);
		V_8 = L_45;
		goto IL_0223;
	}

IL_00f8:
	{
		// var originalAttachment = sourceAttachments[attachmentIndex];
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_46 = ___0_sourceAttachments;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_48;
		L_48 = List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC(L_46, L_47, List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC_RuntimeMethod_var);
		V_9 = L_48;
		// if (originalAttachment is IHasRendererObject) {
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_49 = V_9;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_49, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var)))
		{
			goto IL_01fb;
		}
	}
	{
		// var originalMeshAttachment = originalAttachment as MeshAttachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_50 = V_9;
		V_10 = ((MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E*)IsInstClass((RuntimeObject*)L_50, MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var));
		// Attachment newAttachment = (originalMeshAttachment != null) ? originalMeshAttachment.NewLinkedMesh() : originalAttachment.Copy();
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_51 = V_10;
		if (L_51)
		{
			goto IL_0124;
		}
	}
	{
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_52 = V_9;
		NullCheck(L_52);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_53;
		L_53 = VirtualFuncInvoker0< Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* >::Invoke(4 /* Spine.Attachment Spine.Attachment::Copy() */, L_52);
		G_B30_0 = L_53;
		goto IL_012b;
	}

IL_0124:
	{
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_54 = V_10;
		NullCheck(L_54);
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_55;
		L_55 = MeshAttachment_NewLinkedMesh_mB9F9C1166D8E47820A1576EBE1FE60BCA9979477(L_54, NULL);
		G_B30_0 = ((Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75*)(L_55));
	}

IL_012b:
	{
		V_11 = G_B30_0;
		// var region = ((IHasRendererObject)newAttachment).RendererObject as AtlasRegion;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_56 = V_11;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_56, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var)));
		RuntimeObject* L_57;
		L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Spine.IHasRendererObject::get_RendererObject() */, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_56, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var)));
		V_12 = ((AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*)IsInstClass((RuntimeObject*)L_57, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var));
		// if (existingRegions.TryGetValue(region, out existingIndex)) {
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* L_58 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___existingRegions_5;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_59 = V_12;
		NullCheck(L_58);
		bool L_60;
		L_60 = Dictionary_2_TryGetValue_m979AD5AFF90FB491C9A74964ED06D6FFA4ED5A2A(L_58, L_59, (&V_13), Dictionary_2_TryGetValue_m979AD5AFF90FB491C9A74964ED06D6FFA4ED5A2A_RuntimeMethod_var);
		if (!L_60)
		{
			goto IL_0161;
		}
	}
	{
		// regionIndices.Add(existingIndex);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_61 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_6;
		int32_t L_62 = V_13;
		NullCheck(L_61);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_61, L_62, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_01ef;
	}

IL_0161:
	{
		// originalRegions.Add(region);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_63 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_7;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_64 = V_12;
		NullCheck(L_63);
		List_1_Add_mFE440E8FEB92EBC041C49048CB57707ADF37AC32_inline(L_63, L_64, List_1_Add_mFE440E8FEB92EBC041C49048CB57707ADF37AC32_RuntimeMethod_var);
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		V_14 = 0;
		goto IL_01ce;
	}

IL_0172:
	{
		// Texture2D regionTexture = (i == 0 ?
		//     region.ToTexture(textureFormat, mipmaps) :
		//     region.ToTexture((additionalTextureFormats != null && i - 1 < additionalTextureFormats.Length) ?
		//         additionalTextureFormats[i - 1] : textureFormat,
		//         mipmaps, additionalTexturePropertyIDsToCopy[i - 1], additionalTextureIsLinear[i - 1]));
		int32_t L_65 = V_14;
		if (!L_65)
		{
			goto IL_01a9;
		}
	}
	{
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_66 = V_12;
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_67 = ___15_additionalTextureFormats;
		G_B35_0 = L_66;
		if (!L_67)
		{
			G_B36_0 = L_66;
			goto IL_0186;
		}
	}
	{
		int32_t L_68 = V_14;
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_69 = ___15_additionalTextureFormats;
		NullCheck(L_69);
		G_B36_0 = G_B35_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_68, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			G_B37_0 = G_B35_0;
			goto IL_018a;
		}
	}

IL_0186:
	{
		int32_t L_70 = ___7_textureFormat;
		G_B38_0 = ((int32_t)(L_70));
		G_B38_1 = G_B36_0;
		goto IL_0191;
	}

IL_018a:
	{
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_71 = ___15_additionalTextureFormats;
		int32_t L_72 = V_14;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		int32_t L_74 = (int32_t)(L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B38_0 = L_74;
		G_B38_1 = G_B37_0;
	}

IL_0191:
	{
		bool L_75 = ___8_mipmaps;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ___13_additionalTexturePropertyIDsToCopy;
		int32_t L_77 = V_14;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		int32_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_80 = ___16_additionalTextureIsLinear;
		int32_t L_81 = V_14;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_subtract(L_81, 1));
		uint8_t L_83 = (uint8_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_84;
		L_84 = AtlasUtilities_ToTexture_mA8C6798331D65E2CA8C5FC27CC3DE1E674F068DE(G_B38_1, G_B38_0, L_75, L_79, (bool)L_83, (bool)0, NULL);
		G_B40_0 = L_84;
		goto IL_01b7;
	}

IL_01a9:
	{
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_85 = V_12;
		int32_t L_86 = ___7_textureFormat;
		bool L_87 = ___8_mipmaps;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_88;
		L_88 = AtlasUtilities_ToTexture_mA8C6798331D65E2CA8C5FC27CC3DE1E674F068DE(L_85, L_86, L_87, 0, (bool)0, (bool)0, NULL);
		G_B40_0 = L_88;
	}

IL_01b7:
	{
		V_15 = G_B40_0;
		// texturesToPackAtParam[i].Add(regionTexture);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_89 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9;
		int32_t L_90 = V_14;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_93 = V_15;
		NullCheck(L_92);
		List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_inline(L_92, L_93, List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		int32_t L_94 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01ce:
	{
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		int32_t L_95 = V_14;
		int32_t L_96 = V_0;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_0172;
		}
	}
	{
		// existingRegions.Add(region, newRegionIndex);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* L_97 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___existingRegions_5;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_98 = V_12;
		int32_t L_99 = V_1;
		NullCheck(L_97);
		Dictionary_2_Add_m24AD6798A13B262A3CEA131C99453B382939A574(L_97, L_98, L_99, Dictionary_2_Add_m24AD6798A13B262A3CEA131C99453B382939A574_RuntimeMethod_var);
		// regionIndices.Add(newRegionIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_100 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_6;
		int32_t L_101 = V_1;
		NullCheck(L_100);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_100, L_101, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// newRegionIndex++;
		int32_t L_102 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_01ef:
	{
		// outputAttachments[attachmentIndex] = newAttachment;
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_103 = ___1_outputAttachments;
		int32_t L_104 = V_7;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_105 = V_11;
		NullCheck(L_103);
		List_1_set_Item_m74524EA7D41E994655E1E3EC461772673DBA5E00(L_103, L_104, L_105, List_1_set_Item_m74524EA7D41E994655E1E3EC461772673DBA5E00_RuntimeMethod_var);
		goto IL_021d;
	}

IL_01fb:
	{
		// outputAttachments[attachmentIndex] = useOriginalNonrenderables ? originalAttachment : originalAttachment.Copy();
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_106 = ___1_outputAttachments;
		int32_t L_107 = V_7;
		bool L_108 = ___12_useOriginalNonrenderables;
		G_B45_0 = L_107;
		G_B45_1 = L_106;
		if (L_108)
		{
			G_B46_0 = L_107;
			G_B46_1 = L_106;
			goto IL_020b;
		}
	}
	{
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_109 = V_9;
		NullCheck(L_109);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_110;
		L_110 = VirtualFuncInvoker0< Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* >::Invoke(4 /* Spine.Attachment Spine.Attachment::Copy() */, L_109);
		G_B47_0 = L_110;
		G_B47_1 = G_B45_0;
		G_B47_2 = G_B45_1;
		goto IL_020d;
	}

IL_020b:
	{
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_111 = V_9;
		G_B47_0 = L_111;
		G_B47_1 = G_B46_0;
		G_B47_2 = G_B46_1;
	}

IL_020d:
	{
		NullCheck(G_B47_2);
		List_1_set_Item_m74524EA7D41E994655E1E3EC461772673DBA5E00(G_B47_2, G_B47_1, G_B47_0, List_1_set_Item_m74524EA7D41E994655E1E3EC461772673DBA5E00_RuntimeMethod_var);
		// regionIndices.Add(NonrenderingRegion); // Output attachments pairs with regionIndices list 1:1. Pad with a sentinel if the attachment doesn't have a region.
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_112 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_6;
		NullCheck(L_112);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_112, (-1), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_021d:
	{
		// for (int attachmentIndex = 0, n = sourceAttachments.Count; attachmentIndex < n; attachmentIndex++) {
		int32_t L_113 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_113, 1));
	}

IL_0223:
	{
		// for (int attachmentIndex = 0, n = sourceAttachments.Count; attachmentIndex < n; attachmentIndex++) {
		int32_t L_114 = V_7;
		int32_t L_115 = V_8;
		if ((((int32_t)L_114) < ((int32_t)L_115)))
		{
			goto IL_00f8;
		}
	}
	{
		// var newMaterial = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_116 = ___2_shader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_117, L_116, NULL);
		V_2 = L_117;
		// if (materialPropertySource != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118 = ___10_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_119;
		L_119 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_118, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_119)
		{
			goto IL_0252;
		}
	}
	{
		// newMaterial.CopyPropertiesFromMaterial(materialPropertySource);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_121 = ___10_materialPropertySource;
		NullCheck(L_120);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_120, L_121, NULL);
		// newMaterial.shaderKeywords = materialPropertySource.shaderKeywords;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123 = ___10_materialPropertySource;
		NullCheck(L_123);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124;
		L_124 = Material_get_shaderKeywords_m11982F09EED6BB0A892342E1A72AEA470C44B105(L_123, NULL);
		NullCheck(L_122);
		Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_122, L_124, NULL);
	}

IL_0252:
	{
		// newMaterial.name = newAssetName;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125 = V_2;
		String_t* L_126 = ___9_newAssetName;
		NullCheck(L_125);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_125, L_126, NULL);
		// Rect[] rects = null;
		V_3 = (RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993*)NULL;
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		V_16 = 0;
		goto IL_0322;
	}

IL_0264:
	{
		// var newTexture = new Texture2D(maxAtlasSize, maxAtlasSize,
		//                     (i > 0 && additionalTextureFormats != null && i - 1 < additionalTextureFormats.Length) ?
		//                     additionalTextureFormats[i - 1] : textureFormat,
		//                     mipmaps,
		//                     (i > 0) ? additionalTextureIsLinear[i - 1] : false);
		int32_t L_127 = ___5_maxAtlasSize;
		int32_t L_128 = ___5_maxAtlasSize;
		int32_t L_129 = V_16;
		G_B54_0 = L_128;
		G_B54_1 = L_127;
		if ((((int32_t)L_129) <= ((int32_t)0)))
		{
			G_B56_0 = L_128;
			G_B56_1 = L_127;
			goto IL_027b;
		}
	}
	{
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_130 = ___15_additionalTextureFormats;
		G_B55_0 = G_B54_0;
		G_B55_1 = G_B54_1;
		if (!L_130)
		{
			G_B56_0 = G_B54_0;
			G_B56_1 = G_B54_1;
			goto IL_027b;
		}
	}
	{
		int32_t L_131 = V_16;
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_132 = ___15_additionalTextureFormats;
		NullCheck(L_132);
		G_B56_0 = G_B55_0;
		G_B56_1 = G_B55_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_131, 1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_132)->max_length)))))
		{
			G_B57_0 = G_B55_0;
			G_B57_1 = G_B55_1;
			goto IL_027f;
		}
	}

IL_027b:
	{
		int32_t L_133 = ___7_textureFormat;
		G_B58_0 = ((int32_t)(L_133));
		G_B58_1 = G_B56_0;
		G_B58_2 = G_B56_1;
		goto IL_0286;
	}

IL_027f:
	{
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_134 = ___15_additionalTextureFormats;
		int32_t L_135 = V_16;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract(L_135, 1));
		int32_t L_137 = (int32_t)(L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		G_B58_0 = L_137;
		G_B58_1 = G_B57_0;
		G_B58_2 = G_B57_1;
	}

IL_0286:
	{
		bool L_138 = ___8_mipmaps;
		int32_t L_139 = V_16;
		G_B59_0 = L_138;
		G_B59_1 = G_B58_0;
		G_B59_2 = G_B58_1;
		G_B59_3 = G_B58_2;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			G_B60_0 = L_138;
			G_B60_1 = G_B58_0;
			G_B60_2 = G_B58_1;
			G_B60_3 = G_B58_2;
			goto IL_0290;
		}
	}
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		G_B61_2 = G_B59_1;
		G_B61_3 = G_B59_2;
		G_B61_4 = G_B59_3;
		goto IL_0297;
	}

IL_0290:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_140 = ___16_additionalTextureIsLinear;
		int32_t L_141 = V_16;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_subtract(L_141, 1));
		uint8_t L_143 = (uint8_t)(L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		G_B61_0 = ((int32_t)(L_143));
		G_B61_1 = G_B60_0;
		G_B61_2 = G_B60_1;
		G_B61_3 = G_B60_2;
		G_B61_4 = G_B60_3;
	}

IL_0297:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_144 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_144);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_144, G_B61_4, G_B61_3, G_B61_2, G_B61_1, (bool)G_B61_0, NULL);
		V_17 = L_144;
		// newTexture.mipMapBias = AtlasUtilities.DefaultMipmapBias;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_145 = V_17;
		NullCheck(L_145);
		Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286(L_145, (-0.5f), NULL);
		// var texturesToPack = texturesToPackAtParam[i];
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_146 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9;
		int32_t L_147 = V_16;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		V_18 = L_149;
		// if (texturesToPack.Count > 0) {
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_150 = V_18;
		NullCheck(L_150);
		int32_t L_151;
		L_151 = List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_inline(L_150, List_1_get_Count_mED079FEB063B8FEF7F43AED70CB562DD77470DE2_RuntimeMethod_var);
		if ((((int32_t)L_151) <= ((int32_t)0)))
		{
			goto IL_02d1;
		}
	}
	{
		// var sourceTexture = texturesToPack[0];
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_152 = V_18;
		NullCheck(L_152);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_153;
		L_153 = List_1_get_Item_m41F9D0682DC2DEC45DFE466C6AFE6D89379BC9A3(L_152, 0, List_1_get_Item_m41F9D0682DC2DEC45DFE466C6AFE6D89379BC9A3_RuntimeMethod_var);
		V_20 = L_153;
		// newTexture.CopyTextureAttributesFrom(sourceTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_154 = V_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_155 = V_20;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTextureAttributesFrom_mC2F97DBF0EE5E0056692DD49100EF83C3E3AB40B(L_154, L_155, NULL);
	}

IL_02d1:
	{
		// newTexture.name = newAssetName;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_156 = V_17;
		String_t* L_157 = ___9_newAssetName;
		NullCheck(L_156);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_156, L_157, NULL);
		// var rectsForTexParam = newTexture.PackTextures(texturesToPack.ToArray(), padding, maxAtlasSize);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_158 = V_17;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_159 = V_18;
		NullCheck(L_159);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_160;
		L_160 = List_1_ToArray_m209E5F09A1686595EFD5A277913C1C7F5C8B6B03(L_159, List_1_ToArray_m209E5F09A1686595EFD5A277913C1C7F5C8B6B03_RuntimeMethod_var);
		int32_t L_161 = ___6_padding;
		int32_t L_162 = ___5_maxAtlasSize;
		NullCheck(L_158);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_163;
		L_163 = Texture2D_PackTextures_m61CBEB4F2461710C9755ED2A5A34165C0B20E34A(L_158, L_160, L_161, L_162, NULL);
		V_19 = L_163;
		// if (i == 0) {
		int32_t L_164 = V_16;
		if (L_164)
		{
			goto IL_0304;
		}
	}
	{
		// rects = rectsForTexParam;
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_165 = V_19;
		V_3 = L_165;
		// newMaterial.mainTexture = newTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_166 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_167 = V_17;
		NullCheck(L_166);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_166, L_167, NULL);
		// outputTexture = newTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_168 = ___4_outputTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_169 = V_17;
		*((RuntimeObject**)L_168) = (RuntimeObject*)L_169;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_168, (void*)(RuntimeObject*)L_169);
		goto IL_031c;
	}

IL_0304:
	{
		// newMaterial.SetTexture(additionalTexturePropertyIDsToCopy[i - 1], newTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_170 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = ___13_additionalTexturePropertyIDsToCopy;
		int32_t L_172 = V_16;
		NullCheck(L_171);
		int32_t L_173 = ((int32_t)il2cpp_codegen_subtract(L_172, 1));
		int32_t L_174 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_175 = V_17;
		NullCheck(L_170);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_170, L_174, L_175, NULL);
		// additionalOutputTextures[i - 1] = newTexture;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_176 = ___14_additionalOutputTextures;
		int32_t L_177 = V_16;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_178 = V_17;
		NullCheck(L_176);
		ArrayElementTypeCheck (L_176, L_178);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_177, 1))), (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)L_178);
	}

IL_031c:
	{
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		int32_t L_179 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_0322:
	{
		// for (int i = 0; i < numTextureParamsToRepack; ++i) {
		int32_t L_180 = V_16;
		int32_t L_181 = V_0;
		if ((((int32_t)L_180) < ((int32_t)L_181)))
		{
			goto IL_0264;
		}
	}
	{
		// var page = newMaterial.ToSpineAtlasPage();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_182 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_183;
		L_183 = AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25(L_182, NULL);
		V_4 = L_183;
		// page.name = newAssetName;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_184 = V_4;
		String_t* L_185 = ___9_newAssetName;
		NullCheck(L_184);
		L_184->___name_0 = L_185;
		Il2CppCodeGenWriteBarrier((void**)(&L_184->___name_0), (void*)L_185);
		// repackedRegions.Clear();
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_186 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___repackedRegions_8;
		NullCheck(L_186);
		List_1_Clear_m6E5EEA896768B2FBBC7B60D4177F59F139D6FAE1_inline(L_186, List_1_Clear_m6E5EEA896768B2FBBC7B60D4177F59F139D6FAE1_RuntimeMethod_var);
		// for (int i = 0, n = originalRegions.Count; i < n; i++) {
		V_21 = 0;
		// for (int i = 0, n = originalRegions.Count; i < n; i++) {
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_187 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_7;
		NullCheck(L_187);
		int32_t L_188;
		L_188 = List_1_get_Count_mE5CA5310F5312AA5CEAE5E6ED687D1F24300AC3D_inline(L_187, List_1_get_Count_mE5CA5310F5312AA5CEAE5E6ED687D1F24300AC3D_RuntimeMethod_var);
		V_22 = L_188;
		goto IL_0389;
	}

IL_0356:
	{
		// var oldRegion = originalRegions[i];
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_189 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_7;
		int32_t L_190 = V_21;
		NullCheck(L_189);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_191;
		L_191 = List_1_get_Item_mCB22AE8FAA1AE329E0501CFF07B106F08CF2DFA0(L_189, L_190, List_1_get_Item_mCB22AE8FAA1AE329E0501CFF07B106F08CF2DFA0_RuntimeMethod_var);
		V_23 = L_191;
		// var newRegion = UVRectToAtlasRegion(rects[i], oldRegion, page);
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_192 = V_3;
		int32_t L_193 = V_21;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_196 = V_23;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_197 = V_4;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_198;
		L_198 = AtlasUtilities_UVRectToAtlasRegion_m0F3820FCF7857D96E5831703D33FA1AFCC6F118E(L_195, L_196, L_197, NULL);
		V_24 = L_198;
		// repackedRegions.Add(newRegion);
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_199 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___repackedRegions_8;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_200 = V_24;
		NullCheck(L_199);
		List_1_Add_mFE440E8FEB92EBC041C49048CB57707ADF37AC32_inline(L_199, L_200, List_1_Add_mFE440E8FEB92EBC041C49048CB57707ADF37AC32_RuntimeMethod_var);
		// for (int i = 0, n = originalRegions.Count; i < n; i++) {
		int32_t L_201 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_201, 1));
	}

IL_0389:
	{
		// for (int i = 0, n = originalRegions.Count; i < n; i++) {
		int32_t L_202 = V_21;
		int32_t L_203 = V_22;
		if ((((int32_t)L_202) < ((int32_t)L_203)))
		{
			goto IL_0356;
		}
	}
	{
		// for (int i = 0, n = outputAttachments.Count; i < n; i++) {
		V_25 = 0;
		// for (int i = 0, n = outputAttachments.Count; i < n; i++) {
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_204 = ___1_outputAttachments;
		NullCheck(L_204);
		int32_t L_205;
		L_205 = List_1_get_Count_m55DE11F59FF173D0761F346406B180BA50C90D2C_inline(L_204, List_1_get_Count_m55DE11F59FF173D0761F346406B180BA50C90D2C_RuntimeMethod_var);
		V_26 = L_205;
		goto IL_03d3;
	}

IL_039c:
	{
		// var a = outputAttachments[i];
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_206 = ___1_outputAttachments;
		int32_t L_207 = V_25;
		NullCheck(L_206);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_208;
		L_208 = List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC(L_206, L_207, List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC_RuntimeMethod_var);
		V_27 = L_208;
		// if (a is IHasRendererObject)
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_209 = V_27;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_209, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var)))
		{
			goto IL_03cd;
		}
	}
	{
		// a.SetRegion(repackedRegions[regionIndices[i]]);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_210 = V_27;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_211 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___repackedRegions_8;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_212 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_6;
		int32_t L_213 = V_25;
		NullCheck(L_212);
		int32_t L_214;
		L_214 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_212, L_213, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_211);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_215;
		L_215 = List_1_get_Item_mCB22AE8FAA1AE329E0501CFF07B106F08CF2DFA0(L_211, L_214, List_1_get_Item_mCB22AE8FAA1AE329E0501CFF07B106F08CF2DFA0_RuntimeMethod_var);
		AttachmentRegionExtensions_SetRegion_mA5054A4B65BE1398631636975A02F76EEFDC9F67(L_210, L_215, (bool)1, NULL);
	}

IL_03cd:
	{
		// for (int i = 0, n = outputAttachments.Count; i < n; i++) {
		int32_t L_216 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_216, 1));
	}

IL_03d3:
	{
		// for (int i = 0, n = outputAttachments.Count; i < n; i++) {
		int32_t L_217 = V_25;
		int32_t L_218 = V_26;
		if ((((int32_t)L_217) < ((int32_t)L_218)))
		{
			goto IL_039c;
		}
	}
	{
		// if (clearCache)
		bool L_219 = ___11_clearCache;
		if (!L_219)
		{
			goto IL_03e2;
		}
	}
	{
		// AtlasUtilities.ClearCache();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_ClearCache_mEBB54853312D663E0F8CF01053402BA1FB93B26B(NULL);
	}

IL_03e2:
	{
		// outputMaterial = newMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_220 = ___3_outputMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_221 = V_2;
		*((RuntimeObject**)L_220) = (RuntimeObject*)L_221;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_220, (void*)(RuntimeObject*)L_221);
		// }
		return;
	}
}
// Spine.Skin Spine.Unity.AttachmentTools.AtlasUtilities::GetRepackedSkin(Spine.Skin,System.String,UnityEngine.Material,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.Boolean,System.Int32[],UnityEngine.Texture2D[],UnityEngine.TextureFormat[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* AtlasUtilities_GetRepackedSkin_mB3F270CEBFB6116E7583841B199A3C0717994AD1 (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___0_o, String_t* ___1_newName, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_materialPropertySource, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_outputMaterial, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___4_outputTexture, int32_t ___5_maxAtlasSize, int32_t ___6_padding, int32_t ___7_textureFormat, bool ___8_mipmaps, bool ___9_useOriginalNonrenderables, bool ___10_clearCache, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___11_additionalTexturePropertyIDsToCopy, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___12_additionalOutputTextures, TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* ___13_additionalTextureFormats, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___14_additionalTextureIsLinear, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetRepackedSkin(o, newName, materialPropertySource.shader, out outputMaterial, out outputTexture,
		//     maxAtlasSize, padding, textureFormat, mipmaps, materialPropertySource,
		//     clearCache, useOriginalNonrenderables, additionalTexturePropertyIDsToCopy, additionalOutputTextures,
		//     additionalTextureFormats, additionalTextureIsLinear);
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_0 = ___0_o;
		String_t* L_1 = ___1_newName;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___2_materialPropertySource;
		NullCheck(L_2);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_2, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_4 = ___3_outputMaterial;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_5 = ___4_outputTexture;
		int32_t L_6 = ___5_maxAtlasSize;
		int32_t L_7 = ___6_padding;
		int32_t L_8 = ___7_textureFormat;
		bool L_9 = ___8_mipmaps;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ___2_materialPropertySource;
		bool L_11 = ___10_clearCache;
		bool L_12 = ___9_useOriginalNonrenderables;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___11_additionalTexturePropertyIDsToCopy;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_14 = ___12_additionalOutputTextures;
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_15 = ___13_additionalTextureFormats;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = ___14_additionalTextureIsLinear;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_17;
		L_17 = AtlasUtilities_GetRepackedSkin_m79996C16231D3834BBC06C5C830D10521F45BBC7(L_0, L_1, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, NULL);
		return L_17;
	}
}
// Spine.Skin Spine.Unity.AttachmentTools.AtlasUtilities::GetRepackedSkin(Spine.Skin,System.String,UnityEngine.Shader,UnityEngine.Material&,UnityEngine.Texture2D&,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material,System.Boolean,System.Boolean,System.Int32[],UnityEngine.Texture2D[],UnityEngine.TextureFormat[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* AtlasUtilities_GetRepackedSkin_m79996C16231D3834BBC06C5C830D10521F45BBC7 (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* ___0_o, String_t* ___1_newName, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___2_shader, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___3_outputMaterial, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** ___4_outputTexture, int32_t ___5_maxAtlasSize, int32_t ___6_padding, int32_t ___7_textureFormat, bool ___8_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___9_materialPropertySource, bool ___10_clearCache, bool ___11_useOriginalNonrenderables, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___12_additionalTexturePropertyIDsToCopy, Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___13_additionalOutputTextures, TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* ___14_additionalTextureFormats, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___15_additionalTextureIsLinear, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_AddRange_m3D267120E3FC107FD12FF948330B0CABC5FB7BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExposedList_1_AddRange_mC176EBADC6A0876BDB5BAF1FC6EC062D59C04649_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t414DAE16C7EC801051018A87565EC121F4208987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBB0CCF991B5727BC04ED2735D48D686A3129E9AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m44BA843042417312F5B0DE949C2635BA54430E49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F V_3;
	memset((&V_3), 0, sizeof(V_3));
	SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* V_5 = NULL;
	{
		// outputTexture = null;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_0 = ___4_outputTexture;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (o == null) throw new System.NullReferenceException("Skin was null");
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_1 = ___0_o;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (o == null) throw new System.NullReferenceException("Skin was null");
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23848C2545B01CCE5A2ACA8DABB267A41AD846B7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AtlasUtilities_GetRepackedSkin_m79996C16231D3834BBC06C5C830D10521F45BBC7_RuntimeMethod_var)));
	}

IL_0012:
	{
		// var skinAttachments = o.Attachments;
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_3 = ___0_o;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Skin_get_Attachments_m6E8D5DA48E3B7E7668E80BD42F2D64482CE6FEEA(L_3, NULL);
		// var newSkin = new Skin(newName);
		String_t* L_5 = ___1_newName;
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_6 = (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481*)il2cpp_codegen_object_new(Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Skin__ctor_m1970D321873E8F6334B18A4AD51C1CF842FFDB52(L_6, L_5, NULL);
		V_0 = L_6;
		// newSkin.Bones.AddRange(o.Bones);
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_7 = V_0;
		NullCheck(L_7);
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_8;
		L_8 = Skin_get_Bones_m289A6AD20D75A430417207821295FEC988AB3B42_inline(L_7, NULL);
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_9 = ___0_o;
		NullCheck(L_9);
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_10;
		L_10 = Skin_get_Bones_m289A6AD20D75A430417207821295FEC988AB3B42_inline(L_9, NULL);
		NullCheck(L_8);
		ExposedList_1_AddRange_mC176EBADC6A0876BDB5BAF1FC6EC062D59C04649(L_8, L_10, ExposedList_1_AddRange_mC176EBADC6A0876BDB5BAF1FC6EC062D59C04649_RuntimeMethod_var);
		// newSkin.Constraints.AddRange(o.Constraints);
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_11 = V_0;
		NullCheck(L_11);
		ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* L_12;
		L_12 = Skin_get_Constraints_mCB8C4773B732A935E54D0F8179924ECC1ACA4AE0_inline(L_11, NULL);
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_13 = ___0_o;
		NullCheck(L_13);
		ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* L_14;
		L_14 = Skin_get_Constraints_mCB8C4773B732A935E54D0F8179924ECC1ACA4AE0_inline(L_13, NULL);
		NullCheck(L_12);
		ExposedList_1_AddRange_m3D267120E3FC107FD12FF948330B0CABC5FB7BD4(L_12, L_14, ExposedList_1_AddRange_m3D267120E3FC107FD12FF948330B0CABC5FB7BD4_RuntimeMethod_var);
		// inoutAttachments.Clear();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_15 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_10;
		NullCheck(L_15);
		List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_inline(L_15, List_1_Clear_m7FC9B51AEC041FF21A8CEE1D82A81CE57B7E8614_RuntimeMethod_var);
		// foreach (var entry in o.Attachments) {
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_16 = ___0_o;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = Skin_get_Attachments_m6E8D5DA48E3B7E7668E80BD42F2D64482CE6FEEA(L_16, NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Spine.Skin/SkinEntry>::GetEnumerator() */, IEnumerable_1_t414DAE16C7EC801051018A87565EC121F4208987_il2cpp_TypeInfo_var, L_17);
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_19 = V_2;
					if (!L_19)
					{
						goto IL_0085;
					}
				}
				{
					RuntimeObject* L_20 = V_2;
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
				}

IL_0085:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0072_1;
			}

IL_005a_1:
			{
				// foreach (var entry in o.Attachments) {
				RuntimeObject* L_21 = V_2;
				NullCheck(L_21);
				SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F L_22;
				L_22 = InterfaceFuncInvoker0< SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Spine.Skin/SkinEntry>::get_Current() */, IEnumerator_1_tBB0CCF991B5727BC04ED2735D48D686A3129E9AB_il2cpp_TypeInfo_var, L_21);
				V_3 = L_22;
				// inoutAttachments.Add(entry.Attachment);
				il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
				List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_23 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_10;
				Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_24;
				L_24 = SkinEntry_get_Attachment_mD3F3972C2C175630ABA63A7806AEED63CE8A665C_inline((&V_3), NULL);
				NullCheck(L_23);
				List_1_Add_m44BA843042417312F5B0DE949C2635BA54430E49_inline(L_23, L_24, List_1_Add_m44BA843042417312F5B0DE949C2635BA54430E49_RuntimeMethod_var);
			}

IL_0072_1:
			{
				// foreach (var entry in o.Attachments) {
				RuntimeObject* L_25 = V_2;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		// GetRepackedAttachments(inoutAttachments, inoutAttachments, materialPropertySource, out outputMaterial, out outputTexture,
		//     maxAtlasSize, padding, textureFormat, mipmaps, newName, clearCache, useOriginalNonrenderables,
		//     additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_27 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_10;
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_28 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = ___9_materialPropertySource;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_30 = ___3_outputMaterial;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** L_31 = ___4_outputTexture;
		int32_t L_32 = ___5_maxAtlasSize;
		int32_t L_33 = ___6_padding;
		int32_t L_34 = ___7_textureFormat;
		bool L_35 = ___8_mipmaps;
		String_t* L_36 = ___1_newName;
		bool L_37 = ___10_clearCache;
		bool L_38 = ___11_useOriginalNonrenderables;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = ___12_additionalTexturePropertyIDsToCopy;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_40 = ___13_additionalOutputTextures;
		TextureFormatU5BU5D_t57C94D6A95145D00C2952E20E5E1E531EB1364C9* L_41 = ___14_additionalTextureFormats;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_42 = ___15_additionalTextureIsLinear;
		AtlasUtilities_GetRepackedAttachments_mC50A4BBE5BDF4F75363F74FBFEB3263057FCFB0B(L_27, L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40, L_41, L_42, NULL);
		// int i = 0;
		V_1 = 0;
		// foreach (var originalSkinEntry in o.Attachments) {
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_43 = ___0_o;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = Skin_get_Attachments_m6E8D5DA48E3B7E7668E80BD42F2D64482CE6FEEA(L_43, NULL);
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Spine.Skin/SkinEntry>::GetEnumerator() */, IEnumerable_1_t414DAE16C7EC801051018A87565EC121F4208987_il2cpp_TypeInfo_var, L_44);
		V_2 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_46 = V_2;
					if (!L_46)
					{
						goto IL_0101;
					}
				}
				{
					RuntimeObject* L_47 = V_2;
					NullCheck(L_47);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_47);
				}

IL_0101:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ee_1;
			}

IL_00bf_1:
			{
				// foreach (var originalSkinEntry in o.Attachments) {
				RuntimeObject* L_48 = V_2;
				NullCheck(L_48);
				SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F L_49;
				L_49 = InterfaceFuncInvoker0< SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Spine.Skin/SkinEntry>::get_Current() */, IEnumerator_1_tBB0CCF991B5727BC04ED2735D48D686A3129E9AB_il2cpp_TypeInfo_var, L_48);
				V_4 = L_49;
				// var newAttachment = inoutAttachments[i++];
				il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
				List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_50 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_10;
				int32_t L_51 = V_1;
				int32_t L_52 = L_51;
				V_1 = ((int32_t)il2cpp_codegen_add(L_52, 1));
				NullCheck(L_50);
				Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_53;
				L_53 = List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC(L_50, L_52, List_1_get_Item_m531E267D7EB566DF3949C973A124A320527B4CAC_RuntimeMethod_var);
				V_5 = L_53;
				// newSkin.SetAttachment(originalSkinEntry.SlotIndex, originalSkinEntry.Name, newAttachment);
				Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_54 = V_0;
				int32_t L_55;
				L_55 = SkinEntry_get_SlotIndex_mBE57F47A41B161443A05B81B9F4CB37BCE8664C6_inline((&V_4), NULL);
				String_t* L_56;
				L_56 = SkinEntry_get_Name_mD30118D3C18473ACF7BD87BAF0E8F728C80504D8_inline((&V_4), NULL);
				Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_57 = V_5;
				NullCheck(L_54);
				Skin_SetAttachment_mAD7B9C1C5BBDEA473BF90DE5A6695AB9378395D6(L_54, L_55, L_56, L_57, NULL);
			}

IL_00ee_1:
			{
				// foreach (var originalSkinEntry in o.Attachments) {
				RuntimeObject* L_58 = V_2;
				NullCheck(L_58);
				bool L_59;
				L_59 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_58);
				if (L_59)
				{
					goto IL_00bf_1;
				}
			}
			{
				goto IL_0102;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0102:
	{
		// return newSkin;
		Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* L_60 = V_0;
		return L_60;
	}
}
// UnityEngine.Sprite Spine.Unity.AttachmentTools.AtlasUtilities::ToSprite(Spine.AtlasRegion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* AtlasUtilities_ToSprite_mC9706CA975024E7705CA389C8BA5637F12B30DA2 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_ar, float ___1_pixelsPerUnit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Sprite.Create(ar.GetMainTexture(), ar.GetUnityRect(), new Vector2(0.5f, 0.5f), pixelsPerUnit);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___0_ar;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = AtlasUtilities_GetMainTexture_m859D5A47C637E7669F0896FE75B1FBA33E59AE72(L_0, NULL);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_2 = ___0_ar;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = AtlasUtilities_GetUnityRect_m3E04CF754EA27554C204AA4E280B78CB899893EB(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.5f), (0.5f), /*hidden argument*/NULL);
		float L_5 = ___1_pixelsPerUnit;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = Sprite_Create_m95F90AD74982187C087F4FA00947045A033D0BA1(L_1, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_ClearCache_mEBB54853312D663E0F8CF01053402BA1FB93B26B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var t in CachedRegionTexturesList) {
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_12;
		NullCheck(L_0);
		Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 L_1;
		L_1 = List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D(L_0, List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245((&V_0), Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var t in CachedRegionTexturesList) {
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
				L_2 = Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_inline((&V_0), Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var);
				// UnityEngine.Object.Destroy(t);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_0019_1:
			{
				// foreach (var t in CachedRegionTexturesList) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35((&V_0), Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// CachedRegionTextures.Clear();
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* L_4 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_11;
		NullCheck(L_4);
		Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA(L_4, Dictionary_2_Clear_m7BDA40E7D7D71D7F04B6FEE9059593B9FC36E2EA_RuntimeMethod_var);
		// CachedRegionTexturesList.Clear();
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_5 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_12;
		NullCheck(L_5);
		List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_inline(L_5, List_1_Clear_mBFD86AB2F85FB10B7CBA3FABFCD5AB785B271EDA_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::ToTexture(Spine.AtlasRegion,UnityEngine.TextureFormat,System.Boolean,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_ToTexture_mA8C6798331D65E2CA8C5FC27CC3DE1E674F068DE (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_ar, int32_t ___1_textureFormat, bool ___2_mipmaps, int32_t ___3_texturePropertyId, bool ___4_linear, bool ___5_applyPMA, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAF5248DC06650A05B1B26E2B2C152A1BA43E8530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m86DDB255F4F255DC252600894FB638E08C3E2427_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B4_0 = NULL;
	{
		// IntAndAtlasRegionKey cacheKey = new IntAndAtlasRegionKey(texturePropertyId, ar);
		int32_t L_0 = ___3_texturePropertyId;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_1 = ___0_ar;
		IntAndAtlasRegionKey__ctor_mDFD162AC2460EDF3D893352331273DA78EC3E71D((&V_1), L_0, L_1, NULL);
		// CachedRegionTextures.TryGetValue(cacheKey, out output);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* L_2 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_11;
		IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m86DDB255F4F255DC252600894FB638E08C3E2427(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m86DDB255F4F255DC252600894FB638E08C3E2427_RuntimeMethod_var);
		// if (output == null) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0098;
		}
	}
	{
		// Texture2D sourceTexture = texturePropertyId == 0 ? ar.GetMainTexture() : ar.GetTexture(texturePropertyId);
		int32_t L_7 = ___3_texturePropertyId;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_8 = ___0_ar;
		int32_t L_9 = ___3_texturePropertyId;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10;
		L_10 = AtlasUtilities_GetTexture_m9DB96ADBE178CD619F335F92CC58B2CD84394997(L_8, L_9, NULL);
		G_B4_0 = L_10;
		goto IL_0032;
	}

IL_002c:
	{
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_11 = ___0_ar;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = AtlasUtilities_GetMainTexture_m859D5A47C637E7669F0896FE75B1FBA33E59AE72(L_11, NULL);
		G_B4_0 = L_12;
	}

IL_0032:
	{
		V_2 = G_B4_0;
		// Rect r = ar.GetUnityRect();
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_13 = ___0_ar;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = AtlasUtilities_GetUnityRect_m3E04CF754EA27554C204AA4E280B78CB899893EB(L_13, NULL);
		V_3 = L_14;
		// int width = (int)r.width;
		float L_15;
		L_15 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_3), NULL);
		// int height = (int)r.height;
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_3), NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_16);
		// output = new Texture2D(width, height, textureFormat, mipmaps, linear) { name = ar.name };
		int32_t L_17 = V_4;
		int32_t L_18 = ___1_textureFormat;
		bool L_19 = ___2_mipmaps;
		bool L_20 = ___4_linear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_21, il2cpp_codegen_cast_double_to_int<int32_t>(L_15), L_17, L_18, L_19, L_20, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = L_21;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_23 = ___0_ar;
		NullCheck(L_23);
		String_t* L_24 = L_23->___name_1;
		NullCheck(L_22);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_22, L_24, NULL);
		V_0 = L_22;
		// output.CopyTextureAttributesFrom(sourceTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = V_2;
		AtlasUtilities_CopyTextureAttributesFrom_mC2F97DBF0EE5E0056692DD49100EF83C3E3AB40B(L_25, L_26, NULL);
		// if (applyPMA)
		bool L_27 = ___5_applyPMA;
		if (!L_27)
		{
			goto IL_0079;
		}
	}
	{
		// AtlasUtilities.CopyTextureApplyPMA(sourceTexture, r, output);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_29 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTextureApplyPMA_m1B4A85CBF8A8A404330E3CFE7126B5FDDFE756C2(L_28, L_29, L_30, NULL);
		goto IL_0081;
	}

IL_0079:
	{
		// AtlasUtilities.CopyTexture(sourceTexture, r, output);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_32 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTexture_m296B658FCE1FAEEBDAE3F9501D4761146A658091(L_31, L_32, L_33, NULL);
	}

IL_0081:
	{
		// CachedRegionTextures.Add(cacheKey, output);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* L_34 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_11;
		IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A L_35 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = V_0;
		NullCheck(L_34);
		Dictionary_2_Add_mAF5248DC06650A05B1B26E2B2C152A1BA43E8530(L_34, L_35, L_36, Dictionary_2_Add_mAF5248DC06650A05B1B26E2B2C152A1BA43E8530_RuntimeMethod_var);
		// CachedRegionTexturesList.Add(output);
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_37 = ((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_12;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = V_0;
		NullCheck(L_37);
		List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_inline(L_37, L_38, List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
	}

IL_0098:
	{
		// return output;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = V_0;
		return L_39;
	}
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::ToTexture(UnityEngine.Sprite,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_ToTexture_m1CFA3A38F6BEEACC4E8CF70CF1AEA8423B5358DC (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_s, int32_t ___1_textureFormat, bool ___2_mipmaps, bool ___3_linear, bool ___4_applyPMA, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	{
		// var spriteTexture = s.texture;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_s;
		NullCheck(L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_0, NULL);
		V_0 = L_1;
		// if (!s.packed || s.packingMode == SpritePackingMode.Rectangle) {
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_s;
		NullCheck(L_2);
		bool L_3;
		L_3 = Sprite_get_packed_m6B6B98A3891B350711499532C07F8D393AAB868E(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___0_s;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Sprite_get_packingMode_m26DD01B9EC3E832120B4AFB3090F300ACC864A8A(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		// r = s.textureRect;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = ___0_s;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_6, NULL);
		V_1 = L_7;
		goto IL_0104;
	}

IL_0024:
	{
		// r = new Rect();
		il2cpp_codegen_initobj((&V_1), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		// r.xMin = Math.Min(s.uv[0].x, s.uv[1].x) * spriteTexture.width;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = ___0_s;
		NullCheck(L_8);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9;
		L_9 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_8, NULL);
		NullCheck(L_9);
		float L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = ___0_s;
		NullCheck(L_11);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12;
		L_12 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_11, NULL);
		NullCheck(L_12);
		float L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_14;
		L_14 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_10, L_13, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19((&V_1), ((float)il2cpp_codegen_multiply(L_14, ((float)L_16))), NULL);
		// r.xMax = Math.Max(s.uv[0].x, s.uv[1].x) * spriteTexture.width;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = ___0_s;
		NullCheck(L_17);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18;
		L_18 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_17, NULL);
		NullCheck(L_18);
		float L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___x_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = ___0_s;
		NullCheck(L_20);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_21;
		L_21 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_20, NULL);
		NullCheck(L_21);
		float L_22 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___x_0;
		float L_23;
		L_23 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_19, L_22, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D((&V_1), ((float)il2cpp_codegen_multiply(L_23, ((float)L_25))), NULL);
		// r.yMin = Math.Min(s.uv[0].y, s.uv[2].y) * spriteTexture.height;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = ___0_s;
		NullCheck(L_26);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27;
		L_27 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_26, NULL);
		NullCheck(L_27);
		float L_28 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29 = ___0_s;
		NullCheck(L_29);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30;
		L_30 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_29, NULL);
		NullCheck(L_30);
		float L_31 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___y_1;
		float L_32;
		L_32 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_28, L_31, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_33);
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE((&V_1), ((float)il2cpp_codegen_multiply(L_32, ((float)L_34))), NULL);
		// r.yMax = Math.Max(s.uv[0].y, s.uv[2].y) * spriteTexture.height;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = ___0_s;
		NullCheck(L_35);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_36;
		L_36 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_35, NULL);
		NullCheck(L_36);
		float L_37 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___y_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = ___0_s;
		NullCheck(L_38);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_39;
		L_39 = Sprite_get_uv_mAD4DAE6EAEC23340B69D0991FA4D8E72C6CA62FF(L_38, NULL);
		NullCheck(L_39);
		float L_40 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___y_1;
		float L_41;
		L_41 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_37, L_40, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_42);
		Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B((&V_1), ((float)il2cpp_codegen_multiply(L_41, ((float)L_43))), NULL);
	}

IL_0104:
	{
		// var newTexture = new Texture2D((int)r.width, (int)r.height, textureFormat, mipmaps, linear);
		float L_44;
		L_44 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_45;
		L_45 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		int32_t L_46 = ___1_textureFormat;
		bool L_47 = ___2_mipmaps;
		bool L_48 = ___3_linear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_49, il2cpp_codegen_cast_double_to_int<int32_t>(L_44), il2cpp_codegen_cast_double_to_int<int32_t>(L_45), L_46, L_47, L_48, NULL);
		V_2 = L_49;
		// newTexture.CopyTextureAttributesFrom(spriteTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_51 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTextureAttributesFrom_mC2F97DBF0EE5E0056692DD49100EF83C3E3AB40B(L_50, L_51, NULL);
		// if (applyPMA)
		bool L_52 = ___4_applyPMA;
		if (!L_52)
		{
			goto IL_0132;
		}
	}
	{
		// AtlasUtilities.CopyTextureApplyPMA(spriteTexture, r, newTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_54 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTextureApplyPMA_m1B4A85CBF8A8A404330E3CFE7126B5FDDFE756C2(L_53, L_54, L_55, NULL);
		goto IL_013a;
	}

IL_0132:
	{
		// AtlasUtilities.CopyTexture(spriteTexture, r, newTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_56 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_57 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTexture_m296B658FCE1FAEEBDAE3F9501D4761146A658091(L_56, L_57, L_58, NULL);
	}

IL_013a:
	{
		// return newTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_59 = V_2;
		return L_59;
	}
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::GetClone(UnityEngine.Texture2D,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_GetClone_mFE57D6E2CFFE90D6B1239E798B61DF0564684CA4 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_t, int32_t ___1_textureFormat, bool ___2_mipmaps, bool ___3_linear, bool ___4_applyPMA, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// var newTexture = new Texture2D((int)t.width, (int)t.height, textureFormat, mipmaps, linear);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_t;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_t;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		int32_t L_4 = ___1_textureFormat;
		bool L_5 = ___2_mipmaps;
		bool L_6 = ___3_linear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_7, L_1, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// newTexture.CopyTextureAttributesFrom(t);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___0_t;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTextureAttributesFrom_mC2F97DBF0EE5E0056692DD49100EF83C3E3AB40B(L_8, L_9, NULL);
		// if (applyPMA)
		bool L_10 = ___4_applyPMA;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// AtlasUtilities.CopyTextureApplyPMA(t, new Rect(0, 0, t.width, t.height), newTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_t;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ___0_t;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = ___0_t;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_16), (0.0f), (0.0f), ((float)L_13), ((float)L_15), /*hidden argument*/NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTextureApplyPMA_m1B4A85CBF8A8A404330E3CFE7126B5FDDFE756C2(L_11, L_16, L_17, NULL);
		goto IL_006a;
	}

IL_0046:
	{
		// AtlasUtilities.CopyTexture(t, new Rect(0, 0, t.width, t.height), newTexture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_t;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = ___0_t;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_19);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___0_t;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_23), (0.0f), (0.0f), ((float)L_20), ((float)L_22), /*hidden argument*/NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasUtilities_CopyTexture_m296B658FCE1FAEEBDAE3F9501D4761146A658091(L_18, L_23, L_24, NULL);
	}

IL_006a:
	{
		// return newTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
		return L_25;
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::CopyTexture(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_CopyTexture_m296B658FCE1FAEEBDAE3F9501D4761146A658091 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_source, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_sourceRect, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	{
		// if (SystemInfo.copyTextureSupport == UnityEngine.Rendering.CopyTextureSupport.None) {
		int32_t L_0;
		L_0 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		// Color[] pixelBuffer = source.GetPixels((int)sourceRect.x, (int)sourceRect.y, (int)sourceRect.width, (int)sourceRect.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___0_source;
		float L_2;
		L_2 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_sourceRect), NULL);
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_sourceRect), NULL);
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_sourceRect), NULL);
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_sourceRect), NULL);
		NullCheck(L_1);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6;
		L_6 = Texture2D_GetPixels_m009D80DF4554A3B45EE4007ACA38E33764A080DE(L_1, il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), NULL);
		V_0 = L_6;
		// destination.SetPixels(pixelBuffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___2_destination;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = V_0;
		NullCheck(L_7);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_7, L_8, NULL);
		// destination.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___2_destination;
		NullCheck(L_9);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_9, NULL);
		return;
	}

IL_003c:
	{
		// Graphics.CopyTexture(source, 0, 0, (int)sourceRect.x, (int)sourceRect.y, (int)sourceRect.width, (int)sourceRect.height, destination, 0, 0, 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___0_source;
		float L_11;
		L_11 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_sourceRect), NULL);
		float L_12;
		L_12 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_sourceRect), NULL);
		float L_13;
		L_13 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_sourceRect), NULL);
		float L_14;
		L_14 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_sourceRect), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___2_destination;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_mA6F9298621B0493A08483EF57028B66C93FFCBA8(L_10, 0, 0, il2cpp_codegen_cast_double_to_int<int32_t>(L_11), il2cpp_codegen_cast_double_to_int<int32_t>(L_12), il2cpp_codegen_cast_double_to_int<int32_t>(L_13), il2cpp_codegen_cast_double_to_int<int32_t>(L_14), L_15, 0, 0, 0, 0, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::CopyTextureApplyPMA(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_CopyTextureApplyPMA_m1B4A85CBF8A8A404330E3CFE7126B5FDDFE756C2 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_source, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_sourceRect, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_destination, const RuntimeMethod* method) 
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// Color[] pixelBuffer = source.GetPixels((int)sourceRect.x, (int)sourceRect.y, (int)sourceRect.width, (int)sourceRect.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_source;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_sourceRect), NULL);
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_sourceRect), NULL);
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_sourceRect), NULL);
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_sourceRect), NULL);
		NullCheck(L_0);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5;
		L_5 = Texture2D_GetPixels_m009D80DF4554A3B45EE4007ACA38E33764A080DE(L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), NULL);
		V_0 = L_5;
		// for (int i = 0, n = pixelBuffer.Length; i < n; i++) {
		V_1 = 0;
		// for (int i = 0, n = pixelBuffer.Length; i < n; i++) {
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = V_0;
		NullCheck(L_6);
		V_2 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		goto IL_007b;
	}

IL_002f:
	{
		// Color p = pixelBuffer[i];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// float a = p.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_3;
		float L_12 = L_11.___a_3;
		V_4 = L_12;
		// p.r = p.r * a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_3;
		float L_14 = L_13.___r_0;
		float L_15 = V_4;
		(&V_3)->___r_0 = ((float)il2cpp_codegen_multiply(L_14, L_15));
		// p.g = p.g * a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_3;
		float L_17 = L_16.___g_1;
		float L_18 = V_4;
		(&V_3)->___g_1 = ((float)il2cpp_codegen_multiply(L_17, L_18));
		// p.b = p.b * a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = V_3;
		float L_20 = L_19.___b_2;
		float L_21 = V_4;
		(&V_3)->___b_2 = ((float)il2cpp_codegen_multiply(L_20, L_21));
		// pixelBuffer[i] = p;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_22 = V_0;
		int32_t L_23 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = V_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_24);
		// for (int i = 0, n = pixelBuffer.Length; i < n; i++) {
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007b:
	{
		// for (int i = 0, n = pixelBuffer.Length; i < n; i++) {
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_002f;
		}
	}
	{
		// destination.SetPixels(pixelBuffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = ___2_destination;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_29 = V_0;
		NullCheck(L_28);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_28, L_29, NULL);
		// destination.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = ___2_destination;
		NullCheck(L_30);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_30, NULL);
		// }
		return;
	}
}
// System.Boolean Spine.Unity.AttachmentTools.AtlasUtilities::IsRenderable(Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtlasUtilities_IsRenderable_mF3AED6C0B369EA1892212541393215CED6A00FCE (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return a is IHasRendererObject;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_0 = ___0_a;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHasRendererObject_t73A36A077A51A8EFA639399FA153AA2C44C0F551_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::SpineUnityFlipRect(UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_SpineUnityFlipRect_mC4AC6AE83BFA9896FDEAF444A548745E304AA5AA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, int32_t ___1_textureHeight, const RuntimeMethod* method) 
{
	{
		// rect.y = textureHeight - rect.y - rect.height;
		int32_t L_0 = ___1_textureHeight;
		float L_1;
		L_1 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&___0_rect), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)L_0), L_1)), L_2)), NULL);
		// return rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___0_rect;
		return L_3;
	}
}
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::GetUnityRect(Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_GetUnityRect_m3E04CF754EA27554C204AA4E280B78CB899893EB (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return region.GetSpineAtlasRect().SpineUnityFlipRect(region.page.height);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___0_region;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = AtlasUtilities_GetSpineAtlasRect_m8FDDAD6C2DA4217E26BD1C37330C3D6AD0D96594(L_0, (bool)1, NULL);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_2 = ___0_region;
		NullCheck(L_2);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_3 = L_2->___page_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___height_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = AtlasUtilities_SpineUnityFlipRect_mC4AC6AE83BFA9896FDEAF444A548745E304AA5AA(L_1, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::GetUnityRect(Spine.AtlasRegion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_GetUnityRect_m36B5955CDA963B75093D9739492C831069167412 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, int32_t ___1_textureHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return region.GetSpineAtlasRect().SpineUnityFlipRect(textureHeight);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___0_region;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = AtlasUtilities_GetSpineAtlasRect_m8FDDAD6C2DA4217E26BD1C37330C3D6AD0D96594(L_0, (bool)1, NULL);
		int32_t L_2 = ___1_textureHeight;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = AtlasUtilities_SpineUnityFlipRect_mC4AC6AE83BFA9896FDEAF444A548745E304AA5AA(L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::GetSpineAtlasRect(Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_GetSpineAtlasRect_m8FDDAD6C2DA4217E26BD1C37330C3D6AD0D96594 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, bool ___1_includeRotate, const RuntimeMethod* method) 
{
	{
		// if (includeRotate && (region.degrees == 90 || region.degrees == 270))
		bool L_0 = ___1_includeRotate;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_1 = ___0_region;
		NullCheck(L_1);
		int32_t L_2 = L_1->___degrees_14;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)90))))
		{
			goto IL_001a;
		}
	}
	{
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_3 = ___0_region;
		NullCheck(L_3);
		int32_t L_4 = L_3->___degrees_14;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)270)))))
		{
			goto IL_003c;
		}
	}

IL_001a:
	{
		// return new Rect(region.x, region.y, region.height, region.width);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_5 = ___0_region;
		NullCheck(L_5);
		int32_t L_6 = L_5->___x_2;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_7 = ___0_region;
		NullCheck(L_7);
		int32_t L_8 = L_7->___y_3;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_9 = ___0_region;
		NullCheck(L_9);
		int32_t L_10 = L_9->___height_5;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_11 = ___0_region;
		NullCheck(L_11);
		int32_t L_12 = L_11->___width_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_13), ((float)L_6), ((float)L_8), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		return L_13;
	}

IL_003c:
	{
		// return new Rect(region.x, region.y, region.width, region.height);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_14 = ___0_region;
		NullCheck(L_14);
		int32_t L_15 = L_14->___x_2;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_16 = ___0_region;
		NullCheck(L_16);
		int32_t L_17 = L_16->___y_3;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_18 = ___0_region;
		NullCheck(L_18);
		int32_t L_19 = L_18->___width_4;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_20 = ___0_region;
		NullCheck(L_20);
		int32_t L_21 = L_20->___height_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		memset((&L_22), 0, sizeof(L_22));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), ((float)L_15), ((float)L_17), ((float)L_19), ((float)L_21), /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::UVRectToTextureRect(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_UVRectToTextureRect_mC1178D1E6F8291D790240A1D6226779F39E3518A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_uvRect, int32_t ___1_texWidth, int32_t ___2_texHeight, const RuntimeMethod* method) 
{
	{
		// uvRect.x *= texWidth;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&___0_uvRect);
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_0, NULL);
		int32_t L_2 = ___1_texWidth;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_0, ((float)il2cpp_codegen_multiply(L_1, ((float)L_2))), NULL);
		// uvRect.width *= texWidth;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = (&___0_uvRect);
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_3, NULL);
		int32_t L_5 = ___1_texWidth;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_3, ((float)il2cpp_codegen_multiply(L_4, ((float)L_5))), NULL);
		// uvRect.y *= texHeight;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&___0_uvRect);
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_6, NULL);
		int32_t L_8 = ___2_texHeight;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_6, ((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), NULL);
		// uvRect.height *= texHeight;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&___0_uvRect);
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_9, NULL);
		int32_t L_11 = ___2_texHeight;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_9, ((float)il2cpp_codegen_multiply(L_10, ((float)L_11))), NULL);
		// return uvRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12 = ___0_uvRect;
		return L_12;
	}
}
// UnityEngine.Rect Spine.Unity.AttachmentTools.AtlasUtilities::TextureRectToUVRect(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AtlasUtilities_TextureRectToUVRect_mB658924451774DA548E22101424F01046B68E849 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_textureRect, int32_t ___1_texWidth, int32_t ___2_texHeight, const RuntimeMethod* method) 
{
	{
		// textureRect.x = Mathf.InverseLerp(0, texWidth, textureRect.x);
		int32_t L_0 = ___1_texWidth;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_textureRect), NULL);
		float L_2;
		L_2 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((0.0f), ((float)L_0), L_1, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&___0_textureRect), L_2, NULL);
		// textureRect.y = Mathf.InverseLerp(0, texHeight, textureRect.y);
		int32_t L_3 = ___2_texHeight;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_textureRect), NULL);
		float L_5;
		L_5 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((0.0f), ((float)L_3), L_4, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629((&___0_textureRect), L_5, NULL);
		// textureRect.width = Mathf.InverseLerp(0, texWidth, textureRect.width);
		int32_t L_6 = ___1_texWidth;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_textureRect), NULL);
		float L_8;
		L_8 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((0.0f), ((float)L_6), L_7, NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&___0_textureRect), L_8, NULL);
		// textureRect.height = Mathf.InverseLerp(0, texHeight, textureRect.height);
		int32_t L_9 = ___2_texHeight;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_textureRect), NULL);
		float L_11;
		L_11 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline((0.0f), ((float)L_9), L_10, NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&___0_textureRect), L_11, NULL);
		// return textureRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12 = ___0_textureRect;
		return L_12;
	}
}
// Spine.AtlasRegion Spine.Unity.AttachmentTools.AtlasUtilities::UVRectToAtlasRegion(UnityEngine.Rect,Spine.AtlasRegion,Spine.AtlasPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* AtlasUtilities_UVRectToAtlasRegion_m0F3820FCF7857D96E5831703D33FA1AFCC6F118E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_uvRect, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_referenceRegion, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___2_page, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		// var tr = UVRectToTextureRect(uvRect, page.width, page.height);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_uvRect;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_1 = ___2_page;
		NullCheck(L_1);
		int32_t L_2 = L_1->___width_1;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_3 = ___2_page;
		NullCheck(L_3);
		int32_t L_4 = L_3->___height_2;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = AtlasUtilities_UVRectToTextureRect_mC1178D1E6F8291D790240A1D6226779F39E3518A(L_0, L_2, L_4, NULL);
		// var rr = tr.SpineUnityFlipRect(page.height);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_6 = ___2_page;
		NullCheck(L_6);
		int32_t L_7 = L_6->___height_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = AtlasUtilities_SpineUnityFlipRect_mC4AC6AE83BFA9896FDEAF444A548745E304AA5AA(L_5, L_7, NULL);
		V_0 = L_8;
		// int x = (int)rr.x, y = (int)rr.y;
		float L_9;
		L_9 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_9);
		// int x = (int)rr.x, y = (int)rr.y;
		float L_10;
		L_10 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
		// if (referenceRegion.degrees == 90 || referenceRegion.degrees == 270) {
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_11 = ___1_referenceRegion;
		NullCheck(L_11);
		int32_t L_12 = L_11->___degrees_14;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)90))))
		{
			goto IL_0047;
		}
	}
	{
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_13 = ___1_referenceRegion;
		NullCheck(L_13);
		int32_t L_14 = L_13->___degrees_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)270)))))
		{
			goto IL_005c;
		}
	}

IL_0047:
	{
		// w = (int)rr.height;
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_15);
		// h = (int)rr.width;
		float L_16;
		L_16 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_16);
		goto IL_006f;
	}

IL_005c:
	{
		// w = (int)rr.width;
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_17);
		// h = (int)rr.height;
		float L_18;
		L_18 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_18);
	}

IL_006f:
	{
		// int originalW = Mathf.RoundToInt((float)w * ((float)referenceRegion.originalWidth / (float)referenceRegion.width));
		int32_t L_19 = V_3;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_20 = ___1_referenceRegion;
		NullCheck(L_20);
		int32_t L_21 = L_20->___originalWidth_12;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_22 = ___1_referenceRegion;
		NullCheck(L_22);
		int32_t L_23 = L_22->___width_4;
		int32_t L_24;
		L_24 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_19), ((float)(((float)L_21)/((float)L_23))))), NULL);
		V_5 = L_24;
		// int originalH = Mathf.RoundToInt((float)h * ((float)referenceRegion.originalHeight / (float)referenceRegion.height));
		int32_t L_25 = V_4;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_26 = ___1_referenceRegion;
		NullCheck(L_26);
		int32_t L_27 = L_26->___originalHeight_13;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_28 = ___1_referenceRegion;
		NullCheck(L_28);
		int32_t L_29 = L_28->___height_5;
		int32_t L_30;
		L_30 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_25), ((float)(((float)L_27)/((float)L_29))))), NULL);
		V_6 = L_30;
		// int offsetX = Mathf.RoundToInt((float)referenceRegion.offsetX * ((float)w / (float)referenceRegion.width));
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_31 = ___1_referenceRegion;
		NullCheck(L_31);
		float L_32 = L_31->___offsetX_10;
		int32_t L_33 = V_3;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_34 = ___1_referenceRegion;
		NullCheck(L_34);
		int32_t L_35 = L_34->___width_4;
		int32_t L_36;
		L_36 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_32), ((float)(((float)L_33)/((float)L_35))))), NULL);
		V_7 = L_36;
		// int offsetY = Mathf.RoundToInt((float)referenceRegion.offsetY * ((float)h / (float)referenceRegion.height));
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_37 = ___1_referenceRegion;
		NullCheck(L_37);
		float L_38 = L_37->___offsetY_11;
		int32_t L_39 = V_4;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_40 = ___1_referenceRegion;
		NullCheck(L_40);
		int32_t L_41 = L_40->___height_5;
		int32_t L_42;
		L_42 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_38), ((float)(((float)L_39)/((float)L_41))))), NULL);
		V_8 = L_42;
		// if (referenceRegion.degrees == 270) {
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_43 = ___1_referenceRegion;
		NullCheck(L_43);
		int32_t L_44 = L_43->___degrees_14;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)270)))))
		{
			goto IL_00f5;
		}
	}
	{
		// w = (int)rr.width;
		float L_45;
		L_45 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_45);
		// h = (int)rr.height;
		float L_46;
		L_46 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_46);
	}

IL_00f5:
	{
		// float u = uvRect.xMin;
		float L_47;
		L_47 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_uvRect), NULL);
		V_9 = L_47;
		// float u2 = uvRect.xMax;
		float L_48;
		L_48 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_uvRect), NULL);
		V_10 = L_48;
		// float v = uvRect.yMax;
		float L_49;
		L_49 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_uvRect), NULL);
		V_11 = L_49;
		// float v2 = uvRect.yMin;
		float L_50;
		L_50 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_uvRect), NULL);
		V_12 = L_50;
		// return new AtlasRegion {
		//     page = page,
		//     name = referenceRegion.name,
		// 
		//     u = u,
		//     u2 = u2,
		//     v = v,
		//     v2 = v2,
		// 
		//     index = -1,
		// 
		//     width = w,
		//     originalWidth = originalW,
		//     height = h,
		//     originalHeight = originalH,
		//     offsetX = offsetX,
		//     offsetY = offsetY,
		//     x = x,
		//     y = y,
		// 
		//     rotate = referenceRegion.rotate,
		//     degrees = referenceRegion.degrees
		// };
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_51 = (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0*)il2cpp_codegen_object_new(AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		AtlasRegion__ctor_mA555A6539F86AA183781E5C1AF65286593C98370(L_51, NULL);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_52 = L_51;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_53 = ___2_page;
		NullCheck(L_52);
		L_52->___page_0 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->___page_0), (void*)L_53);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_54 = L_52;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_55 = ___1_referenceRegion;
		NullCheck(L_55);
		String_t* L_56 = L_55->___name_1;
		NullCheck(L_54);
		L_54->___name_1 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&L_54->___name_1), (void*)L_56);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_57 = L_54;
		float L_58 = V_9;
		NullCheck(L_57);
		L_57->___u_6 = L_58;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_59 = L_57;
		float L_60 = V_10;
		NullCheck(L_59);
		L_59->___u2_8 = L_60;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_61 = L_59;
		float L_62 = V_11;
		NullCheck(L_61);
		L_61->___v_7 = L_62;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_63 = L_61;
		float L_64 = V_12;
		NullCheck(L_63);
		L_63->___v2_9 = L_64;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_65 = L_63;
		NullCheck(L_65);
		L_65->___index_16 = (-1);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_66 = L_65;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		L_66->___width_4 = L_67;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_68 = L_66;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		L_68->___originalWidth_12 = L_69;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_70 = L_68;
		int32_t L_71 = V_4;
		NullCheck(L_70);
		L_70->___height_5 = L_71;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_72 = L_70;
		int32_t L_73 = V_6;
		NullCheck(L_72);
		L_72->___originalHeight_13 = L_73;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_74 = L_72;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		L_74->___offsetX_10 = ((float)L_75);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_76 = L_74;
		int32_t L_77 = V_8;
		NullCheck(L_76);
		L_76->___offsetY_11 = ((float)L_77);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_78 = L_76;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		L_78->___x_2 = L_79;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_80 = L_78;
		int32_t L_81 = V_2;
		NullCheck(L_80);
		L_80->___y_3 = L_81;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_82 = L_80;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_83 = ___1_referenceRegion;
		NullCheck(L_83);
		bool L_84 = L_83->___rotate_15;
		NullCheck(L_82);
		L_82->___rotate_15 = L_84;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_85 = L_82;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_86 = ___1_referenceRegion;
		NullCheck(L_86);
		int32_t L_87 = L_86->___degrees_14;
		NullCheck(L_85);
		L_85->___degrees_14 = L_87;
		return L_85;
	}
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::GetMainTexture(Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_GetMainTexture_m859D5A47C637E7669F0896FE75B1FBA33E59AE72 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var material = (region.page.rendererObject as Material);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___0_region;
		NullCheck(L_0);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_1 = L_0->___page_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___rendererObject_9;
		// return material.mainTexture as Texture2D;
		NullCheck(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)), NULL);
		return ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::GetTexture(Spine.AtlasRegion,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_GetTexture_m3D2F52C0FD712C81E56BCE62B25131FC3EBA651D (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, String_t* ___1_texturePropertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var material = (region.page.rendererObject as Material);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___0_region;
		NullCheck(L_0);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_1 = L_0->___page_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___rendererObject_9;
		// return material.GetTexture(texturePropertyName) as Texture2D;
		String_t* L_3 = ___1_texturePropertyName;
		NullCheck(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)), L_3, NULL);
		return ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_4, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Texture2D Spine.Unity.AttachmentTools.AtlasUtilities::GetTexture(Spine.AtlasRegion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AtlasUtilities_GetTexture_m9DB96ADBE178CD619F335F92CC58B2CD84394997 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, int32_t ___1_texturePropertyId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var material = (region.page.rendererObject as Material);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___0_region;
		NullCheck(L_0);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_1 = L_0->___page_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___rendererObject_9;
		// return material.GetTexture(texturePropertyId) as Texture2D;
		int32_t L_3 = ___1_texturePropertyId;
		NullCheck(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = Material_GetTexture_mE5D02B13E7AF35ABAE4FFC49E69FAF8F36F91191(((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)), L_3, NULL);
		return ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_4, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::CopyTextureAttributesFrom(UnityEngine.Texture2D,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities_CopyTextureAttributesFrom_mC2F97DBF0EE5E0056692DD49100EF83C3E3AB40B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_destination, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___1_source, const RuntimeMethod* method) 
{
	{
		// destination.filterMode = source.filterMode;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_destination;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___1_source;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Texture_get_filterMode_mFEF0AEA29E8468450EF85533965DCEBE66D02A45(L_1, NULL);
		NullCheck(L_0);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_0, L_2, NULL);
		// destination.anisoLevel = source.anisoLevel;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___0_destination;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___1_source;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Texture_get_anisoLevel_m49CB873A0A3A71281BAE34A9512803D76D2EA27F(L_4, NULL);
		NullCheck(L_3);
		Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F(L_3, L_5, NULL);
		// destination.wrapModeU = source.wrapModeU;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___0_destination;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___1_source;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Texture_get_wrapModeU_m9217A53AC4A40DA2486AAD664F286C28A32D7716(L_7, NULL);
		NullCheck(L_6);
		Texture_set_wrapModeU_m2002CCB73143182032BD5ED6C80AB9A0ED2A0981(L_6, L_8, NULL);
		// destination.wrapModeV = source.wrapModeV;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___0_destination;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___1_source;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Texture_get_wrapModeV_mDD1FD069227720CAA9433145CDFBAD42E680A212(L_10, NULL);
		NullCheck(L_9);
		Texture_set_wrapModeV_m3C79177BAE70103DDBF871896AF464513A0F919D(L_9, L_11, NULL);
		// destination.wrapModeW = source.wrapModeW;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ___0_destination;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___1_source;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Texture_get_wrapModeW_mE0C1A36F3EB7ABC2D4CD8CAB7BD0226E00229EB8(L_13, NULL);
		NullCheck(L_12);
		Texture_set_wrapModeW_mCE8F0DA65C902D6D1A95823892D48E10A6949863(L_12, L_14, NULL);
		// }
		return;
	}
}
// System.Single Spine.Unity.AttachmentTools.AtlasUtilities::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AtlasUtilities_InverseLerp_m104DD7BDE4D521C72596E07FCF424F80616A7283 (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	{
		// return (value - a) / (b - a);
		float L_0 = ___2_value;
		float L_1 = ___0_a;
		float L_2 = ___1_b;
		float L_3 = ___0_a;
		return ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/((float)il2cpp_codegen_subtract(L_2, L_3))));
	}
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasUtilities__cctor_mE1658277E9DD6D8A68A2EF91CF3011B4CC89ADC5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<AtlasRegion, int> existingRegions = new Dictionary<AtlasRegion, int>();
		Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388* L_0 = (Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388*)il2cpp_codegen_object_new(Dictionary_2_t7E04535A7B579CEB5FE2BF36976866A4ADE8F388_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231(L_0, Dictionary_2__ctor_mA78816E36EAB57D6CB5D4795E9EB5DB36A57A231_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___existingRegions_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___existingRegions_5), (void*)L_0);
		// static readonly List<int> regionIndices = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___regionIndices_6), (void*)L_1);
		// static readonly List<AtlasRegion> originalRegions = new List<AtlasRegion>();
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_2 = (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*)il2cpp_codegen_object_new(List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE(L_2, List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___originalRegions_7), (void*)L_2);
		// static readonly List<AtlasRegion> repackedRegions = new List<AtlasRegion>();
		List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0* L_3 = (List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0*)il2cpp_codegen_object_new(List_1_t84FF144E3F7EBC54FC7F245ED54398EF1D3942E0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE(L_3, List_1__ctor_mC01FB12C8CED6F48D54CD71778F5FF3FF5860BDE_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___repackedRegions_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___repackedRegions_8), (void*)L_3);
		// static List<Texture2D>[] texturesToPackAtParam = new List<Texture2D>[1];
		List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88* L_4 = (List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88*)(List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88*)SZArrayNew(List_1U5BU5D_tE58E0D52D8D69A7CE6F317D14AA2DC1B753E8A88_il2cpp_TypeInfo_var, (uint32_t)1);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___texturesToPackAtParam_9), (void*)L_4);
		// static List<Attachment> inoutAttachments = new List<Attachment>();
		List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8* L_5 = (List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8*)il2cpp_codegen_object_new(List_1_tC66FD1F0F69EE45361E5E46E6DDCE9BA28EBB2A8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5(L_5, List_1__ctor_m2339E1052EFC4235FB03A7F61B9DE0A8BE4494A5_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___inoutAttachments_10), (void*)L_5);
		// static Dictionary<IntAndAtlasRegionKey, Texture2D> CachedRegionTextures = new Dictionary<IntAndAtlasRegionKey, Texture2D>();
		Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816* L_6 = (Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816*)il2cpp_codegen_object_new(Dictionary_2_t27189265B00C5A941F43BFD18DB2542715F97816_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211(L_6, Dictionary_2__ctor_m743D85E17F5AA356B8F1B417104B2866BA904211_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTextures_11), (void*)L_6);
		// static List<Texture2D> CachedRegionTexturesList = new List<Texture2D>();
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_7 = (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*)il2cpp_codegen_object_new(List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28(L_7, List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_StaticFields*)il2cpp_codegen_static_fields_for(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var))->___CachedRegionTexturesList_12), (void*)L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_pinvoke(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_pinvoke_back(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke& marshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_pinvoke_cleanup(IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_com(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com& marshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_com_back(const IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com& marshaled, IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A& unmarshaled)
{
	Exception_t* ___region_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'region' of type 'IntAndAtlasRegionKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___region_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey
IL2CPP_EXTERN_C void IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshal_com_cleanup(IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A_marshaled_com& marshaled)
{
}
// System.Void Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::.ctor(System.Int32,Spine.AtlasRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntAndAtlasRegionKey__ctor_mDFD162AC2460EDF3D893352331273DA78EC3E71D (IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* __this, int32_t ___0_i, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, const RuntimeMethod* method) 
{
	{
		// this.i = i;
		int32_t L_0 = ___0_i;
		__this->___i_0 = L_0;
		// this.region = region;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_1 = ___1_region;
		__this->___region_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___region_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IntAndAtlasRegionKey__ctor_mDFD162AC2460EDF3D893352331273DA78EC3E71D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_i, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, const RuntimeMethod* method)
{
	IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A*>(__this + _offset);
	IntAndAtlasRegionKey__ctor_mDFD162AC2460EDF3D893352331273DA78EC3E71D(_thisAdjusted, ___0_i, ___1_region, method);
}
// System.Int32 Spine.Unity.AttachmentTools.AtlasUtilities/IntAndAtlasRegionKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF (IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* __this, const RuntimeMethod* method) 
{
	{
		// return i.GetHashCode() * 23 ^ region.GetHashCode();
		int32_t* L_0 = (&__this->___i_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_2 = __this->___region_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)23)))^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IntAndAtlasRegionKey_tCAE78073244D011942B12146D09733909DEEDF0A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IntAndAtlasRegionKey_GetHashCode_m9B65C74CD72827BF431EB5B747DE6D51C12CCDBF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Spine.Attachment Spine.Unity.AttachmentTools.AttachmentCloneExtensions::GetRemappedClone(Spine.Attachment,UnityEngine.Sprite,UnityEngine.Material,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* AttachmentCloneExtensions_GetRemappedClone_mC9420EBE3F69C2B4A00734C13069474C3E967E3C (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_o, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_sprite, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_sourceMaterial, bool ___3_premultiplyAlpha, bool ___4_cloneMeshAsLinked, bool ___5_useOriginalRegionSize, bool ___6_pivotShiftsMeshUVCoords, bool ___7_useOriginalRegionScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* V_0 = NULL;
	float V_1 = 0.0f;
	RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* V_2 = NULL;
	AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* G_B3_0 = NULL;
	{
		// var atlasRegion = premultiplyAlpha ? sprite.ToAtlasRegionPMAClone(sourceMaterial) : sprite.ToAtlasRegion(new Material(sourceMaterial) { mainTexture = sprite.texture });
		bool L_0 = ___3_premultiplyAlpha;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___1_sprite;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___2_sourceMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_3, L_2, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___1_sprite;
		NullCheck(L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6;
		L_6 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_5, NULL);
		NullCheck(L_4);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_4, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_7;
		L_7 = AtlasUtilities_ToAtlasRegion_m7F5F8420A6B9931B3084BF7F6D8FC6C602031DB2(L_1, L_4, NULL);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_001d:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = ___1_sprite;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___2_sourceMaterial;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_10;
		L_10 = AtlasUtilities_ToAtlasRegionPMAClone_mE3717F5332D8441EE93A797BF707051F9CFBA475(L_8, L_9, 4, (bool)0, NULL);
		G_B3_0 = L_10;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		// if (!pivotShiftsMeshUVCoords && o is MeshAttachment) {
		bool L_11 = ___6_pivotShiftsMeshUVCoords;
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_12 = ___0_o;
		if (!((MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E*)IsInstClass((RuntimeObject*)L_12, MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		// atlasRegion.offsetX = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_13 = V_0;
		NullCheck(L_13);
		L_13->___offsetX_10 = (0.0f);
		// atlasRegion.offsetY = 0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_14 = V_0;
		NullCheck(L_14);
		L_14->___offsetY_11 = (0.0f);
	}

IL_0049:
	{
		// float scale = 1f / sprite.pixelsPerUnit;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = ___1_sprite;
		NullCheck(L_15);
		float L_16;
		L_16 = Sprite_get_pixelsPerUnit_m5A5984BC298062DF4CD2CB3E8534443FFCF31826(L_15, NULL);
		V_1 = ((float)((1.0f)/L_16));
		// if (useOriginalRegionScale) {
		bool L_17 = ___7_useOriginalRegionScale;
		if (!L_17)
		{
			goto IL_0072;
		}
	}
	{
		// var regionAttachment = o as RegionAttachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_18 = ___0_o;
		V_2 = ((RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D*)IsInstClass((RuntimeObject*)L_18, RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var));
		// if (regionAttachment != null)
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_19 = V_2;
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		// scale = regionAttachment.Width / regionAttachment.RegionOriginalWidth;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_20 = V_2;
		NullCheck(L_20);
		float L_21;
		L_21 = RegionAttachment_get_Width_m14141567360E0454B2FD8E7843505EDE3F3333F3_inline(L_20, NULL);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_22 = V_2;
		NullCheck(L_22);
		float L_23;
		L_23 = RegionAttachment_get_RegionOriginalWidth_m8851323F6B4EE8356AF37A6151908ECAF0920717_inline(L_22, NULL);
		V_1 = ((float)(L_21/L_23));
	}

IL_0072:
	{
		// return o.GetRemappedClone(atlasRegion, cloneMeshAsLinked, useOriginalRegionSize, scale);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_24 = ___0_o;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_25 = V_0;
		bool L_26 = ___4_cloneMeshAsLinked;
		bool L_27 = ___5_useOriginalRegionSize;
		float L_28 = V_1;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_29;
		L_29 = AttachmentCloneExtensions_GetRemappedClone_mCB365C1CF503BF9FD54E42624E4D95E48BFBFE65(L_24, L_25, L_26, L_27, L_28, NULL);
		return L_29;
	}
}
// Spine.Attachment Spine.Unity.AttachmentTools.AttachmentCloneExtensions::GetRemappedClone(Spine.Attachment,Spine.AtlasRegion,System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* AttachmentCloneExtensions_GetRemappedClone_mCB365C1CF503BF9FD54E42624E4D95E48BFBFE65 (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_o, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_atlasRegion, bool ___2_cloneMeshAsLinked, bool ___3_useOriginalRegionSize, float ___4_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* V_0 = NULL;
	RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* V_1 = NULL;
	MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* V_2 = NULL;
	MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* G_B8_0 = NULL;
	{
		// var regionAttachment = o as RegionAttachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_0 = ___0_o;
		V_0 = ((RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D*)IsInstClass((RuntimeObject*)L_0, RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var));
		// if (regionAttachment != null) {
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// RegionAttachment newAttachment = (RegionAttachment)regionAttachment.Copy();
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_2 = V_0;
		NullCheck(L_2);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_3;
		L_3 = VirtualFuncInvoker0< Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* >::Invoke(4 /* Spine.Attachment Spine.Attachment::Copy() */, L_2);
		V_1 = ((RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D*)CastclassClass((RuntimeObject*)L_3, RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var));
		// newAttachment.SetRegion(atlasRegion, false);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_4 = V_1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_5 = ___1_atlasRegion;
		AttachmentRegionExtensions_SetRegion_mC36BC4AA5D284DFAD527193D55DAD7008B085DE1(L_4, L_5, (bool)0, NULL);
		// if (!useOriginalRegionSize) {
		bool L_6 = ___3_useOriginalRegionSize;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		// newAttachment.Width = atlasRegion.width * scale;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_7 = V_1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_8 = ___1_atlasRegion;
		NullCheck(L_8);
		int32_t L_9 = L_8->___width_4;
		float L_10 = ___4_scale;
		NullCheck(L_7);
		RegionAttachment_set_Width_mDA18FF1DD1896F3D0FCEF7BA5210D23F69AA1111_inline(L_7, ((float)il2cpp_codegen_multiply(((float)L_9), L_10)), NULL);
		// newAttachment.Height = atlasRegion.height * scale;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_11 = V_1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_12 = ___1_atlasRegion;
		NullCheck(L_12);
		int32_t L_13 = L_12->___height_5;
		float L_14 = ___4_scale;
		NullCheck(L_11);
		RegionAttachment_set_Height_m6DA767C64695CE512D739BFFA4F62B010A6FAF23_inline(L_11, ((float)il2cpp_codegen_multiply(((float)L_13), L_14)), NULL);
	}

IL_0041:
	{
		// newAttachment.UpdateOffset();
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_15 = V_1;
		NullCheck(L_15);
		RegionAttachment_UpdateOffset_mB6A01A3DAC5E71C1E54004D3D82BA60BE88D2CB6(L_15, NULL);
		// return newAttachment;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		// var meshAttachment = o as MeshAttachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_17 = ___0_o;
		V_2 = ((MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E*)IsInstClass((RuntimeObject*)L_17, MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var));
		// if (meshAttachment != null) {
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_18 = V_2;
		if (!L_18)
		{
			goto IL_0072;
		}
	}
	{
		// MeshAttachment newAttachment = cloneMeshAsLinked ? meshAttachment.NewLinkedMesh() : (MeshAttachment)meshAttachment.Copy();
		bool L_19 = ___2_cloneMeshAsLinked;
		if (L_19)
		{
			goto IL_0063;
		}
	}
	{
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_20 = V_2;
		NullCheck(L_20);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_21;
		L_21 = VirtualFuncInvoker0< Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* >::Invoke(4 /* Spine.Attachment Spine.Attachment::Copy() */, L_20);
		G_B8_0 = ((MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E*)CastclassClass((RuntimeObject*)L_21, MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var));
		goto IL_0069;
	}

IL_0063:
	{
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_22 = V_2;
		NullCheck(L_22);
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_23;
		L_23 = MeshAttachment_NewLinkedMesh_mB9F9C1166D8E47820A1576EBE1FE60BCA9979477(L_22, NULL);
		G_B8_0 = L_23;
	}

IL_0069:
	{
		// newAttachment.SetRegion(atlasRegion);
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_24 = G_B8_0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_25 = ___1_atlasRegion;
		AttachmentRegionExtensions_SetRegion_m75CFA3FDEE411B2C1721EFBB3FCA18E3375BFA85(L_24, L_25, (bool)1, NULL);
		// return newAttachment;
		return L_24;
	}

IL_0072:
	{
		// return o.Copy();
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_26 = ___0_o;
		NullCheck(L_26);
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_27;
		L_27 = VirtualFuncInvoker0< Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* >::Invoke(4 /* Spine.Attachment Spine.Attachment::Copy() */, L_26);
		return L_27;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.Attachment,Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetRegion_mA5054A4B65BE1398631636975A02F76EEFDC9F67 (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* ___0_attachment, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, bool ___2_updateOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* V_0 = NULL;
	MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* V_1 = NULL;
	{
		// var regionAttachment = attachment as RegionAttachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_0 = ___0_attachment;
		V_0 = ((RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D*)IsInstClass((RuntimeObject*)L_0, RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var));
		// if (regionAttachment != null)
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// regionAttachment.SetRegion(region, updateOffset);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_2 = V_0;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_3 = ___1_region;
		bool L_4 = ___2_updateOffset;
		AttachmentRegionExtensions_SetRegion_mC36BC4AA5D284DFAD527193D55DAD7008B085DE1(L_2, L_3, L_4, NULL);
	}

IL_0012:
	{
		// var meshAttachment = attachment as MeshAttachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_5 = ___0_attachment;
		V_1 = ((MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E*)IsInstClass((RuntimeObject*)L_5, MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E_il2cpp_TypeInfo_var));
		// if (meshAttachment != null)
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// meshAttachment.SetRegion(region, updateOffset);
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_7 = V_1;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_8 = ___1_region;
		bool L_9 = ___2_updateOffset;
		AttachmentRegionExtensions_SetRegion_m75CFA3FDEE411B2C1721EFBB3FCA18E3375BFA85(L_7, L_8, L_9, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.RegionAttachment,Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetRegion_mC36BC4AA5D284DFAD527193D55DAD7008B085DE1 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_attachment, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, bool ___2_updateOffset, const RuntimeMethod* method) 
{
	{
		// if (region == null) throw new System.ArgumentNullException("region");
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___1_region;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (region == null) throw new System.ArgumentNullException("region");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_SetRegion_mC36BC4AA5D284DFAD527193D55DAD7008B085DE1_RuntimeMethod_var)));
	}

IL_000e:
	{
		// attachment.RendererObject = region;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_2 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_3 = ___1_region;
		NullCheck(L_2);
		RegionAttachment_set_RendererObject_m8EEE8E64012964F145B7C56323F23F58B4F75D7F_inline(L_2, L_3, NULL);
		// attachment.SetUVs(region.u, region.v, region.u2, region.v2, region.degrees);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_4 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_5 = ___1_region;
		NullCheck(L_5);
		float L_6 = L_5->___u_6;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_7 = ___1_region;
		NullCheck(L_7);
		float L_8 = L_7->___v_7;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_9 = ___1_region;
		NullCheck(L_9);
		float L_10 = L_9->___u2_8;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_11 = ___1_region;
		NullCheck(L_11);
		float L_12 = L_11->___v2_9;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_13 = ___1_region;
		NullCheck(L_13);
		int32_t L_14 = L_13->___degrees_14;
		NullCheck(L_4);
		RegionAttachment_SetUVs_m2193D51DDEEF9EFA366FE9C2BA7EC0BBA6F67F30(L_4, L_6, L_8, L_10, L_12, L_14, NULL);
		// attachment.RegionOffsetX = region.offsetX;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_15 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_16 = ___1_region;
		NullCheck(L_16);
		float L_17 = L_16->___offsetX_10;
		NullCheck(L_15);
		RegionAttachment_set_RegionOffsetX_m3C50AA60A13162B8A70EAB94E68EA89125FE47F3_inline(L_15, L_17, NULL);
		// attachment.RegionOffsetY = region.offsetY;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_18 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_19 = ___1_region;
		NullCheck(L_19);
		float L_20 = L_19->___offsetY_11;
		NullCheck(L_18);
		RegionAttachment_set_RegionOffsetY_m5AA61B1532C08DBB7E01DCAB848F3659A05E0246_inline(L_18, L_20, NULL);
		// attachment.RegionWidth = region.width;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_21 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_22 = ___1_region;
		NullCheck(L_22);
		int32_t L_23 = L_22->___width_4;
		NullCheck(L_21);
		RegionAttachment_set_RegionWidth_mF4BD144BE00C59B00BD6E13409978B40E5653466_inline(L_21, ((float)L_23), NULL);
		// attachment.RegionHeight = region.height;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_24 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_25 = ___1_region;
		NullCheck(L_25);
		int32_t L_26 = L_25->___height_5;
		NullCheck(L_24);
		RegionAttachment_set_RegionHeight_mFE627A8FD8D3E654CA6296FD3D1F5B6CB00D5332_inline(L_24, ((float)L_26), NULL);
		// attachment.RegionOriginalWidth = region.originalWidth;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_27 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_28 = ___1_region;
		NullCheck(L_28);
		int32_t L_29 = L_28->___originalWidth_12;
		NullCheck(L_27);
		RegionAttachment_set_RegionOriginalWidth_mBDEF05EA1766E307117D1FBF8664C15A9DD4A802_inline(L_27, ((float)L_29), NULL);
		// attachment.RegionOriginalHeight = region.originalHeight;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_30 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_31 = ___1_region;
		NullCheck(L_31);
		int32_t L_32 = L_31->___originalHeight_13;
		NullCheck(L_30);
		RegionAttachment_set_RegionOriginalHeight_m4523E2E8A3979ED2303E7933658AB0C6E2F589FE_inline(L_30, ((float)L_32), NULL);
		// if (updateOffset) attachment.UpdateOffset();
		bool L_33 = ___2_updateOffset;
		if (!L_33)
		{
			goto IL_008e;
		}
	}
	{
		// if (updateOffset) attachment.UpdateOffset();
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_34 = ___0_attachment;
		NullCheck(L_34);
		RegionAttachment_UpdateOffset_mB6A01A3DAC5E71C1E54004D3D82BA60BE88D2CB6(L_34, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetRegion(Spine.MeshAttachment,Spine.AtlasRegion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetRegion_m75CFA3FDEE411B2C1721EFBB3FCA18E3375BFA85 (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* ___0_attachment, AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___1_region, bool ___2_updateUVs, const RuntimeMethod* method) 
{
	{
		// if (region == null) throw new System.ArgumentNullException("region");
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_0 = ___1_region;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (region == null) throw new System.ArgumentNullException("region");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_SetRegion_m75CFA3FDEE411B2C1721EFBB3FCA18E3375BFA85_RuntimeMethod_var)));
	}

IL_000e:
	{
		// attachment.RendererObject = region;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_2 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_3 = ___1_region;
		NullCheck(L_2);
		MeshAttachment_set_RendererObject_m7F6EDB8B7B44540EC7F2B74A59F62F41F7651B85_inline(L_2, L_3, NULL);
		// attachment.RegionU = region.u;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_4 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_5 = ___1_region;
		NullCheck(L_5);
		float L_6 = L_5->___u_6;
		NullCheck(L_4);
		MeshAttachment_set_RegionU_mA29BBC820A268D47F122CF93D81CF7585428FF71_inline(L_4, L_6, NULL);
		// attachment.RegionV = region.v;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_7 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_8 = ___1_region;
		NullCheck(L_8);
		float L_9 = L_8->___v_7;
		NullCheck(L_7);
		MeshAttachment_set_RegionV_m17296274EE0D8E7B92F3550C005ECA85E13A979A_inline(L_7, L_9, NULL);
		// attachment.RegionU2 = region.u2;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_10 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_11 = ___1_region;
		NullCheck(L_11);
		float L_12 = L_11->___u2_8;
		NullCheck(L_10);
		MeshAttachment_set_RegionU2_m9D498345B1212A71F74DED27E2E693A7EB18B9E4_inline(L_10, L_12, NULL);
		// attachment.RegionV2 = region.v2;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_13 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_14 = ___1_region;
		NullCheck(L_14);
		float L_15 = L_14->___v2_9;
		NullCheck(L_13);
		MeshAttachment_set_RegionV2_m44E726428EB25BC0405B6650030F2CC29863EA0E_inline(L_13, L_15, NULL);
		// attachment.RegionDegrees = region.degrees;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_16 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_17 = ___1_region;
		NullCheck(L_17);
		int32_t L_18 = L_17->___degrees_14;
		NullCheck(L_16);
		MeshAttachment_set_RegionDegrees_mB0ED3B8FDF03BA726B4F16A13050E26E5B0B018D_inline(L_16, L_18, NULL);
		// attachment.RegionOffsetX = region.offsetX;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_19 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_20 = ___1_region;
		NullCheck(L_20);
		float L_21 = L_20->___offsetX_10;
		NullCheck(L_19);
		MeshAttachment_set_RegionOffsetX_mED74235E246F081A01DAA96BFC350C8F30B64DD0_inline(L_19, L_21, NULL);
		// attachment.RegionOffsetY = region.offsetY;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_22 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_23 = ___1_region;
		NullCheck(L_23);
		float L_24 = L_23->___offsetY_11;
		NullCheck(L_22);
		MeshAttachment_set_RegionOffsetY_m7D95F835B1C753B69FD91C61B1D0A5ED8DDCF203_inline(L_22, L_24, NULL);
		// attachment.RegionWidth = region.width;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_25 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_26 = ___1_region;
		NullCheck(L_26);
		int32_t L_27 = L_26->___width_4;
		NullCheck(L_25);
		MeshAttachment_set_RegionWidth_m4258CEDF5057AA64914DF7E6B539D89133D7815E_inline(L_25, ((float)L_27), NULL);
		// attachment.RegionHeight = region.height;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_28 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_29 = ___1_region;
		NullCheck(L_29);
		int32_t L_30 = L_29->___height_5;
		NullCheck(L_28);
		MeshAttachment_set_RegionHeight_mFD4E04C0A9BEA1C41802E5D6035A2384C10EC1F5_inline(L_28, ((float)L_30), NULL);
		// attachment.RegionOriginalWidth = region.originalWidth;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_31 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_32 = ___1_region;
		NullCheck(L_32);
		int32_t L_33 = L_32->___originalWidth_12;
		NullCheck(L_31);
		MeshAttachment_set_RegionOriginalWidth_m07B195E4DCD0BA72D15ACDA1E515CEE86C3D2E07_inline(L_31, ((float)L_33), NULL);
		// attachment.RegionOriginalHeight = region.originalHeight;
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_34 = ___0_attachment;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_35 = ___1_region;
		NullCheck(L_35);
		int32_t L_36 = L_35->___originalHeight_13;
		NullCheck(L_34);
		MeshAttachment_set_RegionOriginalHeight_m3BEC85EC85B76C31288D27B53A149E9D1B68DE96_inline(L_34, ((float)L_36), NULL);
		// if (updateUVs) attachment.UpdateUVs();
		bool L_37 = ___2_updateUVs;
		if (!L_37)
		{
			goto IL_00a6;
		}
	}
	{
		// if (updateUVs) attachment.UpdateUVs();
		MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* L_38 = ___0_attachment;
		NullCheck(L_38);
		MeshAttachment_UpdateUVs_m6A54FC6078DC22BBDA266722EF74B1F995C81AA3(L_38, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(UnityEngine.Sprite,UnityEngine.Material,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachment_m63D5ACC692DAAFF1A9696A0CDEDC9A2E6FC75DFF (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, float ___2_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return sprite.ToRegionAttachment(material.ToSpineAtlasPage(), rotation);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___1_material;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_2;
		L_2 = AtlasUtilities_ToSpineAtlasPage_m2B11BB55C937C2A2A8BF0D7477B7C977C7914F25(L_1, NULL);
		float L_3 = ___2_rotation;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_4;
		L_4 = AttachmentRegionExtensions_ToRegionAttachment_mCA58174908B9979D78402165211E63041B77906E(L_0, L_2, L_3, NULL);
		return L_4;
	}
}
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(UnityEngine.Sprite,Spine.AtlasPage,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachment_mCA58174908B9979D78402165211E63041B77906E (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* ___1_page, float ___2_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (sprite == null) throw new System.ArgumentNullException("sprite");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (sprite == null) throw new System.ArgumentNullException("sprite");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_ToRegionAttachment_mCA58174908B9979D78402165211E63041B77906E_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (page == null) throw new System.ArgumentNullException("page");
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_3 = ___1_page;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (page == null) throw new System.ArgumentNullException("page");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95834A87D74B874FA2D0E60D439038ABD10BCBB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_ToRegionAttachment_mCA58174908B9979D78402165211E63041B77906E_RuntimeMethod_var)));
	}

IL_0022:
	{
		// var region = sprite.ToAtlasRegion(page);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___0_sprite;
		AtlasPage_tF9A721A7937880313EC532B5685B884ED8CEAEC7* L_6 = ___1_page;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_7;
		L_7 = AtlasUtilities_ToAtlasRegion_m81FFD41991D370CB12999C06399B36C42855E758(L_5, L_6, NULL);
		// var unitsPerPixel = 1f / sprite.pixelsPerUnit;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = ___0_sprite;
		NullCheck(L_8);
		float L_9;
		L_9 = Sprite_get_pixelsPerUnit_m5A5984BC298062DF4CD2CB3E8534443FFCF31826(L_8, NULL);
		V_0 = ((float)((1.0f)/L_9));
		// return region.ToRegionAttachment(sprite.name, unitsPerPixel, rotation);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = ___0_sprite;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		float L_12 = V_0;
		float L_13 = ___2_rotation;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_14;
		L_14 = AttachmentRegionExtensions_ToRegionAttachment_m52A713CB6320B05B08E5274A95DD7090DB3049F7(L_7, L_11, L_12, L_13, NULL);
		return L_14;
	}
}
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachmentPMAClone(UnityEngine.Sprite,UnityEngine.Shader,UnityEngine.TextureFormat,System.Boolean,UnityEngine.Material,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachmentPMAClone_mF79B9F7CDC7B6784AC4B0DF4C784FF3756F55637 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___1_shader, int32_t ___2_textureFormat, bool ___3_mipmaps, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___4_materialPropertySource, float ___5_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (sprite == null) throw new System.ArgumentNullException("sprite");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (sprite == null) throw new System.ArgumentNullException("sprite");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_ToRegionAttachmentPMAClone_mF79B9F7CDC7B6784AC4B0DF4C784FF3756F55637_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (shader == null) throw new System.ArgumentNullException("shader");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = ___1_shader;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// if (shader == null) throw new System.ArgumentNullException("shader");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7453D784A8909E62B8E93E94A5E22CA83D87811)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_ToRegionAttachmentPMAClone_mF79B9F7CDC7B6784AC4B0DF4C784FF3756F55637_RuntimeMethod_var)));
	}

IL_0028:
	{
		// var region = sprite.ToAtlasRegionPMAClone(shader, textureFormat, mipmaps, materialPropertySource);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = ___0_sprite;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = ___1_shader;
		int32_t L_8 = ___2_textureFormat;
		bool L_9 = ___3_mipmaps;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ___4_materialPropertySource;
		il2cpp_codegen_runtime_class_init_inline(AtlasUtilities_tBB9E7CF55ACB82D16FFC47077D972C4311AE0461_il2cpp_TypeInfo_var);
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_11;
		L_11 = AtlasUtilities_ToAtlasRegionPMAClone_m5F7AC7F498528B9613878E1C13E379F9D0FB6FFE(L_6, L_7, L_8, L_9, L_10, NULL);
		// var unitsPerPixel = 1f / sprite.pixelsPerUnit;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = ___0_sprite;
		NullCheck(L_12);
		float L_13;
		L_13 = Sprite_get_pixelsPerUnit_m5A5984BC298062DF4CD2CB3E8534443FFCF31826(L_12, NULL);
		V_0 = ((float)((1.0f)/L_13));
		// return region.ToRegionAttachment(sprite.name, unitsPerPixel, rotation);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = ___0_sprite;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		float L_16 = V_0;
		float L_17 = ___5_rotation;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_18;
		L_18 = AttachmentRegionExtensions_ToRegionAttachment_m52A713CB6320B05B08E5274A95DD7090DB3049F7(L_11, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachmentPMAClone(UnityEngine.Sprite,UnityEngine.Material,UnityEngine.TextureFormat,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachmentPMAClone_mE14F4BE848F9E24034FA409E9FF3F8B08639372E (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_materialPropertySource, int32_t ___2_textureFormat, bool ___3_mipmaps, float ___4_rotation, const RuntimeMethod* method) 
{
	{
		// return sprite.ToRegionAttachmentPMAClone(materialPropertySource.shader, textureFormat, mipmaps, materialPropertySource, rotation);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___1_materialPropertySource;
		NullCheck(L_1);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_1, NULL);
		int32_t L_3 = ___2_textureFormat;
		bool L_4 = ___3_mipmaps;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___1_materialPropertySource;
		float L_6 = ___4_rotation;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_7;
		L_7 = AttachmentRegionExtensions_ToRegionAttachmentPMAClone_mF79B9F7CDC7B6784AC4B0DF4C784FF3756F55637(L_0, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// Spine.RegionAttachment Spine.Unity.AttachmentTools.AttachmentRegionExtensions::ToRegionAttachment(Spine.AtlasRegion,System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* AttachmentRegionExtensions_ToRegionAttachment_m52A713CB6320B05B08E5274A95DD7090DB3049F7 (AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* ___0_region, String_t* ___1_attachmentName, float ___2_scale, float ___3_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(attachmentName)) throw new System.ArgumentException("attachmentName can't be null or empty.", "attachmentName");
		String_t* L_0 = ___1_attachmentName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (string.IsNullOrEmpty(attachmentName)) throw new System.ArgumentException("attachmentName can't be null or empty.", "attachmentName");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F907E97CEBB2F289D6DAFF932A32A6927EF50E9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6E8EAA7C9BC4E951A68B3775994DF8C02C0BB69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_ToRegionAttachment_m52A713CB6320B05B08E5274A95DD7090DB3049F7_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (region == null) throw new System.ArgumentNullException("region");
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_3 = ___0_region;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		// if (region == null) throw new System.ArgumentNullException("region");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttachmentRegionExtensions_ToRegionAttachment_m52A713CB6320B05B08E5274A95DD7090DB3049F7_RuntimeMethod_var)));
	}

IL_0026:
	{
		// var attachment = new RegionAttachment(attachmentName);
		String_t* L_5 = ___1_attachmentName;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_6 = (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D*)il2cpp_codegen_object_new(RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RegionAttachment__ctor_m2DB4465297C74AA14C4BF3B5EB73893CD06DD72F(L_6, L_5, NULL);
		// attachment.RendererObject = region;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_7 = L_6;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_8 = ___0_region;
		NullCheck(L_7);
		RegionAttachment_set_RendererObject_m8EEE8E64012964F145B7C56323F23F58B4F75D7F_inline(L_7, L_8, NULL);
		// attachment.SetUVs(region.u, region.v, region.u2, region.v2, region.degrees);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_9 = L_7;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_10 = ___0_region;
		NullCheck(L_10);
		float L_11 = L_10->___u_6;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_12 = ___0_region;
		NullCheck(L_12);
		float L_13 = L_12->___v_7;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_14 = ___0_region;
		NullCheck(L_14);
		float L_15 = L_14->___u2_8;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_16 = ___0_region;
		NullCheck(L_16);
		float L_17 = L_16->___v2_9;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_18 = ___0_region;
		NullCheck(L_18);
		int32_t L_19 = L_18->___degrees_14;
		NullCheck(L_9);
		RegionAttachment_SetUVs_m2193D51DDEEF9EFA366FE9C2BA7EC0BBA6F67F30(L_9, L_11, L_13, L_15, L_17, L_19, NULL);
		// attachment.RegionOffsetX = region.offsetX;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_20 = L_9;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_21 = ___0_region;
		NullCheck(L_21);
		float L_22 = L_21->___offsetX_10;
		NullCheck(L_20);
		RegionAttachment_set_RegionOffsetX_m3C50AA60A13162B8A70EAB94E68EA89125FE47F3_inline(L_20, L_22, NULL);
		// attachment.RegionOffsetY = region.offsetY;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_23 = L_20;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_24 = ___0_region;
		NullCheck(L_24);
		float L_25 = L_24->___offsetY_11;
		NullCheck(L_23);
		RegionAttachment_set_RegionOffsetY_m5AA61B1532C08DBB7E01DCAB848F3659A05E0246_inline(L_23, L_25, NULL);
		// attachment.RegionWidth = region.width;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_26 = L_23;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_27 = ___0_region;
		NullCheck(L_27);
		int32_t L_28 = L_27->___width_4;
		NullCheck(L_26);
		RegionAttachment_set_RegionWidth_mF4BD144BE00C59B00BD6E13409978B40E5653466_inline(L_26, ((float)L_28), NULL);
		// attachment.RegionHeight = region.height;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_29 = L_26;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_30 = ___0_region;
		NullCheck(L_30);
		int32_t L_31 = L_30->___height_5;
		NullCheck(L_29);
		RegionAttachment_set_RegionHeight_mFE627A8FD8D3E654CA6296FD3D1F5B6CB00D5332_inline(L_29, ((float)L_31), NULL);
		// attachment.RegionOriginalWidth = region.originalWidth;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_32 = L_29;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_33 = ___0_region;
		NullCheck(L_33);
		int32_t L_34 = L_33->___originalWidth_12;
		NullCheck(L_32);
		RegionAttachment_set_RegionOriginalWidth_mBDEF05EA1766E307117D1FBF8664C15A9DD4A802_inline(L_32, ((float)L_34), NULL);
		// attachment.RegionOriginalHeight = region.originalHeight;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_35 = L_32;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_36 = ___0_region;
		NullCheck(L_36);
		int32_t L_37 = L_36->___originalHeight_13;
		NullCheck(L_35);
		RegionAttachment_set_RegionOriginalHeight_m4523E2E8A3979ED2303E7933658AB0C6E2F589FE_inline(L_35, ((float)L_37), NULL);
		// attachment.Path = region.name;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_38 = L_35;
		AtlasRegion_tD6D44C901C98167573943A24EB1E4BDBBDF3D6E0* L_39 = ___0_region;
		NullCheck(L_39);
		String_t* L_40 = L_39->___name_1;
		NullCheck(L_38);
		RegionAttachment_set_Path_mBA2FD73DCE3335E6B2F34DF80800CE1B5C74DF6D_inline(L_38, L_40, NULL);
		// attachment.ScaleX = 1;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_41 = L_38;
		NullCheck(L_41);
		RegionAttachment_set_ScaleX_m388F66518403BB44D706961891A1959D90983239_inline(L_41, (1.0f), NULL);
		// attachment.ScaleY = 1;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_42 = L_41;
		NullCheck(L_42);
		RegionAttachment_set_ScaleY_m4365C70D54331ECCD92840F3BFE1A20217BF6153_inline(L_42, (1.0f), NULL);
		// attachment.Rotation = rotation;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_43 = L_42;
		float L_44 = ___3_rotation;
		NullCheck(L_43);
		RegionAttachment_set_Rotation_m7397C163BE93035882E1C2E24D14CC6BCCCB9266_inline(L_43, L_44, NULL);
		// attachment.R = 1;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_45 = L_43;
		NullCheck(L_45);
		RegionAttachment_set_R_m801BE04357A97DD6784929D25F7387B4AA70A1E4_inline(L_45, (1.0f), NULL);
		// attachment.G = 1;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_46 = L_45;
		NullCheck(L_46);
		RegionAttachment_set_G_mC3535255A8FD5348DF13AF7A3498C5E99B989A36_inline(L_46, (1.0f), NULL);
		// attachment.B = 1;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_47 = L_46;
		NullCheck(L_47);
		RegionAttachment_set_B_mDF37D72C03FD51DCAB15568D50DDE05CD5A5E48C_inline(L_47, (1.0f), NULL);
		// attachment.A = 1;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_48 = L_47;
		NullCheck(L_48);
		RegionAttachment_set_A_mDA7BD3D9848F651029D33DE745011881A80BBB6C_inline(L_48, (1.0f), NULL);
		// attachment.Width = attachment.RegionOriginalWidth * scale;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_49 = L_48;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_50 = L_49;
		NullCheck(L_50);
		float L_51;
		L_51 = RegionAttachment_get_RegionOriginalWidth_m8851323F6B4EE8356AF37A6151908ECAF0920717_inline(L_50, NULL);
		float L_52 = ___2_scale;
		NullCheck(L_50);
		RegionAttachment_set_Width_mDA18FF1DD1896F3D0FCEF7BA5210D23F69AA1111_inline(L_50, ((float)il2cpp_codegen_multiply(L_51, L_52)), NULL);
		// attachment.Height = attachment.RegionOriginalHeight * scale;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_53 = L_49;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_54 = L_53;
		NullCheck(L_54);
		float L_55;
		L_55 = RegionAttachment_get_RegionOriginalHeight_m01E32623A29206F945E583CDC584B7F1D6685164_inline(L_54, NULL);
		float L_56 = ___2_scale;
		NullCheck(L_54);
		RegionAttachment_set_Height_m6DA767C64695CE512D739BFFA4F62B010A6FAF23_inline(L_54, ((float)il2cpp_codegen_multiply(L_55, L_56)), NULL);
		// attachment.SetColor(Color.white);
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_57 = L_53;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58;
		L_58 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		SkeletonExtensions_SetColor_mE724E85D78279FB618CA6AD80682C8974DF0AD7D(L_57, L_58, NULL);
		// attachment.UpdateOffset();
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_59 = L_57;
		NullCheck(L_59);
		RegionAttachment_UpdateOffset_mB6A01A3DAC5E71C1E54004D3D82BA60BE88D2CB6(L_59, NULL);
		// return attachment;
		return L_59;
	}
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetScale(Spine.RegionAttachment,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetScale_mB49D1B48B0759EC79060B7F59210F29BCDD999F9 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_regionAttachment, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scale, const RuntimeMethod* method) 
{
	{
		// regionAttachment.ScaleX = scale.x;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_regionAttachment;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_scale;
		float L_2 = L_1.___x_0;
		NullCheck(L_0);
		RegionAttachment_set_ScaleX_m388F66518403BB44D706961891A1959D90983239_inline(L_0, L_2, NULL);
		// regionAttachment.ScaleY = scale.y;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_3 = ___0_regionAttachment;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_scale;
		float L_5 = L_4.___y_1;
		NullCheck(L_3);
		RegionAttachment_set_ScaleY_m4365C70D54331ECCD92840F3BFE1A20217BF6153_inline(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetScale(Spine.RegionAttachment,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetScale_mDC08AFC1C82179F678FA2A0AD657727377068C9C (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_regionAttachment, float ___1_x, float ___2_y, const RuntimeMethod* method) 
{
	{
		// regionAttachment.ScaleX = x;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_regionAttachment;
		float L_1 = ___1_x;
		NullCheck(L_0);
		RegionAttachment_set_ScaleX_m388F66518403BB44D706961891A1959D90983239_inline(L_0, L_1, NULL);
		// regionAttachment.ScaleY = y;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_2 = ___0_regionAttachment;
		float L_3 = ___2_y;
		NullCheck(L_2);
		RegionAttachment_set_ScaleY_m4365C70D54331ECCD92840F3BFE1A20217BF6153_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetPositionOffset(Spine.RegionAttachment,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetPositionOffset_m9C821B23DE9EAF32D9FF238443D0B1E63C12E9A9 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_regionAttachment, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_offset, const RuntimeMethod* method) 
{
	{
		// regionAttachment.X = offset.x;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_regionAttachment;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_offset;
		float L_2 = L_1.___x_0;
		NullCheck(L_0);
		RegionAttachment_set_X_m400D0EAC2A15262F88D1FE77FF8001CFA267373B_inline(L_0, L_2, NULL);
		// regionAttachment.Y = offset.y;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_3 = ___0_regionAttachment;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_offset;
		float L_5 = L_4.___y_1;
		NullCheck(L_3);
		RegionAttachment_set_Y_mC9652C8FE69CE45766637A25C1BC577085BDB31E_inline(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetPositionOffset(Spine.RegionAttachment,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetPositionOffset_m39E29A6B84220D5A41C250265EAAAA75FE099170 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_regionAttachment, float ___1_x, float ___2_y, const RuntimeMethod* method) 
{
	{
		// regionAttachment.X = x;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_regionAttachment;
		float L_1 = ___1_x;
		NullCheck(L_0);
		RegionAttachment_set_X_m400D0EAC2A15262F88D1FE77FF8001CFA267373B_inline(L_0, L_1, NULL);
		// regionAttachment.Y = y;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_2 = ___0_regionAttachment;
		float L_3 = ___2_y;
		NullCheck(L_2);
		RegionAttachment_set_Y_mC9652C8FE69CE45766637A25C1BC577085BDB31E_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.AttachmentTools.AttachmentRegionExtensions::SetRotation(Spine.RegionAttachment,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachmentRegionExtensions_SetRotation_mD09AB953520B4A80562F847CD79A60410BE27168 (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* ___0_regionAttachment, float ___1_rotation, const RuntimeMethod* method) 
{
	{
		// regionAttachment.Rotation = rotation;
		RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* L_0 = ___0_regionAttachment;
		float L_1 = ___1_rotation;
		NullCheck(L_0);
		RegionAttachment_set_Rotation_m7397C163BE93035882E1C2E24D14CC6BCCCB9266_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlotData_get_Index_m1121CFC71E439C552906D3A9A6FF38A1B76748CC_inline (SlotData_t0301519741B248AFC95ADFF4C882677A25D70548* __this, const RuntimeMethod* method) 
{
	{
		// public int Index { get { return index; } }
		int32_t L_0 = __this->___index_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_R_m957C55591D3D8C9A1F0A5C59D019EC2E71F069D2_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = __this->___r_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_G_m7C34E91BB1A6E7B390DB23151F896A99652F3CC6_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = __this->___g_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_B_mB0A93D0B45200CAA6E8240A7A9ADA53D262CB7BE_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = __this->___b_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_A_m227FF903C89CC109C815B007E933246C39EFAD1C_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = __this->___a_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_R_m7445C818B40C2A8EE25F0E322449C7D36110DFA6_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = __this->___r_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_G_m2CCFE953B4C43C41AABDF2C4F6A43EE21B056D4D_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = __this->___g_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_B_mA934F931230C6AAB6FFAD0D5A90D7522C5C74009_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = __this->___b_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_A_m05117209BC3B9AA2B58D597A97C07B3EDBE331A5_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = __this->___a_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_R_mC6D8DA19828398596A6AB5A93D9CC7FD38E7F659_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = __this->___r_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_G_m9DED61D7E52E18C44074B184E3AC115712DDF37B_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = __this->___g_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_B_m4D3207F0138F1FA9B3109DDC1CB439260F03DEB7_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = __this->___b_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MeshAttachment_get_A_m699B94DB8923F85FC6FA6EDDBF1BF6CCF5C39946_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = __this->___a_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_R_m32B8F1985A30590340042C156F1681D82ECAEE5C_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = __this->___r_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_G_m80B6DD9DEB62F4EFEE501C2E34D7E3016F62BF5E_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = __this->___g_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_B_m4463970E3F74E12ED29B819D5C1332AE328D730E_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = __this->___b_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_A_m1FB5C342FD9FB97FE5EC82B55397C35C99D49272_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = __this->___a_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_R2_mFFF8E092B186942D9EB7B6513511093FB5C07E65_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public float R2 { get { return r2; } set { r2 = value; } }
		float L_0 = __this->___r2_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_G2_m72AB1BBEA9E769AD1FC36FC760751D73B9037843_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public float G2 { get { return g2; } set { g2 = value; } }
		float L_0 = __this->___g2_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slot_get_B2_mB4BEF912A63EC95AE4EAAB70E686FE198A769B0B_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public float B2 { get { return b2; } set { b2 = value; } }
		float L_0 = __this->___b2_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_A_mD9FC576C115D119B76ECA978FC14A1D4D4191E24_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = ___0_value;
		__this->___a_12 = L_0;
		// public float A { get { return a; } set { a = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_R_m914D7E1F23A31D100D167DF2DC5513825C441BC7_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = ___0_value;
		__this->___r_9 = L_0;
		// public float R { get { return r; } set { r = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_G_m64EACF26B14B2B242648482ACE9CCE063A0117AE_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = ___0_value;
		__this->___g_10 = L_0;
		// public float G { get { return g; } set { g = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_B_m06359B96A97EEC04CA6104AF4F8A2CB1D3E85302_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = ___0_value;
		__this->___b_11 = L_0;
		// public float B { get { return b; } set { b = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_A_m2D9500F8CC69A46F2BAD01C8E4368E678AE58A6F_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = ___0_value;
		__this->___a_5 = L_0;
		// public float A { get { return a; } set { a = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_R_m5A7F17AF272D985848BF9271CF1AD4C8C1253CC6_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = ___0_value;
		__this->___r_2 = L_0;
		// public float R { get { return r; } set { r = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_G_mC469AC792B8A90D09B01E7E984AD6B0491A57160_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = ___0_value;
		__this->___g_3 = L_0;
		// public float G { get { return g; } set { g = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_B_m39EB0F3969EBAE9EB0D06A1BABC39319353D611F_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = ___0_value;
		__this->___b_4 = L_0;
		// public float B { get { return b; } set { b = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_A_mDA7BD3D9848F651029D33DE745011881A80BBB6C_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = ___0_value;
		__this->___a_27 = L_0;
		// public float A { get { return a; } set { a = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_R_m801BE04357A97DD6784929D25F7387B4AA70A1E4_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = ___0_value;
		__this->___r_24 = L_0;
		// public float R { get { return r; } set { r = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_G_mC3535255A8FD5348DF13AF7A3498C5E99B989A36_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = ___0_value;
		__this->___g_25 = L_0;
		// public float G { get { return g; } set { g = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_B_mDF37D72C03FD51DCAB15568D50DDE05CD5A5E48C_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = ___0_value;
		__this->___b_26 = L_0;
		// public float B { get { return b; } set { b = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_A_mA9CD59B4EE888B7D3EE2BD6FE6891E31D28EE91C_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = ___0_value;
		__this->___a_21 = L_0;
		// public float A { get { return a; } set { a = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_R_m862AF2698571C62D0122172408487D6A111A4084_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float R { get { return r; } set { r = value; } }
		float L_0 = ___0_value;
		__this->___r_18 = L_0;
		// public float R { get { return r; } set { r = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_G_m3CBF7A645DD974CDEE9C29D05659365F78D23724_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float G { get { return g; } set { g = value; } }
		float L_0 = ___0_value;
		__this->___g_19 = L_0;
		// public float G { get { return g; } set { g = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_B_m6580B6F65BF03D2BE31DCC00AD891DB61649A32C_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = ___0_value;
		__this->___b_20 = L_0;
		// public float B { get { return b; } set { b = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_ScaleX_m07D3147D70FE2A979795A4F240CFF98D4C9AB9CB_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float ScaleX { get { return scaleX; } set { scaleX = value; } }
		float L_0 = ___0_value;
		__this->___scaleX_14 = L_0;
		// public float ScaleX { get { return scaleX; } set { scaleX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Skeleton_set_ScaleY_m1FC455B365B1472CFAFBD55B2AC18FD8819FE99E_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float ScaleY { get { return scaleY * (Bone.yDown ? -1 : 1); } set { scaleY = value; } }
		float L_0 = ___0_value;
		__this->___scaleY_15 = L_0;
		// public float ScaleY { get { return scaleY * (Bone.yDown ? -1 : 1); } set { scaleY = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_A_mD9933DFFB2BE82B9B6AA452F2301464E7BB0F9EA_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float A { get { return a; } set { a = value; } }
		float L_0 = __this->___a_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_B_m152872772FD282B96B00D119D28753129DA33AA1_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float B { get { return b; } set { b = value; } }
		float L_0 = __this->___b_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldX_mF7755798A568A353654EFB5D3AD9707BCBD2D3CE_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float WorldX { get { return worldX; } set { worldX = value; } }
		float L_0 = __this->___worldX_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_C_mB12EA1ED732F4098FEEBBF1333776F5B8A6D353F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float C { get { return c; } set { c = value; } }
		float L_0 = __this->___c_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_D_m1D033C2256BB965C9E2BEB1072435B07CD633B7F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float D { get { return d; } set { d = value; } }
		float L_0 = __this->___d_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_WorldY_m599046881C946060A1A0043CA78DF028DAE4632F_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float WorldY { get { return worldY; } set { worldY = value; } }
		float L_0 = __this->___worldY_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_X_m4A643D9A72A10C964E507E98F7321FC074C3B213_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float X { get { return x; } set { x = value; } }
		float L_0 = ___0_value;
		__this->___x_5 = L_0;
		// public float X { get { return x; } set { x = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_Y_m5B63469F4E472827B5F5A64533C32FF60E302910_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Y { get { return y; } set { y = value; } }
		float L_0 = ___0_value;
		__this->___y_6 = L_0;
		// public float Y { get { return y; } set { y = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_X_mEC9CB3AAE55AFA83AA82CE6E318405F310264A88_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float X { get { return x; } set { x = value; } }
		float L_0 = __this->___x_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_Y_mF88B9D57D60E689706A2F1D898A0BEBFF9AA5B57_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float Y { get { return y; } set { y = value; } }
		float L_0 = __this->___y_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_Rotation_m6CE4F553C65C091D012FB16F08375D2503670087_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public float Rotation { get { return rotation; } set { rotation = value; } }
		float L_0 = __this->___rotation_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Skeleton_get_ScaleX_mE232B30B8D60A1ECCAD49A101B0EA4A2C7A80FB4_inline (Skeleton_t6D24E966A8D69348CB28690C5EF254275266F3E3* __this, const RuntimeMethod* method) 
{
	{
		// public float ScaleX { get { return scaleX; } set { scaleX = value; } }
		float L_0 = __this->___scaleX_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* Bone_get_Parent_m067C034AB2EABF1E88DE960D5C3CBF69EFDA57C0_inline (Bone_tC5BB616A04722279E675558888991F720C090467* __this, const RuntimeMethod* method) 
{
	{
		// public Bone Parent { get { return parent; } }
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = __this->___parent_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VertexAttachment_get_WorldVerticesLength_m18500A21BFC7C7DB4E81B4AC345345F1122B5D44_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) 
{
	{
		// public int WorldVerticesLength { get { return worldVerticesLength; } set { worldVerticesLength = value; } }
		int32_t L_0 = __this->___worldVerticesLength_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Attachment_get_Name_m3F6ED5BB3D0A221C137F0371ED65AD2815508D4B_inline (Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* VertexAttachment_get_Bones_m22C6003E3CE1F95FF21B2D5C8553460ADD059D81_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) 
{
	{
		// public int[] Bones { get { return bones; } set { bones = value; } }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___bones_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* VertexAttachment_get_DeformAttachment_m48C0B426AFF30F228AC898C76CB5BC635A62E32C_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) 
{
	{
		// public VertexAttachment DeformAttachment { get { return deformAttachment; } set { deformAttachment = value; } }
		VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* L_0 = __this->___deformAttachment_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* VertexAttachment_get_Vertices_mB5661F9B123FB5BEBA04853B24E72B54C6C61F14_inline (VertexAttachment_t62DFB61B99D73C4C8EDE1597706EC38F0D8ACF27* __this, const RuntimeMethod* method) 
{
	{
		// public float[] Vertices { get { return vertices; } set { vertices = value; } }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___vertices_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_tC5BB616A04722279E675558888991F720C090467* Slot_get_Bone_mFEF8A1FFFB05952323119E4EFB990971EDA9F282_inline (Slot_tC4088BCC7895CF9579A4793C8E42AC122BE5D4F0* __this, const RuntimeMethod* method) 
{
	{
		// public Bone Bone { get { return bone; } }
		Bone_tC5BB616A04722279E675558888991F720C090467* L_0 = __this->___bone_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* Event_get_Data_m899DC3B549F8513883467B512265A1B0E5781462_inline (Event_tC881D7A203D6C9F1FCBC172EFDED5E2731673B97* __this, const RuntimeMethod* method) 
{
	{
		// public EventData Data { get { return data; } }
		EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* L_0 = __this->___data_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventData_get_Name_m3CF55169F0E56015B249B382A578B4407F9CD167_inline (EventData_tAC7F0B3FA86FF74AB2D9CEA7F8741AD459BC5FA3* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get { return name; } }
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Timeline_get_Frames_m36161E25AFC60271E5BBAA9A4BB32099D05F382E_inline (Timeline_t0EF9D4F3605B6C6C62179D357F30BB33FA1A95BF* __this, const RuntimeMethod* method) 
{
	{
		// get { return frames; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___frames_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* SkeletonData_get_Bones_m46C0AB3D18F68B66F2E76AED746F88C3DC2D1018_inline (SkeletonData_tB70775C0B4ED6E601C81959ECA4416D51DA72254* __this, const RuntimeMethod* method) 
{
	{
		// public ExposedList<BoneData> Bones { get { return bones; } }
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_0 = __this->___bones_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslateTimeline_get_BoneIndex_m9BFC216EA1BEA854F7C74E599730525BD513D777_inline (TranslateTimeline_tFB11CCFDE5FBE5FB907BC9E156F68220C1EBA852* __this, const RuntimeMethod* method) 
{
	{
		// return boneIndex;
		int32_t L_0 = __this->___boneIndex_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_X_m41AC5529BDF4FEC10AE8B87431A04E0A1B2B3DA0_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) 
{
	{
		// public float X { get { return x; } set { x = value; } }
		float L_0 = __this->___x_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneData_get_Y_mC11A04D53C0EAEFA456866ECFB98247C1297D762_inline (BoneData_t7C92ED1C7AD5AE21594C91B2AAD54DB983902D77* __this, const RuntimeMethod* method) 
{
	{
		// public float Y { get { return y; } set { y = value; } }
		float L_0 = __this->___y_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* Animation_get_Timelines_m2F4B97551905154693EE8C220EA45393A47D37BB_inline (Animation_tE6B0909256B56F6C8BBFC866C44905F63EA1DEE8* __this, const RuntimeMethod* method) 
{
	{
		// get { return timelines; }
		ExposedList_1_t80377B59F87A417D6BD8AEC705DF6B52399291EF* L_0 = __this->___timelines_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* Skin_get_Bones_m289A6AD20D75A430417207821295FEC988AB3B42_inline (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, const RuntimeMethod* method) 
{
	{
		// public ExposedList<BoneData> Bones { get { return bones; } }
		ExposedList_1_tD9E8F9F764BBAD1C9B6D732E8BC1CF67650357DE* L_0 = __this->___bones_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* Skin_get_Constraints_mCB8C4773B732A935E54D0F8179924ECC1ACA4AE0_inline (Skin_t2CEC4C1FD2758B250F60FAAFFFFE9A3D3E54F481* __this, const RuntimeMethod* method) 
{
	{
		// public ExposedList<ConstraintData> Constraints { get { return constraints; } }
		ExposedList_1_t1D6817E6CE2A8128ACEB047760F9C93D9B821826* L_0 = __this->___constraints_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* SkinEntry_get_Attachment_mD3F3972C2C175630ABA63A7806AEED63CE8A665C_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) 
{
	{
		// return attachment;
		Attachment_t6F4F46616094804376EF5CA2056CE92CD2CBDE75* L_0 = __this->___attachment_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkinEntry_get_SlotIndex_mBE57F47A41B161443A05B81B9F4CB37BCE8664C6_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) 
{
	{
		// return slotIndex;
		int32_t L_0 = __this->___slotIndex_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SkinEntry_get_Name_mD30118D3C18473ACF7BD87BAF0E8F728C80504D8_inline (SkinEntry_t24694DC2D02B0F811CA3E5036E4736A288ADE13F* __this, const RuntimeMethod* method) 
{
	{
		// return name;
		String_t* L_0 = __this->___name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___2_value;
		float L_4 = ___0_a;
		float L_5 = ___1_b;
		float L_6 = ___0_a;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_Width_m14141567360E0454B2FD8E7843505EDE3F3333F3_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) 
{
	{
		// public float Width { get { return width; } set { width = value; } }
		float L_0 = __this->___width_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_RegionOriginalWidth_m8851323F6B4EE8356AF37A6151908ECAF0920717_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) 
{
	{
		// public float RegionOriginalWidth { get { return regionOriginalWidth; } set { regionOriginalWidth = value; } }
		float L_0 = __this->___regionOriginalWidth_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Width_mDA18FF1DD1896F3D0FCEF7BA5210D23F69AA1111_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Width { get { return width; } set { width = value; } }
		float L_0 = ___0_value;
		__this->___width_14 = L_0;
		// public float Width { get { return width; } set { width = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Height_m6DA767C64695CE512D739BFFA4F62B010A6FAF23_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Height { get { return height; } set { height = value; } }
		float L_0 = ___0_value;
		__this->___height_15 = L_0;
		// public float Height { get { return height; } set { height = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RendererObject_m8EEE8E64012964F145B7C56323F23F58B4F75D7F_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object RendererObject { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CRendererObjectU3Ek__BackingField_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRendererObjectU3Ek__BackingField_29), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOffsetX_m3C50AA60A13162B8A70EAB94E68EA89125FE47F3_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOffsetX { get { return regionOffsetX; } set { regionOffsetX = value; } }
		float L_0 = ___0_value;
		__this->___regionOffsetX_16 = L_0;
		// public float RegionOffsetX { get { return regionOffsetX; } set { regionOffsetX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOffsetY_m5AA61B1532C08DBB7E01DCAB848F3659A05E0246_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOffsetY { get { return regionOffsetY; } set { regionOffsetY = value; } } // Pixels stripped from the bottom left, unrotated.
		float L_0 = ___0_value;
		__this->___regionOffsetY_17 = L_0;
		// public float RegionOffsetY { get { return regionOffsetY; } set { regionOffsetY = value; } } // Pixels stripped from the bottom left, unrotated.
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionWidth_mF4BD144BE00C59B00BD6E13409978B40E5653466_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionWidth { get { return regionWidth; } set { regionWidth = value; } }
		float L_0 = ___0_value;
		__this->___regionWidth_18 = L_0;
		// public float RegionWidth { get { return regionWidth; } set { regionWidth = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionHeight_mFE627A8FD8D3E654CA6296FD3D1F5B6CB00D5332_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionHeight { get { return regionHeight; } set { regionHeight = value; } } // Unrotated, stripped size.
		float L_0 = ___0_value;
		__this->___regionHeight_19 = L_0;
		// public float RegionHeight { get { return regionHeight; } set { regionHeight = value; } } // Unrotated, stripped size.
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOriginalWidth_mBDEF05EA1766E307117D1FBF8664C15A9DD4A802_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOriginalWidth { get { return regionOriginalWidth; } set { regionOriginalWidth = value; } }
		float L_0 = ___0_value;
		__this->___regionOriginalWidth_20 = L_0;
		// public float RegionOriginalWidth { get { return regionOriginalWidth; } set { regionOriginalWidth = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_RegionOriginalHeight_m4523E2E8A3979ED2303E7933658AB0C6E2F589FE_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOriginalHeight { get { return regionOriginalHeight; } set { regionOriginalHeight = value; } } // Unrotated, unstripped size.
		float L_0 = ___0_value;
		__this->___regionOriginalHeight_21 = L_0;
		// public float RegionOriginalHeight { get { return regionOriginalHeight; } set { regionOriginalHeight = value; } } // Unrotated, unstripped size.
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RendererObject_m7F6EDB8B7B44540EC7F2B74A59F62F41F7651B85_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object RendererObject { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CRendererObjectU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRendererObjectU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionU_mA29BBC820A268D47F122CF93D81CF7585428FF71_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionU { get; set; }
		float L_0 = ___0_value;
		__this->___U3CRegionUU3Ek__BackingField_25 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionV_m17296274EE0D8E7B92F3550C005ECA85E13A979A_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionV { get; set; }
		float L_0 = ___0_value;
		__this->___U3CRegionVU3Ek__BackingField_26 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionU2_m9D498345B1212A71F74DED27E2E693A7EB18B9E4_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionU2 { get; set; }
		float L_0 = ___0_value;
		__this->___U3CRegionU2U3Ek__BackingField_27 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionV2_m44E726428EB25BC0405B6650030F2CC29863EA0E_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionV2 { get; set; }
		float L_0 = ___0_value;
		__this->___U3CRegionV2U3Ek__BackingField_28 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionDegrees_mB0ED3B8FDF03BA726B4F16A13050E26E5B0B018D_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int RegionDegrees { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CRegionDegreesU3Ek__BackingField_29 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOffsetX_mED74235E246F081A01DAA96BFC350C8F30B64DD0_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOffsetX { get { return regionOffsetX; } set { regionOffsetX = value; } }
		float L_0 = ___0_value;
		__this->___regionOffsetX_8 = L_0;
		// public float RegionOffsetX { get { return regionOffsetX; } set { regionOffsetX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOffsetY_m7D95F835B1C753B69FD91C61B1D0A5ED8DDCF203_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOffsetY { get { return regionOffsetY; } set { regionOffsetY = value; } } // Pixels stripped from the bottom left, unrotated.
		float L_0 = ___0_value;
		__this->___regionOffsetY_9 = L_0;
		// public float RegionOffsetY { get { return regionOffsetY; } set { regionOffsetY = value; } } // Pixels stripped from the bottom left, unrotated.
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionWidth_m4258CEDF5057AA64914DF7E6B539D89133D7815E_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionWidth { get { return regionWidth; } set { regionWidth = value; } }
		float L_0 = ___0_value;
		__this->___regionWidth_10 = L_0;
		// public float RegionWidth { get { return regionWidth; } set { regionWidth = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionHeight_mFD4E04C0A9BEA1C41802E5D6035A2384C10EC1F5_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionHeight { get { return regionHeight; } set { regionHeight = value; } } // Unrotated, stripped size.
		float L_0 = ___0_value;
		__this->___regionHeight_11 = L_0;
		// public float RegionHeight { get { return regionHeight; } set { regionHeight = value; } } // Unrotated, stripped size.
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOriginalWidth_m07B195E4DCD0BA72D15ACDA1E515CEE86C3D2E07_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOriginalWidth { get { return regionOriginalWidth; } set { regionOriginalWidth = value; } }
		float L_0 = ___0_value;
		__this->___regionOriginalWidth_12 = L_0;
		// public float RegionOriginalWidth { get { return regionOriginalWidth; } set { regionOriginalWidth = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshAttachment_set_RegionOriginalHeight_m3BEC85EC85B76C31288D27B53A149E9D1B68DE96_inline (MeshAttachment_tF028A69E7B210860B51C439B9196EE352B26AF7E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RegionOriginalHeight { get { return regionOriginalHeight; } set { regionOriginalHeight = value; } } // Unrotated, unstripped size.
		float L_0 = ___0_value;
		__this->___regionOriginalHeight_13 = L_0;
		// public float RegionOriginalHeight { get { return regionOriginalHeight; } set { regionOriginalHeight = value; } } // Unrotated, unstripped size.
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Path_mBA2FD73DCE3335E6B2F34DF80800CE1B5C74DF6D_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Path { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_28), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_ScaleX_m388F66518403BB44D706961891A1959D90983239_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float ScaleX { get { return scaleX; } set { scaleX = value; } }
		float L_0 = ___0_value;
		__this->___scaleX_12 = L_0;
		// public float ScaleX { get { return scaleX; } set { scaleX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_ScaleY_m4365C70D54331ECCD92840F3BFE1A20217BF6153_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float ScaleY { get { return scaleY; } set { scaleY = value; } }
		float L_0 = ___0_value;
		__this->___scaleY_13 = L_0;
		// public float ScaleY { get { return scaleY; } set { scaleY = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Rotation_m7397C163BE93035882E1C2E24D14CC6BCCCB9266_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Rotation { get { return rotation; } set { rotation = value; } }
		float L_0 = ___0_value;
		__this->___rotation_11 = L_0;
		// public float Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RegionAttachment_get_RegionOriginalHeight_m01E32623A29206F945E583CDC584B7F1D6685164_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, const RuntimeMethod* method) 
{
	{
		// public float RegionOriginalHeight { get { return regionOriginalHeight; } set { regionOriginalHeight = value; } } // Unrotated, unstripped size.
		float L_0 = __this->___regionOriginalHeight_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_X_m400D0EAC2A15262F88D1FE77FF8001CFA267373B_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float X { get { return x; } set { x = value; } }
		float L_0 = ___0_value;
		__this->___x_9 = L_0;
		// public float X { get { return x; } set { x = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RegionAttachment_set_Y_mC9652C8FE69CE45766637A25C1BC577085BDB31E_inline (RegionAttachment_t1652782BFD9A58A45E7FDDDD62F151C19E36F80D* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Y { get { return y; } set { y = value; } }
		float L_0 = ___0_value;
		__this->___y_10 = L_0;
		// public float Y { get { return y; } set { y = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m498B7803B408E95A6D75A8E951E008D9ABED33DD_gshared_inline (Enumerator_t739C86133C966CD494DA3E584097A6CF08A5F453* __this, const RuntimeMethod* method) 
{
	{
		// return current;
		RuntimeObject* L_0 = (RuntimeObject*)__this->___current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
