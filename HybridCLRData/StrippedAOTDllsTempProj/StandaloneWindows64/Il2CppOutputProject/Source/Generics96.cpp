#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.IObservable`1<System.Object>
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
// System.IObserver`1<System.Collections.Generic.IList`1<System.Object>>
struct IObserver_1_t766C5BB3954487A4943C5AC8CAC6FE4AB6423E03;
// System.IObserver`1<System.Object>
struct IObserver_1_t86359CF84DEFEE15EB1DB5AFA5F2E8A27FF22D3B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730;
// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30;
// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D;
// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2;
// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25;
// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A;
// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// UniRx.Operators.IZipObservable
struct IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
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
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// UniRx.Operators.OperatorObservableBase`1<System.Object>
struct OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>
struct OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>
struct OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	// Unity.VisualScripting.FullSerializer.fsSerializer Unity.VisualScripting.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

// UniRx.Operators.NthZipObserverBase`1<System.Object>
struct NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24  : public OperatorObserverBase_2_tF90516AE32C24262B9CCFA04086E6036E8129627
{
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;
};

// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730  : public OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272
{
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_tD99095027AB1D5EC3F8913FD99EF4CB908B64BD2* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;
};

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* ___resultSelector_7;
};

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B  : public OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* ___resultSelector_8;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>
struct fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	RuntimeObject* ____value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[] Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Ancestors
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors_0;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::VersionString
	String_t* ___VersionString_1;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ModelType
	Type_t* ___ModelType_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t* ___ModelType_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t* ___ModelType_2;
};

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
};

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t18CEBD71A9520CC4E97175478D72666FE988B182  : public NthZipObserverBase_1_tC28698DFC52B4AD0FAE5CF2BD93B6968C8020C24
{
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q7_13;
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Ray2D
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Origin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin_0;
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Unity.VisualScripting.FullSerializer.fsBaseConverter

// Unity.VisualScripting.FullSerializer.fsBaseConverter

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// Unity.VisualScripting.FullSerializer.fsData

// UniRx.Operators.NthZipObserverBase`1<System.Object>

// UniRx.Operators.NthZipObserverBase`1<System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>
struct fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39 ___Empty_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Keyframe

// UnityEngine.Keyframe

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Rect

// UnityEngine.Rect

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

// System.Void

// System.Void

// Unity.VisualScripting.FullSerializer.fsDirectConverter

// Unity.VisualScripting.FullSerializer.fsDirectConverter

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};

// Unity.VisualScripting.FullSerializer.fsResult

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.Ray2D

// UnityEngine.Ray2D

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

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

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.InvalidOperationException

// System.InvalidOperationException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460  : public RuntimeArray
{
	ALIGN_FIELD (8) Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* m_Items[1];

	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::.ctor()
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsData::.ctor(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::CheckType(Unity.VisualScripting.FullSerializer.fsData,Unity.VisualScripting.FullSerializer.fsDataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::op_Addition(Unity.VisualScripting.FullSerializer.fsResult,Unity.VisualScripting.FullSerializer.fsResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData> Unity.VisualScripting.FullSerializer.fsData::get_AsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
inline bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
inline RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41 (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, const RuntimeMethod*))fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
inline void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8 (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*, RuntimeObject*, const RuntimeMethod*))fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared)(__this, ___0_value, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_m3C22FA7CEFD785246B8CFF3A57C014A6930C1696_gshared (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B6_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B1_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B2_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B3_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B4_0 = NULL;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_t4440619D74C7741ACC07E88323A475D625908E30* L_18 = ___6_resultSelector;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_mA6A71EA561A648CABC815028263E92CCD33518CA_gshared (ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1* L_2 = (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*, ZipObservable_7_tA0B46CF39B6078301978ED468E219BCA40CAEB25*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t24F49A067683EBC2A07C65E47C12CD85FDBE65C1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
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
// System.Void UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_m107A8110E5B0DB2CF2060E356C0076E388FA5F9A_gshared (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B7_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B1_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B2_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B3_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B4_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B5_0 = NULL;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_tC97A0ACB65300244FF346581F87AC2E4492B5386*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_t4280EF4A4A4422830572A2378576C159B5CF964D* L_21 = ___7_resultSelector;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_m58E177B4406807F458726219AC59A47B245D78B1_gshared (ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t18CEBD71A9520CC4E97175478D72666FE988B182* L_2 = (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*, ZipObservable_8_t0C1F7712867B4832F41B399916ADEC03BE46535B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t18CEBD71A9520CC4E97175478D72666FE988B182*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m6F8187EFDEF9046B285A43BAAF557D66C0D7FF48_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(Zip parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___1_index;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_m80D5844DD6FF3B28A0238C2F0926A15A2593F30F_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.queues[index].Enqueue(value);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
			NullCheck(L_5);
			Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_6 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)L_5->___queues_4;
			int32_t L_7 = (int32_t)__this->___index_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			RuntimeObject* L_10 = ___0_value;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_11 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
			int32_t L_12 = (int32_t)__this->___index_1;
			NullCheck(L_11);
			((  void (*) (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			// }
			goto IL_004b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mEFF1C9E4D750565BF8FAFE1DBA7EE0FE7CBC109C_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_m819A749EB60F84FF2C3AD802C46613AF2071D55D_gshared (ZipObserver_t064F791DE40AABDDA2152FA56DBE2CBE92E6490A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_0 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isDone[index] = true;
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_5 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isDone_5;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isDone[i])
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_8 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isDone_5;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_15 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_6;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730* L_18 = (Zip_t07B6ACE5BAF7D1522262865FBDEA9DCDB55EB730*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_tF80783C20720D97EA337FACD140DDD7E0550D272*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
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
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_m4D843FE326A7A713DBCDF79E448F52691F2C6420_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___3_queue, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___2_index;
		__this->___index_2 = L_2;
		// this.queue = queue;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = ___3_queue;
		__this->___queue_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_mD2F91872761B21627C585A6A45A9AAC931A41301_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// queue.Enqueue(value);
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queue_3;
			RuntimeObject* L_5 = ___0_value;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			RuntimeObject* L_6 = (RuntimeObject*)__this->___parent_1;
			int32_t L_7 = (int32_t)__this->___index_2;
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_6, L_7);
			// }
			goto IL_003a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_mC5BE9D205FE077023C208D78DE7D551AE2BDE072_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m84919945B4901F74AC57266885E64E266F8AB50C_gshared (ZipObserver_1_t1785CFD0353610728E07747C4BFB1AE59D5C8B1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___1_instance;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m469B29DA8E93A109CE1A84DEF411C216C2E91B3C_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___1_instance;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m67B64763A70B6CFF7BC8E207844892AFCCFA9B72_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___1_instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m8386B8479295E3AC361DE4EBBFC2C3CCB11BB908_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m434ECAC51B09FD530A6DD456388A8B3B39F71DE1_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m012F8AADBFF962499339189E5EABB41B2F51D491_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, RuntimeObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DA1D304ED129B105B65D30686CE2CE0BFACBBD0_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, RuntimeObject** >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___1_instance;
		RuntimeObject* L_16 = V_1;
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_0;
		return L_17;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mC4D982EAE127626844AA2FF8D98F3CEA570A1A10_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___1_instance;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m74EBB5195DD5F746EE58C2B7FE7E20A93E44DFE8_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = (bool)__this->____hasValue_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m7509A7114E8516228E8A7EE55378407191AA79AC(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _value;
		RuntimeObject* L_2 = (RuntimeObject*)__this->____value_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = fsOption_1_get_Value_m9D62AA6B5C87DA1161FF87FAFD1CAC9DCB2C7D41(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_gshared (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// _hasValue = true;
		__this->____hasValue_0 = (bool)1;
		// _value = value;
		RuntimeObject* L_0 = ___0_value;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39*>(__this + _offset);
	fsOption_1__ctor_m7F96B2B092F9644737D70EDA54F6B15A499EDBA8(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = (bool)__this->____hasValue_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)__this->____value_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	{
		// _hasValue = true;
		__this->____hasValue_0 = (bool)1;
		// _value = value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___ModelType_2), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m0EE517C63CCC2EB7F9323634BCC0B6D05A3E1ED3_gshared_inline (fsOption_1_t7DDA3DF5DAF6CDF69D53C005B31129C07A4ECD39* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
