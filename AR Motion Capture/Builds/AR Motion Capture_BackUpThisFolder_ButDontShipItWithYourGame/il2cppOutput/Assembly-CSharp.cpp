#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Net.IPAddress,System.Boolean>
struct Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<System.Net.IPAddress>
struct IEnumerable_1_tA197E32CF58DD427ECD02C6F8F00AD83B8B1EFC5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AnimationCode
struct AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291;
// AnimationFaceCode
struct AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90;
// AnimationHandCode
struct AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// BodyCode
struct BodyCode_t0FFDF00777785990B9336AE8C4A064FDDA64367C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// ChangeColor
struct ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// LineCode
struct LineCode_t2B8B9441CC213EECB217B355A969F2989E9CDF64;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AnimationCode/<>c
struct U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF;
// AnimationCode/StateObject
struct StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282;
// AnimationFaceCode/<>c
struct U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643;
// AnimationFaceCode/StateObject
struct StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94;
// AnimationHandCode/<>c
struct U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9;
// AnimationHandCode/StateObject
struct StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC;
// ChangeColor/<>c
struct U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184;
// ChangeColor/StateObject
struct StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D547B918219335492CE47BC1612385D679D49AB;
IL2CPP_EXTERN_C String_t* _stringLiteral54F24FABA8876E076E403DD357B5FBBBECA98EF5;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016;
IL2CPP_EXTERN_C String_t* _stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationCode_AcceptCallback_mB74B25C9A87927303A8676AE14AD3BDEE3D180AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationCode_ReadCallback_m99DB011CB5A85CF64AFF00009AB17CF4A8972D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationCode_U3CStartU3Eb__12_0_m04E2FB2DD93D8ED6F7CB7BF3CE78248AF79CA9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationFaceCode_AcceptCallback_m36C004063DD4BF511F40D4FB4CC47910A770E179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationFaceCode_ReadCallback_m46888AEB9E6FAF88740D9BAB36BECFBBDED39840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationFaceCode_U3CStartU3Eb__12_0_m4A73DD7EA8245D7B164E1077CFF98A54FBC064CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationHandCode_AcceptCallback_m400C669455968461A8CE981D304C113BDFEB6B6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationHandCode_ReadCallback_mC55B599B0056077B824EBDB8E100F442E7436F2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationHandCode_U3CStartU3Eb__12_0_m2DA85DBBC375C127B03005CB9B70163770405AD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m5C0463CE19B24DC0C1ADD38C7B883328DFF2A407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mB323D10D932D471C3D4F08BD1BCD163EE9E6B995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_m5A8974D3E9F17EB101301E32DC5881BD4F25A6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_mA6F489478980A07F30C30A548A6126E3BD785E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m62E10BE09F10951922B02F13B62F9B96A2E71D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mC9CEAD0C8C51F2B6DC195239643BB5D98AE2B0F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_mBA4FDB44F8F99093E3F3315C89AC60019DABA397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_m5426A08AEA8B881CC175FA470896C21085EE9C8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeColor_AcceptCallback_mC3EADF5DB99C48591629B6E66252C7415F3CD2A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeColor_ReadCallback_mD91034BCEF9978612522F158D7420153AB7A089B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeColor_U3CStartU3Eb__8_0_mDB40D20A55B1662B2E4EC69DD46B92CD243B4C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CListenEventsU3Eb__10_0_mB49E8C90F989491E7D91C49BCAD7B5EB00FC0353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CListenEventsU3Eb__14_0_mB69A8A035C9B8F7D74C8C419367F4284EE1F81D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CListenEventsU3Eb__14_0_mCAE8074C8D03F6B29244895531C9009F1C69840A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CListenEventsU3Eb__14_0_mF2BC8F56C420D7A077D0F7FABC74D015FA445F2F_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// AnimationCode/<>c
struct U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF  : public RuntimeObject
{
};

struct U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_StaticFields
{
	// AnimationCode/<>c AnimationCode/<>c::<>9
	U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF* ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.Boolean> AnimationCode/<>c::<>9__14_0
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* ___U3CU3E9__14_0_1;
};

// AnimationCode/StateObject
struct StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282  : public RuntimeObject
{
	// System.Net.Sockets.Socket AnimationCode/StateObject::workSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___workSocket_0;
	// System.Byte[] AnimationCode/StateObject::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_2;
	// System.Text.StringBuilder AnimationCode/StateObject::colorCode
	StringBuilder_t* ___colorCode_3;
};

// AnimationFaceCode/<>c
struct U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643  : public RuntimeObject
{
};

struct U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_StaticFields
{
	// AnimationFaceCode/<>c AnimationFaceCode/<>c::<>9
	U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643* ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.Boolean> AnimationFaceCode/<>c::<>9__14_0
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* ___U3CU3E9__14_0_1;
};

// AnimationFaceCode/StateObject
struct StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94  : public RuntimeObject
{
	// System.Net.Sockets.Socket AnimationFaceCode/StateObject::workSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___workSocket_0;
	// System.Byte[] AnimationFaceCode/StateObject::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_2;
	// System.Text.StringBuilder AnimationFaceCode/StateObject::colorCode
	StringBuilder_t* ___colorCode_3;
};

// AnimationHandCode/<>c
struct U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9  : public RuntimeObject
{
};

struct U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_StaticFields
{
	// AnimationHandCode/<>c AnimationHandCode/<>c::<>9
	U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9* ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.Boolean> AnimationHandCode/<>c::<>9__14_0
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* ___U3CU3E9__14_0_1;
};

// AnimationHandCode/StateObject
struct StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC  : public RuntimeObject
{
	// System.Net.Sockets.Socket AnimationHandCode/StateObject::workSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___workSocket_0;
	// System.Byte[] AnimationHandCode/StateObject::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_2;
	// System.Text.StringBuilder AnimationHandCode/StateObject::colorCode
	StringBuilder_t* ___colorCode_3;
};

// ChangeColor/<>c
struct U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184  : public RuntimeObject
{
};

struct U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_StaticFields
{
	// ChangeColor/<>c ChangeColor/<>c::<>9
	U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184* ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.Boolean> ChangeColor/<>c::<>9__10_0
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* ___U3CU3E9__10_0_1;
};

// ChangeColor/StateObject
struct StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42  : public RuntimeObject
{
	// System.Net.Sockets.Socket ChangeColor/StateObject::workSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___workSocket_0;
	// System.Byte[] ChangeColor/StateObject::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_2;
	// System.Text.StringBuilder ChangeColor/StateObject::colorCode
	StringBuilder_t* ___colorCode_3;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// AnimationCode/<Start>d__12
struct U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184 
{
	// System.Int32 AnimationCode/<Start>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder AnimationCode/<Start>d__12::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// AnimationCode AnimationCode/<Start>d__12::<>4__this
	AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter AnimationCode/<Start>d__12::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// AnimationFaceCode/<Start>d__12
struct U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333 
{
	// System.Int32 AnimationFaceCode/<Start>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder AnimationFaceCode/<Start>d__12::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// AnimationFaceCode AnimationFaceCode/<Start>d__12::<>4__this
	AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter AnimationFaceCode/<Start>d__12::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// AnimationHandCode/<Start>d__12
struct U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6 
{
	// System.Int32 AnimationHandCode/<Start>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder AnimationHandCode/<Start>d__12::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// AnimationHandCode AnimationHandCode/<Start>d__12::<>4__this
	AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter AnimationHandCode/<Start>d__12::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// ChangeColor/<Start>d__8
struct U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12 
{
	// System.Int32 ChangeColor/<Start>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder ChangeColor/<Start>d__8::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// ChangeColor ChangeColor/<Start>d__8::<>4__this
	ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter ChangeColor/<Start>d__8::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Func`2<System.Net.IPAddress,System.Boolean>
struct Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnimationCode
struct AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] AnimationCode::Body
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Body_4;
	// System.Collections.Generic.List`1<System.String> AnimationCode::lines
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___lines_5;
	// System.Threading.CancellationTokenSource AnimationCode::source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___source_7;
	// System.Threading.ManualResetEvent AnimationCode::allDone
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___allDone_8;
	// UnityEngine.Renderer AnimationCode::objectRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___objectRenderer_9;
	// System.Single[] AnimationCode::x
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___x_10;
	// System.Single[] AnimationCode::y
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___y_11;
	// System.Single[] AnimationCode::z
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___z_12;
};

struct AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields
{
	// System.Net.Sockets.Socket AnimationCode::listener
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___listener_6;
	// System.Int32 AnimationCode::PORT
	int32_t ___PORT_13;
	// System.Int32 AnimationCode::WAITTIME
	int32_t ___WAITTIME_14;
};

// AnimationFaceCode
struct AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] AnimationFaceCode::Face
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Face_4;
	// System.Collections.Generic.List`1<System.String> AnimationFaceCode::lines
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___lines_5;
	// System.Threading.CancellationTokenSource AnimationFaceCode::source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___source_7;
	// System.Threading.ManualResetEvent AnimationFaceCode::allDone
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___allDone_8;
	// UnityEngine.Renderer AnimationFaceCode::objectRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___objectRenderer_9;
	// System.Single[] AnimationFaceCode::x
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___x_10;
	// System.Single[] AnimationFaceCode::y
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___y_11;
	// System.Single[] AnimationFaceCode::z
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___z_12;
};

struct AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields
{
	// System.Net.Sockets.Socket AnimationFaceCode::listener
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___listener_6;
	// System.Int32 AnimationFaceCode::PORT
	int32_t ___PORT_13;
	// System.Int32 AnimationFaceCode::WAITTIME
	int32_t ___WAITTIME_14;
};

// AnimationHandCode
struct AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] AnimationHandCode::Hand
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Hand_4;
	// System.Collections.Generic.List`1<System.String> AnimationHandCode::lines
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___lines_5;
	// System.Threading.CancellationTokenSource AnimationHandCode::source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___source_7;
	// System.Threading.ManualResetEvent AnimationHandCode::allDone
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___allDone_8;
	// UnityEngine.Renderer AnimationHandCode::objectRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___objectRenderer_9;
	// System.Single[] AnimationHandCode::x
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___x_10;
	// System.Single[] AnimationHandCode::y
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___y_11;
	// System.Single[] AnimationHandCode::z
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___z_12;
};

struct AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields
{
	// System.Net.Sockets.Socket AnimationHandCode::listener
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___listener_6;
	// System.Int32 AnimationHandCode::PORT
	int32_t ___PORT_13;
	// System.Int32 AnimationHandCode::WAITTIME
	int32_t ___WAITTIME_14;
};

// BodyCode
struct BodyCode_t0FFDF00777785990B9336AE8C4A064FDDA64367C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] BodyCode::Body
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___Body_4;
	// System.Collections.Generic.List`1<System.String> BodyCode::lines
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___lines_5;
	// System.Int32 BodyCode::counter
	int32_t ___counter_6;
};

// ChangeColor
struct ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Threading.CancellationTokenSource ChangeColor::source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___source_5;
	// System.Threading.ManualResetEvent ChangeColor::allDone
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___allDone_6;
	// UnityEngine.Renderer ChangeColor::objectRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___objectRenderer_7;
	// UnityEngine.Color ChangeColor::matColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___matColor_8;
};

struct ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields
{
	// System.Net.Sockets.Socket ChangeColor::listener
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___listener_4;
	// System.Int32 ChangeColor::PORT
	int32_t ___PORT_9;
	// System.Int32 ChangeColor::WAITTIME
	int32_t ___WAITTIME_10;
};

// LineCode
struct LineCode_t2B8B9441CC213EECB217B355A969F2989E9CDF64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LineRenderer LineCode::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_4;
	// UnityEngine.Transform LineCode::origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___origin_5;
	// UnityEngine.Transform LineCode::destination
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___destination_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AnimationCode/<Start>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m62E10BE09F10951922B02F13B62F9B96A2E71D39_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AnimationCode/<Start>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m5C0463CE19B24DC0C1ADD38C7B883328DFF2A407_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AnimationFaceCode/<Start>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mC9CEAD0C8C51F2B6DC195239643BB5D98AE2B0F6_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AnimationFaceCode/<Start>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mB323D10D932D471C3D4F08BD1BCD163EE9E6B995_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AnimationHandCode/<Start>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_mBA4FDB44F8F99093E3F3315C89AC60019DABA397_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AnimationHandCode/<Start>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_m5A8974D3E9F17EB101301E32DC5881BD4F25A6AA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ChangeColor/<Start>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_m5426A08AEA8B881CC175FA470896C21085EE9C8D_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* ___stateMachine0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ChangeColor/<Start>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_mA6F489478980A07F30C30A548A6126E3BD785E0D_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AnimationCode/<Start>d__12>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m62E10BE09F10951922B02F13B62F9B96A2E71D39 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m62E10BE09F10951922B02F13B62F9B96A2E71D39_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083 (const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Net.IPAddress,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m27F266C9FB9DFF776F57600B17D3F69C70D1A6D6 (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Net.IPAddress>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC (RuntimeObject* ___source0, Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* ___predicate1, const RuntimeMethod* method)
{
	return ((  IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* (*) (RuntimeObject*, Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___localEP0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___backlog0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPAddress::MapToIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_MapToIPv4_m31534E64E6ABA73E7C288EAD595EBC2621E84563 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.Net.Sockets.Socket::BeginAccept(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginAccept_mF6EA42D150734FE0A259576E0C8EAC76CF5B07B2 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void AnimationCode/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m814CE742DBC4C2CF3E9665EFD2A2E43ECD32ACAF (StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* __this, const RuntimeMethod* method) ;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___state5, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void AnimationCode::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_SetColors_mA34DC426E2303B46CCE6C4D62026F9961AD4983E (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void AnimationCode::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_ListenEvents_m44BDC6FCCA2AEE5DC654D4D87C6D066F1A76CF37 (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AnimationCode/<Start>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m5C0463CE19B24DC0C1ADD38C7B883328DFF2A407 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m5C0463CE19B24DC0C1ADD38C7B883328DFF2A407_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void AnimationCode/<Start>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_MoveNext_mB97D166CFCD184C4DB697FC216DE85D11907EE8F (U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void AnimationCode/<Start>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_SetStateMachine_mCC92D569D266A6AE88B9B4457CF93F5B2D9630E8 (U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void AnimationCode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA050D959C06320944230E7BAACEDDEF4B67F9FBB (U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AnimationFaceCode/<Start>d__12>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mC9CEAD0C8C51F2B6DC195239643BB5D98AE2B0F6 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mC9CEAD0C8C51F2B6DC195239643BB5D98AE2B0F6_gshared)(__this, ___stateMachine0, method);
}
// System.Void AnimationFaceCode/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m3A8F4C13BA36916FFFE5F1A2193EAF88329DFE53 (StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* __this, const RuntimeMethod* method) ;
// System.Void AnimationFaceCode::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_SetColors_mB46EDCFF79F1093B6C39B7AE7FD91A13988B1077 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Void AnimationFaceCode::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_ListenEvents_m70F19D0FD5F36EBBDBBCF31030B8CB690923F341 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AnimationFaceCode/<Start>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mB323D10D932D471C3D4F08BD1BCD163EE9E6B995 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mB323D10D932D471C3D4F08BD1BCD163EE9E6B995_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void AnimationFaceCode/<Start>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_MoveNext_mC23BC93A8604FD6ACF3659470813FB6ED625D3CE (U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* __this, const RuntimeMethod* method) ;
// System.Void AnimationFaceCode/<Start>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_SetStateMachine_m4A5263664BBCB6E67A1F38B0EAE2A86E8ED2486C (U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void AnimationFaceCode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC0B61C2BAADE35E62EBBDB7F6BD2A90C101B0BE9 (U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<AnimationHandCode/<Start>d__12>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_mBA4FDB44F8F99093E3F3315C89AC60019DABA397 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_mBA4FDB44F8F99093E3F3315C89AC60019DABA397_gshared)(__this, ___stateMachine0, method);
}
// System.Void AnimationHandCode/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m7CBB8663AB127B05C5968F1A5A26F01C33E3F677 (StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* __this, const RuntimeMethod* method) ;
// System.Void AnimationHandCode::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_SetColors_mFFEFEFEA0D74B751CF50D2CA7B22F4D2C631E556 (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Void AnimationHandCode::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_ListenEvents_m43BE5ABDBE9E25321814FA8C3C7A088A6F13AD9A (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,AnimationHandCode/<Start>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_m5A8974D3E9F17EB101301E32DC5881BD4F25A6AA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_m5A8974D3E9F17EB101301E32DC5881BD4F25A6AA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void AnimationHandCode/<Start>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_MoveNext_mFDCE9E59D8637FBC9F7EADE9C3BA47B3EA9F364F (U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* __this, const RuntimeMethod* method) ;
// System.Void AnimationHandCode/<Start>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_SetStateMachine_mB4BF9FF52CE590C4EC24300372CD9E6A520B0976 (U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void AnimationHandCode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m715BEC293F94A8A64D9CC18DDBA64C143EF3915D (U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.String> System.IO.File::ReadLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* File_ReadLines_mD8EF6C087859E5268943F4F6A408EC0C0328680D (String_t* ___path0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ChangeColor/<Start>d__8>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_m5426A08AEA8B881CC175FA470896C21085EE9C8D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_m5426A08AEA8B881CC175FA470896C21085EE9C8D_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void ChangeColor/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m8219B6446845A1AB4214FE2E2E511A7F8084BA84 (StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* __this, const RuntimeMethod* method) ;
// System.Void ChangeColor::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_SetColors_mBFF2B39C8DB327CD8C07D88D14107D1C7DC57310 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void ChangeColor::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_ListenEvents_m535C01AF1525A8F862A9C261A10B046236EA9722 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ChangeColor/<Start>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_mA6F489478980A07F30C30A548A6126E3BD785E0D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_mA6F489478980A07F30C30A548A6126E3BD785E0D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ChangeColor/<Start>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_MoveNext_mCCF15D8736D01CE7869157C37ABEAD9DDF4FF2D1 (U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* __this, const RuntimeMethod* method) ;
// System.Void ChangeColor/<Start>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_SetStateMachine_m4F298B1B3588E036AFAEA07AF56647F36C172FFE (U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ChangeColor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94B01B7D2EBAC0FEF01773E680DF2B6C3DD121E4 (U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
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
// System.Void AnimationCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode__ctor_m72A62F7F28AE3D390E3F3295905881474D5D9DBF (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float[] x = new float[33];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		__this->___x_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_10), (void*)L_0);
		// private float[] y = new float[33];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		__this->___y_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y_11), (void*)L_1);
		// private float[] z = new float[33];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		__this->___z_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_12), (void*)L_2);
		// AnimationCode()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// source = new CancellationTokenSource();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_3 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_3, NULL);
		__this->___source_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_7), (void*)L_3);
		// allDone = new ManualResetEvent(false);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_4, (bool)0, NULL);
		__this->___allDone_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allDone_8), (void*)L_4);
		// }
		return;
	}
}
// System.Void AnimationCode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_Start_m18BE2DC32E792256F41AA76876CDFEC5A3E8EAD8 (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m62E10BE09F10951922B02F13B62F9B96A2E71D39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m62E10BE09F10951922B02F13B62F9B96A2E71D39(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m62E10BE09F10951922B02F13B62F9B96A2E71D39_RuntimeMethod_var);
		return;
	}
}
// System.Void AnimationCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_Update_m974A9C48F4234AFE702F50F239BD33213CF83FA9 (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i =0; i<=32;i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		// Body[i].transform.localPosition = new Vector3(x[i], y[i], z[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___Body_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___x_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___y_11;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___z_12;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_8, L_12, L_16, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_17, NULL);
		// for (int i =0; i<=32;i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0037:
	{
		// for (int i =0; i<=32;i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)32))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationCode::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_ListenEvents_m44BDC6FCCA2AEE5DC654D4D87C6D066F1A76CF37 (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCode_AcceptCallback_mB74B25C9A87927303A8676AE14AD3BDEE3D180AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CListenEventsU3Eb__14_0_mB69A8A035C9B8F7D74C8C419367F4284EE1F81D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B2_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B2_1 = NULL;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B1_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B1_1 = NULL;
	{
		// IPHostEntry ipHostInfo = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_1;
		L_1 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_0, NULL);
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		NullCheck(L_1);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_3 = ((U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF* L_5 = ((U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_6 = (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*)il2cpp_codegen_object_new(Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m27F266C9FB9DFF776F57600B17D3F69C70D1A6D6(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CListenEventsU3Eb__14_0_mB69A8A035C9B8F7D74C8C419367F4284EE1F81D4_RuntimeMethod_var), NULL);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_7 = L_6;
		((U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002e:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8;
		L_8 = Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		V_0 = L_8;
		// IPEndPoint localEndPoint = new IPEndPoint(ipAddress, PORT);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var);
		int32_t L_10 = ((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___PORT_13;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_11, L_9, L_10, NULL);
		V_1 = L_11;
		// listener = new Socket(ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_12, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_14, L_13, 1, 6, NULL);
		((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___listener_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___listener_6), (void*)L_14);
	}
	try
	{// begin try (depth: 1)
		{
			// listener.Bind(localEndPoint);
			il2cpp_codegen_runtime_class_init_inline(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = ((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___listener_6;
			IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_16 = V_1;
			NullCheck(L_15);
			Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_15, L_16, NULL);
			// listener.Listen(10);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_17 = ((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___listener_6;
			NullCheck(L_17);
			Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC(L_17, ((int32_t)10), NULL);
			goto IL_00d9_1;
		}

IL_006b_1:
		{
			// allDone.Reset();
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_18 = __this->___allDone_8;
			NullCheck(L_18);
			bool L_19;
			L_19 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_18, NULL);
			// print("Waiting for a connection... host :" + ipAddress.MapToIPv4().ToString() + " port : " + PORT);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_20 = V_0;
			NullCheck(L_20);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21;
			L_21 = IPAddress_MapToIPv4_m31534E64E6ABA73E7C288EAD595EBC2621E84563(L_20, NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			il2cpp_codegen_runtime_class_init_inline(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var);
			String_t* L_23;
			L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___PORT_13), NULL);
			String_t* L_24;
			L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06, L_22, _stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016, L_23, NULL);
			MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_24, NULL);
			// listener.BeginAccept(new AsyncCallback(AcceptCallback),listener);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_25 = ((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___listener_6;
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_26 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_26, __this, (intptr_t)((void*)AnimationCode_AcceptCallback_mB74B25C9A87927303A8676AE14AD3BDEE3D180AD_RuntimeMethod_var), NULL);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_27 = ((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___listener_6;
			NullCheck(L_25);
			RuntimeObject* L_28;
			L_28 = Socket_BeginAccept_mF6EA42D150734FE0A259576E0C8EAC76CF5B07B2(L_25, L_26, L_27, NULL);
			goto IL_00d0_1;
		}

IL_00be_1:
		{
			// if (allDone.WaitOne(WAITTIME))
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_29 = __this->___allDone_8;
			il2cpp_codegen_runtime_class_init_inline(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var);
			int32_t L_30 = ((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___WAITTIME_14;
			NullCheck(L_29);
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_29, L_30);
			if (L_31)
			{
				goto IL_00d9_1;
			}
		}

IL_00d0_1:
		{
			// while(!token.IsCancellationRequested)
			bool L_32;
			L_32 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_32)
			{
				goto IL_00be_1;
			}
		}

IL_00d9_1:
		{
			// while (!token.IsCancellationRequested)
			bool L_33;
			L_33 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_33)
			{
				goto IL_006b_1;
			}
		}
		{
			// }
			goto IL_00f0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.Exception)
		// print(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_34, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f0;
	}// end catch (depth: 1)

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void AnimationCode::AcceptCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_AcceptCallback_mB74B25C9A87927303A8676AE14AD3BDEE3D180AD (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCode_ReadCallback_m99DB011CB5A85CF64AFF00009AB17CF4A8972D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* V_1 = NULL;
	{
		// Socket listener = (Socket)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		// Socket handler = listener.EndAccept(ar);
		RuntimeObject* L_2 = ___ar0;
		NullCheck(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3;
		L_3 = Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_2, NULL);
		V_0 = L_3;
		// allDone.Set();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = __this->___allDone_8;
		NullCheck(L_4);
		bool L_5;
		L_5 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_4, NULL);
		// StateObject state = new StateObject();
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_6 = (StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282*)il2cpp_codegen_object_new(StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StateObject__ctor_m814CE742DBC4C2CF3E9665EFD2A2E43ECD32ACAF(L_6, NULL);
		V_1 = L_6;
		// state.workSocket = handler;
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_7 = V_1;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = V_0;
		NullCheck(L_7);
		L_7->___workSocket_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___workSocket_0), (void*)L_8);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = V_0;
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_12 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_12, __this, (intptr_t)((void*)AnimationCode_ReadCallback_m99DB011CB5A85CF64AFF00009AB17CF4A8972D13_RuntimeMethod_var), NULL);
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_13 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_14;
		L_14 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_9, L_11, 0, ((int32_t)1024), 0, L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void AnimationCode::ReadCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_ReadCallback_m99DB011CB5A85CF64AFF00009AB17CF4A8972D13 (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCode_ReadCallback_m99DB011CB5A85CF64AFF00009AB17CF4A8972D13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D547B918219335492CE47BC1612385D679D49AB);
		s_Il2CppMethodInitialized = true;
	}
	StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// StateObject state = (StateObject)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		V_0 = ((StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282*)CastclassClass((RuntimeObject*)L_1, StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282_il2cpp_TypeInfo_var));
		// Socket handler = state.workSocket;
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_2 = V_0;
		NullCheck(L_2);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = L_2->___workSocket_0;
		V_1 = L_3;
		// int read = handler.EndReceive(ar);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_1;
		RuntimeObject* L_5 = ___ar0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364(L_4, L_5, NULL);
		V_2 = L_6;
		// if (read > 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// state.colorCode.Append(Encoding.ASCII.GetString(state.buffer, 0, read));
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9 = L_8->___colorCode_3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->___buffer_2;
		int32_t L_13 = V_2;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_12, 0, L_13);
		NullCheck(L_9);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_14, NULL);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_16 = V_1;
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_19 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_19, __this, (intptr_t)((void*)AnimationCode_ReadCallback_m99DB011CB5A85CF64AFF00009AB17CF4A8972D13_RuntimeMethod_var), NULL);
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_20 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_21;
		L_21 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_16, L_18, 0, ((int32_t)1024), 0, L_19, L_20, NULL);
		return;
	}

IL_005f:
	{
		// if (state.colorCode.Length > 1)
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___colorCode_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_23, NULL);
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_009b;
		}
	}
	{
		// string content = state.colorCode.ToString();
		StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26 = L_25->___colorCode_3;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_3 = L_27;
		// print($"Read {content.Length} bytes from socket.\n Data : {content}");
		String_t* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32 = V_3;
		String_t* L_33;
		L_33 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0D547B918219335492CE47BC1612385D679D49AB, L_31, L_32, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_33, NULL);
		// SetColors(content);
		String_t* L_34 = V_3;
		AnimationCode_SetColors_mA34DC426E2303B46CCE6C4D62026F9961AD4983E(__this, L_34, NULL);
	}

IL_009b:
	{
		// handler.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_35 = V_1;
		NullCheck(L_35);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_35, NULL);
		// }
		return;
	}
}
// System.Void AnimationCode::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_SetColors_mA34DC426E2303B46CCE6C4D62026F9961AD4983E (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string[] points = data.Split(',');
		String_t* L_0 = ___data0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)44), 0, NULL);
		V_0 = L_1;
		// for (int i =0; i<=32;i++)
		V_1 = 0;
		goto IL_006e;
	}

IL_000e:
	{
		// x[i] = float.Parse(points[0 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___x_10;
		int32_t L_3 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply(L_5, 3));
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_9;
		L_9 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_7, L_8, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)((float)il2cpp_codegen_multiply(L_9, (10.0f))));
		// y[i] = -float.Parse(points[1 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___y_11;
		int32_t L_11 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(L_13, 3))));
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16;
		L_16 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_17;
		L_17 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_15, L_16, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)il2cpp_codegen_multiply(((-L_17)), (10.0f))));
		// z[i] = float.Parse(points[2 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 30;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___z_12;
		int32_t L_19 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(2, ((int32_t)il2cpp_codegen_multiply(L_21, 3))));
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_24;
		L_24 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_25;
		L_25 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_23, L_24, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (float)((float)il2cpp_codegen_multiply(L_25, (30.0f))));
		// for (int i =0; i<=32;i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006e:
	{
		// for (int i =0; i<=32;i++)
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)32))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationCode::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_OnDestroy_mEDB6FCB58ED1033393DDF7226DE56DFD629D79D2 (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, const RuntimeMethod* method) 
{
	{
		// source.Cancel();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_7;
		NullCheck(L_0);
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_0, NULL);
		// }
		return;
	}
}
// System.Void AnimationCode::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode__cctor_m128215733B05F21516EF173C188FCDBF679E6D6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int PORT = 1756;
		((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___PORT_13 = ((int32_t)1756);
		// public static readonly int WAITTIME = 1;
		((AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_StaticFields*)il2cpp_codegen_static_fields_for(AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291_il2cpp_TypeInfo_var))->___WAITTIME_14 = 1;
		return;
	}
}
// System.Void AnimationCode::<Start>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCode_U3CStartU3Eb__12_0_m04E2FB2DD93D8ED6F7CB7BF3CE78248AF79CA9ED (AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* __this, const RuntimeMethod* method) 
{
	{
		// await Task.Run(() => ListenEvents(source.Token));
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_7;
		NullCheck(L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_0, NULL);
		AnimationCode_ListenEvents_m44BDC6FCCA2AEE5DC654D4D87C6D066F1A76CF37(__this, L_1, NULL);
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
// System.Void AnimationCode/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m814CE742DBC4C2CF3E9665EFD2A2E43ECD32ACAF (StateObject_tC5F95DD53AAAA291D0440ECF728236EDB61F2282* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public byte[] buffer = new byte[BufferSize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___buffer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_2), (void*)L_0);
		// public StringBuilder colorCode = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___colorCode_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorCode_3), (void*)L_1);
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
// System.Void AnimationCode/<Start>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_MoveNext_mB97D166CFCD184C4DB697FC216DE85D11907EE8F (U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCode_U3CStartU3Eb__12_0_m04E2FB2DD93D8ED6F7CB7BF3CE78248AF79CA9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m5C0463CE19B24DC0C1ADD38C7B883328DFF2A407_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051_1;
			}
		}
		{
			// await Task.Run(() => ListenEvents(source.Token));
			AnimationCode_t3575D4245DD11AEBE024A66B4772F0D7C8F17291* L_3 = V_1;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)AnimationCode_U3CStartU3Eb__12_0_m04E2FB2DD93D8ED6F7CB7BF3CE78248AF79CA9ED_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m5C0463CE19B24DC0C1ADD38C7B883328DFF2A407(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184_m5C0463CE19B24DC0C1ADD38C7B883328DFF2A407_RuntimeMethod_var);
			goto IL_00a0;
		}

IL_0051_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006d_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	}// end catch (depth: 1)

IL_008d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_16, NULL);
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__12_MoveNext_mB97D166CFCD184C4DB697FC216DE85D11907EE8F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184*>(__this + _offset);
	U3CStartU3Ed__12_MoveNext_mB97D166CFCD184C4DB697FC216DE85D11907EE8F(_thisAdjusted, method);
}
// System.Void AnimationCode/<Start>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_SetStateMachine_mCC92D569D266A6AE88B9B4457CF93F5B2D9630E8 (U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__12_SetStateMachine_mCC92D569D266A6AE88B9B4457CF93F5B2D9630E8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__12_t72552BAD78372C6F1F2774B2ECD901C410911184*>(__this + _offset);
	U3CStartU3Ed__12_SetStateMachine_mCC92D569D266A6AE88B9B4457CF93F5B2D9630E8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimationCode/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2CFAAE9C200661945AA5513B5F48C87A831C9AF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF* L_0 = (U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF*)il2cpp_codegen_object_new(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA050D959C06320944230E7BAACEDDEF4B67F9FBB(L_0, NULL);
		((U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AnimationCode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA050D959C06320944230E7BAACEDDEF4B67F9FBB (U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AnimationCode/<>c::<ListenEvents>b__14_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CListenEventsU3Eb__14_0_mB69A8A035C9B8F7D74C8C419367F4284EE1F81D4 (U3CU3Ec_tAE5B172FA2B3465F42EBB25B6313F35A64A05AAF* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ip0, const RuntimeMethod* method) 
{
	{
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___ip0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
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
// System.Void AnimationFaceCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode__ctor_m449BD588FE2347A53D9FFCF9F9086402A1E4699D (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float[] x = new float[468];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)468));
		__this->___x_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_10), (void*)L_0);
		// private float[] y = new float[468];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)468));
		__this->___y_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y_11), (void*)L_1);
		// private float[] z = new float[468];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)468));
		__this->___z_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_12), (void*)L_2);
		// AnimationFaceCode()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// source = new CancellationTokenSource();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_3 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_3, NULL);
		__this->___source_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_7), (void*)L_3);
		// allDone = new ManualResetEvent(false);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_4, (bool)0, NULL);
		__this->___allDone_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allDone_8), (void*)L_4);
		// }
		return;
	}
}
// System.Void AnimationFaceCode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_Start_m60296A50741C4648F4151A5D24FE4D11D68DE606 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mC9CEAD0C8C51F2B6DC195239643BB5D98AE2B0F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mC9CEAD0C8C51F2B6DC195239643BB5D98AE2B0F6(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mC9CEAD0C8C51F2B6DC195239643BB5D98AE2B0F6_RuntimeMethod_var);
		return;
	}
}
// System.Void AnimationFaceCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_Update_m9C9F167785DF970A6486216554AE32CCFA8ADAD0 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i =0; i<=467;i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		// Face[i].transform.localPosition = new Vector3(x[i], y[i], z[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___Face_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___x_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___y_11;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___z_12;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_8, L_12, L_16, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_17, NULL);
		// for (int i =0; i<=467;i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0037:
	{
		// for (int i =0; i<=467;i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)467))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationFaceCode::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_ListenEvents_m70F19D0FD5F36EBBDBBCF31030B8CB690923F341 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationFaceCode_AcceptCallback_m36C004063DD4BF511F40D4FB4CC47910A770E179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CListenEventsU3Eb__14_0_mCAE8074C8D03F6B29244895531C9009F1C69840A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B2_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B2_1 = NULL;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B1_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B1_1 = NULL;
	{
		// IPHostEntry ipHostInfo = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_1;
		L_1 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_0, NULL);
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		NullCheck(L_1);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_3 = ((U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var);
		U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643* L_5 = ((U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_6 = (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*)il2cpp_codegen_object_new(Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m27F266C9FB9DFF776F57600B17D3F69C70D1A6D6(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CListenEventsU3Eb__14_0_mCAE8074C8D03F6B29244895531C9009F1C69840A_RuntimeMethod_var), NULL);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_7 = L_6;
		((U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002e:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8;
		L_8 = Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		V_0 = L_8;
		// IPEndPoint localEndPoint = new IPEndPoint(ipAddress, PORT);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var);
		int32_t L_10 = ((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___PORT_13;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_11, L_9, L_10, NULL);
		V_1 = L_11;
		// listener = new Socket(ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_12, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_14, L_13, 1, 6, NULL);
		((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___listener_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___listener_6), (void*)L_14);
	}
	try
	{// begin try (depth: 1)
		{
			// listener.Bind(localEndPoint);
			il2cpp_codegen_runtime_class_init_inline(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = ((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___listener_6;
			IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_16 = V_1;
			NullCheck(L_15);
			Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_15, L_16, NULL);
			// listener.Listen(10);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_17 = ((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___listener_6;
			NullCheck(L_17);
			Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC(L_17, ((int32_t)10), NULL);
			goto IL_00d9_1;
		}

IL_006b_1:
		{
			// allDone.Reset();
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_18 = __this->___allDone_8;
			NullCheck(L_18);
			bool L_19;
			L_19 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_18, NULL);
			// print("Waiting for a connection... host :" + ipAddress.MapToIPv4().ToString() + " port : " + PORT);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_20 = V_0;
			NullCheck(L_20);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21;
			L_21 = IPAddress_MapToIPv4_m31534E64E6ABA73E7C288EAD595EBC2621E84563(L_20, NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			il2cpp_codegen_runtime_class_init_inline(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var);
			String_t* L_23;
			L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___PORT_13), NULL);
			String_t* L_24;
			L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06, L_22, _stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016, L_23, NULL);
			MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_24, NULL);
			// listener.BeginAccept(new AsyncCallback(AcceptCallback),listener);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_25 = ((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___listener_6;
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_26 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_26, __this, (intptr_t)((void*)AnimationFaceCode_AcceptCallback_m36C004063DD4BF511F40D4FB4CC47910A770E179_RuntimeMethod_var), NULL);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_27 = ((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___listener_6;
			NullCheck(L_25);
			RuntimeObject* L_28;
			L_28 = Socket_BeginAccept_mF6EA42D150734FE0A259576E0C8EAC76CF5B07B2(L_25, L_26, L_27, NULL);
			goto IL_00d0_1;
		}

IL_00be_1:
		{
			// if (allDone.WaitOne(WAITTIME))
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_29 = __this->___allDone_8;
			il2cpp_codegen_runtime_class_init_inline(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var);
			int32_t L_30 = ((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___WAITTIME_14;
			NullCheck(L_29);
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_29, L_30);
			if (L_31)
			{
				goto IL_00d9_1;
			}
		}

IL_00d0_1:
		{
			// while(!token.IsCancellationRequested)
			bool L_32;
			L_32 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_32)
			{
				goto IL_00be_1;
			}
		}

IL_00d9_1:
		{
			// while (!token.IsCancellationRequested)
			bool L_33;
			L_33 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_33)
			{
				goto IL_006b_1;
			}
		}
		{
			// }
			goto IL_00f0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.Exception)
		// print(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_34, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f0;
	}// end catch (depth: 1)

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void AnimationFaceCode::AcceptCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_AcceptCallback_m36C004063DD4BF511F40D4FB4CC47910A770E179 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationFaceCode_ReadCallback_m46888AEB9E6FAF88740D9BAB36BECFBBDED39840_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* V_1 = NULL;
	{
		// Socket listener = (Socket)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		// Socket handler = listener.EndAccept(ar);
		RuntimeObject* L_2 = ___ar0;
		NullCheck(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3;
		L_3 = Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_2, NULL);
		V_0 = L_3;
		// allDone.Set();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = __this->___allDone_8;
		NullCheck(L_4);
		bool L_5;
		L_5 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_4, NULL);
		// StateObject state = new StateObject();
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_6 = (StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94*)il2cpp_codegen_object_new(StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StateObject__ctor_m3A8F4C13BA36916FFFE5F1A2193EAF88329DFE53(L_6, NULL);
		V_1 = L_6;
		// state.workSocket = handler;
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_7 = V_1;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = V_0;
		NullCheck(L_7);
		L_7->___workSocket_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___workSocket_0), (void*)L_8);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = V_0;
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_12 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_12, __this, (intptr_t)((void*)AnimationFaceCode_ReadCallback_m46888AEB9E6FAF88740D9BAB36BECFBBDED39840_RuntimeMethod_var), NULL);
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_13 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_14;
		L_14 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_9, L_11, 0, ((int32_t)1024), 0, L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void AnimationFaceCode::ReadCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_ReadCallback_m46888AEB9E6FAF88740D9BAB36BECFBBDED39840 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationFaceCode_ReadCallback_m46888AEB9E6FAF88740D9BAB36BECFBBDED39840_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D547B918219335492CE47BC1612385D679D49AB);
		s_Il2CppMethodInitialized = true;
	}
	StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// StateObject state = (StateObject)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		V_0 = ((StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94*)CastclassClass((RuntimeObject*)L_1, StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94_il2cpp_TypeInfo_var));
		// Socket handler = state.workSocket;
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_2 = V_0;
		NullCheck(L_2);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = L_2->___workSocket_0;
		V_1 = L_3;
		// int read = handler.EndReceive(ar);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_1;
		RuntimeObject* L_5 = ___ar0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364(L_4, L_5, NULL);
		V_2 = L_6;
		// if (read > 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// state.colorCode.Append(Encoding.ASCII.GetString(state.buffer, 0, read));
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9 = L_8->___colorCode_3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->___buffer_2;
		int32_t L_13 = V_2;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_12, 0, L_13);
		NullCheck(L_9);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_14, NULL);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_16 = V_1;
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_19 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_19, __this, (intptr_t)((void*)AnimationFaceCode_ReadCallback_m46888AEB9E6FAF88740D9BAB36BECFBBDED39840_RuntimeMethod_var), NULL);
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_20 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_21;
		L_21 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_16, L_18, 0, ((int32_t)1024), 0, L_19, L_20, NULL);
		return;
	}

IL_005f:
	{
		// if (state.colorCode.Length > 1)
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___colorCode_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_23, NULL);
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_009b;
		}
	}
	{
		// string content = state.colorCode.ToString();
		StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26 = L_25->___colorCode_3;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_3 = L_27;
		// print($"Read {content.Length} bytes from socket.\n Data : {content}");
		String_t* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32 = V_3;
		String_t* L_33;
		L_33 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0D547B918219335492CE47BC1612385D679D49AB, L_31, L_32, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_33, NULL);
		// SetColors(content);
		String_t* L_34 = V_3;
		AnimationFaceCode_SetColors_mB46EDCFF79F1093B6C39B7AE7FD91A13988B1077(__this, L_34, NULL);
	}

IL_009b:
	{
		// handler.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_35 = V_1;
		NullCheck(L_35);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_35, NULL);
		// }
		return;
	}
}
// System.Void AnimationFaceCode::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_SetColors_mB46EDCFF79F1093B6C39B7AE7FD91A13988B1077 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string[] points = data.Split(',');
		String_t* L_0 = ___data0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)44), 0, NULL);
		V_0 = L_1;
		// for (int i =0; i<=467;i++)
		V_1 = 0;
		goto IL_006e;
	}

IL_000e:
	{
		// x[i] = float.Parse(points[0 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___x_10;
		int32_t L_3 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply(L_5, 3));
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_9;
		L_9 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_7, L_8, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)((float)il2cpp_codegen_multiply(L_9, (10.0f))));
		// y[i] = -float.Parse(points[1 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___y_11;
		int32_t L_11 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(L_13, 3))));
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16;
		L_16 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_17;
		L_17 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_15, L_16, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)il2cpp_codegen_multiply(((-L_17)), (10.0f))));
		// z[i] = float.Parse(points[2 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 30;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___z_12;
		int32_t L_19 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(2, ((int32_t)il2cpp_codegen_multiply(L_21, 3))));
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_24;
		L_24 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_25;
		L_25 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_23, L_24, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (float)((float)il2cpp_codegen_multiply(L_25, (30.0f))));
		// for (int i =0; i<=467;i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006e:
	{
		// for (int i =0; i<=467;i++)
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)467))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationFaceCode::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_OnDestroy_m141434B2E80DD739B46C8DFE5CEB12502ED980C4 (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, const RuntimeMethod* method) 
{
	{
		// source.Cancel();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_7;
		NullCheck(L_0);
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_0, NULL);
		// }
		return;
	}
}
// System.Void AnimationFaceCode::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode__cctor_m8136DE8483A2A0D564ABE30FF99B0E4CBD8B6BFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int PORT = 1755;
		((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___PORT_13 = ((int32_t)1755);
		// public static readonly int WAITTIME = 1;
		((AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_StaticFields*)il2cpp_codegen_static_fields_for(AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90_il2cpp_TypeInfo_var))->___WAITTIME_14 = 1;
		return;
	}
}
// System.Void AnimationFaceCode::<Start>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFaceCode_U3CStartU3Eb__12_0_m4A73DD7EA8245D7B164E1077CFF98A54FBC064CD (AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* __this, const RuntimeMethod* method) 
{
	{
		// await Task.Run(() => ListenEvents(source.Token));
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_7;
		NullCheck(L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_0, NULL);
		AnimationFaceCode_ListenEvents_m70F19D0FD5F36EBBDBBCF31030B8CB690923F341(__this, L_1, NULL);
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
// System.Void AnimationFaceCode/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m3A8F4C13BA36916FFFE5F1A2193EAF88329DFE53 (StateObject_t29A7E2EED1FB2F55CC8C05583C7D375CB8439E94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public byte[] buffer = new byte[BufferSize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___buffer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_2), (void*)L_0);
		// public StringBuilder colorCode = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___colorCode_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorCode_3), (void*)L_1);
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
// System.Void AnimationFaceCode/<Start>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_MoveNext_mC23BC93A8604FD6ACF3659470813FB6ED625D3CE (U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationFaceCode_U3CStartU3Eb__12_0_m4A73DD7EA8245D7B164E1077CFF98A54FBC064CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mB323D10D932D471C3D4F08BD1BCD163EE9E6B995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051_1;
			}
		}
		{
			// await Task.Run(() => ListenEvents(source.Token));
			AnimationFaceCode_tFEA21D2B4641F790CC46F71210AE9670556FBF90* L_3 = V_1;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)AnimationFaceCode_U3CStartU3Eb__12_0_m4A73DD7EA8245D7B164E1077CFF98A54FBC064CD_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mB323D10D932D471C3D4F08BD1BCD163EE9E6B995(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333_mB323D10D932D471C3D4F08BD1BCD163EE9E6B995_RuntimeMethod_var);
			goto IL_00a0;
		}

IL_0051_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006d_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	}// end catch (depth: 1)

IL_008d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_16, NULL);
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__12_MoveNext_mC23BC93A8604FD6ACF3659470813FB6ED625D3CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333*>(__this + _offset);
	U3CStartU3Ed__12_MoveNext_mC23BC93A8604FD6ACF3659470813FB6ED625D3CE(_thisAdjusted, method);
}
// System.Void AnimationFaceCode/<Start>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_SetStateMachine_m4A5263664BBCB6E67A1F38B0EAE2A86E8ED2486C (U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__12_SetStateMachine_m4A5263664BBCB6E67A1F38B0EAE2A86E8ED2486C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__12_tB3176ADCC5C346539FB2949D338C51DFFE91B333*>(__this + _offset);
	U3CStartU3Ed__12_SetStateMachine_m4A5263664BBCB6E67A1F38B0EAE2A86E8ED2486C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimationFaceCode/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0348E4BE98EF8A33C90CED8932D18C69E968BFB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643* L_0 = (U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643*)il2cpp_codegen_object_new(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC0B61C2BAADE35E62EBBDB7F6BD2A90C101B0BE9(L_0, NULL);
		((U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AnimationFaceCode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC0B61C2BAADE35E62EBBDB7F6BD2A90C101B0BE9 (U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AnimationFaceCode/<>c::<ListenEvents>b__14_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CListenEventsU3Eb__14_0_mCAE8074C8D03F6B29244895531C9009F1C69840A (U3CU3Ec_t814C1E8332FABAE6C1A4BE57176B51F4C4792643* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ip0, const RuntimeMethod* method) 
{
	{
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___ip0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
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
// System.Void AnimationHandCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode__ctor_m849883F17B29D6EAB61FFA822907EDE6F1C5676A (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float[] x = new float[42];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		__this->___x_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_10), (void*)L_0);
		// private float[] y = new float[42];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		__this->___y_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y_11), (void*)L_1);
		// private float[] z = new float[42];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		__this->___z_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_12), (void*)L_2);
		// AnimationHandCode()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// source = new CancellationTokenSource();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_3 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_3, NULL);
		__this->___source_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_7), (void*)L_3);
		// allDone = new ManualResetEvent(false);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_4, (bool)0, NULL);
		__this->___allDone_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allDone_8), (void*)L_4);
		// }
		return;
	}
}
// System.Void AnimationHandCode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_Start_mAB0765EBD72F8A26B95AA7C68BDE3A4B1B7A526A (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_mBA4FDB44F8F99093E3F3315C89AC60019DABA397_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_mBA4FDB44F8F99093E3F3315C89AC60019DABA397(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_mBA4FDB44F8F99093E3F3315C89AC60019DABA397_RuntimeMethod_var);
		return;
	}
}
// System.Void AnimationHandCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_Update_mA92C457AEC42D071D26C33B30107DDAC8461BAA9 (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i =0; i<=41;i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		// Hand[i].transform.localPosition = new Vector3(x[i], y[i], z[i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___Hand_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->___x_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___y_11;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___z_12;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_8, L_12, L_16, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_17, NULL);
		// for (int i =0; i<=41;i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0037:
	{
		// for (int i =0; i<=41;i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)41))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationHandCode::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_ListenEvents_m43BE5ABDBE9E25321814FA8C3C7A088A6F13AD9A (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationHandCode_AcceptCallback_m400C669455968461A8CE981D304C113BDFEB6B6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CListenEventsU3Eb__14_0_mF2BC8F56C420D7A077D0F7FABC74D015FA445F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B2_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B2_1 = NULL;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B1_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B1_1 = NULL;
	{
		// IPHostEntry ipHostInfo = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_1;
		L_1 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_0, NULL);
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		NullCheck(L_1);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_3 = ((U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var);
		U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9* L_5 = ((U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_6 = (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*)il2cpp_codegen_object_new(Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m27F266C9FB9DFF776F57600B17D3F69C70D1A6D6(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CListenEventsU3Eb__14_0_mF2BC8F56C420D7A077D0F7FABC74D015FA445F2F_RuntimeMethod_var), NULL);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_7 = L_6;
		((U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002e:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8;
		L_8 = Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		V_0 = L_8;
		// IPEndPoint localEndPoint = new IPEndPoint(ipAddress, PORT);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var);
		int32_t L_10 = ((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___PORT_13;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_11, L_9, L_10, NULL);
		V_1 = L_11;
		// listener = new Socket(ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_12, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_14, L_13, 1, 6, NULL);
		((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___listener_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___listener_6), (void*)L_14);
	}
	try
	{// begin try (depth: 1)
		{
			// listener.Bind(localEndPoint);
			il2cpp_codegen_runtime_class_init_inline(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = ((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___listener_6;
			IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_16 = V_1;
			NullCheck(L_15);
			Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_15, L_16, NULL);
			// listener.Listen(10);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_17 = ((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___listener_6;
			NullCheck(L_17);
			Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC(L_17, ((int32_t)10), NULL);
			goto IL_00d9_1;
		}

IL_006b_1:
		{
			// allDone.Reset();
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_18 = __this->___allDone_8;
			NullCheck(L_18);
			bool L_19;
			L_19 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_18, NULL);
			// print("Waiting for a connection... host :" + ipAddress.MapToIPv4().ToString() + " port : " + PORT);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_20 = V_0;
			NullCheck(L_20);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21;
			L_21 = IPAddress_MapToIPv4_m31534E64E6ABA73E7C288EAD595EBC2621E84563(L_20, NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			il2cpp_codegen_runtime_class_init_inline(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var);
			String_t* L_23;
			L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___PORT_13), NULL);
			String_t* L_24;
			L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06, L_22, _stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016, L_23, NULL);
			MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_24, NULL);
			// listener.BeginAccept(new AsyncCallback(AcceptCallback),listener);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_25 = ((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___listener_6;
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_26 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_26, __this, (intptr_t)((void*)AnimationHandCode_AcceptCallback_m400C669455968461A8CE981D304C113BDFEB6B6B_RuntimeMethod_var), NULL);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_27 = ((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___listener_6;
			NullCheck(L_25);
			RuntimeObject* L_28;
			L_28 = Socket_BeginAccept_mF6EA42D150734FE0A259576E0C8EAC76CF5B07B2(L_25, L_26, L_27, NULL);
			goto IL_00d0_1;
		}

IL_00be_1:
		{
			// if (allDone.WaitOne(WAITTIME))
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_29 = __this->___allDone_8;
			il2cpp_codegen_runtime_class_init_inline(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var);
			int32_t L_30 = ((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___WAITTIME_14;
			NullCheck(L_29);
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_29, L_30);
			if (L_31)
			{
				goto IL_00d9_1;
			}
		}

IL_00d0_1:
		{
			// while(!token.IsCancellationRequested)
			bool L_32;
			L_32 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_32)
			{
				goto IL_00be_1;
			}
		}

IL_00d9_1:
		{
			// while (!token.IsCancellationRequested)
			bool L_33;
			L_33 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_33)
			{
				goto IL_006b_1;
			}
		}
		{
			// }
			goto IL_00f0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.Exception)
		// print(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_34, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f0;
	}// end catch (depth: 1)

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void AnimationHandCode::AcceptCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_AcceptCallback_m400C669455968461A8CE981D304C113BDFEB6B6B (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationHandCode_ReadCallback_mC55B599B0056077B824EBDB8E100F442E7436F2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* V_1 = NULL;
	{
		// Socket listener = (Socket)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		// Socket handler = listener.EndAccept(ar);
		RuntimeObject* L_2 = ___ar0;
		NullCheck(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3;
		L_3 = Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_2, NULL);
		V_0 = L_3;
		// allDone.Set();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = __this->___allDone_8;
		NullCheck(L_4);
		bool L_5;
		L_5 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_4, NULL);
		// StateObject state = new StateObject();
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_6 = (StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC*)il2cpp_codegen_object_new(StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StateObject__ctor_m7CBB8663AB127B05C5968F1A5A26F01C33E3F677(L_6, NULL);
		V_1 = L_6;
		// state.workSocket = handler;
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_7 = V_1;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = V_0;
		NullCheck(L_7);
		L_7->___workSocket_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___workSocket_0), (void*)L_8);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = V_0;
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_12 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_12, __this, (intptr_t)((void*)AnimationHandCode_ReadCallback_mC55B599B0056077B824EBDB8E100F442E7436F2C_RuntimeMethod_var), NULL);
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_13 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_14;
		L_14 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_9, L_11, 0, ((int32_t)1024), 0, L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void AnimationHandCode::ReadCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_ReadCallback_mC55B599B0056077B824EBDB8E100F442E7436F2C (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationHandCode_ReadCallback_mC55B599B0056077B824EBDB8E100F442E7436F2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D547B918219335492CE47BC1612385D679D49AB);
		s_Il2CppMethodInitialized = true;
	}
	StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// StateObject state = (StateObject)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		V_0 = ((StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC*)CastclassClass((RuntimeObject*)L_1, StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC_il2cpp_TypeInfo_var));
		// Socket handler = state.workSocket;
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_2 = V_0;
		NullCheck(L_2);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = L_2->___workSocket_0;
		V_1 = L_3;
		// int read = handler.EndReceive(ar);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_1;
		RuntimeObject* L_5 = ___ar0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364(L_4, L_5, NULL);
		V_2 = L_6;
		// if (read > 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// state.colorCode.Append(Encoding.ASCII.GetString(state.buffer, 0, read));
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9 = L_8->___colorCode_3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->___buffer_2;
		int32_t L_13 = V_2;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_12, 0, L_13);
		NullCheck(L_9);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_14, NULL);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_16 = V_1;
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_19 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_19, __this, (intptr_t)((void*)AnimationHandCode_ReadCallback_mC55B599B0056077B824EBDB8E100F442E7436F2C_RuntimeMethod_var), NULL);
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_20 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_21;
		L_21 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_16, L_18, 0, ((int32_t)1024), 0, L_19, L_20, NULL);
		return;
	}

IL_005f:
	{
		// if (state.colorCode.Length > 1)
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___colorCode_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_23, NULL);
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_009b;
		}
	}
	{
		// string content = state.colorCode.ToString();
		StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26 = L_25->___colorCode_3;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_3 = L_27;
		// print($"Read {content.Length} bytes from socket.\n Data : {content}");
		String_t* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32 = V_3;
		String_t* L_33;
		L_33 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0D547B918219335492CE47BC1612385D679D49AB, L_31, L_32, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_33, NULL);
		// SetColors(content);
		String_t* L_34 = V_3;
		AnimationHandCode_SetColors_mFFEFEFEA0D74B751CF50D2CA7B22F4D2C631E556(__this, L_34, NULL);
	}

IL_009b:
	{
		// handler.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_35 = V_1;
		NullCheck(L_35);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_35, NULL);
		// }
		return;
	}
}
// System.Void AnimationHandCode::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_SetColors_mFFEFEFEA0D74B751CF50D2CA7B22F4D2C631E556 (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string[] points = data.Split(',');
		String_t* L_0 = ___data0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)44), 0, NULL);
		V_0 = L_1;
		// for (int i =0; i<=41;i++)
		V_1 = 0;
		goto IL_006e;
	}

IL_000e:
	{
		// x[i] = float.Parse(points[0 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___x_10;
		int32_t L_3 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply(L_5, 3));
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_9;
		L_9 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_7, L_8, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)((float)il2cpp_codegen_multiply(L_9, (10.0f))));
		// y[i] = -float.Parse(points[1 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___y_11;
		int32_t L_11 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(L_13, 3))));
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16;
		L_16 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_17;
		L_17 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_15, L_16, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)il2cpp_codegen_multiply(((-L_17)), (10.0f))));
		// z[i] = float.Parse(points[2 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 30;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___z_12;
		int32_t L_19 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(2, ((int32_t)il2cpp_codegen_multiply(L_21, 3))));
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_24;
		L_24 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_25;
		L_25 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_23, L_24, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (float)((float)il2cpp_codegen_multiply(L_25, (30.0f))));
		// for (int i =0; i<=41;i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006e:
	{
		// for (int i =0; i<=41;i++)
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)41))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationHandCode::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_OnDestroy_m2F05E0B24B1E62E35C77F9F744C9E21CF76E3C4A (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, const RuntimeMethod* method) 
{
	{
		// source.Cancel();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_7;
		NullCheck(L_0);
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_0, NULL);
		// }
		return;
	}
}
// System.Void AnimationHandCode::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode__cctor_mE30E74C1194A79727DD251D9029FC79463466D91 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int PORT = 1757;
		((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___PORT_13 = ((int32_t)1757);
		// public static readonly int WAITTIME = 1;
		((AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_StaticFields*)il2cpp_codegen_static_fields_for(AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08_il2cpp_TypeInfo_var))->___WAITTIME_14 = 1;
		return;
	}
}
// System.Void AnimationHandCode::<Start>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationHandCode_U3CStartU3Eb__12_0_m2DA85DBBC375C127B03005CB9B70163770405AD2 (AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* __this, const RuntimeMethod* method) 
{
	{
		// await Task.Run(() => ListenEvents(source.Token));
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_7;
		NullCheck(L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_0, NULL);
		AnimationHandCode_ListenEvents_m43BE5ABDBE9E25321814FA8C3C7A088A6F13AD9A(__this, L_1, NULL);
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
// System.Void AnimationHandCode/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m7CBB8663AB127B05C5968F1A5A26F01C33E3F677 (StateObject_t1789112ED1611EADC34BB66AFD51885D8A7E31DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public byte[] buffer = new byte[BufferSize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___buffer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_2), (void*)L_0);
		// public StringBuilder colorCode = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___colorCode_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorCode_3), (void*)L_1);
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
// System.Void AnimationHandCode/<Start>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_MoveNext_mFDCE9E59D8637FBC9F7EADE9C3BA47B3EA9F364F (U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationHandCode_U3CStartU3Eb__12_0_m2DA85DBBC375C127B03005CB9B70163770405AD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_m5A8974D3E9F17EB101301E32DC5881BD4F25A6AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051_1;
			}
		}
		{
			// await Task.Run(() => ListenEvents(source.Token));
			AnimationHandCode_t9EF87FBE0A52BB2EF9B758E68587814C69CEDF08* L_3 = V_1;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)AnimationHandCode_U3CStartU3Eb__12_0_m2DA85DBBC375C127B03005CB9B70163770405AD2_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_m5A8974D3E9F17EB101301E32DC5881BD4F25A6AA(L_10, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6_m5A8974D3E9F17EB101301E32DC5881BD4F25A6AA_RuntimeMethod_var);
			goto IL_00a0;
		}

IL_0051_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006d_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	}// end catch (depth: 1)

IL_008d:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_16, NULL);
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__12_MoveNext_mFDCE9E59D8637FBC9F7EADE9C3BA47B3EA9F364F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6*>(__this + _offset);
	U3CStartU3Ed__12_MoveNext_mFDCE9E59D8637FBC9F7EADE9C3BA47B3EA9F364F(_thisAdjusted, method);
}
// System.Void AnimationHandCode/<Start>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__12_SetStateMachine_mB4BF9FF52CE590C4EC24300372CD9E6A520B0976 (U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__12_SetStateMachine_mB4BF9FF52CE590C4EC24300372CD9E6A520B0976_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__12_tFBEF404BE0B921C3E122E59CD8E8A5D1FE99F5E6*>(__this + _offset);
	U3CStartU3Ed__12_SetStateMachine_mB4BF9FF52CE590C4EC24300372CD9E6A520B0976(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimationHandCode/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m039A0B67C0122299E332965B866AD250FE8F8C3D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9* L_0 = (U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9*)il2cpp_codegen_object_new(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m715BEC293F94A8A64D9CC18DDBA64C143EF3915D(L_0, NULL);
		((U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void AnimationHandCode/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m715BEC293F94A8A64D9CC18DDBA64C143EF3915D (U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AnimationHandCode/<>c::<ListenEvents>b__14_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CListenEventsU3Eb__14_0_mF2BC8F56C420D7A077D0F7FABC74D015FA445F2F (U3CU3Ec_t037783981ECF515928699E2538E9E28832E5C5C9* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ip0, const RuntimeMethod* method) 
{
	{
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___ip0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
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
// System.Void BodyCode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyCode_Start_m9041DE7C60DE4ED3B1763DC59F8A00AA67F70984 (BodyCode_t0FFDF00777785990B9336AE8C4A064FDDA64367C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F24FABA8876E076E403DD357B5FBBBECA98EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lines = System.IO.File.ReadLines("Assets/AnimationFile.txt").ToList();
		RuntimeObject* L_0;
		L_0 = File_ReadLines_mD8EF6C087859E5268943F4F6A408EC0C0328680D(_stringLiteral54F24FABA8876E076E403DD357B5FBBBECA98EF5, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_0, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		__this->___lines_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lines_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void BodyCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyCode_Update_m3A95BC330EFA728A337C5A54916CDA02EDF6D82D (BodyCode_t0FFDF00777785990B9336AE8C4A064FDDA64367C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// string[] points = lines[counter].Split(',');
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___lines_5;
		int32_t L_1 = __this->___counter_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_0, L_1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)44), 0, NULL);
		V_0 = L_3;
		// for (int i =0; i<=32;i++)
		V_1 = 0;
		goto IL_0085;
	}

IL_001e:
	{
		// float x = float.Parse(points[0 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply(L_5, 3));
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_9;
		L_9 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_7, L_8, NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_9, (10.0f)));
		// float y = -float.Parse(points[1 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(L_11, 3))));
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_15;
		L_15 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_13, L_14, NULL);
		V_3 = ((float)il2cpp_codegen_multiply(((-L_15)), (10.0f)));
		// float z = float.Parse(points[2 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(2, ((int32_t)il2cpp_codegen_multiply(L_17, 3))));
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_20;
		L_20 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		float L_21;
		L_21 = Single_Parse_mF40465AC387D690175D63EFFF44B0E810C090786(L_19, L_20, NULL);
		V_4 = ((float)il2cpp_codegen_multiply(L_21, (3.0f)));
		// Body[i].transform.localPosition = new Vector3(x, y, z);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___Body_4;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), L_27, L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_26, L_30, NULL);
		// for (int i =0; i<=32;i++)
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0085:
	{
		// for (int i =0; i<=32;i++)
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		// counter += 1;
		int32_t L_33 = __this->___counter_6;
		__this->___counter_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		// if (counter == lines.Count) { counter = 0; }
		int32_t L_34 = __this->___counter_6;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = __this->___lines_5;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_35, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((!(((uint32_t)L_34) == ((uint32_t)L_36))))
		{
			goto IL_00b2;
		}
	}
	{
		// if (counter == lines.Count) { counter = 0; }
		__this->___counter_6 = 0;
	}

IL_00b2:
	{
		// Thread.Sleep(35);
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(((int32_t)35), NULL);
		// }
		return;
	}
}
// System.Void BodyCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyCode__ctor_m2AE9DB3BB23D7A78B304EED222E2751C120DF58B (BodyCode_t0FFDF00777785990B9336AE8C4A064FDDA64367C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ChangeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor__ctor_m8BB1B19B1A2961B218222DF5C104ECAE825C8EA1 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangeColor()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// source = new CancellationTokenSource();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_0, NULL);
		__this->___source_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_5), (void*)L_0);
		// allDone = new ManualResetEvent(false);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_1 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_1, (bool)0, NULL);
		__this->___allDone_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allDone_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void ChangeColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_Start_mFFF9A8BFA333CC0E38A78786ED5BF7602EF3D3EB (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_m5426A08AEA8B881CC175FA470896C21085EE9C8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_m5426A08AEA8B881CC175FA470896C21085EE9C8D(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_m5426A08AEA8B881CC175FA470896C21085EE9C8D_RuntimeMethod_var);
		return;
	}
}
// System.Void ChangeColor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_Update_m63344DD38748CD168C2D72E250B4FDBD396C2748 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	{
		// objectRenderer.material.color = matColor;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___objectRenderer_7;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___matColor_8;
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ChangeColor::ListenEvents(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_ListenEvents_m535C01AF1525A8F862A9C261A10B046236EA9722 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeColor_AcceptCallback_mC3EADF5DB99C48591629B6E66252C7415F3CD2A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CListenEventsU3Eb__10_0_mB49E8C90F989491E7D91C49BCAD7B5EB00FC0353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B2_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B2_1 = NULL;
	Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* G_B1_0 = NULL;
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* G_B1_1 = NULL;
	{
		// IPHostEntry ipHostInfo = Dns.GetHostEntry(Dns.GetHostName());
		String_t* L_0;
		L_0 = Dns_GetHostName_m9290C5F9D0B6B8F259D53F30B7A80C4D4FB77083(NULL);
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_1;
		L_1 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_0, NULL);
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		NullCheck(L_1);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_2;
		L_2 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_3 = ((U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var);
		U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184* L_5 = ((U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_6 = (Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611*)il2cpp_codegen_object_new(Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m27F266C9FB9DFF776F57600B17D3F69C70D1A6D6(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CListenEventsU3Eb__10_0_mB49E8C90F989491E7D91C49BCAD7B5EB00FC0353_RuntimeMethod_var), NULL);
		Func_2_tFA844D31ADF3BDA44BBBC18FC85A73BF36532611* L_7 = L_6;
		((U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002e:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8;
		L_8 = Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_FirstOrDefault_TisIPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_m27A1B282285CF2FCA2A076AE577126B161D192AC_RuntimeMethod_var);
		V_0 = L_8;
		// IPEndPoint localEndPoint = new IPEndPoint(ipAddress, PORT);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___PORT_9;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_11, L_9, L_10, NULL);
		V_1 = L_11;
		// listener = new Socket(ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_12, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_14 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_14, L_13, 1, 6, NULL);
		((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___listener_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___listener_4), (void*)L_14);
	}
	try
	{// begin try (depth: 1)
		{
			// listener.Bind(localEndPoint);
			il2cpp_codegen_runtime_class_init_inline(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = ((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___listener_4;
			IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_16 = V_1;
			NullCheck(L_15);
			Socket_Bind_m137559EBA78A72ED4ADF8B56F5C535CE638165AA(L_15, L_16, NULL);
			// listener.Listen(10);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_17 = ((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___listener_4;
			NullCheck(L_17);
			Socket_Listen_m734803DAC514E64828168AF9212D6A9EC63B32EC(L_17, ((int32_t)10), NULL);
			goto IL_00d9_1;
		}

IL_006b_1:
		{
			// allDone.Reset();
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_18 = __this->___allDone_6;
			NullCheck(L_18);
			bool L_19;
			L_19 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_18, NULL);
			// print("Waiting for a connection... host :" + ipAddress.MapToIPv4().ToString() + " port : " + PORT);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_20 = V_0;
			NullCheck(L_20);
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21;
			L_21 = IPAddress_MapToIPv4_m31534E64E6ABA73E7C288EAD595EBC2621E84563(L_20, NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			il2cpp_codegen_runtime_class_init_inline(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var);
			String_t* L_23;
			L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___PORT_9), NULL);
			String_t* L_24;
			L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC18F5FA43B69CDA849073E584027E08EC347BA06, L_22, _stringLiteral7D5DAD219F66B44F8267C467DCF90A73B2C29016, L_23, NULL);
			MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_24, NULL);
			// listener.BeginAccept(new AsyncCallback(AcceptCallback),listener);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_25 = ((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___listener_4;
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_26 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_26, __this, (intptr_t)((void*)ChangeColor_AcceptCallback_mC3EADF5DB99C48591629B6E66252C7415F3CD2A9_RuntimeMethod_var), NULL);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_27 = ((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___listener_4;
			NullCheck(L_25);
			RuntimeObject* L_28;
			L_28 = Socket_BeginAccept_mF6EA42D150734FE0A259576E0C8EAC76CF5B07B2(L_25, L_26, L_27, NULL);
			goto IL_00d0_1;
		}

IL_00be_1:
		{
			// if (allDone.WaitOne(WAITTIME))
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_29 = __this->___allDone_6;
			il2cpp_codegen_runtime_class_init_inline(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var);
			int32_t L_30 = ((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___WAITTIME_10;
			NullCheck(L_29);
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_29, L_30);
			if (L_31)
			{
				goto IL_00d9_1;
			}
		}

IL_00d0_1:
		{
			// while(!token.IsCancellationRequested)
			bool L_32;
			L_32 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_32)
			{
				goto IL_00be_1;
			}
		}

IL_00d9_1:
		{
			// while (!token.IsCancellationRequested)
			bool L_33;
			L_33 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___token0), NULL);
			if (!L_33)
			{
				goto IL_006b_1;
			}
		}
		{
			// }
			goto IL_00f0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.Exception)
		// print(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_34, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f0;
	}// end catch (depth: 1)

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void ChangeColor::AcceptCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_AcceptCallback_mC3EADF5DB99C48591629B6E66252C7415F3CD2A9 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeColor_ReadCallback_mD91034BCEF9978612522F158D7420153AB7A089B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* V_1 = NULL;
	{
		// Socket listener = (Socket)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		// Socket handler = listener.EndAccept(ar);
		RuntimeObject* L_2 = ___ar0;
		NullCheck(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3;
		L_3 = Socket_EndAccept_m6A7BE15D82A8C8DCA5AD786CC97E0A12FF354D09(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_2, NULL);
		V_0 = L_3;
		// allDone.Set();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = __this->___allDone_6;
		NullCheck(L_4);
		bool L_5;
		L_5 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_4, NULL);
		// StateObject state = new StateObject();
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_6 = (StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42*)il2cpp_codegen_object_new(StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StateObject__ctor_m8219B6446845A1AB4214FE2E2E511A7F8084BA84(L_6, NULL);
		V_1 = L_6;
		// state.workSocket = handler;
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_7 = V_1;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = V_0;
		NullCheck(L_7);
		L_7->___workSocket_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___workSocket_0), (void*)L_8);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_9 = V_0;
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_12 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_12, __this, (intptr_t)((void*)ChangeColor_ReadCallback_mD91034BCEF9978612522F158D7420153AB7A089B_RuntimeMethod_var), NULL);
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_13 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_14;
		L_14 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_9, L_11, 0, ((int32_t)1024), 0, L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void ChangeColor::ReadCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_ReadCallback_mD91034BCEF9978612522F158D7420153AB7A089B (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeColor_ReadCallback_mD91034BCEF9978612522F158D7420153AB7A089B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D547B918219335492CE47BC1612385D679D49AB);
		s_Il2CppMethodInitialized = true;
	}
	StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// StateObject state = (StateObject)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		V_0 = ((StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42*)CastclassClass((RuntimeObject*)L_1, StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42_il2cpp_TypeInfo_var));
		// Socket handler = state.workSocket;
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_2 = V_0;
		NullCheck(L_2);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = L_2->___workSocket_0;
		V_1 = L_3;
		// int read = handler.EndReceive(ar);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_1;
		RuntimeObject* L_5 = ___ar0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364(L_4, L_5, NULL);
		V_2 = L_6;
		// if (read > 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// state.colorCode.Append(Encoding.ASCII.GetString(state.buffer, 0, read));
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9 = L_8->___colorCode_3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_11 = V_0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->___buffer_2;
		int32_t L_13 = V_2;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_12, 0, L_13);
		NullCheck(L_9);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_14, NULL);
		// handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_16 = V_1;
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___buffer_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_19 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_19, __this, (intptr_t)((void*)ChangeColor_ReadCallback_mD91034BCEF9978612522F158D7420153AB7A089B_RuntimeMethod_var), NULL);
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_20 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_21;
		L_21 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_16, L_18, 0, ((int32_t)1024), 0, L_19, L_20, NULL);
		return;
	}

IL_005f:
	{
		// if (state.colorCode.Length > 1)
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___colorCode_3;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_23, NULL);
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_009b;
		}
	}
	{
		// string content = state.colorCode.ToString();
		StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26 = L_25->___colorCode_3;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_3 = L_27;
		// print($"Read {content.Length} bytes from socket.\n Data : {content}");
		String_t* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32 = V_3;
		String_t* L_33;
		L_33 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0D547B918219335492CE47BC1612385D679D49AB, L_31, L_32, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_33, NULL);
		// SetColors(content);
		String_t* L_34 = V_3;
		ChangeColor_SetColors_mBFF2B39C8DB327CD8C07D88D14107D1C7DC57310(__this, L_34, NULL);
	}

IL_009b:
	{
		// handler.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_35 = V_1;
		NullCheck(L_35);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_35, NULL);
		// }
		return;
	}
}
// System.Void ChangeColor::SetColors(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_SetColors_mBFF2B39C8DB327CD8C07D88D14107D1C7DC57310 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string[] colors = data.Split(',');
		String_t* L_0 = ___data0;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)44), 0, NULL);
		V_0 = L_1;
		// matColor = new Color()
		// {
		//     r = float.Parse(colors[0]) / 255.0f,
		//     g = float.Parse(colors[1]) / 255.0f,
		//     b = float.Parse(colors[2]) / 255.0f,
		//     a = float.Parse(colors[3]) / 255.0f
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		String_t* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5;
		L_5 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_4, NULL);
		(&V_1)->___r_0 = ((float)(L_5/(255.0f)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9;
		L_9 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_8, NULL);
		(&V_1)->___g_1 = ((float)(L_9/(255.0f)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_12, NULL);
		(&V_1)->___b_2 = ((float)(L_13/(255.0f)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 3;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		float L_17;
		L_17 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_16, NULL);
		(&V_1)->___a_3 = ((float)(L_17/(255.0f)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_1;
		__this->___matColor_8 = L_18;
		// }
		return;
	}
}
// System.Void ChangeColor::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_OnDestroy_m72883531FA748A85156834042CCA20C64AD29CAD (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	{
		// source.Cancel();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_5;
		NullCheck(L_0);
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_0, NULL);
		// }
		return;
	}
}
// System.Void ChangeColor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor__cctor_m2C2E67C1AFBEA8857A5F325FAE34363274DD58CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int PORT = 1755;
		((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___PORT_9 = ((int32_t)1755);
		// public static readonly int WAITTIME = 1;
		((ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_StaticFields*)il2cpp_codegen_static_fields_for(ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1_il2cpp_TypeInfo_var))->___WAITTIME_10 = 1;
		return;
	}
}
// System.Void ChangeColor::<Start>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeColor_U3CStartU3Eb__8_0_mDB40D20A55B1662B2E4EC69DD46B92CD243B4C48 (ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* __this, const RuntimeMethod* method) 
{
	{
		// await Task.Run(() => ListenEvents(source.Token));
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___source_5;
		NullCheck(L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_0, NULL);
		ChangeColor_ListenEvents_m535C01AF1525A8F862A9C261A10B046236EA9722(__this, L_1, NULL);
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
// System.Void ChangeColor/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_m8219B6446845A1AB4214FE2E2E511A7F8084BA84 (StateObject_tCB81D62F6B7DA240F01B0379784132B68E3CDF42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public byte[] buffer = new byte[BufferSize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___buffer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_2), (void*)L_0);
		// public StringBuilder colorCode = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___colorCode_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorCode_3), (void*)L_1);
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
// System.Void ChangeColor/<Start>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_MoveNext_mCCF15D8736D01CE7869157C37ABEAD9DDF4FF2D1 (U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_mA6F489478980A07F30C30A548A6126E3BD785E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeColor_U3CStartU3Eb__8_0_mDB40D20A55B1662B2E4EC69DD46B92CD243B4C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005d_1;
			}
		}
		{
			// objectRenderer = GetComponent<Renderer>();
			ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* L_3 = V_1;
			ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* L_4 = V_1;
			NullCheck(L_4);
			Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
			L_5 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_4, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
			NullCheck(L_3);
			L_3->___objectRenderer_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___objectRenderer_7), (void*)L_5);
			// await Task.Run(() => ListenEvents(source.Token));
			ChangeColor_t70B53D9F65E73F39B15A13EDB83B60E1C29BB9C1* L_6 = V_1;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, L_6, (intptr_t)((void*)ChangeColor_U3CStartU3Eb__8_0_mDB40D20A55B1662B2E4EC69DD46B92CD243B4C48_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(L_7, NULL);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_10)
			{
				goto IL_0079_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_2;
			__this->___U3CU3Eu__1_3 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_mA6F489478980A07F30C30A548A6126E3BD785E0D(L_13, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12_mA6F489478980A07F30C30A548A6126E3BD785E0D_RuntimeMethod_var);
			goto IL_00ac;
		}

IL_005d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_3;
			V_2 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0079_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_0099;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0082;
		}
		throw e;
	}

CATCH_0082:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ac;
	}// end catch (depth: 1)

IL_0099:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_19, NULL);
	}

IL_00ac:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__8_MoveNext_mCCF15D8736D01CE7869157C37ABEAD9DDF4FF2D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12*>(__this + _offset);
	U3CStartU3Ed__8_MoveNext_mCCF15D8736D01CE7869157C37ABEAD9DDF4FF2D1(_thisAdjusted, method);
}
// System.Void ChangeColor/<Start>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_SetStateMachine_m4F298B1B3588E036AFAEA07AF56647F36C172FFE (U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__8_SetStateMachine_m4F298B1B3588E036AFAEA07AF56647F36C172FFE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__8_t95512269D22E3A397B38718A3CE30C9F14F98C12*>(__this + _offset);
	U3CStartU3Ed__8_SetStateMachine_m4F298B1B3588E036AFAEA07AF56647F36C172FFE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeColor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m55A6A55992D52FA4887F5829E422BE1CEF064C42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184* L_0 = (U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184*)il2cpp_codegen_object_new(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m94B01B7D2EBAC0FEF01773E680DF2B6C3DD121E4(L_0, NULL);
		((U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ChangeColor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94B01B7D2EBAC0FEF01773E680DF2B6C3DD121E4 (U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ChangeColor/<>c::<ListenEvents>b__10_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CListenEventsU3Eb__10_0_mB49E8C90F989491E7D91C49BCAD7B5EB00FC0353 (U3CU3Ec_t3BCC4315BF56AB9A1798D57A9A8362603A34A184* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ip0, const RuntimeMethod* method) 
{
	{
		// IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___ip0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
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
// System.Void LineCode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineCode_Start_m4F03E3AD7E2693D193BD8902CA526EF7304817FA (LineCode_t2B8B9441CC213EECB217B355A969F2989E9CDF64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lineRenderer = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0;
		L_0 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___lineRenderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_4), (void*)L_0);
		// lineRenderer.startWidth = 0.1f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___lineRenderer_4;
		NullCheck(L_1);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_1, (0.100000001f), NULL);
		// lineRenderer.endWidth = 0.1f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___lineRenderer_4;
		NullCheck(L_2);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_2, (0.100000001f), NULL);
		// }
		return;
	}
}
// System.Void LineCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineCode_Update_m96CC516F1C9D842EE257FA1BC8AD46B06B620574 (LineCode_t2B8B9441CC213EECB217B355A969F2989E9CDF64* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.SetPosition(0, origin.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___origin_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 0, L_2, NULL);
		// lineRenderer.SetPosition(1, destination.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___destination_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_3, 1, L_5, NULL);
		// }
		return;
	}
}
// System.Void LineCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineCode__ctor_m00D02C3C64E2B9B116253D95BA860CE086D86F7B (LineCode_t2B8B9441CC213EECB217B355A969F2989E9CDF64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = __this->___addressList_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
