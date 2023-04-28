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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<PureMVC.Interfaces.INotification>
struct Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>
struct ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>
struct ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>
struct ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>
struct ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35;
// System.Func`1<PureMVC.Interfaces.ICommand>
struct Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B;
// System.Func`1<PureMVC.Interfaces.IController>
struct Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE;
// System.Func`1<PureMVC.Interfaces.IFacade>
struct Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50;
// System.Func`1<PureMVC.Interfaces.IModel>
struct Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F;
// System.Func`1<PureMVC.Interfaces.IView>
struct Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.IEnumerable`1<PureMVC.Interfaces.IObserver>
struct IEnumerable_1_tC979380BAE932BCB87259CDE20DDE6457386E7F5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Func`1<PureMVC.Interfaces.ICommand>>
struct IList_1_tEC70CB14AA7CAB35205AD77D3B3954781BE4EA28;
// System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>
struct IList_1_t98E8B8AED08337B306DFC223ABA10FFB297BCA53;
// System.Collections.Generic.List`1<System.Func`1<PureMVC.Interfaces.ICommand>>
struct List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63;
// System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>
struct List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>
struct Tables_t0672B4F6FFCA5EF6B8A197770C416E8259B048D8;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>
struct Tables_t8659081175AA3701BE4D5BA1C713652B11A97D66;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,PureMVC.Interfaces.IMediator>
struct Tables_t323D4BF5B9AD607E7FCDF42DA8FE50755A6EB352;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,PureMVC.Interfaces.IProxy>
struct Tables_t96B89549EF6485F1782F662C18D9D0FC7BF51664;
// System.Func`1<PureMVC.Interfaces.ICommand>[]
struct Func_1U5BU5D_tA4C47C1B736B880CB7186BDEF579B6A3D2528E33;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>[]
struct KeyValuePair_2U5BU5D_tA088A492362B98292203C2C0FC73538EC8B05A23;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>[]
struct KeyValuePair_2U5BU5D_t2B60AE6353F39EEA5D3A8A3355B055044D9A65D6;
// System.Collections.Generic.KeyValuePair`2<System.String,PureMVC.Interfaces.IMediator>[]
struct KeyValuePair_2U5BU5D_t9D6D6BDCC368ABCD21D9B4815CDC375B8EFE995B;
// System.Collections.Generic.KeyValuePair`2<System.String,PureMVC.Interfaces.IProxy>[]
struct KeyValuePair_2U5BU5D_tADB391E1B230A1305CE100FA13C877E4F3239850;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// PureMVC.Interfaces.IObserver[]
struct IObserverU5BU5D_t9D51D43EAB55ABCA00EB6505A8ACD396E2E49488;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// PureMVC.Core.Controller
struct Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// PureMVC.Patterns.Facade.Facade
struct Facade_t11EA191102417456AD0FACB585D4963CBC6A1006;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// PureMVC.Interfaces.ICommand
struct ICommand_t7B2171F123345D1C523C542E01858CC7BA0B32F1;
// PureMVC.Interfaces.IController
struct IController_tECA5F735E6470ED48CC98053679CCF62FE00A948;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// PureMVC.Interfaces.IFacade
struct IFacade_tEA09BACA22A2B7D1B1483DBBBC2136F4F3CB6E2F;
// PureMVC.Interfaces.IMediator
struct IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F;
// PureMVC.Interfaces.IModel
struct IModel_t673126B5D64F793FA4D18905B49A305C103FAB91;
// PureMVC.Interfaces.INotification
struct INotification_tB5879F2ECA64222F67879DBBCC7A6F0FE1808ACD;
// PureMVC.Interfaces.IObserver
struct IObserver_t8A6D4487F1C653E1173D4A7649B81B02F3005992;
// PureMVC.Interfaces.IProxy
struct IProxy_tBDF247BCA1CE5F725C96E021343D690A3D3C7419;
// PureMVC.Interfaces.IView
struct IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418;
// PureMVC.Patterns.Command.MacroCommand
struct MacroCommand_t08E2A99865648D0EE96294D0ABDF14BEEE18AA95;
// PureMVC.Patterns.Mediator.Mediator
struct Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PureMVC.Core.Model
struct Model_tC1801604F1411EC2033C8F8B928D904365C604ED;
// PureMVC.Patterns.Observer.Notification
struct Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36;
// PureMVC.Patterns.Observer.Notifier
struct Notifier_tACD60B67705A491376CCF84752D6534853234BF7;
// PureMVC.Patterns.Observer.Observer
struct Observer_t10D466608C184AB937B367C0F561F609D9F72CE9;
// PureMVC.Patterns.Proxy.Proxy
struct Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// PureMVC.Patterns.Command.SimpleCommand
struct SimpleCommand_tB1A87695FDB16E403AC8E1A65E6C2724BDE78737;
// System.String
struct String_t;
// PureMVC.Core.View
struct View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// PureMVC.Core.Controller/<>c
struct U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D;
// PureMVC.Patterns.Facade.Facade/<>c
struct U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6;
// PureMVC.Patterns.Observer.Notifier/<>c
struct U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t18582E673F57BFE542F16E4620802CD1E03222E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t67CA83FF55D3873EBFD219D6EE028FB7E83E5507_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICommand_t7B2171F123345D1C523C542E01858CC7BA0B32F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IController_tECA5F735E6470ED48CC98053679CCF62FE00A948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t98E8B8AED08337B306DFC223ABA10FFB297BCA53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tEC70CB14AA7CAB35205AD77D3B3954781BE4EA28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INotification_tB5879F2ECA64222F67879DBBCC7A6F0FE1808ACD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INotifier_tEF2C569F912343819597AE29E80521974A39BB25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObserver_t8A6D4487F1C653E1173D4A7649B81B02F3005992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProxy_tBDF247BCA1CE5F725C96E021343D690A3D3C7419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Observer_t10D466608C184AB937B367C0F561F609D9F72CE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral054F35D7C74E86B12E7854D1C764BAC7A039167A;
IL2CPP_EXTERN_C String_t* _stringLiteral0F84C6972C8BFD583E90FACBF273A01C013FE860;
IL2CPP_EXTERN_C String_t* _stringLiteral1FAEF02DB98E600C969094CEAEB61AF0D317086D;
IL2CPP_EXTERN_C String_t* _stringLiteral281F30EF7462878CD7718DD060690BA7168C601A;
IL2CPP_EXTERN_C String_t* _stringLiteral50A62107EECEC5D9B167638AD337E1035DFC4539;
IL2CPP_EXTERN_C String_t* _stringLiteral5B13C181918DD626E5B6C925D38521022C62198E;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral82E4CA95CD9FEFCD637AFDA844A4147838D28F70;
IL2CPP_EXTERN_C String_t* _stringLiteral88A3272A4FBAFC04CAE617B9135A488FCC469395;
IL2CPP_EXTERN_C String_t* _stringLiteralFEAD8555EAED92B78600812ACD2B8CF72DB5830B;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_ContainsKey_m08B9E898903AD83DBACE68169807E7D8BBC53EAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_ContainsKey_m4740DD9E5057DEB2FEF29219876A94653AB2BF98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_ContainsKey_mCE96C31A0A04B1EF30AA9023A92A601DD1AF2EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryAdd_m5A76ED7EF19F31726571C032161AE76727853CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryAdd_m86F85068F73DB4A3A66B1D2C071AA92847782F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_m00F8536C6A3FEA4B51602ED490287400342CEF58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_m8EEAC2B2E54774AFE5C6021B62885C5DA9E8B5FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m0DEFB93CFEA47861D058325E723D9243FBBCD7B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m16F0B964C005BB6E207E4B01144D5BC5D28B43A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m43643BBC1CB64CD5528D95007B3E07008525BDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_m7B4E832B8D49A401FBD4DB81A37690729FCFE8FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m2644D0CDA5DDDF16D69B73F791B93BA59A3864B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_mB78EF640965F84F645BA58EAFA5759ADB80B2A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_mE37BEE2C6784120CEAF9B34E44DEB814E75457C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_mF1F663B649E4F0295A1E956203588FB16C238235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m0C1456E209A837ADE98E11BA23312D0F983FEDD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m8A3D939A51CA54516EDEEC62DA9D1C9EBECE5EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Controller__ctor_mA953471A688D4456C84A0920275C38CD288FEF71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m96CA18E4B309E840267FA9F73922DB46310A544F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m76F9ACC5200D8A83F1E04A9C447647815FB6AB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBD7F5D19D741D6732BA46FF7AC2C648F0635EC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Facade__ctor_mD22B8D512C542F591156EB7E4BBB806B172766E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3EA4AB92B2ADEBA6E3C2F52CEADA43AD0C680594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m15667573EC976BBA7A9F52E73271A0BADFC0CA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2F093F2E927C1C1CDF109E1E78784DCCA69C0CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m55966FBBFD07D74EAEEC21D5BC31426420517EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB434D208DFC787C24C1F73C3B24953B01002D660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Model__ctor_mDA11DA312A54BA7A4CF9532B464C1250E5677F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeControllerU3Eb__1_0_mBE481D2349D0D8F71D6E32FD04EE1EFC741F2442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeControllerU3Eb__3_0_m59D9A467EB9ED375FED1989A963821A7DC04C999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeModelU3Eb__4_0_mBCE9BF24A80E9D28D8BCA9D6A29C0949AC7FA7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeViewU3Eb__5_0_m68BE67A6A91EE411B0678EBCDA277656FDC88A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_FacadeU3Eb__2_0_m1D20ACE81D14EC0721AE03F7DE03B147BC4647E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* View__ctor_mEFB2D24C6A1668DC7F5A8DCAD2439E43F4B9BEA2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t110E59368B7196E9AC17CF0A12B05B964B6D044E 
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>
struct ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t0672B4F6FFCA5EF6B8A197770C416E8259B048D8* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tA088A492362B98292203C2C0FC73538EC8B05A23* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>
struct ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t8659081175AA3701BE4D5BA1C713652B11A97D66* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t2B60AE6353F39EEA5D3A8A3355B055044D9A65D6* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>
struct ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t323D4BF5B9AD607E7FCDF42DA8FE50755A6EB352* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t9D6D6BDCC368ABCD21D9B4815CDC375B8EFE995B* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>
struct ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t96B89549EF6485F1782F662C18D9D0FC7BF51664* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tADB391E1B230A1305CE100FA13C877E4F3239850* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Generic.List`1<System.Func`1<PureMVC.Interfaces.ICommand>>
struct List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Func_1U5BU5D_tA4C47C1B736B880CB7186BDEF579B6A3D2528E33* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>
struct List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IObserverU5BU5D_t9D51D43EAB55ABCA00EB6505A8ACD396E2E49488* ____items_1;
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

// PureMVC.Core.Controller
struct Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621  : public RuntimeObject
{
	// PureMVC.Interfaces.IView PureMVC.Core.Controller::view
	RuntimeObject* ___view_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>> PureMVC.Core.Controller::commandMap
	ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* ___commandMap_1;
};

// PureMVC.Patterns.Facade.Facade
struct Facade_t11EA191102417456AD0FACB585D4963CBC6A1006  : public RuntimeObject
{
	// PureMVC.Interfaces.IController PureMVC.Patterns.Facade.Facade::controller
	RuntimeObject* ___controller_0;
	// PureMVC.Interfaces.IModel PureMVC.Patterns.Facade.Facade::model
	RuntimeObject* ___model_1;
	// PureMVC.Interfaces.IView PureMVC.Patterns.Facade.Facade::view
	RuntimeObject* ___view_2;
};

// PureMVC.Core.Model
struct Model_tC1801604F1411EC2033C8F8B928D904365C604ED  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy> PureMVC.Core.Model::proxyMap
	ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* ___proxyMap_0;
};

// PureMVC.Patterns.Observer.Notification
struct Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36  : public RuntimeObject
{
	// System.String PureMVC.Patterns.Observer.Notification::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Object PureMVC.Patterns.Observer.Notification::<Body>k__BackingField
	RuntimeObject* ___U3CBodyU3Ek__BackingField_1;
	// System.String PureMVC.Patterns.Observer.Notification::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_2;
};

// PureMVC.Patterns.Observer.Notifier
struct Notifier_tACD60B67705A491376CCF84752D6534853234BF7  : public RuntimeObject
{
};

// PureMVC.Patterns.Observer.Observer
struct Observer_t10D466608C184AB937B367C0F561F609D9F72CE9  : public RuntimeObject
{
	// System.Action`1<PureMVC.Interfaces.INotification> PureMVC.Patterns.Observer.Observer::<NotifyMethod>k__BackingField
	Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* ___U3CNotifyMethodU3Ek__BackingField_0;
	// System.Object PureMVC.Patterns.Observer.Observer::<NotifyContext>k__BackingField
	RuntimeObject* ___U3CNotifyContextU3Ek__BackingField_1;
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

// PureMVC.Core.View
struct View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator> PureMVC.Core.View::mediatorMap
	ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* ___mediatorMap_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>> PureMVC.Core.View::observerMap
	ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* ___observerMap_1;
};

// PureMVC.Core.Controller/<>c
struct U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D  : public RuntimeObject
{
};

// PureMVC.Patterns.Facade.Facade/<>c
struct U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6  : public RuntimeObject
{
};

// PureMVC.Patterns.Observer.Notifier/<>c
struct U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<PureMVC.Interfaces.IObserver>
struct Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// PureMVC.Patterns.Command.MacroCommand
struct MacroCommand_t08E2A99865648D0EE96294D0ABDF14BEEE18AA95  : public Notifier_tACD60B67705A491376CCF84752D6534853234BF7
{
	// System.Collections.Generic.IList`1<System.Func`1<PureMVC.Interfaces.ICommand>> PureMVC.Patterns.Command.MacroCommand::subcommands
	RuntimeObject* ___subcommands_0;
};

// PureMVC.Patterns.Mediator.Mediator
struct Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78  : public Notifier_tACD60B67705A491376CCF84752D6534853234BF7
{
	// System.String PureMVC.Patterns.Mediator.Mediator::<MediatorName>k__BackingField
	String_t* ___U3CMediatorNameU3Ek__BackingField_1;
	// System.Object PureMVC.Patterns.Mediator.Mediator::<ViewComponent>k__BackingField
	RuntimeObject* ___U3CViewComponentU3Ek__BackingField_2;
};

// PureMVC.Patterns.Proxy.Proxy
struct Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B  : public Notifier_tACD60B67705A491376CCF84752D6534853234BF7
{
	// System.String PureMVC.Patterns.Proxy.Proxy::<ProxyName>k__BackingField
	String_t* ___U3CProxyNameU3Ek__BackingField_1;
	// System.Object PureMVC.Patterns.Proxy.Proxy::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_2;
};

// PureMVC.Patterns.Command.SimpleCommand
struct SimpleCommand_tB1A87695FDB16E403AC8E1A65E6C2724BDE78737  : public Notifier_tACD60B67705A491376CCF84752D6534853234BF7
{
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

// System.Action`1<PureMVC.Interfaces.INotification>
struct Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<PureMVC.Interfaces.ICommand>
struct Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B  : public MulticastDelegate_t
{
};

// System.Func`1<PureMVC.Interfaces.IController>
struct Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE  : public MulticastDelegate_t
{
};

// System.Func`1<PureMVC.Interfaces.IFacade>
struct Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50  : public MulticastDelegate_t
{
};

// System.Func`1<PureMVC.Interfaces.IModel>
struct Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F  : public MulticastDelegate_t
{
};

// System.Func`1<PureMVC.Interfaces.IView>
struct Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>
struct ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>
struct ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>
struct ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>
struct ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>

// System.Collections.Generic.List`1<System.Func`1<PureMVC.Interfaces.ICommand>>
struct List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Func_1U5BU5D_tA4C47C1B736B880CB7186BDEF579B6A3D2528E33* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Func`1<PureMVC.Interfaces.ICommand>>

// System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>
struct List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IObserverU5BU5D_t9D51D43EAB55ABCA00EB6505A8ACD396E2E49488* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// PureMVC.Core.Controller
struct Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields
{
	// PureMVC.Interfaces.IController PureMVC.Core.Controller::instance
	RuntimeObject* ___instance_2;
};

// PureMVC.Core.Controller

// PureMVC.Patterns.Facade.Facade
struct Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields
{
	// PureMVC.Interfaces.IFacade PureMVC.Patterns.Facade.Facade::instance
	RuntimeObject* ___instance_3;
};

// PureMVC.Patterns.Facade.Facade

// PureMVC.Core.Model
struct Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields
{
	// PureMVC.Interfaces.IModel PureMVC.Core.Model::instance
	RuntimeObject* ___instance_1;
};

// PureMVC.Core.Model

// PureMVC.Patterns.Observer.Notification

// PureMVC.Patterns.Observer.Notification

// PureMVC.Patterns.Observer.Notifier

// PureMVC.Patterns.Observer.Notifier

// PureMVC.Patterns.Observer.Observer

// PureMVC.Patterns.Observer.Observer

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// PureMVC.Core.View
struct View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields
{
	// PureMVC.Interfaces.IView PureMVC.Core.View::instance
	RuntimeObject* ___instance_2;
};

// PureMVC.Core.View

// PureMVC.Core.Controller/<>c
struct U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_StaticFields
{
	// PureMVC.Core.Controller/<>c PureMVC.Core.Controller/<>c::<>9
	U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D* ___U3CU3E9_0;
	// System.Func`1<PureMVC.Interfaces.IView> PureMVC.Core.Controller/<>c::<>9__1_0
	Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* ___U3CU3E9__1_0_1;
};

// PureMVC.Core.Controller/<>c

// PureMVC.Patterns.Facade.Facade/<>c
struct U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields
{
	// PureMVC.Patterns.Facade.Facade/<>c PureMVC.Patterns.Facade.Facade/<>c::<>9
	U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* ___U3CU3E9_0;
	// System.Func`1<PureMVC.Interfaces.IController> PureMVC.Patterns.Facade.Facade/<>c::<>9__3_0
	Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* ___U3CU3E9__3_0_1;
	// System.Func`1<PureMVC.Interfaces.IModel> PureMVC.Patterns.Facade.Facade/<>c::<>9__4_0
	Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* ___U3CU3E9__4_0_2;
	// System.Func`1<PureMVC.Interfaces.IView> PureMVC.Patterns.Facade.Facade/<>c::<>9__5_0
	Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* ___U3CU3E9__5_0_3;
};

// PureMVC.Patterns.Facade.Facade/<>c

// PureMVC.Patterns.Observer.Notifier/<>c
struct U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_StaticFields
{
	// PureMVC.Patterns.Observer.Notifier/<>c PureMVC.Patterns.Observer.Notifier/<>c::<>9
	U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1* ___U3CU3E9_0;
	// System.Func`1<PureMVC.Interfaces.IFacade> PureMVC.Patterns.Observer.Notifier/<>c::<>9__2_0
	Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* ___U3CU3E9__2_0_1;
};

// PureMVC.Patterns.Observer.Notifier/<>c

// System.Collections.Generic.List`1/Enumerator<PureMVC.Interfaces.IObserver>

// System.Collections.Generic.List`1/Enumerator<PureMVC.Interfaces.IObserver>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

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

// PureMVC.Patterns.Command.MacroCommand

// PureMVC.Patterns.Command.MacroCommand

// PureMVC.Patterns.Mediator.Mediator
struct Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_StaticFields
{
	// System.String PureMVC.Patterns.Mediator.Mediator::NAME
	String_t* ___NAME_0;
};

// PureMVC.Patterns.Mediator.Mediator

// PureMVC.Patterns.Proxy.Proxy

// PureMVC.Patterns.Proxy.Proxy

// PureMVC.Patterns.Command.SimpleCommand

// PureMVC.Patterns.Command.SimpleCommand

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.MulticastDelegate

// System.MulticastDelegate

// System.Action`1<PureMVC.Interfaces.INotification>

// System.Action`1<PureMVC.Interfaces.INotification>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`1<PureMVC.Interfaces.ICommand>

// System.Func`1<PureMVC.Interfaces.ICommand>

// System.Func`1<PureMVC.Interfaces.IController>

// System.Func`1<PureMVC.Interfaces.IController>

// System.Func`1<PureMVC.Interfaces.IFacade>

// System.Func`1<PureMVC.Interfaces.IFacade>

// System.Func`1<PureMVC.Interfaces.IModel>

// System.Func`1<PureMVC.Interfaces.IModel>

// System.Func`1<PureMVC.Interfaces.IView>

// System.Func`1<PureMVC.Interfaces.IView>

// System.Func`1<System.Object>

// System.Func`1<System.Object>
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


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryRemove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m9BDE52D83802C8E05ED223C1864017FB19B43DBC_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_mA7D07DAB0E4F228BEDBEBA3BEA124A7C839B0DFC_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void PureMVC.Patterns.Observer.Notifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifier__ctor_mB86B2B4BA30081D8C6146D3B394318B72D2CF267 (Notifier_tACD60B67705A491376CCF84752D6534853234BF7* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Proxy.Proxy::set_ProxyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Proxy_set_ProxyName_m9F247381A9E7DFF46B30496EFEDCAF28C85E9B46_inline (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Proxy.Proxy::set_Data(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Proxy_set_Data_mBEE51154B7E41AB54F2F16CBD8DB57FB99FF9B9C_inline (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Observer.Notification::set_Body(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Notification_set_Body_m745EBB7BC43AFFD8ACF403FF6B6D9DD57124BAA8_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Observer.Notification::set_Type(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Notification_set_Type_m271A8522771A45DC4A3F53020F370AF2B84A0A01_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String PureMVC.Patterns.Observer.Notification::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Notification_get_Name_m3243AFFDAA6578FBF9B646CCB91F18D4818921A1_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Object PureMVC.Patterns.Observer.Notification::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Notification_get_Body_m240B7D9B9DB89930C83561EC00CEDFCDE313906A_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String PureMVC.Patterns.Observer.Notification::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Notification_get_Type_mAE9037D3F9395FBD0D87A15B60E6E6E0072B08E0_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) ;
// PureMVC.Interfaces.IFacade PureMVC.Patterns.Observer.Notifier::get_Facade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Notifier_get_Facade_mF3D69BDDF2EF2C876A82D2F7EBB0908E8B36A5FC (Notifier_tACD60B67705A491376CCF84752D6534853234BF7* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<PureMVC.Interfaces.IFacade>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m3633ECF0AB50C06624BC6D498B13E2091B3E6ADC (Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// PureMVC.Interfaces.IFacade PureMVC.Patterns.Facade.Facade::GetInstance(System.Func`1<PureMVC.Interfaces.IFacade>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Facade_GetInstance_mF6770197592739B9488A8C43EEAA6F2635622665 (Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* ___0_facadeFunc, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Observer.Notifier/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22EA0F3E36EA3FFFFAB95C33C70F0E35EB62CBB2 (U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Facade.Facade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade__ctor_mD22B8D512C542F591156EB7E4BBB806B172766E0 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Observer.Observer::set_NotifyMethod(System.Action`1<PureMVC.Interfaces.INotification>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Observer_set_NotifyMethod_mDE684A9FE3C21A0494566976D6DC89F61FFB6868_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* ___0_value, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Observer.Observer::set_NotifyContext(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Observer_set_NotifyContext_m92CADF812D5DA1E7EEA915C995526DF9EF5C5D8D_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Action`1<PureMVC.Interfaces.INotification> PureMVC.Patterns.Observer.Observer::get_NotifyMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* Observer_get_NotifyMethod_m8F8C387A4C2ADC7BEC85DEE25AFAEA56370E2913_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<PureMVC.Interfaces.INotification>::Invoke(T)
inline void Action_1_Invoke_mFA6AAFCC5DE323F2E20BE72B6390F08F69E0903D_inline (Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Object PureMVC.Patterns.Observer.Observer::get_NotifyContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Observer_get_NotifyContext_m270BC5DFAB5E3D246D1239D7C39478726B644F4E_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Mediator.Mediator::set_MediatorName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mediator_set_MediatorName_m1EA0DE9A1720AD0139B03CB6621EE4B9FC41BF5C_inline (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Mediator.Mediator::set_ViewComponent(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mediator_set_ViewComponent_m9F08AA9FD0E1BF7E6FC79B94CA00BFC26DD29CD5_inline (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// TResult System.Func`1<PureMVC.Interfaces.IFacade>::Invoke()
inline RuntimeObject* Func_1_Invoke_m7B604D77380A165A7B978C6C3FB773045B264904_inline (Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Void System.Func`1<PureMVC.Interfaces.IController>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m58C2BC2D4A3CE5E7A1F3F003277FE19DBDB19686 (Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// PureMVC.Interfaces.IController PureMVC.Core.Controller::GetInstance(System.Func`1<PureMVC.Interfaces.IController>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Controller_GetInstance_m42026DE880ED5594507645EFEBC98D4E2D5FD71A (Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* ___0_factory, const RuntimeMethod* method) ;
// System.Void System.Func`1<PureMVC.Interfaces.IModel>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m5D3354A8844A89264D015CC8622F02A3CF8F1A32 (Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// PureMVC.Interfaces.IModel PureMVC.Core.Model::GetInstance(System.Func`1<PureMVC.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Model_GetInstance_m6B5FDEAFB710A0E7FB18381FCFB17A8780357223 (Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* ___0_factory, const RuntimeMethod* method) ;
// System.Void System.Func`1<PureMVC.Interfaces.IView>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDE989191F05EDB7A05C36C71DDCFB0E555079840 (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// PureMVC.Interfaces.IView PureMVC.Core.View::GetInstance(System.Func`1<PureMVC.Interfaces.IView>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* View_GetInstance_m5CB764372A359029EC752B41FA1E7EF2FCF0DA2C (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* ___0_factory, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Observer.Notification::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_m08437C6411A8570FD0B6CD03F78901F752D951EF (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, String_t* ___0_name, RuntimeObject* ___1_body, String_t* ___2_type, const RuntimeMethod* method) ;
// System.Void PureMVC.Patterns.Facade.Facade/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBF5CE50246E428348B65DB94C5CE498E89B07B63 (U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Core.Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_mA953471A688D4456C84A0920275C38CD288FEF71 (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Core.Model::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model__ctor_mDA11DA312A54BA7A4CF9532B464C1250E5677F36 (Model_tC1801604F1411EC2033C8F8B928D904365C604ED* __this, const RuntimeMethod* method) ;
// System.Void PureMVC.Core.View::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View__ctor_mEFB2D24C6A1668DC7F5A8DCAD2439E43F4B9BEA2 (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Func`1<PureMVC.Interfaces.ICommand>>::.ctor()
inline void List_1__ctor_m55966FBBFD07D74EAEEC21D5BC31426420517EE5 (List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// TResult System.Func`1<PureMVC.Interfaces.ICommand>::Invoke()
inline RuntimeObject* Func_1_Invoke_mBF71F7BFEEC16B316F99955D38C87059FEABEA33_inline (Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>::.ctor()
inline void ConcurrentDictionary_2__ctor_m2644D0CDA5DDDF16D69B73F791B93BA59A3864B6 (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// TResult System.Func`1<PureMVC.Interfaces.IController>::Invoke()
inline RuntimeObject* Func_1_Invoke_mAC3A26D68F50181FCCABEDECE3C9F4A01223BA38_inline (Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>::TryGetValue(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* __this, String_t* ___0_key, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42*, String_t*, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Action`1<PureMVC.Interfaces.INotification>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m843BF3A468DE8D8652232DC549C878AA16C0F2BD (Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void PureMVC.Patterns.Observer.Observer::.ctor(System.Action`1<PureMVC.Interfaces.INotification>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer__ctor_m6A0854E6E0303C299B1CF188A2BED35D5174B9A8 (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* ___0_notifyMethod, RuntimeObject* ___1_notifyContext, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>::set_Item(TKey,TValue)
inline void ConcurrentDictionary_2_set_Item_m0C1456E209A837ADE98E11BA23312D0F983FEDD5 (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* __this, String_t* ___0_key, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42*, String_t*, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m16F0B964C005BB6E207E4B01144D5BC5D28B43A2 (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* __this, String_t* ___0_key, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42*, String_t*, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Func`1<PureMVC.Interfaces.ICommand>>::ContainsKey(TKey)
inline bool ConcurrentDictionary_2_ContainsKey_m4740DD9E5057DEB2FEF29219876A94653AB2BF98 (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42*, String_t*, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m9BDE52D83802C8E05ED223C1864017FB19B43DBC_gshared)(__this, ___0_key, method);
}
// System.Void PureMVC.Core.Controller/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m535CE3999D081533A0C9BF24E09044EDA8E9C6CD (U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>::.ctor()
inline void ConcurrentDictionary_2__ctor_mE37BEE2C6784120CEAF9B34E44DEB814E75457C1 (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// TResult System.Func`1<PureMVC.Interfaces.IModel>::Invoke()
inline RuntimeObject* Func_1_Invoke_m814F267D9EBF764FEAEAC7E5CCDEC40254BCAE07_inline (Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>::set_Item(TKey,TValue)
inline void ConcurrentDictionary_2_set_Item_m8A3D939A51CA54516EDEEC62DA9D1C9EBECE5EA1 (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35*, String_t*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>::TryGetValue(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryGetValue_m8EEAC2B2E54774AFE5C6021B62885C5DA9E8B5FE (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35*, String_t*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m43643BBC1CB64CD5528D95007B3E07008525BDD3 (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35*, String_t*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IProxy>::ContainsKey(TKey)
inline bool ConcurrentDictionary_2_ContainsKey_m08B9E898903AD83DBACE68169807E7D8BBC53EAE (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35*, String_t*, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m9BDE52D83802C8E05ED223C1864017FB19B43DBC_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>::.ctor()
inline void ConcurrentDictionary_2__ctor_mB78EF640965F84F645BA58EAFA5759ADB80B2A93 (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>::.ctor()
inline void ConcurrentDictionary_2__ctor_mF1F663B649E4F0295A1E956203588FB16C238235 (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// TResult System.Func`1<PureMVC.Interfaces.IView>::Invoke()
inline RuntimeObject* Func_1_Invoke_mA0AC962B934ABED171482CBB52047B86EA29F43D_inline (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>::TryGetValue(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00*, String_t*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>::.ctor()
inline void List_1__ctor_m2F093F2E927C1C1CDF109E1E78784DCCA69C0CD6 (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>::Add(T)
inline void List_1_Add_m3EA4AB92B2ADEBA6E3C2F52CEADA43AD0C680594_inline (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>::TryAdd(TKey,TValue)
inline bool ConcurrentDictionary_2_TryAdd_m5A76ED7EF19F31726571C032161AE76727853CD6 (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00*, String_t*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_mA7D07DAB0E4F228BEDBEBA3BEA124A7C839B0DFC_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mB434D208DFC787C24C1F73C3B24953B01002D660 (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PureMVC.Interfaces.IObserver>::GetEnumerator()
inline Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E List_1_GetEnumerator_m15667573EC976BBA7A9F52E73271A0BADFC0CA40 (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E (*) (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PureMVC.Interfaces.IObserver>::Dispose()
inline void Enumerator_Dispose_m96CA18E4B309E840267FA9F73922DB46310A544F (Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PureMVC.Interfaces.IObserver>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mBD7F5D19D741D6732BA46FF7AC2C648F0635EC8B_inline (Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<PureMVC.Interfaces.IObserver>::MoveNext()
inline bool Enumerator_MoveNext_m76F9ACC5200D8A83F1E04A9C447647815FB6AB7A (Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m0DEFB93CFEA47861D058325E723D9243FBBCD7B1 (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00*, String_t*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>::TryAdd(TKey,TValue)
inline bool ConcurrentDictionary_2_TryAdd_m86F85068F73DB4A3A66B1D2C071AA92847782F63 (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B*, String_t*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_mA7D07DAB0E4F228BEDBEBA3BEA124A7C839B0DFC_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>::TryGetValue(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryGetValue_m00F8536C6A3FEA4B51602ED490287400342CEF58 (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B*, String_t*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>::TryRemove(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryRemove_m7B4E832B8D49A401FBD4DB81A37690729FCFE8FC (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B*, String_t*, RuntimeObject**, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m24DC33BB549CD9414E0782A591303A484D2BA255_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,PureMVC.Interfaces.IMediator>::ContainsKey(TKey)
inline bool ConcurrentDictionary_2_ContainsKey_mCE96C31A0A04B1EF30AA9023A92A601DD1AF2EB3 (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B*, String_t*, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m9BDE52D83802C8E05ED223C1864017FB19B43DBC_gshared)(__this, ___0_key, method);
}
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
// System.Void PureMVC.Patterns.Proxy.Proxy::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Proxy__ctor_m0040AA53F5075F2692C94EF6D3E3CC006B59A98B (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, String_t* ___0_proxyName, RuntimeObject* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82E4CA95CD9FEFCD637AFDA844A4147838D28F70);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* G_B1_1 = NULL;
	{
		// public Proxy(string proxyName, object data = null)
		Notifier__ctor_mB86B2B4BA30081D8C6146D3B394318B72D2CF267(__this, NULL);
		// ProxyName = proxyName ?? NAME;
		String_t* L_0 = ___0_proxyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		G_B2_0 = _stringLiteral82E4CA95CD9FEFCD637AFDA844A4147838D28F70;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		Proxy_set_ProxyName_m9F247381A9E7DFF46B30496EFEDCAF28C85E9B46_inline(G_B2_1, G_B2_0, NULL);
		// if (data != null) Data = data;
		RuntimeObject* L_2 = ___1_data;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// if (data != null) Data = data;
		RuntimeObject* L_3 = ___1_data;
		Proxy_set_Data_mBEE51154B7E41AB54F2F16CBD8DB57FB99FF9B9C_inline(__this, L_3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Proxy.Proxy::OnRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Proxy_OnRegister_m5347879A154F7E4A9611EEACE9126CE4963F3001 (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Proxy.Proxy::OnRemove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Proxy_OnRemove_mFBA6889D41411A15253A7308324DD24AA54139DF (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String PureMVC.Patterns.Proxy.Proxy::get_ProxyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Proxy_get_ProxyName_mFE0A8D97BBE1C8F5FD34103A8CE41EE8A0FD2E1A (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, const RuntimeMethod* method) 
{
	{
		// public string ProxyName { get; protected set; }
		String_t* L_0 = __this->___U3CProxyNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Proxy.Proxy::set_ProxyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Proxy_set_ProxyName_m9F247381A9E7DFF46B30496EFEDCAF28C85E9B46 (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ProxyName { get; protected set; }
		String_t* L_0 = ___0_value;
		__this->___U3CProxyNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProxyNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Object PureMVC.Patterns.Proxy.Proxy::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Proxy_get_Data_m82984413D70C69B46C75D7C63C4082D6978F793C (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, const RuntimeMethod* method) 
{
	{
		// public object Data { get; set; }
		RuntimeObject* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Proxy.Proxy::set_Data(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Proxy_set_Data_mBEE51154B7E41AB54F2F16CBD8DB57FB99FF9B9C (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object Data { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
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
// System.Void PureMVC.Patterns.Observer.Notification::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_m08437C6411A8570FD0B6CD03F78901F752D951EF (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, String_t* ___0_name, RuntimeObject* ___1_body, String_t* ___2_type, const RuntimeMethod* method) 
{
	{
		// public Notification(string name, object body = null, string type = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___0_name;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		// Body = body;
		RuntimeObject* L_1 = ___1_body;
		Notification_set_Body_m745EBB7BC43AFFD8ACF403FF6B6D9DD57124BAA8_inline(__this, L_1, NULL);
		// Type = type;
		String_t* L_2 = ___2_type;
		Notification_set_Type_m271A8522771A45DC4A3F53020F370AF2B84A0A01_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.String PureMVC.Patterns.Observer.Notification::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Notification_ToString_m970D0173B3FABF5481C44EC37A063B5594D3BC70 (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FAEF02DB98E600C969094CEAEB61AF0D317086D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral281F30EF7462878CD7718DD060690BA7168C601A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50A62107EECEC5D9B167638AD337E1035DFC4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		// var msg = "Notification Name: " + Name;
		String_t* L_0;
		L_0 = Notification_get_Name_m3243AFFDAA6578FBF9B646CCB91F18D4818921A1_inline(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1FAEF02DB98E600C969094CEAEB61AF0D317086D, L_0, NULL);
		// msg += "\nBody:" + ((Body == null) ? "null" : Body.ToString());
		RuntimeObject* L_2;
		L_2 = Notification_get_Body_m240B7D9B9DB89930C83561EC00CEDFCDE313906A_inline(__this, NULL);
		G_B1_0 = _stringLiteral281F30EF7462878CD7718DD060690BA7168C601A;
		G_B1_1 = L_1;
		if (!L_2)
		{
			G_B2_0 = _stringLiteral281F30EF7462878CD7718DD060690BA7168C601A;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Notification_get_Body_m240B7D9B9DB89930C83561EC00CEDFCDE313906A_inline(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002f;
	}

IL_002a:
	{
		G_B3_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002f:
	{
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B3_2, G_B3_1, G_B3_0, NULL);
		// msg += "\nType:" + ((Type == null) ? "null" : Type);
		String_t* L_6;
		L_6 = Notification_get_Type_mAE9037D3F9395FBD0D87A15B60E6E6E0072B08E0_inline(__this, NULL);
		G_B4_0 = _stringLiteral50A62107EECEC5D9B167638AD337E1035DFC4539;
		G_B4_1 = L_5;
		if (!L_6)
		{
			G_B5_0 = _stringLiteral50A62107EECEC5D9B167638AD337E1035DFC4539;
			G_B5_1 = L_5;
			goto IL_0049;
		}
	}
	{
		String_t* L_7;
		L_7 = Notification_get_Type_mAE9037D3F9395FBD0D87A15B60E6E6E0072B08E0_inline(__this, NULL);
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004e;
	}

IL_0049:
	{
		G_B6_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004e:
	{
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B6_2, G_B6_1, G_B6_0, NULL);
		// return msg;
		return L_8;
	}
}
// System.String PureMVC.Patterns.Observer.Notification::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Notification_get_Name_m3243AFFDAA6578FBF9B646CCB91F18D4818921A1 (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Object PureMVC.Patterns.Observer.Notification::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Notification_get_Body_m240B7D9B9DB89930C83561EC00CEDFCDE313906A (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) 
{
	{
		// public object Body { get; set; }
		RuntimeObject* L_0 = __this->___U3CBodyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Observer.Notification::set_Body(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_set_Body_m745EBB7BC43AFFD8ACF403FF6B6D9DD57124BAA8 (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object Body { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CBodyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBodyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String PureMVC.Patterns.Observer.Notification::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Notification_get_Type_mAE9037D3F9395FBD0D87A15B60E6E6E0072B08E0 (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Observer.Notification::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification_set_Type_m271A8522771A45DC4A3F53020F370AF2B84A0A01 (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_2), (void*)L_0);
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
// System.Void PureMVC.Patterns.Observer.Notifier::SendNotification(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifier_SendNotification_mF6CC39A2FF816DB87DBDE23CD4CE6C504B2DC5F1 (Notifier_tACD60B67705A491376CCF84752D6534853234BF7* __this, String_t* ___0_notificationName, RuntimeObject* ___1_body, String_t* ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotifier_tEF2C569F912343819597AE29E80521974A39BB25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Facade.SendNotification(notificationName, body, type);
		RuntimeObject* L_0;
		L_0 = Notifier_get_Facade_mF3D69BDDF2EF2C876A82D2F7EBB0908E8B36A5FC(__this, NULL);
		String_t* L_1 = ___0_notificationName;
		RuntimeObject* L_2 = ___1_body;
		String_t* L_3 = ___2_type;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, RuntimeObject*, String_t* >::Invoke(0 /* System.Void PureMVC.Interfaces.INotifier::SendNotification(System.String,System.Object,System.String) */, INotifier_tEF2C569F912343819597AE29E80521974A39BB25_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// PureMVC.Interfaces.IFacade PureMVC.Patterns.Observer.Notifier::get_Facade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Notifier_get_Facade_mF3D69BDDF2EF2C876A82D2F7EBB0908E8B36A5FC (Notifier_tACD60B67705A491376CCF84752D6534853234BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_FacadeU3Eb__2_0_m1D20ACE81D14EC0721AE03F7DE03B147BC4647E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* G_B2_0 = NULL;
	Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* G_B1_0 = NULL;
	{
		// return Patterns.Facade.Facade.GetInstance(() => new Facade.Facade());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var);
		Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* L_0 = ((U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var);
		U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1* L_2 = ((U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* L_3 = (Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50*)il2cpp_codegen_object_new(Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m3633ECF0AB50C06624BC6D498B13E2091B3E6ADC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3Cget_FacadeU3Eb__2_0_m1D20ACE81D14EC0721AE03F7DE03B147BC4647E2_RuntimeMethod_var), NULL);
		Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* L_4 = L_3;
		((U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		RuntimeObject* L_5;
		L_5 = Facade_GetInstance_mF6770197592739B9488A8C43EEAA6F2635622665(G_B2_0, NULL);
		return L_5;
	}
}
// System.Void PureMVC.Patterns.Observer.Notifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifier__ctor_mB86B2B4BA30081D8C6146D3B394318B72D2CF267 (Notifier_tACD60B67705A491376CCF84752D6534853234BF7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void PureMVC.Patterns.Observer.Notifier/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD43057AA63E9FFBDA351290C1AEF1B719CD96583 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1* L_0 = (U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1*)il2cpp_codegen_object_new(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m22EA0F3E36EA3FFFFAB95C33C70F0E35EB62CBB2(L_0, NULL);
		((U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void PureMVC.Patterns.Observer.Notifier/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22EA0F3E36EA3FFFFAB95C33C70F0E35EB62CBB2 (U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// PureMVC.Interfaces.IFacade PureMVC.Patterns.Observer.Notifier/<>c::<get_Facade>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3Cget_FacadeU3Eb__2_0_m1D20ACE81D14EC0721AE03F7DE03B147BC4647E2 (U3CU3Ec_tEB04A4B88DD281A250C5F5D88E116031F335DDB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Patterns.Facade.Facade.GetInstance(() => new Facade.Facade());
		Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* L_0 = (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006*)il2cpp_codegen_object_new(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Facade__ctor_mD22B8D512C542F591156EB7E4BBB806B172766E0(L_0, NULL);
		return L_0;
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
// System.Void PureMVC.Patterns.Observer.Observer::.ctor(System.Action`1<PureMVC.Interfaces.INotification>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer__ctor_m6A0854E6E0303C299B1CF188A2BED35D5174B9A8 (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* ___0_notifyMethod, RuntimeObject* ___1_notifyContext, const RuntimeMethod* method) 
{
	{
		// public Observer(Action<INotification> notifyMethod, object notifyContext)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// NotifyMethod = notifyMethod;
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_0 = ___0_notifyMethod;
		Observer_set_NotifyMethod_mDE684A9FE3C21A0494566976D6DC89F61FFB6868_inline(__this, L_0, NULL);
		// NotifyContext = notifyContext;
		RuntimeObject* L_1 = ___1_notifyContext;
		Observer_set_NotifyContext_m92CADF812D5DA1E7EEA915C995526DF9EF5C5D8D_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Observer.Observer::NotifyObserver(PureMVC.Interfaces.INotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_NotifyObserver_mF462DAA7AC66A773DFB2A99E72F1A0F09AFF3C32 (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, RuntimeObject* ___0_notification, const RuntimeMethod* method) 
{
	{
		// NotifyMethod(notification);
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_0;
		L_0 = Observer_get_NotifyMethod_m8F8C387A4C2ADC7BEC85DEE25AFAEA56370E2913_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_notification;
		NullCheck(L_0);
		Action_1_Invoke_mFA6AAFCC5DE323F2E20BE72B6390F08F69E0903D_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean PureMVC.Patterns.Observer.Observer::CompareNotifyContext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Observer_CompareNotifyContext_mBA824D4E8733040A45BCB9CE3F2B5D9F31EF979A (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return NotifyContext.Equals(obj);
		RuntimeObject* L_0;
		L_0 = Observer_get_NotifyContext_m270BC5DFAB5E3D246D1239D7C39478726B644F4E_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Action`1<PureMVC.Interfaces.INotification> PureMVC.Patterns.Observer.Observer::get_NotifyMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* Observer_get_NotifyMethod_m8F8C387A4C2ADC7BEC85DEE25AFAEA56370E2913 (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, const RuntimeMethod* method) 
{
	{
		// public Action<INotification> NotifyMethod { get; set; }
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_0 = __this->___U3CNotifyMethodU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Observer.Observer::set_NotifyMethod(System.Action`1<PureMVC.Interfaces.INotification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_set_NotifyMethod_mDE684A9FE3C21A0494566976D6DC89F61FFB6868 (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<INotification> NotifyMethod { get; set; }
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_0 = ___0_value;
		__this->___U3CNotifyMethodU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNotifyMethodU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Object PureMVC.Patterns.Observer.Observer::get_NotifyContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observer_get_NotifyContext_m270BC5DFAB5E3D246D1239D7C39478726B644F4E (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, const RuntimeMethod* method) 
{
	{
		// public object NotifyContext { get; set; }
		RuntimeObject* L_0 = __this->___U3CNotifyContextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Observer.Observer::set_NotifyContext(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_set_NotifyContext_m92CADF812D5DA1E7EEA915C995526DF9EF5C5D8D (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object NotifyContext { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CNotifyContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNotifyContextU3Ek__BackingField_1), (void*)L_0);
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
// System.Void PureMVC.Patterns.Mediator.Mediator::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mediator__ctor_m357A2A122F1D1A781385A8A119672BA77A12F636 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, String_t* ___0_mediatorName, RuntimeObject* ___1_viewComponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* G_B1_1 = NULL;
	{
		// public Mediator(string mediatorName, object viewComponent = null)
		Notifier__ctor_mB86B2B4BA30081D8C6146D3B394318B72D2CF267(__this, NULL);
		// MediatorName = mediatorName ?? NAME;
		String_t* L_0 = ___0_mediatorName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_StaticFields*)il2cpp_codegen_static_fields_for(Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_il2cpp_TypeInfo_var))->___NAME_0;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		Mediator_set_MediatorName_m1EA0DE9A1720AD0139B03CB6621EE4B9FC41BF5C_inline(G_B2_1, G_B2_0, NULL);
		// ViewComponent = viewComponent;
		RuntimeObject* L_3 = ___1_viewComponent;
		Mediator_set_ViewComponent_m9F08AA9FD0E1BF7E6FC79B94CA00BFC26DD29CD5_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.String[] PureMVC.Patterns.Mediator.Mediator::ListNotificationInterests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Mediator_ListNotificationInterests_mC6130F575A0DDC84EB34F0FF539E19199BFB9C05 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Mediator.Mediator::HandleNotification(PureMVC.Interfaces.INotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mediator_HandleNotification_m030DB0C9273BDA8B37204FC2F578848126344BF5 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, RuntimeObject* ___0_notification, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Mediator.Mediator::OnRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mediator_OnRegister_m1B9AFA7D8DC1EBC646AF86D2F5ED8544AADE7902 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Mediator.Mediator::OnRemove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mediator_OnRemove_m4250C53889FA380218AE378CF57CAF384C2199F5 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String PureMVC.Patterns.Mediator.Mediator::get_MediatorName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Mediator_get_MediatorName_m1BA658DECE9AB4F030103C9A17F9779D45D8ECF9 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, const RuntimeMethod* method) 
{
	{
		// public string MediatorName { get; protected set; }
		String_t* L_0 = __this->___U3CMediatorNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Mediator.Mediator::set_MediatorName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mediator_set_MediatorName_m1EA0DE9A1720AD0139B03CB6621EE4B9FC41BF5C (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MediatorName { get; protected set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMediatorNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMediatorNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Object PureMVC.Patterns.Mediator.Mediator::get_ViewComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mediator_get_ViewComponent_mD4C5DF9AEB91B069592AAD527F78B068B80B7717 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, const RuntimeMethod* method) 
{
	{
		// public object ViewComponent { get; set; }
		RuntimeObject* L_0 = __this->___U3CViewComponentU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void PureMVC.Patterns.Mediator.Mediator::set_ViewComponent(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mediator_set_ViewComponent_m9F08AA9FD0E1BF7E6FC79B94CA00BFC26DD29CD5 (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object ViewComponent { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CViewComponentU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CViewComponentU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void PureMVC.Patterns.Mediator.Mediator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mediator__cctor_m47E6EBABC693E8D5CA01944081D8C2447017F661 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEAD8555EAED92B78600812ACD2B8CF72DB5830B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string NAME = "Mediator";
		((Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_StaticFields*)il2cpp_codegen_static_fields_for(Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_il2cpp_TypeInfo_var))->___NAME_0 = _stringLiteralFEAD8555EAED92B78600812ACD2B8CF72DB5830B;
		Il2CppCodeGenWriteBarrier((void**)(&((Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_StaticFields*)il2cpp_codegen_static_fields_for(Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78_il2cpp_TypeInfo_var))->___NAME_0), (void*)_stringLiteralFEAD8555EAED92B78600812ACD2B8CF72DB5830B);
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
// System.Void PureMVC.Patterns.Facade.Facade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade__ctor_mD22B8D512C542F591156EB7E4BBB806B172766E0 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Facade()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (instance != null) throw new Exception(SingletonMsg);
		RuntimeObject* L_0 = ((Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields*)il2cpp_codegen_static_fields_for(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var))->___instance_3;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if (instance != null) throw new Exception(SingletonMsg);
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B13C181918DD626E5B6C925D38521022C62198E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Facade__ctor_mD22B8D512C542F591156EB7E4BBB806B172766E0_RuntimeMethod_var)));
	}

IL_0018:
	{
		// instance = this;
		((Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields*)il2cpp_codegen_static_fields_for(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var))->___instance_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields*)il2cpp_codegen_static_fields_for(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var))->___instance_3), (void*)__this);
		// InitializeFacade();
		VirtualActionInvoker0::Invoke(17 /* System.Void PureMVC.Patterns.Facade.Facade::InitializeFacade() */, __this);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::InitializeFacade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_InitializeFacade_mA8CF4494C29C8A352AE754C225420A985B97A30D (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, const RuntimeMethod* method) 
{
	{
		// InitializeModel();
		VirtualActionInvoker0::Invoke(19 /* System.Void PureMVC.Patterns.Facade.Facade::InitializeModel() */, __this);
		// InitializeController();
		VirtualActionInvoker0::Invoke(18 /* System.Void PureMVC.Patterns.Facade.Facade::InitializeController() */, __this);
		// InitializeView();
		VirtualActionInvoker0::Invoke(20 /* System.Void PureMVC.Patterns.Facade.Facade::InitializeView() */, __this);
		// }
		return;
	}
}
// PureMVC.Interfaces.IFacade PureMVC.Patterns.Facade.Facade::GetInstance(System.Func`1<PureMVC.Interfaces.IFacade>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Facade_GetInstance_mF6770197592739B9488A8C43EEAA6F2635622665 (Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* ___0_facadeFunc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		RuntimeObject* L_0 = ((Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields*)il2cpp_codegen_static_fields_for(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var))->___instance_3;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance = facadeFunc();
		Func_1_t4FD13BD92894699BA32E2EB67602953EABBD6E50* L_1 = ___0_facadeFunc;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Func_1_Invoke_m7B604D77380A165A7B978C6C3FB773045B264904_inline(L_1, NULL);
		((Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields*)il2cpp_codegen_static_fields_for(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var))->___instance_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields*)il2cpp_codegen_static_fields_for(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var))->___instance_3), (void*)L_2);
	}

IL_0012:
	{
		// return instance;
		RuntimeObject* L_3 = ((Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_StaticFields*)il2cpp_codegen_static_fields_for(Facade_t11EA191102417456AD0FACB585D4963CBC6A1006_il2cpp_TypeInfo_var))->___instance_3;
		return L_3;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::InitializeController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_InitializeController_m2F0909C3988118063BA95BA620A52DD60FF6CFBE (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeControllerU3Eb__3_0_m59D9A467EB9ED375FED1989A963821A7DC04C999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* G_B2_0 = NULL;
	Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* G_B2_1 = NULL;
	Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* G_B1_0 = NULL;
	Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* G_B1_1 = NULL;
	{
		// controller = Controller.GetInstance(() => new Controller());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* L_0 = ((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* L_2 = ((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* L_3 = (Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE*)il2cpp_codegen_object_new(Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m58C2BC2D4A3CE5E7A1F3F003277FE19DBDB19686(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CInitializeControllerU3Eb__3_0_m59D9A467EB9ED375FED1989A963821A7DC04C999_RuntimeMethod_var), NULL);
		Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* L_4 = L_3;
		((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = Controller_GetInstance_m42026DE880ED5594507645EFEBC98D4E2D5FD71A(G_B2_0, NULL);
		NullCheck(G_B2_1);
		G_B2_1->___controller_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___controller_0), (void*)L_5);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::InitializeModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_InitializeModel_mE080D2BA772F07CCBDA01AB6D9E2FB61BB2B9B85 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeModelU3Eb__4_0_mBCE9BF24A80E9D28D8BCA9D6A29C0949AC7FA7B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* G_B2_0 = NULL;
	Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* G_B2_1 = NULL;
	Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* G_B1_0 = NULL;
	Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* G_B1_1 = NULL;
	{
		// model = Model.GetInstance(() => new Model());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* L_0 = ((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_2;
		Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* L_2 = ((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* L_3 = (Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F*)il2cpp_codegen_object_new(Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m5D3354A8844A89264D015CC8622F02A3CF8F1A32(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CInitializeModelU3Eb__4_0_mBCE9BF24A80E9D28D8BCA9D6A29C0949AC7FA7B7_RuntimeMethod_var), NULL);
		Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* L_4 = L_3;
		((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_2), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = Model_GetInstance_m6B5FDEAFB710A0E7FB18381FCFB17A8780357223(G_B2_0, NULL);
		NullCheck(G_B2_1);
		G_B2_1->___model_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___model_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::InitializeView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_InitializeView_m8E88BC54392084703A3BE527AA269893C7356F97 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeViewU3Eb__5_0_m68BE67A6A91EE411B0678EBCDA277656FDC88A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* G_B2_0 = NULL;
	Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* G_B2_1 = NULL;
	Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* G_B1_0 = NULL;
	Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* G_B1_1 = NULL;
	{
		// view = View.GetInstance(() => new View());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_0 = ((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_3;
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* L_2 = ((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_3 = (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D*)il2cpp_codegen_object_new(Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_mDE989191F05EDB7A05C36C71DDCFB0E555079840(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CInitializeViewU3Eb__5_0_m68BE67A6A91EE411B0678EBCDA277656FDC88A62_RuntimeMethod_var), NULL);
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_4 = L_3;
		((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_3), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = View_GetInstance_m5CB764372A359029EC752B41FA1E7EF2FCF0DA2C(G_B2_0, NULL);
		NullCheck(G_B2_1);
		G_B2_1->___view_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___view_2), (void*)L_5);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::RegisterCommand(System.String,System.Func`1<PureMVC.Interfaces.ICommand>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_RegisterCommand_mAAE150384220F4D38D15A87428A32269160C0681 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_notificationName, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* ___1_factory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tECA5F735E6470ED48CC98053679CCF62FE00A948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller.RegisterCommand(notificationName, factory);
		RuntimeObject* L_0 = __this->___controller_0;
		String_t* L_1 = ___0_notificationName;
		Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* L_2 = ___1_factory;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* >::Invoke(0 /* System.Void PureMVC.Interfaces.IController::RegisterCommand(System.String,System.Func`1<PureMVC.Interfaces.ICommand>) */, IController_tECA5F735E6470ED48CC98053679CCF62FE00A948_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::RemoveCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_RemoveCommand_m7CBEFEF529BA6DE7221594BC1EA72E584406D9DF (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_notificationName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tECA5F735E6470ED48CC98053679CCF62FE00A948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller.RemoveCommand(notificationName);
		RuntimeObject* L_0 = __this->___controller_0;
		String_t* L_1 = ___0_notificationName;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void PureMVC.Interfaces.IController::RemoveCommand(System.String) */, IController_tECA5F735E6470ED48CC98053679CCF62FE00A948_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean PureMVC.Patterns.Facade.Facade::HasCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Facade_HasCommand_m7CEA7748786B4963D34DD3E56AAE383E63D49BE8 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_notificationName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IController_tECA5F735E6470ED48CC98053679CCF62FE00A948_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return controller.HasCommand(notificationName);
		RuntimeObject* L_0 = __this->___controller_0;
		String_t* L_1 = ___0_notificationName;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean PureMVC.Interfaces.IController::HasCommand(System.String) */, IController_tECA5F735E6470ED48CC98053679CCF62FE00A948_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::RegisterProxy(PureMVC.Interfaces.IProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_RegisterProxy_m70A4BE2F01967E17B55A3A42B002B0C26FFDF7FB (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, RuntimeObject* ___0_proxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model.RegisterProxy(proxy);
		RuntimeObject* L_0 = __this->___model_1;
		RuntimeObject* L_1 = ___0_proxy;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void PureMVC.Interfaces.IModel::RegisterProxy(PureMVC.Interfaces.IProxy) */, IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// PureMVC.Interfaces.IProxy PureMVC.Patterns.Facade.Facade::RetrieveProxy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Facade_RetrieveProxy_mECEDFDE400C9B234679107C18620AA5BCBFDCBEB (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_proxyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return model.RetrieveProxy(proxyName);
		RuntimeObject* L_0 = __this->___model_1;
		String_t* L_1 = ___0_proxyName;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* PureMVC.Interfaces.IProxy PureMVC.Interfaces.IModel::RetrieveProxy(System.String) */, IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// PureMVC.Interfaces.IProxy PureMVC.Patterns.Facade.Facade::RemoveProxy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Facade_RemoveProxy_mE10EE8964B7406469479393C874D5328E316B300 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_proxyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return model.RemoveProxy(proxyName);
		RuntimeObject* L_0 = __this->___model_1;
		String_t* L_1 = ___0_proxyName;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(2 /* PureMVC.Interfaces.IProxy PureMVC.Interfaces.IModel::RemoveProxy(System.String) */, IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean PureMVC.Patterns.Facade.Facade::HasProxy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Facade_HasProxy_m52BFE6D0C842DD3CFBC67616C8879C0364CC912B (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_proxyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return model.HasProxy(proxyName);
		RuntimeObject* L_0 = __this->___model_1;
		String_t* L_1 = ___0_proxyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean PureMVC.Interfaces.IModel::HasProxy(System.String) */, IModel_t673126B5D64F793FA4D18905B49A305C103FAB91_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::RegisterMediator(PureMVC.Interfaces.IMediator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_RegisterMediator_m1D16545D250874A3A8C1CE2D8F605AA358998E8F (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, RuntimeObject* ___0_mediator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// view.RegisterMediator(mediator);
		RuntimeObject* L_0 = __this->___view_2;
		RuntimeObject* L_1 = ___0_mediator;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void PureMVC.Interfaces.IView::RegisterMediator(PureMVC.Interfaces.IMediator) */, IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// PureMVC.Interfaces.IMediator PureMVC.Patterns.Facade.Facade::RetrieveMediator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Facade_RetrieveMediator_m2D7E45EF6DCC947A94598D78FDF3D3DFAB92379B (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_mediatorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return view.RetrieveMediator(mediatorName);
		RuntimeObject* L_0 = __this->___view_2;
		String_t* L_1 = ___0_mediatorName;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* PureMVC.Interfaces.IMediator PureMVC.Interfaces.IView::RetrieveMediator(System.String) */, IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// PureMVC.Interfaces.IMediator PureMVC.Patterns.Facade.Facade::RemoveMediator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Facade_RemoveMediator_m5C121044C8FAE134F54A13EBA1A383FACB984E14 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_mediatorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return view.RemoveMediator(mediatorName);
		RuntimeObject* L_0 = __this->___view_2;
		String_t* L_1 = ___0_mediatorName;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(5 /* PureMVC.Interfaces.IMediator PureMVC.Interfaces.IView::RemoveMediator(System.String) */, IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean PureMVC.Patterns.Facade.Facade::HasMediator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Facade_HasMediator_m6A52D513FDDCDBA604AFE8931DC22398F172493A (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_mediatorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return view.HasMediator(mediatorName);
		RuntimeObject* L_0 = __this->___view_2;
		String_t* L_1 = ___0_mediatorName;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean PureMVC.Interfaces.IView::HasMediator(System.String) */, IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::SendNotification(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_SendNotification_mCF3101915E01948960C601AF898F459D01ACA44A (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, String_t* ___0_notificationName, RuntimeObject* ___1_body, String_t* ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NotifyObservers(new Notification(notificationName, body, type));
		String_t* L_0 = ___0_notificationName;
		RuntimeObject* L_1 = ___1_body;
		String_t* L_2 = ___2_type;
		Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* L_3 = (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36*)il2cpp_codegen_object_new(Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Notification__ctor_m08437C6411A8570FD0B6CD03F78901F752D951EF(L_3, L_0, L_1, L_2, NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(33 /* System.Void PureMVC.Patterns.Facade.Facade::NotifyObservers(PureMVC.Interfaces.INotification) */, __this, L_3);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade::NotifyObservers(PureMVC.Interfaces.INotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facade_NotifyObservers_m1E5C5BFF8085E1B5856EF72555B3190342C8BAC8 (Facade_t11EA191102417456AD0FACB585D4963CBC6A1006* __this, RuntimeObject* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// view.NotifyObservers(notification);
		RuntimeObject* L_0 = __this->___view_2;
		RuntimeObject* L_1 = ___0_notification;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void PureMVC.Interfaces.IView::NotifyObservers(PureMVC.Interfaces.INotification) */, IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void PureMVC.Patterns.Facade.Facade/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7CECE33FA5E8351CFF0E74F821AE59C3A71443D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* L_0 = (U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6*)il2cpp_codegen_object_new(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBF5CE50246E428348B65DB94C5CE498E89B07B63(L_0, NULL);
		((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void PureMVC.Patterns.Facade.Facade/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBF5CE50246E428348B65DB94C5CE498E89B07B63 (U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// PureMVC.Interfaces.IController PureMVC.Patterns.Facade.Facade/<>c::<InitializeController>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CInitializeControllerU3Eb__3_0_m59D9A467EB9ED375FED1989A963821A7DC04C999 (U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = Controller.GetInstance(() => new Controller());
		Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* L_0 = (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621*)il2cpp_codegen_object_new(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Controller__ctor_mA953471A688D4456C84A0920275C38CD288FEF71(L_0, NULL);
		return L_0;
	}
}
// PureMVC.Interfaces.IModel PureMVC.Patterns.Facade.Facade/<>c::<InitializeModel>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CInitializeModelU3Eb__4_0_mBCE9BF24A80E9D28D8BCA9D6A29C0949AC7FA7B7 (U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model = Model.GetInstance(() => new Model());
		Model_tC1801604F1411EC2033C8F8B928D904365C604ED* L_0 = (Model_tC1801604F1411EC2033C8F8B928D904365C604ED*)il2cpp_codegen_object_new(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Model__ctor_mDA11DA312A54BA7A4CF9532B464C1250E5677F36(L_0, NULL);
		return L_0;
	}
}
// PureMVC.Interfaces.IView PureMVC.Patterns.Facade.Facade/<>c::<InitializeView>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CInitializeViewU3Eb__5_0_m68BE67A6A91EE411B0678EBCDA277656FDC88A62 (U3CU3Ec_t4607B64767BDCF929463C6B61C0401F25787ACE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// view = View.GetInstance(() => new View());
		View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* L_0 = (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF*)il2cpp_codegen_object_new(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		View__ctor_mEFB2D24C6A1668DC7F5A8DCAD2439E43F4B9BEA2(L_0, NULL);
		return L_0;
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
// System.Void PureMVC.Patterns.Command.MacroCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroCommand__ctor_m1A14124F02417513067583AF5D103CA3C68D444A (MacroCommand_t08E2A99865648D0EE96294D0ABDF14BEEE18AA95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m55966FBBFD07D74EAEEC21D5BC31426420517EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MacroCommand()
		Notifier__ctor_mB86B2B4BA30081D8C6146D3B394318B72D2CF267(__this, NULL);
		// subcommands = new List<Func<ICommand>>();
		List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63* L_0 = (List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63*)il2cpp_codegen_object_new(List_1_tBD99A80921168BDD95C8158EB9D8380B5E90DA63_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m55966FBBFD07D74EAEEC21D5BC31426420517EE5(L_0, List_1__ctor_m55966FBBFD07D74EAEEC21D5BC31426420517EE5_RuntimeMethod_var);
		__this->___subcommands_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subcommands_0), (void*)L_0);
		// InitializeMacroCommand();
		VirtualActionInvoker0::Invoke(7 /* System.Void PureMVC.Patterns.Command.MacroCommand::InitializeMacroCommand() */, __this);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Command.MacroCommand::InitializeMacroCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroCommand_InitializeMacroCommand_m8FF3CD0D093322E24E79579E71F93563EF278483 (MacroCommand_t08E2A99865648D0EE96294D0ABDF14BEEE18AA95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Command.MacroCommand::AddSubCommand(System.Func`1<PureMVC.Interfaces.ICommand>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroCommand_AddSubCommand_mBCCB26ED674E7FC054A417A78B6BC1EE8F896EB0 (MacroCommand_t08E2A99865648D0EE96294D0ABDF14BEEE18AA95* __this, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* ___0_factory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t18582E673F57BFE542F16E4620802CD1E03222E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subcommands.Add(factory);
		RuntimeObject* L_0 = __this->___subcommands_0;
		Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* L_1 = ___0_factory;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Func`1<PureMVC.Interfaces.ICommand>>::Add(T) */, ICollection_1_t18582E673F57BFE542F16E4620802CD1E03222E2_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Command.MacroCommand::Execute(PureMVC.Interfaces.INotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroCommand_Execute_mA888C1167CA1CCBC620701BBCDDB5D16D74A441E (MacroCommand_t08E2A99865648D0EE96294D0ABDF14BEEE18AA95* __this, RuntimeObject* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t18582E673F57BFE542F16E4620802CD1E03222E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommand_t7B2171F123345D1C523C542E01858CC7BA0B32F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tEC70CB14AA7CAB35205AD77D3B3954781BE4EA28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0025;
	}

IL_0002:
	{
		// var factory = subcommands[0];
		RuntimeObject* L_0 = __this->___subcommands_0;
		NullCheck(L_0);
		Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* L_1;
		L_1 = InterfaceFuncInvoker1< Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Func`1<PureMVC.Interfaces.ICommand>>::get_Item(System.Int32) */, IList_1_tEC70CB14AA7CAB35205AD77D3B3954781BE4EA28_il2cpp_TypeInfo_var, L_0, 0);
		// var commandInstance = factory();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Func_1_Invoke_mBF71F7BFEEC16B316F99955D38C87059FEABEA33_inline(L_1, NULL);
		// commandInstance.Execute(notification);
		RuntimeObject* L_3 = ___0_notification;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void PureMVC.Interfaces.ICommand::Execute(PureMVC.Interfaces.INotification) */, ICommand_t7B2171F123345D1C523C542E01858CC7BA0B32F1_il2cpp_TypeInfo_var, L_2, L_3);
		// subcommands.RemoveAt(0);
		RuntimeObject* L_4 = __this->___subcommands_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Func`1<PureMVC.Interfaces.ICommand>>::RemoveAt(System.Int32) */, IList_1_tEC70CB14AA7CAB35205AD77D3B3954781BE4EA28_il2cpp_TypeInfo_var, L_4, 0);
	}

IL_0025:
	{
		// while(subcommands.Count > 0)
		RuntimeObject* L_5 = __this->___subcommands_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Func`1<PureMVC.Interfaces.ICommand>>::get_Count() */, ICollection_1_t18582E673F57BFE542F16E4620802CD1E03222E2_il2cpp_TypeInfo_var, L_5);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
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
// System.Void PureMVC.Patterns.Command.SimpleCommand::Execute(PureMVC.Interfaces.INotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCommand_Execute_mB2884333052035FBC6B4D747BF75AC70DDCC89FB (SimpleCommand_tB1A87695FDB16E403AC8E1A65E6C2724BDE78737* __this, RuntimeObject* ___0_notification, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PureMVC.Patterns.Command.SimpleCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCommand__ctor_mEA30E5B57803604D65B9B83A9B03C02C4A804EC6 (SimpleCommand_tB1A87695FDB16E403AC8E1A65E6C2724BDE78737* __this, const RuntimeMethod* method) 
{
	{
		Notifier__ctor_mB86B2B4BA30081D8C6146D3B394318B72D2CF267(__this, NULL);
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
// System.Void PureMVC.Core.Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_mA953471A688D4456C84A0920275C38CD288FEF71 (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m2644D0CDA5DDDF16D69B73F791B93BA59A3864B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Controller()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (instance != null) throw new Exception(SingletonMsg);
		RuntimeObject* L_0 = ((Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields*)il2cpp_codegen_static_fields_for(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var))->___instance_2;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if (instance != null) throw new Exception(SingletonMsg);
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88A3272A4FBAFC04CAE617B9135A488FCC469395)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Controller__ctor_mA953471A688D4456C84A0920275C38CD288FEF71_RuntimeMethod_var)));
	}

IL_0018:
	{
		// instance = this;
		((Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields*)il2cpp_codegen_static_fields_for(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var))->___instance_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields*)il2cpp_codegen_static_fields_for(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var))->___instance_2), (void*)__this);
		// commandMap = new ConcurrentDictionary<string, Func<ICommand>>();
		ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* L_2 = (ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42*)il2cpp_codegen_object_new(ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConcurrentDictionary_2__ctor_m2644D0CDA5DDDF16D69B73F791B93BA59A3864B6(L_2, ConcurrentDictionary_2__ctor_m2644D0CDA5DDDF16D69B73F791B93BA59A3864B6_RuntimeMethod_var);
		__this->___commandMap_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___commandMap_1), (void*)L_2);
		// InitializeController();
		VirtualActionInvoker0::Invoke(8 /* System.Void PureMVC.Core.Controller::InitializeController() */, __this);
		// }
		return;
	}
}
// System.Void PureMVC.Core.Controller::InitializeController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_InitializeController_mB7EA80B00422D9A1E289EB939319D6B29A44B380 (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeControllerU3Eb__1_0_mBE481D2349D0D8F71D6E32FD04EE1EFC741F2442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* G_B2_0 = NULL;
	Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* G_B2_1 = NULL;
	Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* G_B1_0 = NULL;
	Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* G_B1_1 = NULL;
	{
		// view = View.GetInstance(() => new View());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var);
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_0 = ((U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var);
		U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D* L_2 = ((U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_3 = (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D*)il2cpp_codegen_object_new(Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_mDE989191F05EDB7A05C36C71DDCFB0E555079840(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CInitializeControllerU3Eb__1_0_mBE481D2349D0D8F71D6E32FD04EE1EFC741F2442_RuntimeMethod_var), NULL);
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_4 = L_3;
		((U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = View_GetInstance_m5CB764372A359029EC752B41FA1E7EF2FCF0DA2C(G_B2_0, NULL);
		NullCheck(G_B2_1);
		G_B2_1->___view_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___view_0), (void*)L_5);
		// }
		return;
	}
}
// PureMVC.Interfaces.IController PureMVC.Core.Controller::GetInstance(System.Func`1<PureMVC.Interfaces.IController>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Controller_GetInstance_m42026DE880ED5594507645EFEBC98D4E2D5FD71A (Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* ___0_factory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		RuntimeObject* L_0 = ((Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields*)il2cpp_codegen_static_fields_for(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var))->___instance_2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance = factory();
		Func_1_t37B6883293F8DF4C740059E47F3AC87572452CDE* L_1 = ___0_factory;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Func_1_Invoke_mAC3A26D68F50181FCCABEDECE3C9F4A01223BA38_inline(L_1, NULL);
		((Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields*)il2cpp_codegen_static_fields_for(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var))->___instance_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields*)il2cpp_codegen_static_fields_for(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var))->___instance_2), (void*)L_2);
	}

IL_0012:
	{
		// return instance;
		RuntimeObject* L_3 = ((Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_StaticFields*)il2cpp_codegen_static_fields_for(Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621_il2cpp_TypeInfo_var))->___instance_2;
		return L_3;
	}
}
// System.Void PureMVC.Core.Controller::ExecuteCommand(PureMVC.Interfaces.INotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_ExecuteCommand_mF591E6283FEF85B13A81EEA3B9E3CA05F10028B4 (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* __this, RuntimeObject* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommand_t7B2171F123345D1C523C542E01858CC7BA0B32F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotification_tB5879F2ECA64222F67879DBBCC7A6F0FE1808ACD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* V_0 = NULL;
	{
		// if (commandMap.TryGetValue(notification.Name, out var factory))
		ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* L_0 = __this->___commandMap_1;
		RuntimeObject* L_1 = ___0_notification;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String PureMVC.Interfaces.INotification::get_Name() */, INotification_tB5879F2ECA64222F67879DBBCC7A6F0FE1808ACD_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA(L_0, L_2, (&V_0), ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// var commandInstance = factory();
		Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Func_1_Invoke_mBF71F7BFEEC16B316F99955D38C87059FEABEA33_inline(L_4, NULL);
		// commandInstance.Execute(notification);
		RuntimeObject* L_6 = ___0_notification;
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void PureMVC.Interfaces.ICommand::Execute(PureMVC.Interfaces.INotification) */, ICommand_t7B2171F123345D1C523C542E01858CC7BA0B32F1_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void PureMVC.Core.Controller::RegisterCommand(System.String,System.Func`1<PureMVC.Interfaces.ICommand>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_RegisterCommand_m78DAD996EEC2D6F195A9BA8022563979932C1573 (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* __this, String_t* ___0_notificationName, Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* ___1_factory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m0C1456E209A837ADE98E11BA23312D0F983FEDD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observer_t10D466608C184AB937B367C0F561F609D9F72CE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* V_0 = NULL;
	{
		// if (commandMap.TryGetValue(notificationName, out _) == false)
		ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* L_0 = __this->___commandMap_1;
		String_t* L_1 = ___0_notificationName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryGetValue_mE07609D228AE3EA1EE2741D94618E2B0240AC7CA_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		// view.RegisterObserver(notificationName, new Observer(ExecuteCommand, this));
		RuntimeObject* L_3 = __this->___view_0;
		String_t* L_4 = ___0_notificationName;
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_5 = (Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903*)il2cpp_codegen_object_new(Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m843BF3A468DE8D8652232DC549C878AA16C0F2BD(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* L_6 = (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9*)il2cpp_codegen_object_new(Observer_t10D466608C184AB937B367C0F561F609D9F72CE9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Observer__ctor_m6A0854E6E0303C299B1CF188A2BED35D5174B9A8(L_6, L_5, __this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(0 /* System.Void PureMVC.Interfaces.IView::RegisterObserver(System.String,PureMVC.Interfaces.IObserver) */, IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var, L_3, L_4, L_6);
	}

IL_002f:
	{
		// commandMap[notificationName] = factory;
		ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* L_7 = __this->___commandMap_1;
		String_t* L_8 = ___0_notificationName;
		Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* L_9 = ___1_factory;
		NullCheck(L_7);
		ConcurrentDictionary_2_set_Item_m0C1456E209A837ADE98E11BA23312D0F983FEDD5(L_7, L_8, L_9, ConcurrentDictionary_2_set_Item_m0C1456E209A837ADE98E11BA23312D0F983FEDD5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PureMVC.Core.Controller::RemoveCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_RemoveCommand_mDB8586BB844A67636F552A01DF0AC1F6E7E7241B (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* __this, String_t* ___0_notificationName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m16F0B964C005BB6E207E4B01144D5BC5D28B43A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t32684473DCF8632A026DDA5F6ED3BA854545DC8B* V_0 = NULL;
	{
		// if (commandMap.TryRemove(notificationName, out _))
		ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* L_0 = __this->___commandMap_1;
		String_t* L_1 = ___0_notificationName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryRemove_m16F0B964C005BB6E207E4B01144D5BC5D28B43A2(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryRemove_m16F0B964C005BB6E207E4B01144D5BC5D28B43A2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// view.RemoveObserver(notificationName, this);
		RuntimeObject* L_3 = __this->___view_0;
		String_t* L_4 = ___0_notificationName;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void PureMVC.Interfaces.IView::RemoveObserver(System.String,System.Object) */, IView_t882443E5BF7B25C968B793DA89BBC45FE87BB418_il2cpp_TypeInfo_var, L_3, L_4, __this);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Boolean PureMVC.Core.Controller::HasCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_HasCommand_mA622FF1BB3596D1DB15493113724A735AA549D30 (Controller_tE18F3F1114BD6C46BBD3730A603CFA8BB6B53621* __this, String_t* ___0_notificationName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_ContainsKey_m4740DD9E5057DEB2FEF29219876A94653AB2BF98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return commandMap.ContainsKey(notificationName);
		ConcurrentDictionary_2_t244B21CDCCEBC87250D70800699C3240B60BAC42* L_0 = __this->___commandMap_1;
		String_t* L_1 = ___0_notificationName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_ContainsKey_m4740DD9E5057DEB2FEF29219876A94653AB2BF98(L_0, L_1, ConcurrentDictionary_2_ContainsKey_m4740DD9E5057DEB2FEF29219876A94653AB2BF98_RuntimeMethod_var);
		return L_2;
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
// System.Void PureMVC.Core.Controller/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC9B1A522707BF01B6C8324BB4E0607F10B64EE5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D* L_0 = (U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D*)il2cpp_codegen_object_new(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m535CE3999D081533A0C9BF24E09044EDA8E9C6CD(L_0, NULL);
		((U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void PureMVC.Core.Controller/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m535CE3999D081533A0C9BF24E09044EDA8E9C6CD (U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// PureMVC.Interfaces.IView PureMVC.Core.Controller/<>c::<InitializeController>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CInitializeControllerU3Eb__1_0_mBE481D2349D0D8F71D6E32FD04EE1EFC741F2442 (U3CU3Ec_t21C3BD9B6C2956E09F4968AC129B2DB25182C41D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// view = View.GetInstance(() => new View());
		View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* L_0 = (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF*)il2cpp_codegen_object_new(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		View__ctor_mEFB2D24C6A1668DC7F5A8DCAD2439E43F4B9BEA2(L_0, NULL);
		return L_0;
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
// System.Void PureMVC.Core.Model::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model__ctor_mDA11DA312A54BA7A4CF9532B464C1250E5677F36 (Model_tC1801604F1411EC2033C8F8B928D904365C604ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_mE37BEE2C6784120CEAF9B34E44DEB814E75457C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Model()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (instance != null) throw new Exception(SingletonMsg);
		RuntimeObject* L_0 = ((Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields*)il2cpp_codegen_static_fields_for(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var))->___instance_1;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if (instance != null) throw new Exception(SingletonMsg);
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral054F35D7C74E86B12E7854D1C764BAC7A039167A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Model__ctor_mDA11DA312A54BA7A4CF9532B464C1250E5677F36_RuntimeMethod_var)));
	}

IL_0018:
	{
		// instance = this;
		((Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields*)il2cpp_codegen_static_fields_for(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var))->___instance_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields*)il2cpp_codegen_static_fields_for(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var))->___instance_1), (void*)__this);
		// proxyMap = new ConcurrentDictionary<string, IProxy>();
		ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* L_2 = (ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35*)il2cpp_codegen_object_new(ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConcurrentDictionary_2__ctor_mE37BEE2C6784120CEAF9B34E44DEB814E75457C1(L_2, ConcurrentDictionary_2__ctor_mE37BEE2C6784120CEAF9B34E44DEB814E75457C1_RuntimeMethod_var);
		__this->___proxyMap_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proxyMap_0), (void*)L_2);
		// InitializeModel();
		VirtualActionInvoker0::Invoke(8 /* System.Void PureMVC.Core.Model::InitializeModel() */, __this);
		// }
		return;
	}
}
// System.Void PureMVC.Core.Model::InitializeModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_InitializeModel_mDF69702BA1E3383F0CA730704ABF4F45D0DAF16E (Model_tC1801604F1411EC2033C8F8B928D904365C604ED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// PureMVC.Interfaces.IModel PureMVC.Core.Model::GetInstance(System.Func`1<PureMVC.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Model_GetInstance_m6B5FDEAFB710A0E7FB18381FCFB17A8780357223 (Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* ___0_factory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		RuntimeObject* L_0 = ((Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields*)il2cpp_codegen_static_fields_for(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var))->___instance_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance = factory();
		Func_1_t167D41F1480B7DE436E9B8B7635294D4919F998F* L_1 = ___0_factory;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Func_1_Invoke_m814F267D9EBF764FEAEAC7E5CCDEC40254BCAE07_inline(L_1, NULL);
		((Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields*)il2cpp_codegen_static_fields_for(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var))->___instance_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields*)il2cpp_codegen_static_fields_for(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var))->___instance_1), (void*)L_2);
	}

IL_0012:
	{
		// return instance;
		RuntimeObject* L_3 = ((Model_tC1801604F1411EC2033C8F8B928D904365C604ED_StaticFields*)il2cpp_codegen_static_fields_for(Model_tC1801604F1411EC2033C8F8B928D904365C604ED_il2cpp_TypeInfo_var))->___instance_1;
		return L_3;
	}
}
// System.Void PureMVC.Core.Model::RegisterProxy(PureMVC.Interfaces.IProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Model_RegisterProxy_m3290C8EEBFCF0708C5D95DA97B4ADA23284B47EF (Model_tC1801604F1411EC2033C8F8B928D904365C604ED* __this, RuntimeObject* ___0_proxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m8A3D939A51CA54516EDEEC62DA9D1C9EBECE5EA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProxy_tBDF247BCA1CE5F725C96E021343D690A3D3C7419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// proxyMap[proxy.ProxyName] = proxy;
		ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* L_0 = __this->___proxyMap_0;
		RuntimeObject* L_1 = ___0_proxy;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String PureMVC.Interfaces.IProxy::get_ProxyName() */, IProxy_tBDF247BCA1CE5F725C96E021343D690A3D3C7419_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___0_proxy;
		NullCheck(L_0);
		ConcurrentDictionary_2_set_Item_m8A3D939A51CA54516EDEEC62DA9D1C9EBECE5EA1(L_0, L_2, L_3, ConcurrentDictionary_2_set_Item_m8A3D939A51CA54516EDEEC62DA9D1C9EBECE5EA1_RuntimeMethod_var);
		// proxy.OnRegister();
		RuntimeObject* L_4 = ___0_proxy;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(3 /* System.Void PureMVC.Interfaces.IProxy::OnRegister() */, IProxy_tBDF247BCA1CE5F725C96E021343D690A3D3C7419_il2cpp_TypeInfo_var, L_4);
		// }
		return;
	}
}
// PureMVC.Interfaces.IProxy PureMVC.Core.Model::RetrieveProxy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Model_RetrieveProxy_m89ACC7075F27EE1728BE02F5A4155FDAF03B6365 (Model_tC1801604F1411EC2033C8F8B928D904365C604ED* __this, String_t* ___0_proxyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_m8EEAC2B2E54774AFE5C6021B62885C5DA9E8B5FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return proxyMap.TryGetValue(proxyName, out var proxy) ? proxy : null;
		ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* L_0 = __this->___proxyMap_0;
		String_t* L_1 = ___0_proxyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_m8EEAC2B2E54774AFE5C6021B62885C5DA9E8B5FE(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryGetValue_m8EEAC2B2E54774AFE5C6021B62885C5DA9E8B5FE_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0012:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// PureMVC.Interfaces.IProxy PureMVC.Core.Model::RemoveProxy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Model_RemoveProxy_m79B24A08B2A039103D09F7C784F3BD5A143C8C79 (Model_tC1801604F1411EC2033C8F8B928D904365C604ED* __this, String_t* ___0_proxyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m43643BBC1CB64CD5528D95007B3E07008525BDD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProxy_tBDF247BCA1CE5F725C96E021343D690A3D3C7419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (proxyMap.TryRemove(proxyName, out var proxy))
		ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* L_0 = __this->___proxyMap_0;
		String_t* L_1 = ___0_proxyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryRemove_m43643BBC1CB64CD5528D95007B3E07008525BDD3(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryRemove_m43643BBC1CB64CD5528D95007B3E07008525BDD3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// proxy.OnRemove();
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(4 /* System.Void PureMVC.Interfaces.IProxy::OnRemove() */, IProxy_tBDF247BCA1CE5F725C96E021343D690A3D3C7419_il2cpp_TypeInfo_var, L_3);
	}

IL_0016:
	{
		// return proxy;
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean PureMVC.Core.Model::HasProxy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Model_HasProxy_m59B7DFFE03F96AFFFF288EC254905283DF00D590 (Model_tC1801604F1411EC2033C8F8B928D904365C604ED* __this, String_t* ___0_proxyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_ContainsKey_m08B9E898903AD83DBACE68169807E7D8BBC53EAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return proxyMap.ContainsKey(proxyName);
		ConcurrentDictionary_2_t1CBF4E68C0A03993DA716D088212321882A7BE35* L_0 = __this->___proxyMap_0;
		String_t* L_1 = ___0_proxyName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_ContainsKey_m08B9E898903AD83DBACE68169807E7D8BBC53EAE(L_0, L_1, ConcurrentDictionary_2_ContainsKey_m08B9E898903AD83DBACE68169807E7D8BBC53EAE_RuntimeMethod_var);
		return L_2;
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
// System.Void PureMVC.Core.View::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View__ctor_mEFB2D24C6A1668DC7F5A8DCAD2439E43F4B9BEA2 (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_mB78EF640965F84F645BA58EAFA5759ADB80B2A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_mF1F663B649E4F0295A1E956203588FB16C238235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public View()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (instance != null) throw new Exception(SingletonMsg);
		RuntimeObject* L_0 = ((View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields*)il2cpp_codegen_static_fields_for(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var))->___instance_2;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if (instance != null) throw new Exception(SingletonMsg);
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F84C6972C8BFD583E90FACBF273A01C013FE860)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&View__ctor_mEFB2D24C6A1668DC7F5A8DCAD2439E43F4B9BEA2_RuntimeMethod_var)));
	}

IL_0018:
	{
		// instance = this;
		((View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields*)il2cpp_codegen_static_fields_for(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var))->___instance_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields*)il2cpp_codegen_static_fields_for(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var))->___instance_2), (void*)__this);
		// mediatorMap = new ConcurrentDictionary<string, IMediator>();
		ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* L_2 = (ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B*)il2cpp_codegen_object_new(ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConcurrentDictionary_2__ctor_mB78EF640965F84F645BA58EAFA5759ADB80B2A93(L_2, ConcurrentDictionary_2__ctor_mB78EF640965F84F645BA58EAFA5759ADB80B2A93_RuntimeMethod_var);
		__this->___mediatorMap_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mediatorMap_0), (void*)L_2);
		// observerMap = new ConcurrentDictionary<string, IList<IObserver>>();
		ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* L_3 = (ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00*)il2cpp_codegen_object_new(ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ConcurrentDictionary_2__ctor_mF1F663B649E4F0295A1E956203588FB16C238235(L_3, ConcurrentDictionary_2__ctor_mF1F663B649E4F0295A1E956203588FB16C238235_RuntimeMethod_var);
		__this->___observerMap_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___observerMap_1), (void*)L_3);
		// InitializeView();
		VirtualActionInvoker0::Invoke(11 /* System.Void PureMVC.Core.View::InitializeView() */, __this);
		// }
		return;
	}
}
// System.Void PureMVC.Core.View::InitializeView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_InitializeView_m3463405799683A76339839CB7DA4E81C621FD427 (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// PureMVC.Interfaces.IView PureMVC.Core.View::GetInstance(System.Func`1<PureMVC.Interfaces.IView>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* View_GetInstance_m5CB764372A359029EC752B41FA1E7EF2FCF0DA2C (Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* ___0_factory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		RuntimeObject* L_0 = ((View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields*)il2cpp_codegen_static_fields_for(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var))->___instance_2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// instance = factory();
		Func_1_t9B9DCB039D97A633DEDE019863DBFA562ED7465D* L_1 = ___0_factory;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Func_1_Invoke_mA0AC962B934ABED171482CBB52047B86EA29F43D_inline(L_1, NULL);
		((View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields*)il2cpp_codegen_static_fields_for(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var))->___instance_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields*)il2cpp_codegen_static_fields_for(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var))->___instance_2), (void*)L_2);
	}

IL_0012:
	{
		// return instance;
		RuntimeObject* L_3 = ((View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_StaticFields*)il2cpp_codegen_static_fields_for(View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF_il2cpp_TypeInfo_var))->___instance_2;
		return L_3;
	}
}
// System.Void PureMVC.Core.View::RegisterObserver(System.String,PureMVC.Interfaces.IObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_RegisterObserver_m34FE4D3CF67ECCF168E1EAC5F3D1AE62689E6B4D (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, String_t* ___0_notificationName, RuntimeObject* ___1_observer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryAdd_m5A76ED7EF19F31726571C032161AE76727853CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t67CA83FF55D3873EBFD219D6EE028FB7E83E5507_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3EA4AB92B2ADEBA6E3C2F52CEADA43AD0C680594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2F093F2E927C1C1CDF109E1E78784DCCA69C0CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (observerMap.TryGetValue(notificationName, out var observers))
		ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* L_0 = __this->___observerMap_1;
		String_t* L_1 = ___0_notificationName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// observers.Add(observer);
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = ___1_observer;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<PureMVC.Interfaces.IObserver>::Add(T) */, ICollection_1_t67CA83FF55D3873EBFD219D6EE028FB7E83E5507_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}

IL_0018:
	{
		// observerMap.TryAdd(notificationName, new List<IObserver> { observer });
		ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* L_5 = __this->___observerMap_1;
		String_t* L_6 = ___0_notificationName;
		List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* L_7 = (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B*)il2cpp_codegen_object_new(List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m2F093F2E927C1C1CDF109E1E78784DCCA69C0CD6(L_7, List_1__ctor_m2F093F2E927C1C1CDF109E1E78784DCCA69C0CD6_RuntimeMethod_var);
		List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* L_8 = L_7;
		RuntimeObject* L_9 = ___1_observer;
		NullCheck(L_8);
		List_1_Add_m3EA4AB92B2ADEBA6E3C2F52CEADA43AD0C680594_inline(L_8, L_9, List_1_Add_m3EA4AB92B2ADEBA6E3C2F52CEADA43AD0C680594_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_10;
		L_10 = ConcurrentDictionary_2_TryAdd_m5A76ED7EF19F31726571C032161AE76727853CD6(L_5, L_6, L_8, ConcurrentDictionary_2_TryAdd_m5A76ED7EF19F31726571C032161AE76727853CD6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PureMVC.Core.View::NotifyObservers(PureMVC.Interfaces.INotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_NotifyObservers_mA9C29D91E14159A79F4C4C90ECBE8C902172ABE8 (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, RuntimeObject* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m96CA18E4B309E840267FA9F73922DB46310A544F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m76F9ACC5200D8A83F1E04A9C447647815FB6AB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD7F5D19D741D6732BA46FF7AC2C648F0635EC8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INotification_tB5879F2ECA64222F67879DBBCC7A6F0FE1808ACD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_t8A6D4487F1C653E1173D4A7649B81B02F3005992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m15667573EC976BBA7A9F52E73271A0BADFC0CA40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB434D208DFC787C24C1F73C3B24953B01002D660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (observerMap.TryGetValue(notification.Name, out var observersRef))
		ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* L_0 = __this->___observerMap_1;
		RuntimeObject* L_1 = ___0_notification;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String PureMVC.Interfaces.INotification::get_Name() */, INotification_tB5879F2ECA64222F67879DBBCC7A6F0FE1808ACD_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC(L_0, L_2, (&V_0), ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// var observers = new List<IObserver>(observersRef);
		RuntimeObject* L_4 = V_0;
		List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B* L_5 = (List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B*)il2cpp_codegen_object_new(List_1_tC1FC2E9F3DD13487582230B72DA105EB0372FE0B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mB434D208DFC787C24C1F73C3B24953B01002D660(L_5, L_4, List_1__ctor_mB434D208DFC787C24C1F73C3B24953B01002D660_RuntimeMethod_var);
		// foreach (var observer in observers)
		NullCheck(L_5);
		Enumerator_tBEAC9D5AB75E6B3B0894A5926E43CDA19592E05E L_6;
		L_6 = List_1_GetEnumerator_m15667573EC976BBA7A9F52E73271A0BADFC0CA40(L_5, List_1_GetEnumerator_m15667573EC976BBA7A9F52E73271A0BADFC0CA40_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m96CA18E4B309E840267FA9F73922DB46310A544F((&V_1), Enumerator_Dispose_m96CA18E4B309E840267FA9F73922DB46310A544F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_0023_1:
			{
				// foreach (var observer in observers)
				RuntimeObject* L_7;
				L_7 = Enumerator_get_Current_mBD7F5D19D741D6732BA46FF7AC2C648F0635EC8B_inline((&V_1), Enumerator_get_Current_mBD7F5D19D741D6732BA46FF7AC2C648F0635EC8B_RuntimeMethod_var);
				// observer.NotifyObserver(notification);
				RuntimeObject* L_8 = ___0_notification;
				NullCheck(L_7);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void PureMVC.Interfaces.IObserver::NotifyObserver(PureMVC.Interfaces.INotification) */, IObserver_t8A6D4487F1C653E1173D4A7649B81B02F3005992_il2cpp_TypeInfo_var, L_7, L_8);
			}

IL_0030_1:
			{
				// foreach (var observer in observers)
				bool L_9;
				L_9 = Enumerator_MoveNext_m76F9ACC5200D8A83F1E04A9C447647815FB6AB7A((&V_1), Enumerator_MoveNext_m76F9ACC5200D8A83F1E04A9C447647815FB6AB7A_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void PureMVC.Core.View::RemoveObserver(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_RemoveObserver_m49F9BE43E4E8F9E82B84E43978674BACD8009BC8 (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, String_t* ___0_notificationName, RuntimeObject* ___1_notifyContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m0DEFB93CFEA47861D058325E723D9243FBBCD7B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t67CA83FF55D3873EBFD219D6EE028FB7E83E5507_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t98E8B8AED08337B306DFC223ABA10FFB297BCA53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_t8A6D4487F1C653E1173D4A7649B81B02F3005992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// if (observerMap.TryGetValue(notificationName, out var observers))
		ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* L_0 = __this->___observerMap_1;
		String_t* L_1 = ___0_notificationName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryGetValue_mD7B2CF6422CABEBD24EBCEE5A34690620FC916DC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// for (var i = 0; i < observers.Count; i++)
		V_1 = 0;
		goto IL_0030;
	}

IL_0014:
	{
		// if (observers[i].CompareNotifyContext(notifyContext))
		RuntimeObject* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>::get_Item(System.Int32) */, IList_1_t98E8B8AED08337B306DFC223ABA10FFB297BCA53_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_6 = ___1_notifyContext;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean PureMVC.Interfaces.IObserver::CompareNotifyContext(System.Object) */, IObserver_t8A6D4487F1C653E1173D4A7649B81B02F3005992_il2cpp_TypeInfo_var, L_5, L_6);
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// observers.RemoveAt(i);
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<PureMVC.Interfaces.IObserver>::RemoveAt(System.Int32) */, IList_1_t98E8B8AED08337B306DFC223ABA10FFB297BCA53_il2cpp_TypeInfo_var, L_8, L_9);
		// break;
		goto IL_0039;
	}

IL_002c:
	{
		// for (var i = 0; i < observers.Count; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0030:
	{
		// for (var i = 0; i < observers.Count; i++)
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<PureMVC.Interfaces.IObserver>::get_Count() */, ICollection_1_t67CA83FF55D3873EBFD219D6EE028FB7E83E5507_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0014;
		}
	}

IL_0039:
	{
		// if (observers.Count == 0)
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<PureMVC.Interfaces.IObserver>::get_Count() */, ICollection_1_t67CA83FF55D3873EBFD219D6EE028FB7E83E5507_il2cpp_TypeInfo_var, L_14);
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		// observerMap.TryRemove(notificationName, out _);
		ConcurrentDictionary_2_t71C1FAA41198C9E1727793C9D50433F3E47E7A00* L_16 = __this->___observerMap_1;
		String_t* L_17 = ___0_notificationName;
		NullCheck(L_16);
		bool L_18;
		L_18 = ConcurrentDictionary_2_TryRemove_m0DEFB93CFEA47861D058325E723D9243FBBCD7B1(L_16, L_17, (&V_2), ConcurrentDictionary_2_TryRemove_m0DEFB93CFEA47861D058325E723D9243FBBCD7B1_RuntimeMethod_var);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void PureMVC.Core.View::RegisterMediator(PureMVC.Interfaces.IMediator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void View_RegisterMediator_mAACDC42587BB4F0E65D46D1F653F8550A1AB76B1 (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, RuntimeObject* ___0_mediator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryAdd_m86F85068F73DB4A3A66B1D2C071AA92847782F63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Observer_t10D466608C184AB937B367C0F561F609D9F72CE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// if(mediatorMap.TryAdd(mediator.MediatorName, mediator))
		ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* L_0 = __this->___mediatorMap_0;
		RuntimeObject* L_1 = ___0_mediator;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String PureMVC.Interfaces.IMediator::get_MediatorName() */, IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___0_mediator;
		NullCheck(L_0);
		bool L_4;
		L_4 = ConcurrentDictionary_2_TryAdd_m86F85068F73DB4A3A66B1D2C071AA92847782F63(L_0, L_2, L_3, ConcurrentDictionary_2_TryAdd_m86F85068F73DB4A3A66B1D2C071AA92847782F63_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// var interests = mediator.ListNotificationInterests();
		RuntimeObject* L_5 = ___0_mediator;
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = InterfaceFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(3 /* System.String[] PureMVC.Interfaces.IMediator::ListNotificationInterests() */, IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		// if (interests.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0051;
		}
	}
	{
		// IObserver observer = new Observer(mediator.HandleNotification, mediator);
		RuntimeObject* L_8 = ___0_mediator;
		RuntimeObject* L_9 = L_8;
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_10 = (Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903*)il2cpp_codegen_object_new(Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m843BF3A468DE8D8652232DC549C878AA16C0F2BD(L_10, L_9, (intptr_t)((void*)GetInterfaceMethodInfo(L_9, 4, IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var)), NULL);
		RuntimeObject* L_11 = ___0_mediator;
		Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* L_12 = (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9*)il2cpp_codegen_object_new(Observer_t10D466608C184AB937B367C0F561F609D9F72CE9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Observer__ctor_m6A0854E6E0303C299B1CF188A2BED35D5174B9A8(L_12, L_10, L_11, NULL);
		V_1 = L_12;
		// foreach (var interest in interests)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		V_2 = L_13;
		V_3 = 0;
		goto IL_004b;
	}

IL_0039:
	{
		// foreach (var interest in interests)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		// RegisterObserver(interest, observer);
		String_t* L_18 = V_4;
		RuntimeObject* L_19 = V_1;
		VirtualActionInvoker2< String_t*, RuntimeObject* >::Invoke(12 /* System.Void PureMVC.Core.View::RegisterObserver(System.String,PureMVC.Interfaces.IObserver) */, __this, L_18, L_19);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004b:
	{
		// foreach (var interest in interests)
		int32_t L_21 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0039;
		}
	}

IL_0051:
	{
		// mediator.OnRegister();
		RuntimeObject* L_23 = ___0_mediator;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(5 /* System.Void PureMVC.Interfaces.IMediator::OnRegister() */, IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var, L_23);
	}

IL_0057:
	{
		// }
		return;
	}
}
// PureMVC.Interfaces.IMediator PureMVC.Core.View::RetrieveMediator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* View_RetrieveMediator_mD3CD5AC3BFCD75EFF90FC05F2F9AF990C4589D36 (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, String_t* ___0_mediatorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_m00F8536C6A3FEA4B51602ED490287400342CEF58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return mediatorMap.TryGetValue(mediatorName, out var mediator) ? mediator : null;
		ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* L_0 = __this->___mediatorMap_0;
		String_t* L_1 = ___0_mediatorName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryGetValue_m00F8536C6A3FEA4B51602ED490287400342CEF58(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryGetValue_m00F8536C6A3FEA4B51602ED490287400342CEF58_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0012:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// PureMVC.Interfaces.IMediator PureMVC.Core.View::RemoveMediator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* View_RemoveMediator_m9A142973AB5A71FA031B6B3B8F953D685ABC7FFC (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, String_t* ___0_mediatorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryRemove_m7B4E832B8D49A401FBD4DB81A37690729FCFE8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// if (mediatorMap.TryRemove(mediatorName, out var mediator))
		ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* L_0 = __this->___mediatorMap_0;
		String_t* L_1 = ___0_mediatorName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_TryRemove_m7B4E832B8D49A401FBD4DB81A37690729FCFE8FC(L_0, L_1, (&V_0), ConcurrentDictionary_2_TryRemove_m7B4E832B8D49A401FBD4DB81A37690729FCFE8FC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// var interests = mediator.ListNotificationInterests();
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = InterfaceFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(3 /* System.String[] PureMVC.Interfaces.IMediator::ListNotificationInterests() */, IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var, L_3);
		// foreach (var interest in interests)
		V_1 = L_4;
		V_2 = 0;
		goto IL_002b;
	}

IL_001b:
	{
		// foreach (var interest in interests)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// RemoveObserver(interest, mediator);
		String_t* L_9 = V_3;
		RuntimeObject* L_10 = V_0;
		VirtualActionInvoker2< String_t*, RuntimeObject* >::Invoke(14 /* System.Void PureMVC.Core.View::RemoveObserver(System.String,System.Object) */, __this, L_9, L_10);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002b:
	{
		// foreach (var interest in interests)
		int32_t L_12 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// mediator.OnRemove();
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(6 /* System.Void PureMVC.Interfaces.IMediator::OnRemove() */, IMediator_t477F5AF301C6E0592360B2432A2B9541906A639F_il2cpp_TypeInfo_var, L_14);
	}

IL_0037:
	{
		// return mediator;
		RuntimeObject* L_15 = V_0;
		return L_15;
	}
}
// System.Boolean PureMVC.Core.View::HasMediator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool View_HasMediator_m90174011F9DA629DD3C2ECD30D059DCFC32E0B4E (View_tD00F5A84AF9F8D91E475D007FFF15C995A6C0DCF* __this, String_t* ___0_mediatorName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_ContainsKey_mCE96C31A0A04B1EF30AA9023A92A601DD1AF2EB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mediatorMap.ContainsKey(mediatorName);
		ConcurrentDictionary_2_t6853A71BDE4D873FBB7A41D1346DDE17C059FA3B* L_0 = __this->___mediatorMap_0;
		String_t* L_1 = ___0_mediatorName;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentDictionary_2_ContainsKey_mCE96C31A0A04B1EF30AA9023A92A601DD1AF2EB3(L_0, L_1, ConcurrentDictionary_2_ContainsKey_mCE96C31A0A04B1EF30AA9023A92A601DD1AF2EB3_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Proxy_set_ProxyName_m9F247381A9E7DFF46B30496EFEDCAF28C85E9B46_inline (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ProxyName { get; protected set; }
		String_t* L_0 = ___0_value;
		__this->___U3CProxyNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProxyNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Proxy_set_Data_mBEE51154B7E41AB54F2F16CBD8DB57FB99FF9B9C_inline (Proxy_t5018BD3B069E781B7B2DD989D2A30939FAD8F31B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object Data { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Notification_set_Body_m745EBB7BC43AFFD8ACF403FF6B6D9DD57124BAA8_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object Body { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CBodyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBodyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Notification_set_Type_m271A8522771A45DC4A3F53020F370AF2B84A0A01_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Notification_get_Name_m3243AFFDAA6578FBF9B646CCB91F18D4818921A1_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Notification_get_Body_m240B7D9B9DB89930C83561EC00CEDFCDE313906A_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) 
{
	{
		// public object Body { get; set; }
		RuntimeObject* L_0 = __this->___U3CBodyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Notification_get_Type_mAE9037D3F9395FBD0D87A15B60E6E6E0072B08E0_inline (Notification_t4B3BEA2F513AD9D031748C5BC613BB6339197C36* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Observer_set_NotifyMethod_mDE684A9FE3C21A0494566976D6DC89F61FFB6868_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Action<INotification> NotifyMethod { get; set; }
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_0 = ___0_value;
		__this->___U3CNotifyMethodU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNotifyMethodU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Observer_set_NotifyContext_m92CADF812D5DA1E7EEA915C995526DF9EF5C5D8D_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object NotifyContext { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CNotifyContextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNotifyContextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* Observer_get_NotifyMethod_m8F8C387A4C2ADC7BEC85DEE25AFAEA56370E2913_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, const RuntimeMethod* method) 
{
	{
		// public Action<INotification> NotifyMethod { get; set; }
		Action_1_tDC34923D5B2AD59EFB7AA7DB00EAF3F12CAA1903* L_0 = __this->___U3CNotifyMethodU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Observer_get_NotifyContext_m270BC5DFAB5E3D246D1239D7C39478726B644F4E_inline (Observer_t10D466608C184AB937B367C0F561F609D9F72CE9* __this, const RuntimeMethod* method) 
{
	{
		// public object NotifyContext { get; set; }
		RuntimeObject* L_0 = __this->___U3CNotifyContextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mediator_set_MediatorName_m1EA0DE9A1720AD0139B03CB6621EE4B9FC41BF5C_inline (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MediatorName { get; protected set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMediatorNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMediatorNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mediator_set_ViewComponent_m9F08AA9FD0E1BF7E6FC79B94CA00BFC26DD29CD5_inline (Mediator_t2360A2B2C7277FE49F0DB6C7BB58EDE04E734F78* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public object ViewComponent { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CViewComponentU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CViewComponentU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
