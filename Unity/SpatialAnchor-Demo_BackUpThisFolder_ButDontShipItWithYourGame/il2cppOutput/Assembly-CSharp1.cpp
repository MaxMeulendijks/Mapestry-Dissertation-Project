#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/AppState,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams>
struct Dictionary_2_tA41FAE376E17FF4D18F2729458668A5B36B5C5A8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs>
struct List_1_t1E8F9C820F6A22BDEB98D1C076ABCDC53F836A24;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Int64>
struct TaskFactory_1_t7AD5FF56CD0FBD6843796AC47F4A1949F8E936DC;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger
struct AnchorExchanger_tEDF2047C1BD58B1A3767EA4C1644F4BC1B2C253B;
// Microsoft.Azure.SpatialAnchors.AnchorLocateCriteria
struct AnchorLocateCriteria_tB1B21061F7EF8BF62974F7B9AA6561336C9EFF8E;
// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate
struct AnchorLocatedDelegate_tC4CB6454C14D29C650F8FDDF37E4DAC4CA10EA25;
// Microsoft.Azure.SpatialAnchors.Unity.ARFoundation.AnchorLookup
struct AnchorLookup_t12AF2D04BBF17F4F2AF154167C855349E8296026;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession
struct CloudSpatialAnchorSession_t17A861D07D6D43E59C0728520A79521AED81E05B;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher
struct CloudSpatialAnchorWatcher_t971EBA118459ACA4C42A7E22F82E939B8D2FE685;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors
struct CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087;
// System.Delegate
struct Delegate_t;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase
struct DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate
struct LocateAnchorsCompletedDelegate_tC5C2E2A4E9D6018CF49F249E82A1BAAF476C61AB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX
struct MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate
struct OnLogDebugDelegate_t83FD2779E8155329C2739DEB731063C8B1BF4B1F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate
struct SessionErrorDelegate_tC3AFD8C56D959510564B79C860F2E88F48A115EE;
// Microsoft.Azure.SpatialAnchors.SessionStatus
struct SessionStatus_t6BB178901333A8643B4619D17C0807D04EDA49D7;
// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate
struct SessionUpdatedDelegate_tDAF5830F6A1E1FFEDA343257D59CBFE9FD2DAD15;
// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager
struct SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t3D065FFFEAA4D3FF4312B7A70AFA6CAF810087A6;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29
struct U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24
struct U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30
struct U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26
struct U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25
struct U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28
struct U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27
struct U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22
struct U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AppState_tF1751F8AB365E3B241B4B00F476E2E7C45B6C0BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral074E9A41B40CCA962AE4795B2D1D6F17F52248BF;
IL2CPP_EXTERN_C String_t* _stringLiteral365439334A80ECFF830D5AC2817A973FAA812795;
IL2CPP_EXTERN_C String_t* _stringLiteral4E740FFFA4F16C1F3920A6C4D0889BBFE2622995;
IL2CPP_EXTERN_C String_t* _stringLiteral54B11C37F44999682BFFB7D441A533E5BFFBD219;
IL2CPP_EXTERN_C String_t* _stringLiteralA0DC727BA631D03666BBFA73B256AA2A9F4901E7;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAB6EF21FD63A5FA41DDA76CD9FF277FD18513A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mFD50DC3137002DE5B162D2A204A4599593089FAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_mEA63C3840571737C2B29F9B81B2F135FD28E6D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94_m5B7F490C5D0D3A3216FD0FA9BBA6AE3807166A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF_m69947AB0CFD7E2093AF180C547BD010E59D8C8DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18_mCB464EEBEF6FC88332DAEA537DFA6FEBD5800B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mF46D8252739116E4002CB4C96D1A507C85CD5C61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_m640289730CA39730E1F08A86458E415575E33EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713_mF0F02DD2CACE76AB6E215B2C6618336DAC8C9DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A_m93483F62DC886B17C4CA31061674E9C75D0F6F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m72C686F3225E669853FEC1D44F35ED19F0F8D6EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m35072822ACBE5629B1C7197ADD125F7B382B3F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m826EFD4CD39B77C28D5679F55A38AC35BA569D16_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger
struct AnchorExchanger_tEDF2047C1BD58B1A3767EA4C1644F4BC1B2C253B  : public RuntimeObject
{
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::baseAddress
	String_t* ___baseAddress_0;
	// System.Collections.Generic.List`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::anchorkeys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___anchorkeys_1;
};
struct Il2CppArrayBounds;

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

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t3D065FFFEAA4D3FF4312B7A70AFA6CAF810087A6  : public RuntimeObject
{
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<>c__DisplayClass16_0::nextCsa
	CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* ___nextCsa_0;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<>c__DisplayClass16_0::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>
struct TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int64_t ___m_result_38;
};

struct Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7AD5FF56CD0FBD6843796AC47F4A1949F8E936DC* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
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

// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::handle
	intptr_t ___handle_0;
};

// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher
struct CloudSpatialAnchorWatcher_t971EBA118459ACA4C42A7E22F82E939B8D2FE685  : public RuntimeObject
{
	// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher::handle
	intptr_t ___handle_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26
struct U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// System.Exception Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::<ex>5__1
	Exception_t* ___U3CexU3E5__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28
struct U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// System.Exception Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::<ex>5__1
	Exception_t* ___U3CexU3E5__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29
struct U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/AppState Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::<>s__1
	int32_t ___U3CU3Es__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24
struct U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30
struct U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/AppState Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::<>s__1
	int32_t ___U3CU3Es__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25
struct U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27
struct U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// System.Int64 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<anchorNumber>5__1
	int64_t ___U3CanchorNumberU3E5__1_3;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<inputText>5__2
	String_t* ___U3CinputTextU3E5__2_4;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<>s__3
	String_t* ___U3CU3Es__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_7;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22
struct U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B  : public RuntimeObject
{
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>4__this
	CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* ___U3CU3E4__this_2;
	// System.Int64 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::<anchorNumber>5__1
	int64_t ___U3CanchorNumberU3E5__1_3;
	// System.Int64 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>s__2
	int64_t ___U3CU3Es__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64> Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>u__2
	TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD ___U3CU3Eu__2_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.InputInteractionBase
struct InputInteractionBase_tFCA48E22B9A2991A4BA836FC4ED9D633CAD96B9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARRaycastManager Microsoft.Azure.SpatialAnchors.Unity.Examples.InputInteractionBase::arRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___arRaycastManager_4;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX
struct MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX::MobileAndEditorUXTree
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MobileAndEditorUXTree_5;
};

struct MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6_StaticFields
{
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX::_Instance
	MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6* ____Instance_4;
};

// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager
struct SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::isSessionStarted
	bool ___isSessionStarted_4;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::session
	CloudSpatialAnchorSession_t17A861D07D6D43E59C0728520A79521AED81E05B* ___session_5;
	// Microsoft.Azure.SpatialAnchors.SessionStatus Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::sessionStatus
	SessionStatus_t6BB178901333A8643B4619D17C0807D04EDA49D7* ___sessionStatus_6;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::arSessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___arSessionOrigin_7;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::arAnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___arAnchorManager_8;
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::ARSessionInitialized
	bool ___ARSessionInitialized_11;
	// System.Int64 Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::lastFrameProcessedTimeStamp
	int64_t ___lastFrameProcessedTimeStamp_12;
	// UnityEngine.XR.ARFoundation.ARCameraManager Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::arCameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___arCameraManager_13;
	// UnityEngine.XR.ARFoundation.ARSession Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::arSession
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___arSession_14;
	// UnityEngine.Camera Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_15;
	// System.Collections.Generic.List`1<Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs> Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::pendingMobileEventArgs
	List_1_t1E8F9C820F6A22BDEB98D1C076ABCDC53F836A24* ___pendingMobileEventArgs_16;
	// Microsoft.Azure.SpatialAnchors.Unity.AuthenticationMode Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::authenticationMode
	int32_t ___authenticationMode_17;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::spatialAnchorsAccountId
	String_t* ___spatialAnchorsAccountId_18;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::spatialAnchorsAccountKey
	String_t* ___spatialAnchorsAccountKey_19;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::spatialAnchorsAccountDomain
	String_t* ___spatialAnchorsAccountDomain_20;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::clientId
	String_t* ___clientId_21;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::tenantId
	String_t* ___tenantId_22;
	// Microsoft.Azure.SpatialAnchors.SessionLogLevel Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::logLevel
	int32_t ___logLevel_23;
	// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::AnchorLocated
	AnchorLocatedDelegate_tC4CB6454C14D29C650F8FDDF37E4DAC4CA10EA25* ___AnchorLocated_24;
	// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::LocateAnchorsCompleted
	LocateAnchorsCompletedDelegate_tC5C2E2A4E9D6018CF49F249E82A1BAAF476C61AB* ___LocateAnchorsCompleted_25;
	// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::Error
	SessionErrorDelegate_tC3AFD8C56D959510564B79C860F2E88F48A115EE* ___Error_26;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionChanged
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___SessionChanged_27;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionCreated
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___SessionCreated_28;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionDestroyed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___SessionDestroyed_29;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionStarted
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___SessionStarted_30;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionStopped
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___SessionStopped_31;
	// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionUpdated
	SessionUpdatedDelegate_tDAF5830F6A1E1FFEDA343257D59CBFE9FD2DAD15* ___SessionUpdated_32;
	// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::LogDebug
	OnLogDebugDelegate_t83FD2779E8155329C2739DEB731063C8B1BF4B1F* ___LogDebug_33;
};

struct SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6_StaticFields
{
	// Microsoft.Azure.SpatialAnchors.Unity.ARFoundation.AnchorLookup Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::anchorLookup
	AnchorLookup_t12AF2D04BBF17F4F2AF154167C855349E8296026* ___anchorLookup_9;
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::javaInitialized
	bool ___javaInitialized_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase
struct DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949  : public InputInteractionBase_tFCA48E22B9A2991A4BA836FC4ED9D633CAD96B9D
{
	// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::advanceDemoTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___advanceDemoTask_5;
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::isErrorActive
	bool ___isErrorActive_6;
	// UnityEngine.UI.Text Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::feedbackBox
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___feedbackBox_7;
	// System.Collections.Generic.List`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::anchorIdsToLocate
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___anchorIdsToLocate_8;
	// Microsoft.Azure.SpatialAnchors.AnchorLocateCriteria Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::anchorLocateCriteria
	AnchorLocateCriteria_tB1B21061F7EF8BF62974F7B9AA6561336C9EFF8E* ___anchorLocateCriteria_9;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::currentCloudAnchor
	CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* ___currentCloudAnchor_10;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::currentWatcher
	CloudSpatialAnchorWatcher_t971EBA118459ACA4C42A7E22F82E939B8D2FE685* ___currentWatcher_11;
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_12;
	// UnityEngine.Material Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::spawnedObjectMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___spawnedObjectMat_13;
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::enableAdvancingOnSelect
	bool ___enableAdvancingOnSelect_14;
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::anchoredObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___anchoredObjectPrefab_15;
	// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::cloudManager
	SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* ___cloudManager_16;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors
struct CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087  : public DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949
{
	// System.Collections.Generic.Dictionary`2<Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/AppState,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams> Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::stateParams
	Dictionary_2_tA41FAE376E17FF4D18F2729458668A5B36B5C5A8* ___stateParams_17;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::anchorExchanger
	AnchorExchanger_tEDF2047C1BD58B1A3767EA4C1644F4BC1B2C253B* ___anchorExchanger_18;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/AppState Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::_currentAppState
	int32_t ____currentAppState_19;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/DemoFlow Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::_currentDemoFlow
	int32_t ____currentDemoFlow_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::otherSpawnedObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___otherSpawnedObjects_21;
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::anchorsLocated
	int32_t ___anchorsLocated_22;
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::anchorsExpected
	int32_t ___anchorsExpected_23;
	// System.Collections.Generic.List`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::localAnchorIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___localAnchorIds_24;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::_anchorKeyToFind
	String_t* ____anchorKeyToFind_25;
	// System.Nullable`1<System.Int64> Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::_anchorNumberToFind
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____anchorNumberToFind_26;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::baseSharingUrl
	String_t* ___baseSharingUrl_27;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int64>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD Task_1_GetAwaiter_m826EFD4CD39B77C28D5679F55A38AC35BA569D16_gshared (Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m35072822ACBE5629B1C7197ADD125F7B382B3F9C_gshared (TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD_TisRuntimeObject_mB3EE921A7E42E3B6871ACFD661F34D60236D77F8_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TaskAwaiter_1_GetResult_m72C686F3225E669853FEC1D44F35ED19F0F8D6EF_gshared (TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m0E4A3F3D0E99E62AE6305318EB422A88B8D36DC4_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorExtensions::GetPose(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SpatialAnchorExtensions_GetPose_mA836AC7F34AB19BCFCF630A1B4D7E90DA0D9B3D7 (CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* ___cloudAnchor0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::AttachTextMesh(UnityEngine.GameObject,System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAnchors_AttachTextMesh_mFCB574DB267D6AA3660BCFCC383BC251C9362073 (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parentObject0, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___dataToAttach1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::set_currentAppState(Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/AppState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8 (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CreateAnchors_U3CU3En__0_m1F0490F521A1218D662A71F5AFEC9E603F495756 (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_m640289730CA39730E1F08A86458E415575E33EB6 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloudSpatialAnchor_get_Identifier_m7FDB1B0602128458FCDF44A071AFA0119002650F (CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Threading.Tasks.Task`1<System.Int64> Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::StoreAnchorKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* AnchorExchanger_StoreAnchorKey_m7B58555FDB8102A26FB384F1D9E1EB2294D95BED (AnchorExchanger_tEDF2047C1BD58B1A3767EA4C1644F4BC1B2C253B* __this, String_t* ___anchorKey0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int64>::GetAwaiter()
inline TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD Task_1_GetAwaiter_m826EFD4CD39B77C28D5679F55A38AC35BA569D16 (Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD (*) (Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F*, const RuntimeMethod*))Task_1_GetAwaiter_m826EFD4CD39B77C28D5679F55A38AC35BA569D16_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m35072822ACBE5629B1C7197ADD125F7B382B3F9C (TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m35072822ACBE5629B1C7197ADD125F7B382B3F9C_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_mEA63C3840571737C2B29F9B81B2F135FD28E6D5A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD* ___awaiter0, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD*, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD_TisRuntimeObject_mB3EE921A7E42E3B6871ACFD661F34D60236D77F8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::GetResult()
inline int64_t TaskAwaiter_1_GetResult_m72C686F3225E669853FEC1D44F35ED19F0F8D6EF (TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m72C686F3225E669853FEC1D44F35ED19F0F8D6EF_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.Int64>::.ctor(T)
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___value0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/AppState Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::get_currentAppState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068 (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::AdvanceCreateFlowDemoAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CreateAnchors_AdvanceCreateFlowDemoAsync_mF300403DE6D932584A0AB3EFBC6FBC3BF5C893E3 (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94_m5B7F490C5D0D3A3216FD0FA9BBA6AE3807166A71 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::AdvanceLocateFlowDemoAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CreateAnchors_AdvanceLocateFlowDemoAsync_mF40744BE25BEA4BA639E83780F68DB1493A023FF (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18_mCB464EEBEF6FC88332DAEA537DFA6FEBD5800B3C (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::InitializeCreateFlowDemoAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CreateAnchors_InitializeCreateFlowDemoAsync_mCF21671D7D65CB32A7DC95C02D8A69A463BF96DF (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713_mF0F02DD2CACE76AB6E215B2C6618336DAC8C9DC4 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6* MobileUX_get_Instance_m9FFDBEC705D977708675CA30B4B4B44DE4EEF854 (const RuntimeMethod* method) ;
// UnityEngine.UI.InputField Microsoft.Azure.SpatialAnchors.Unity.Examples.MobileUX::GetDemoInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* MobileUX_GetDemoInputField_mC1EA4D747A8D584DF044E0545D531FEC24DDC3CF (MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::RetrieveAnchorKey(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AnchorExchanger_RetrieveAnchorKey_m188AE4D71AE8153FFA4113515D9DFBEA82A73A60 (AnchorExchanger_tEDF2047C1BD58B1A3767EA4C1644F4BC1B2C253B* __this, int64_t ___anchorNumber0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mFD50DC3137002DE5B162D2A204A4599593089FAA (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m0E4A3F3D0E99E62AE6305318EB422A88B8D36DC4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mF46D8252739116E4002CB4C96D1A507C85CD5C61 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::InitializeLocateFlowDemoAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CreateAnchors_InitializeLocateFlowDemoAsync_m1C97E90AFB3DB60D71E0742B623EF3EECFDDA3AF (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A_m93483F62DC886B17C4CA31061674E9C75D0F6F52 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors::ConfigureSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAnchors_ConfigureSession_mD489CC4C9FDAFF25C579EA2FD609F8F955140083 (CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* __this, const RuntimeMethod* method) ;
// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::get_CloudManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* DemoScriptBase_get_CloudManager_m87F551C6B9C3C70E4993E41589AB490FAC375D23 (DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::StartSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SpatialAnchorManager_StartSessionAsync_m65049176AAA3117B0559EACB5513F493612FD43E (SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::StopSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorManager_StopSession_m1F53A515D7990857F553C3E0E8A3BEA4905107EA (SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::ResetSessionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* SpatialAnchorManager_ResetSessionAsync_mCBEC518ABA329160F8662DC654E8D4EF43006FD3 (SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF_m69947AB0CFD7E2093AF180C547BD010E59D8C8DC (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::CreateWatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CloudSpatialAnchorWatcher_t971EBA118459ACA4C42A7E22F82E939B8D2FE685* DemoScriptBase_CreateWatcher_m86FBC6164C04D2919B9639B324357878BD8BD8E3 (DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m5FDCA76352A8A0FFF30E1C72EC3551142978BEF5 (U3CU3Ec__DisplayClass16_0_t3D065FFFEAA4D3FF4312B7A70AFA6CAF810087A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<>c__DisplayClass16_0::<OnCloudAnchorLocated>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3COnCloudAnchorLocatedU3Eb__0_mB673518CA81662A18B44A3FBBBE5216BF7DFF82B (U3CU3Ec__DisplayClass16_0_t3D065FFFEAA4D3FF4312B7A70AFA6CAF810087A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	{
		// anchorsLocated++;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_0 = __this->___U3CU3E4__this_1;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_1 = __this->___U3CU3E4__this_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___anchorsLocated_22;
		NullCheck(L_0);
		L_0->___anchorsLocated_22 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// currentCloudAnchor = nextCsa;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_3 = __this->___U3CU3E4__this_1;
		CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* L_4 = __this->___nextCsa_0;
		NullCheck(L_3);
		((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_3)->___currentCloudAnchor_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_3)->___currentCloudAnchor_10), (void*)L_4);
		// Pose anchorPose = currentCloudAnchor.GetPose();
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* L_6 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_5)->___currentCloudAnchor_10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = SpatialAnchorExtensions_GetPose_mA836AC7F34AB19BCFCF630A1B4D7E90DA0D9B3D7(L_6, NULL);
		V_0 = L_7;
		// GameObject nextObject = SpawnNewAnchoredObject(anchorPose.position, anchorPose.rotation, currentCloudAnchor);
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_8 = __this->___U3CU3E4__this_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11.___rotation_1;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_13 = __this->___U3CU3E4__this_1;
		NullCheck(L_13);
		CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* L_14 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_13)->___currentCloudAnchor_10;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = VirtualFuncInvoker3< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* >::Invoke(26 /* UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::SpawnNewAnchoredObject(UnityEngine.Vector3,UnityEngine.Quaternion,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor) */, L_8, L_10, L_12, L_14);
		V_1 = L_15;
		// spawnedObjectMat = nextObject.GetComponent<MeshRenderer>().material;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_16 = __this->___U3CU3E4__this_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		NullCheck(L_17);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_18;
		L_18 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_17, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_18, NULL);
		NullCheck(L_16);
		((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_16)->___spawnedObjectMat_13 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_16)->___spawnedObjectMat_13), (void*)L_19);
		// AttachTextMesh(nextObject, _anchorNumberToFind);
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_20 = __this->___U3CU3E4__this_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_22 = __this->___U3CU3E4__this_1;
		NullCheck(L_22);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_23 = L_22->____anchorNumberToFind_26;
		NullCheck(L_20);
		CreateAnchors_AttachTextMesh_mFCB574DB267D6AA3660BCFCC383BC251C9362073(L_20, L_21, L_23, NULL);
		// otherSpawnedObjects.Add(nextObject);
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_24 = __this->___U3CU3E4__this_1;
		NullCheck(L_24);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = L_24->___otherSpawnedObjects_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_1;
		NullCheck(L_25);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_25, L_26, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// if (anchorsLocated >= anchorsExpected)
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_27 = __this->___U3CU3E4__this_1;
		NullCheck(L_27);
		int32_t L_28 = L_27->___anchorsLocated_22;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_29 = __this->___U3CU3E4__this_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->___anchorsExpected_23;
		V_2 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_2;
		if (!L_31)
		{
			goto IL_00cd;
		}
	}
	{
		// currentAppState = AppState.DemoStepStopSessionForQuery;
		CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_32 = __this->___U3CU3E4__this_1;
		NullCheck(L_32);
		CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_32, ((int32_t)14), NULL);
	}

IL_00cd:
	{
		// });
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22__ctor_m817EEDE78AECF59CEB7443B140C016682CBDEB2E (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_MoveNext_m7968A4C1CD2CB5B8BC2D31BD86484C529890A678 (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_mEA63C3840571737C2B29F9B81B2F135FD28E6D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_m640289730CA39730E1F08A86458E415575E33EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m72C686F3225E669853FEC1D44F35ED19F0F8D6EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m35072822ACBE5629B1C7197ADD125F7B382B3F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m826EFD4CD39B77C28D5679F55A38AC35BA569D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B11C37F44999682BFFB7D441A533E5BFFBD219);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B* V_2 = NULL;
	TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_005b_1;
		}

IL_0014_1:
		{
			goto IL_00fe_1;
		}

IL_0019_1:
		{
			// await base.OnSaveCloudAnchorSuccessfulAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_3 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = CreateAnchors_U3CU3En__0_m1F0490F521A1218D662A71F5AFEC9E603F495756(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_6)
			{
				goto IL_0077_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_1;
			__this->___U3CU3Eu__1_5 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_m640289730CA39730E1F08A86458E415575E33EB6(L_9, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_m640289730CA39730E1F08A86458E415575E33EB6_RuntimeMethod_var);
			goto IL_01b8;
		}

IL_005b_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_5;
			V_1 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0077_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// long anchorNumber = -1;
			__this->___U3CanchorNumberU3E5__1_3 = ((int64_t)(-1));
			// localAnchorIds.Add(currentCloudAnchor.Identifier);
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_13 = __this->___U3CU3E4__this_2;
			NullCheck(L_13);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_13->___localAnchorIds_24;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_15 = __this->___U3CU3E4__this_2;
			NullCheck(L_15);
			CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* L_16 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_15)->___currentCloudAnchor_10;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = CloudSpatialAnchor_get_Identifier_m7FDB1B0602128458FCDF44A071AFA0119002650F(L_16, NULL);
			NullCheck(L_14);
			List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_17, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			// anchorNumber = (await anchorExchanger.StoreAnchorKey(currentCloudAnchor.Identifier));
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_18 = __this->___U3CU3E4__this_2;
			NullCheck(L_18);
			AnchorExchanger_tEDF2047C1BD58B1A3767EA4C1644F4BC1B2C253B* L_19 = L_18->___anchorExchanger_18;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_20 = __this->___U3CU3E4__this_2;
			NullCheck(L_20);
			CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231* L_21 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_20)->___currentCloudAnchor_10;
			NullCheck(L_21);
			String_t* L_22;
			L_22 = CloudSpatialAnchor_get_Identifier_m7FDB1B0602128458FCDF44A071AFA0119002650F(L_21, NULL);
			NullCheck(L_19);
			Task_1_t1640FA195724830135E3C6FC16DBCDC579F3876F* L_23;
			L_23 = AnchorExchanger_StoreAnchorKey_m7B58555FDB8102A26FB384F1D9E1EB2294D95BED(L_19, L_22, NULL);
			NullCheck(L_23);
			TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD L_24;
			L_24 = Task_1_GetAwaiter_m826EFD4CD39B77C28D5679F55A38AC35BA569D16(L_23, Task_1_GetAwaiter_m826EFD4CD39B77C28D5679F55A38AC35BA569D16_RuntimeMethod_var);
			V_3 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_1_get_IsCompleted_m35072822ACBE5629B1C7197ADD125F7B382B3F9C((&V_3), TaskAwaiter_1_get_IsCompleted_m35072822ACBE5629B1C7197ADD125F7B382B3F9C_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_011a_1;
			}
		}
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD L_27 = V_3;
			__this->___U3CU3Eu__2_6 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_mEA63C3840571737C2B29F9B81B2F135FD28E6D5A(L_28, (&V_3), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B_mEA63C3840571737C2B29F9B81B2F135FD28E6D5A_RuntimeMethod_var);
			goto IL_01b8;
		}

IL_00fe_1:
		{
			TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD L_29 = __this->___U3CU3Eu__2_6;
			V_3 = L_29;
			TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD* L_30 = (&__this->___U3CU3Eu__2_6);
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_tFDF1CD4803B3D752884BCB63E51052CC6D7B2FFD));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_011a_1:
		{
			int64_t L_32;
			L_32 = TaskAwaiter_1_GetResult_m72C686F3225E669853FEC1D44F35ED19F0F8D6EF((&V_3), TaskAwaiter_1_GetResult_m72C686F3225E669853FEC1D44F35ED19F0F8D6EF_RuntimeMethod_var);
			__this->___U3CU3Es__2_4 = L_32;
			int64_t L_33 = __this->___U3CU3Es__2_4;
			__this->___U3CanchorNumberU3E5__1_3 = L_33;
			// AttachTextMesh(spawnedObject, anchorNumber);
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_34 = __this->___U3CU3E4__this_2;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_35 = __this->___U3CU3E4__this_2;
			NullCheck(L_35);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_35)->___spawnedObject_12;
			int64_t L_37 = __this->___U3CanchorNumberU3E5__1_3;
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_38;
			memset((&L_38), 0, sizeof(L_38));
			Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_38), L_37, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
			NullCheck(L_34);
			CreateAnchors_AttachTextMesh_mFCB574DB267D6AA3660BCFCC383BC251C9362073(L_34, L_36, L_38, NULL);
			// currentAppState = AppState.DemoStepStopSession;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_39 = __this->___U3CU3E4__this_2;
			NullCheck(L_39);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_39, 8, NULL);
			// feedbackBox.text = $"Created anchor {anchorNumber}. Next: Stop cloud anchor session";
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_40 = __this->___U3CU3E4__this_2;
			NullCheck(L_40);
			Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_41 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_40)->___feedbackBox_7;
			int64_t L_42 = __this->___U3CanchorNumberU3E5__1_3;
			int64_t L_43 = L_42;
			RuntimeObject* L_44 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_43);
			String_t* L_45;
			L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral54B11C37F44999682BFFB7D441A533E5BFFBD219, L_44, NULL);
			NullCheck(L_41);
			VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_45);
			goto IL_01a4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018a;
		}
		throw e;
	}

CATCH_018a:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_46 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_47 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_46, L_47, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b8;
	}// end catch (depth: 1)

IL_01a4:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_48 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_48, NULL);
	}

IL_01b8:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<OnSaveCloudAnchorSuccessfulAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_SetStateMachine_mD39649655DB11F4AB44B02999D4C6741DE756A32 (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_t634CC8611D78CDFF476A68CB03EB39AFB38E069B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceDemoAsyncU3Ed__24__ctor_mB5395A28DDCA622E2F3045F0D90D903BC2B33D49 (U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceDemoAsyncU3Ed__24_MoveNext_m5154424870C3E8D00D91E3D8E124ACD63113CB57 (U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94_m5B7F490C5D0D3A3216FD0FA9BBA6AE3807166A71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94* V_4 = NULL;
	bool V_5 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_009a_1;
		}

IL_0017_1:
		{
			goto IL_0117_1;
		}

IL_001c_1:
		{
			// if (currentAppState == AppState.DemoStepChooseFlow || currentAppState == AppState.DemoStepInputAnchorNumber)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_3 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_3, NULL);
			if (!L_4)
			{
				goto IL_003a_1;
			}
		}
		{
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_5, NULL);
			G_B10_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
			goto IL_003b_1;
		}

IL_003a_1:
		{
			G_B10_0 = 1;
		}

IL_003b_1:
		{
			V_1 = (bool)G_B10_0;
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0045_1;
			}
		}
		{
			// return;
			goto IL_0159;
		}

IL_0045_1:
		{
			// if (_currentDemoFlow == DemoFlow.CreateFlow)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			int32_t L_9 = L_8->____currentDemoFlow_20;
			V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_2;
			if (!L_10)
			{
				goto IL_00c1_1;
			}
		}
		{
			// await AdvanceCreateFlowDemoAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_11 = __this->___U3CU3E4__this_2;
			NullCheck(L_11);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
			L_12 = CreateAnchors_AdvanceCreateFlowDemoAsync_mF300403DE6D932584A0AB3EFBC6FBC3BF5C893E3(L_11, NULL);
			NullCheck(L_12);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13;
			L_13 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_12, NULL);
			V_3 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_14)
			{
				goto IL_00b6_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = V_3;
			__this->___U3CU3Eu__1_3 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94_m5B7F490C5D0D3A3216FD0FA9BBA6AE3807166A71(L_17, (&V_3), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94_m5B7F490C5D0D3A3216FD0FA9BBA6AE3807166A71_RuntimeMethod_var);
			goto IL_016d;
		}

IL_009a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = __this->___U3CU3Eu__1_3;
			V_3 = L_18;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_19 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_00b6_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			goto IL_013d_1;
		}

IL_00c1_1:
		{
			// else if (_currentDemoFlow == DemoFlow.LocateFlow)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_21 = __this->___U3CU3E4__this_2;
			NullCheck(L_21);
			int32_t L_22 = L_21->____currentDemoFlow_20;
			V_5 = (bool)((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
			bool L_23 = V_5;
			if (!L_23)
			{
				goto IL_013d_1;
			}
		}
		{
			// await AdvanceLocateFlowDemoAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_24 = __this->___U3CU3E4__this_2;
			NullCheck(L_24);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_25;
			L_25 = CreateAnchors_AdvanceLocateFlowDemoAsync_mF40744BE25BEA4BA639E83780F68DB1493A023FF(L_24, NULL);
			NullCheck(L_25);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_26;
			L_26 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_25, NULL);
			V_6 = L_26;
			bool L_27;
			L_27 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_6), NULL);
			if (L_27)
			{
				goto IL_0134_1;
			}
		}
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_29 = V_6;
			__this->___U3CU3Eu__1_3 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_30 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94_m5B7F490C5D0D3A3216FD0FA9BBA6AE3807166A71(L_30, (&V_6), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94_m5B7F490C5D0D3A3216FD0FA9BBA6AE3807166A71_RuntimeMethod_var);
			goto IL_016d;
		}

IL_0117_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31 = __this->___U3CU3Eu__1_3;
			V_6 = L_31;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_32 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_0134_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_6), NULL);
		}

IL_013d_1:
		{
			goto IL_0159;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013f;
		}
		throw e;
	}

CATCH_013f:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_7;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_34, L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016d;
	}// end catch (depth: 1)

IL_0159:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_36 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_36, NULL);
	}

IL_016d:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceDemoAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceDemoAsyncU3Ed__24_SetStateMachine_mD833C560B93C61B820D583F438AE1EDBD07B33C8 (U3CAdvanceDemoAsyncU3Ed__24_tE0E10EED3D0FD6181A00772D356BC38C9936CB94* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoAsyncU3Ed__25__ctor_m6D12EE5F1E3DA95DFFCCFB168D598B34B3AAFC13 (U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoAsyncU3Ed__25_MoveNext_mAE4586E226C2FF9AD5B08A138051FEB7DD8F62FE (U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18_mCB464EEBEF6FC88332DAEA537DFA6FEBD5800B3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_007d_1;
		}

IL_000e_1:
		{
			// if (currentAppState == AppState.DemoStepChooseFlow)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_2, NULL);
			V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_003e_1;
			}
		}
		{
			// _currentDemoFlow = DemoFlow.CreateFlow;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_5);
			L_5->____currentDemoFlow_20 = 0;
			// currentAppState = AppState.DemoStepCreateSession;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_6 = __this->___U3CU3E4__this_2;
			NullCheck(L_6);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_6, 2, NULL);
			goto IL_00a2_1;
		}

IL_003e_1:
		{
			// await AdvanceDemoAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_7 = __this->___U3CU3E4__this_2;
			NullCheck(L_7);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(14 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::AdvanceDemoAsync() */, L_7);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_10)
			{
				goto IL_0099_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_2;
			__this->___U3CU3Eu__1_3 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18_mCB464EEBEF6FC88332DAEA537DFA6FEBD5800B3C(L_13, (&V_2), (&V_3), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18_mCB464EEBEF6FC88332DAEA537DFA6FEBD5800B3C_RuntimeMethod_var);
			goto IL_00d2;
		}

IL_007d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_3;
			V_2 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0099_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_00a2_1:
		{
			goto IL_00be;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a4;
		}
		throw e;
	}

CATCH_00a4:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	}// end catch (depth: 1)

IL_00be:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_19, NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemoAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoAsyncU3Ed__25_SetStateMachine_m22809F8046F4A5212ADF532A81DF0DC7204B7463 (U3CInitializeCreateFlowDemoAsyncU3Ed__25_tAEB2343A9EA2920CD47CD82D0CC74CC47973AE18* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoU3Ed__26__ctor_m709FCF6C2AC1D99E6B536B69CC142011AC87C10F (U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoU3Ed__26_MoveNext_m5A9386741211936A71B913C84E69706CC1BDFA1C (U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713_mF0F02DD2CACE76AB6E215B2C6618336DAC8C9DC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_0056_2;
			}

IL_0017_2:
			{
				// await InitializeCreateFlowDemoAsync();
				CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_3 = __this->___U3CU3E4__this_2;
				NullCheck(L_3);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
				L_4 = CreateAnchors_InitializeCreateFlowDemoAsync_mCF21671D7D65CB32A7DC95C02D8A69A463BF96DF(L_3, NULL);
				NullCheck(L_4);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
				L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
				V_1 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
				if (L_6)
				{
					goto IL_0072_2;
				}
			}
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->___U3CU3E1__state_0 = L_7;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_1;
				__this->___U3CU3Eu__1_4 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				V_2 = __this;
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713_mF0F02DD2CACE76AB6E215B2C6618336DAC8C9DC4(L_9, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713_mF0F02DD2CACE76AB6E215B2C6618336DAC8C9DC4_RuntimeMethod_var);
				goto IL_00d2;
			}

IL_0056_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_4;
				V_1 = L_10;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
			}

IL_0072_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
				goto IL_00a4_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007d_1;
			}
			throw e;
		}

CATCH_007d_1:
		{// begin catch(System.Exception)
			// catch (Exception ex)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_13 = V_3;
			__this->___U3CexU3E5__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__1_3), (void*)L_13);
			// Debug.LogError($"{nameof(CreateAnchors)} - Error in {nameof(InitializeCreateFlowDemo)}: {ex.Message}");
			Exception_t* L_14 = __this->___U3CexU3E5__1_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
			String_t* L_16;
			L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E740FFFA4F16C1F3920A6C4D0889BBFE2622995)), L_15, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a4_1;
		}// end catch (depth: 2)

IL_00a4_1:
		{
			goto IL_00be;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a6;
		}
		throw e;
	}

CATCH_00a6:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	}// end catch (depth: 1)

IL_00be:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_19, NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeCreateFlowDemo>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoU3Ed__26_SetStateMachine_mAA7B197E8CEF8EC1742CB4EB1911B7D788684874 (U3CInitializeCreateFlowDemoU3Ed__26_t69F46ACD1C3DE3B242F6FD76A6A0C1B082701713* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoAsyncU3Ed__27__ctor_m1C96A4F51E7D00AA329C7B8CDB60C7CB32ECFF4B (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoAsyncU3Ed__27_MoveNext_m757EE87276768037B2140EF71A55F0692D8DF45F (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mFD50DC3137002DE5B162D2A204A4599593089FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mF46D8252739116E4002CB4C96D1A507C85CD5C61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365439334A80ECFF830D5AC2817A973FAA812795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAB6EF21FD63A5FA41DDA76CD9FF277FD18513A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7* V_5 = NULL;
	bool V_6 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_0113_1;
		}

IL_0017_1:
		{
			goto IL_0200_1;
		}

IL_001c_1:
		{
			// if (currentAppState == AppState.DemoStepChooseFlow)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_3 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_3, NULL);
			V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0043_1;
			}
		}
		{
			// currentAppState = AppState.DemoStepInputAnchorNumber;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_6 = __this->___U3CU3E4__this_2;
			NullCheck(L_6);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_6, 1, NULL);
			goto IL_0226_1;
		}

IL_0043_1:
		{
			// else if (currentAppState == AppState.DemoStepInputAnchorNumber)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_7 = __this->___U3CU3E4__this_2;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_7, NULL);
			V_2 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_01be_1;
			}
		}
		{
			// string inputText = MobileUX.Instance.GetDemoInputField().text;
			MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6* L_10;
			L_10 = MobileUX_get_Instance_m9FFDBEC705D977708675CA30B4B4B44DE4EEF854(NULL);
			NullCheck(L_10);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_11;
			L_11 = MobileUX_GetDemoInputField_mC1EA4D747A8D584DF044E0545D531FEC24DDC3CF(L_10, NULL);
			NullCheck(L_11);
			String_t* L_12;
			L_12 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_11, NULL);
			__this->___U3CinputTextU3E5__2_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinputTextU3E5__2_4), (void*)L_12);
			// if (!long.TryParse(inputText, out anchorNumber))
			String_t* L_13 = __this->___U3CinputTextU3E5__2_4;
			int64_t* L_14 = (&__this->___U3CanchorNumberU3E5__1_3);
			bool L_15;
			L_15 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_13, L_14, NULL);
			V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
			bool L_16 = V_3;
			if (!L_16)
			{
				goto IL_00a3_1;
			}
		}
		{
			// feedbackBox.text = "Invalid Anchor Number!";
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_17 = __this->___U3CU3E4__this_2;
			NullCheck(L_17);
			Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_17)->___feedbackBox_7;
			NullCheck(L_18);
			VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteral365439334A80ECFF830D5AC2817A973FAA812795);
			goto IL_01b4_1;
		}

IL_00a3_1:
		{
			// _anchorNumberToFind = anchorNumber;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_19 = __this->___U3CU3E4__this_2;
			int64_t L_20 = __this->___U3CanchorNumberU3E5__1_3;
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_21;
			memset((&L_21), 0, sizeof(L_21));
			Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_21), L_20, /*hidden argument*/Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
			NullCheck(L_19);
			L_19->____anchorNumberToFind_26 = L_21;
			// _anchorKeyToFind = await anchorExchanger.RetrieveAnchorKey(_anchorNumberToFind.Value);
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_22 = __this->___U3CU3E4__this_2;
			NullCheck(L_22);
			AnchorExchanger_tEDF2047C1BD58B1A3767EA4C1644F4BC1B2C253B* L_23 = L_22->___anchorExchanger_18;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_24 = __this->___U3CU3E4__this_2;
			NullCheck(L_24);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_25 = (&L_24->____anchorNumberToFind_26);
			int64_t L_26;
			L_26 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_25, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
			NullCheck(L_23);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_27;
			L_27 = AnchorExchanger_RetrieveAnchorKey_m188AE4D71AE8153FFA4113515D9DFBEA82A73A60(L_23, L_26, NULL);
			NullCheck(L_27);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_28;
			L_28 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_27, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_4 = L_28;
			bool L_29;
			L_29 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_4), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_0130_1;
			}
		}
		{
			int32_t L_30 = 0;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_31 = V_4;
			__this->___U3CU3Eu__1_6 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			V_5 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_32 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mFD50DC3137002DE5B162D2A204A4599593089FAA(L_32, (&V_4), (&V_5), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mFD50DC3137002DE5B162D2A204A4599593089FAA_RuntimeMethod_var);
			goto IL_0256;
		}

IL_0113_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_33 = __this->___U3CU3Eu__1_6;
			V_4 = L_33;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_34 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_0130_1:
		{
			String_t* L_36;
			L_36 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_4), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			__this->___U3CU3Es__3_5 = L_36;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)L_36);
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_37 = __this->___U3CU3E4__this_2;
			String_t* L_38 = __this->___U3CU3Es__3_5;
			NullCheck(L_37);
			L_37->____anchorKeyToFind_25 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&L_37->____anchorKeyToFind_25), (void*)L_38);
			__this->___U3CU3Es__3_5 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)(String_t*)NULL);
			// if (_anchorKeyToFind == null)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_39 = __this->___U3CU3E4__this_2;
			NullCheck(L_39);
			String_t* L_40 = L_39->____anchorKeyToFind_25;
			V_6 = (bool)((((RuntimeObject*)(String_t*)L_40) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_41 = V_6;
			if (!L_41)
			{
				goto IL_0183_1;
			}
		}
		{
			// feedbackBox.text = "Anchor Number Not Found!";
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_42 = __this->___U3CU3E4__this_2;
			NullCheck(L_42);
			Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_42)->___feedbackBox_7;
			NullCheck(L_43);
			VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, _stringLiteralBAAB6EF21FD63A5FA41DDA76CD9FF277FD18513A);
			goto IL_01b3_1;
		}

IL_0183_1:
		{
			// _currentDemoFlow = DemoFlow.LocateFlow;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_44 = __this->___U3CU3E4__this_2;
			NullCheck(L_44);
			L_44->____currentDemoFlow_20 = 1;
			// currentAppState = AppState.DemoStepCreateSession;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_45 = __this->___U3CU3E4__this_2;
			NullCheck(L_45);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_45, 2, NULL);
			// MobileUX.Instance.GetDemoInputField().text = "";
			MobileUX_t4FB8B9DA07F0EEE910A09236A417CB5DE254DBB6* L_46;
			L_46 = MobileUX_get_Instance_m9FFDBEC705D977708675CA30B4B4B44DE4EEF854(NULL);
			NullCheck(L_46);
			InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_47;
			L_47 = MobileUX_GetDemoInputField_mC1EA4D747A8D584DF044E0545D531FEC24DDC3CF(L_46, NULL);
			NullCheck(L_47);
			InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_47, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		}

IL_01b3_1:
		{
		}

IL_01b4_1:
		{
			__this->___U3CinputTextU3E5__2_4 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinputTextU3E5__2_4), (void*)(String_t*)NULL);
			goto IL_0226_1;
		}

IL_01be_1:
		{
			// await AdvanceDemoAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_48 = __this->___U3CU3E4__this_2;
			NullCheck(L_48);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_49;
			L_49 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(14 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::AdvanceDemoAsync() */, L_48);
			NullCheck(L_49);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_50;
			L_50 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_49, NULL);
			V_7 = L_50;
			bool L_51;
			L_51 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_7), NULL);
			if (L_51)
			{
				goto IL_021d_1;
			}
		}
		{
			int32_t L_52 = 1;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_53 = V_7;
			__this->___U3CU3Eu__2_7 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			V_5 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_54 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mF46D8252739116E4002CB4C96D1A507C85CD5C61(L_54, (&V_7), (&V_5), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7_mF46D8252739116E4002CB4C96D1A507C85CD5C61_RuntimeMethod_var);
			goto IL_0256;
		}

IL_0200_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_55 = __this->___U3CU3Eu__2_7;
			V_7 = L_55;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_56 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_56, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_021d_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_7), NULL);
		}

IL_0226_1:
		{
			goto IL_0242;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0228;
		}
		throw e;
	}

CATCH_0228:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_58 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_59 = V_8;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_58, L_59, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0256;
	}// end catch (depth: 1)

IL_0242:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_60 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_60, NULL);
	}

IL_0256:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemoAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoAsyncU3Ed__27_SetStateMachine_mB290DC8FF9B34E1B38C4CBD061A66E10ADA5A0D1 (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tA94251E0D2FF5032C9F7414F963983D0CFB285F7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoU3Ed__28__ctor_mCFE5DEB245C7A8416D4DD7F64C0FA980DE5CFB21 (U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoU3Ed__28_MoveNext_m09EB4F36437F615F33B195541CE0CF7890DB0CCE (U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A_m93483F62DC886B17C4CA31061674E9C75D0F6F52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_0056_2;
			}

IL_0017_2:
			{
				// await InitializeLocateFlowDemoAsync();
				CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_3 = __this->___U3CU3E4__this_2;
				NullCheck(L_3);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
				L_4 = CreateAnchors_InitializeLocateFlowDemoAsync_m1C97E90AFB3DB60D71E0742B623EF3EECFDDA3AF(L_3, NULL);
				NullCheck(L_4);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
				L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
				V_1 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
				if (L_6)
				{
					goto IL_0072_2;
				}
			}
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->___U3CU3E1__state_0 = L_7;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_1;
				__this->___U3CU3Eu__1_4 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				V_2 = __this;
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A_m93483F62DC886B17C4CA31061674E9C75D0F6F52(L_9, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A_m93483F62DC886B17C4CA31061674E9C75D0F6F52_RuntimeMethod_var);
				goto IL_00d2;
			}

IL_0056_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_4;
				V_1 = L_10;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
			}

IL_0072_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
				goto IL_00a4_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007d_1;
			}
			throw e;
		}

CATCH_007d_1:
		{// begin catch(System.Exception)
			// catch (Exception ex)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_13 = V_3;
			__this->___U3CexU3E5__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__1_3), (void*)L_13);
			// Debug.LogError($"{nameof(CreateAnchors)} - Error in {nameof(InitializeLocateFlowDemo)}: {ex.Message}");
			Exception_t* L_14 = __this->___U3CexU3E5__1_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
			String_t* L_16;
			L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA0DC727BA631D03666BBFA73B256AA2A9F4901E7)), L_15, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a4_1;
		}// end catch (depth: 2)

IL_00a4_1:
		{
			goto IL_00be;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a6;
		}
		throw e;
	}

CATCH_00a6:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_17 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	}// end catch (depth: 1)

IL_00be:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_19 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_19, NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<InitializeLocateFlowDemo>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoU3Ed__28_SetStateMachine_m9A1AC88CE304D1FC490228CC7DC1B5C9A44D2C66 (U3CInitializeLocateFlowDemoU3Ed__28_tE64C7CC96E2F485A8DC463E8BBA36B72F8C3993A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceCreateFlowDemoAsyncU3Ed__29__ctor_m48D4F76E6AD7B1641704A8CF5C58739200FA477D (U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceCreateFlowDemoAsyncU3Ed__29_MoveNext_m19FDBF783ADF27B34BDBC51DB640923E444B6985 (U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppState_tF1751F8AB365E3B241B4B00F476E2E7C45B6C0BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral074E9A41B40CCA962AE4795B2D1D6F17F52248BF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F* V_4 = NULL;
	bool V_5 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_6;
	memset((&V_6), 0, sizeof(V_6));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001b_1;
				}
				case 1:
				{
					goto IL_0020_1;
				}
				case 2:
				{
					goto IL_0025_1;
				}
			}
		}
		{
			goto IL_002a_1;
		}

IL_001b_1:
		{
			goto IL_00fb_1;
		}

IL_0020_1:
		{
			goto IL_01ad_1;
		}

IL_0025_1:
		{
			goto IL_023d_1;
		}

IL_002a_1:
		{
			// switch (currentAppState)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_2, NULL);
			V_1 = L_3;
			int32_t L_4 = V_1;
			__this->___U3CU3Es__1_3 = L_4;
			int32_t L_5 = __this->___U3CU3Es__1_3;
			V_2 = L_5;
			int32_t L_6 = V_2;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 2)))
			{
				case 0:
				{
					goto IL_0078_1;
				}
				case 1:
				{
					goto IL_0096_1;
				}
				case 2:
				{
					goto IL_00b4_1;
				}
				case 3:
				{
					goto IL_0131_1;
				}
				case 4:
				{
					goto IL_015c_1;
				}
				case 5:
				{
					goto IL_0299_1;
				}
				case 6:
				{
					goto IL_01d7_1;
				}
			}
		}
		{
			goto IL_006b_1;
		}

IL_006b_1:
		{
			int32_t L_7 = V_2;
			if ((((int32_t)L_7) == ((int32_t)((int32_t)15))))
			{
				goto IL_0272_1;
			}
		}
		{
			goto IL_0299_1;
		}

IL_0078_1:
		{
			// currentCloudAnchor = null;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_8)->___currentCloudAnchor_10 = (CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_8)->___currentCloudAnchor_10), (void*)(CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL);
			// currentAppState = AppState.DemoStepConfigSession;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_9 = __this->___U3CU3E4__this_2;
			NullCheck(L_9);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_9, 3, NULL);
			// break;
			goto IL_02c4_1;
		}

IL_0096_1:
		{
			// ConfigureSession();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_10 = __this->___U3CU3E4__this_2;
			NullCheck(L_10);
			CreateAnchors_ConfigureSession_mD489CC4C9FDAFF25C579EA2FD609F8F955140083(L_10, NULL);
			// currentAppState = AppState.DemoStepStartSession;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_11 = __this->___U3CU3E4__this_2;
			NullCheck(L_11);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_11, 4, NULL);
			// break;
			goto IL_02c4_1;
		}

IL_00b4_1:
		{
			// await CloudManager.StartSessionAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_12 = __this->___U3CU3E4__this_2;
			NullCheck(L_12);
			SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* L_13;
			L_13 = DemoScriptBase_get_CloudManager_m87F551C6B9C3C70E4993E41589AB490FAC375D23(L_12, NULL);
			NullCheck(L_13);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
			L_14 = SpatialAnchorManager_StartSessionAsync_m65049176AAA3117B0559EACB5513F493612FD43E(L_13, NULL);
			NullCheck(L_14);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15;
			L_15 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_14, NULL);
			V_3 = L_15;
			bool L_16;
			L_16 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_16)
			{
				goto IL_0117_1;
			}
		}
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = V_3;
			__this->___U3CU3Eu__1_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3(L_19, (&V_3), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3_RuntimeMethod_var);
			goto IL_02f4;
		}

IL_00fb_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_20 = __this->___U3CU3Eu__1_4;
			V_3 = L_20;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_21 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_0117_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			// currentAppState = AppState.DemoStepCreateLocalAnchor;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_23 = __this->___U3CU3E4__this_2;
			NullCheck(L_23);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_23, 5, NULL);
			// break;
			goto IL_02c4_1;
		}

IL_0131_1:
		{
			// if (spawnedObject != null)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_24 = __this->___U3CU3E4__this_2;
			NullCheck(L_24);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_24)->___spawnedObject_12;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_26;
			L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			V_5 = L_26;
			bool L_27 = V_5;
			if (!L_27)
			{
				goto IL_0157_1;
			}
		}
		{
			// currentAppState = AppState.DemoStepSaveCloudAnchor;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_28 = __this->___U3CU3E4__this_2;
			NullCheck(L_28);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_28, 6, NULL);
		}

IL_0157_1:
		{
			// break;
			goto IL_02c4_1;
		}

IL_015c_1:
		{
			// currentAppState = AppState.DemoStepSavingCloudAnchor;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_29 = __this->___U3CU3E4__this_2;
			NullCheck(L_29);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_29, 7, NULL);
			// await SaveCurrentObjectAnchorToCloudAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_30 = __this->___U3CU3E4__this_2;
			NullCheck(L_30);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_31;
			L_31 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(24 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::SaveCurrentObjectAnchorToCloudAsync() */, L_30);
			NullCheck(L_31);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_32;
			L_32 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_31, NULL);
			V_6 = L_32;
			bool L_33;
			L_33 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_6), NULL);
			if (L_33)
			{
				goto IL_01ca_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_35 = V_6;
			__this->___U3CU3Eu__1_4 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_36 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3(L_36, (&V_6), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3_RuntimeMethod_var);
			goto IL_02f4;
		}

IL_01ad_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_37 = __this->___U3CU3Eu__1_4;
			V_6 = L_37;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_38 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_01ca_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_6), NULL);
			// break;
			goto IL_02c4_1;
		}

IL_01d7_1:
		{
			// CloudManager.StopSession();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_40 = __this->___U3CU3E4__this_2;
			NullCheck(L_40);
			SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* L_41;
			L_41 = DemoScriptBase_get_CloudManager_m87F551C6B9C3C70E4993E41589AB490FAC375D23(L_40, NULL);
			NullCheck(L_41);
			SpatialAnchorManager_StopSession_m1F53A515D7990857F553C3E0E8A3BEA4905107EA(L_41, NULL);
			// CleanupSpawnedObjects();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_42 = __this->___U3CU3E4__this_2;
			NullCheck(L_42);
			VirtualActionInvoker0::Invoke(15 /* System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::CleanupSpawnedObjects() */, L_42);
			// await CloudManager.ResetSessionAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_43 = __this->___U3CU3E4__this_2;
			NullCheck(L_43);
			SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* L_44;
			L_44 = DemoScriptBase_get_CloudManager_m87F551C6B9C3C70E4993E41589AB490FAC375D23(L_43, NULL);
			NullCheck(L_44);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_45;
			L_45 = SpatialAnchorManager_ResetSessionAsync_mCBEC518ABA329160F8662DC654E8D4EF43006FD3(L_44, NULL);
			NullCheck(L_45);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_46;
			L_46 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_45, NULL);
			V_7 = L_46;
			bool L_47;
			L_47 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_7), NULL);
			if (L_47)
			{
				goto IL_025a_1;
			}
		}
		{
			int32_t L_48 = 2;
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_49 = V_7;
			__this->___U3CU3Eu__1_4 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_50 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3(L_50, (&V_7), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F_m09071547C3634A5259FF31AC51E1EA1A694288F3_RuntimeMethod_var);
			goto IL_02f4;
		}

IL_023d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_51 = __this->___U3CU3Eu__1_4;
			V_7 = L_51;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_52 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_52, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
		}

IL_025a_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_7), NULL);
			// currentAppState = AppState.DemoStepComplete;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_54 = __this->___U3CU3E4__this_2;
			NullCheck(L_54);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_54, ((int32_t)15), NULL);
			// break;
			goto IL_02c4_1;
		}

IL_0272_1:
		{
			// currentCloudAnchor = null;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_55 = __this->___U3CU3E4__this_2;
			NullCheck(L_55);
			((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_55)->___currentCloudAnchor_10 = (CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_55)->___currentCloudAnchor_10), (void*)(CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL);
			// currentAppState = AppState.DemoStepChooseFlow;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_56 = __this->___U3CU3E4__this_2;
			NullCheck(L_56);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_56, 0, NULL);
			// CleanupSpawnedObjects();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_57 = __this->___U3CU3E4__this_2;
			NullCheck(L_57);
			VirtualActionInvoker0::Invoke(15 /* System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::CleanupSpawnedObjects() */, L_57);
			// break;
			goto IL_02c4_1;
		}

IL_0299_1:
		{
			// Debug.Log("Shouldn't get here for app state " + currentAppState);
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_58 = __this->___U3CU3E4__this_2;
			NullCheck(L_58);
			int32_t L_59;
			L_59 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_58, NULL);
			V_2 = L_59;
			Il2CppFakeBox<int32_t> L_60(AppState_tF1751F8AB365E3B241B4B00F476E2E7C45B6C0BE_il2cpp_TypeInfo_var, (&V_2));
			String_t* L_61;
			L_61 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_60), NULL);
			String_t* L_62;
			L_62 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral074E9A41B40CCA962AE4795B2D1D6F17F52248BF, L_61, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_62, NULL);
			// break;
			goto IL_02c4_1;
		}

IL_02c4_1:
		{
			goto IL_02e0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02c6;
		}
		throw e;
	}

CATCH_02c6:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_63 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_64 = V_8;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_63, L_64, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02f4;
	}// end catch (depth: 1)

IL_02e0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_65 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_65, NULL);
	}

IL_02f4:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceCreateFlowDemoAsync>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceCreateFlowDemoAsyncU3Ed__29_SetStateMachine_mA267B8D115C6D69742293B92A5CC740F200DB57C (U3CAdvanceCreateFlowDemoAsyncU3Ed__29_t6E975F60E33BE800D4C4314BACFC49576245C23F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceLocateFlowDemoAsyncU3Ed__30__ctor_mAD4531123266D52041AC2166BA45FD13B35E7B84 (U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceLocateFlowDemoAsyncU3Ed__30_MoveNext_mBD5F845B8F8A10E3994238F96E7070C2FBD4CD84 (U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppState_tF1751F8AB365E3B241B4B00F476E2E7C45B6C0BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF_m69947AB0CFD7E2093AF180C547BD010E59D8C8DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral074E9A41B40CCA962AE4795B2D1D6F17F52248BF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00f6_1;
		}

IL_0011_1:
		{
			// switch (currentAppState)
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_2, NULL);
			V_1 = L_3;
			int32_t L_4 = V_1;
			__this->___U3CU3Es__1_3 = L_4;
			int32_t L_5 = __this->___U3CU3Es__1_3;
			V_2 = L_5;
			int32_t L_6 = V_2;
			if ((((int32_t)L_6) == ((int32_t)2)))
			{
				goto IL_0058_1;
			}
		}
		{
			goto IL_0032_1;
		}

IL_0032_1:
		{
			int32_t L_7 = V_2;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)10))))
			{
				case 0:
				{
					goto IL_0084_1;
				}
				case 1:
				{
					goto IL_00af_1;
				}
				case 2:
				{
					goto IL_012d_1;
				}
				case 3:
				{
					goto IL_0156_1;
				}
				case 4:
				{
					goto IL_0158_1;
				}
				case 5:
				{
					goto IL_0179_1;
				}
			}
		}
		{
			goto IL_01ac_1;
		}

IL_0058_1:
		{
			// currentAppState = AppState.DemoStepChooseFlow;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_8, 0, NULL);
			// currentCloudAnchor = null;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_9 = __this->___U3CU3E4__this_2;
			NullCheck(L_9);
			((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_9)->___currentCloudAnchor_10 = (CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_9)->___currentCloudAnchor_10), (void*)(CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL);
			// currentAppState = AppState.DemoStepCreateSessionForQuery;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_10 = __this->___U3CU3E4__this_2;
			NullCheck(L_10);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_10, ((int32_t)10), NULL);
			// break;
			goto IL_01d7_1;
		}

IL_0084_1:
		{
			// anchorsLocated = 0;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_11 = __this->___U3CU3E4__this_2;
			NullCheck(L_11);
			L_11->___anchorsLocated_22 = 0;
			// ConfigureSession();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_12 = __this->___U3CU3E4__this_2;
			NullCheck(L_12);
			CreateAnchors_ConfigureSession_mD489CC4C9FDAFF25C579EA2FD609F8F955140083(L_12, NULL);
			// currentAppState = AppState.DemoStepStartSessionForQuery;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_13 = __this->___U3CU3E4__this_2;
			NullCheck(L_13);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_13, ((int32_t)11), NULL);
			// break;
			goto IL_01d7_1;
		}

IL_00af_1:
		{
			// await CloudManager.StartSessionAsync();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_14 = __this->___U3CU3E4__this_2;
			NullCheck(L_14);
			SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* L_15;
			L_15 = DemoScriptBase_get_CloudManager_m87F551C6B9C3C70E4993E41589AB490FAC375D23(L_14, NULL);
			NullCheck(L_15);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_16;
			L_16 = SpatialAnchorManager_StartSessionAsync_m65049176AAA3117B0559EACB5513F493612FD43E(L_15, NULL);
			NullCheck(L_16);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17;
			L_17 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_16, NULL);
			V_3 = L_17;
			bool L_18;
			L_18 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_18)
			{
				goto IL_0112_1;
			}
		}
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_20 = V_3;
			__this->___U3CU3Eu__1_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF_m69947AB0CFD7E2093AF180C547BD010E59D8C8DC(L_21, (&V_3), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF_m69947AB0CFD7E2093AF180C547BD010E59D8C8DC_RuntimeMethod_var);
			goto IL_0207;
		}

IL_00f6_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_22 = __this->___U3CU3Eu__1_4;
			V_3 = L_22;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_23 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_0112_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			// currentAppState = AppState.DemoStepLookForAnchor;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_25 = __this->___U3CU3E4__this_2;
			NullCheck(L_25);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_25, ((int32_t)12), NULL);
			// break;
			goto IL_01d7_1;
		}

IL_012d_1:
		{
			// currentAppState = AppState.DemoStepLookingForAnchor;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_26 = __this->___U3CU3E4__this_2;
			NullCheck(L_26);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_26, ((int32_t)13), NULL);
			// currentWatcher = CreateWatcher();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_27 = __this->___U3CU3E4__this_2;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_28 = __this->___U3CU3E4__this_2;
			NullCheck(L_28);
			CloudSpatialAnchorWatcher_t971EBA118459ACA4C42A7E22F82E939B8D2FE685* L_29;
			L_29 = DemoScriptBase_CreateWatcher_m86FBC6164C04D2919B9639B324357878BD8BD8E3(L_28, NULL);
			NullCheck(L_27);
			((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_27)->___currentWatcher_11 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_27)->___currentWatcher_11), (void*)L_29);
			// break;
			goto IL_01d7_1;
		}

IL_0156_1:
		{
			// break;
			goto IL_01d7_1;
		}

IL_0158_1:
		{
			// CloudManager.StopSession();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_30 = __this->___U3CU3E4__this_2;
			NullCheck(L_30);
			SpatialAnchorManager_t791D2B9849B7A796CF0379BD49FA9F7DA83AFCF6* L_31;
			L_31 = DemoScriptBase_get_CloudManager_m87F551C6B9C3C70E4993E41589AB490FAC375D23(L_30, NULL);
			NullCheck(L_31);
			SpatialAnchorManager_StopSession_m1F53A515D7990857F553C3E0E8A3BEA4905107EA(L_31, NULL);
			// currentAppState = AppState.DemoStepComplete;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_32 = __this->___U3CU3E4__this_2;
			NullCheck(L_32);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_32, ((int32_t)15), NULL);
			// break;
			goto IL_01d7_1;
		}

IL_0179_1:
		{
			// currentCloudAnchor = null;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_33 = __this->___U3CU3E4__this_2;
			NullCheck(L_33);
			((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_33)->___currentCloudAnchor_10 = (CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_33)->___currentCloudAnchor_10), (void*)(CloudSpatialAnchor_t872B6BE2B3658D445ACA7318182EE757E35BD231*)NULL);
			// currentWatcher = null;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_34 = __this->___U3CU3E4__this_2;
			NullCheck(L_34);
			((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_34)->___currentWatcher_11 = (CloudSpatialAnchorWatcher_t971EBA118459ACA4C42A7E22F82E939B8D2FE685*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((DemoScriptBase_tC7DF67E189A718398BAD079EFA346993313F5949*)L_34)->___currentWatcher_11), (void*)(CloudSpatialAnchorWatcher_t971EBA118459ACA4C42A7E22F82E939B8D2FE685*)NULL);
			// currentAppState = AppState.DemoStepChooseFlow;
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_35 = __this->___U3CU3E4__this_2;
			NullCheck(L_35);
			CreateAnchors_set_currentAppState_mF71956C57B9ACB80A4C7ED45A5450F2FF10901C8(L_35, 0, NULL);
			// CleanupSpawnedObjects();
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_36 = __this->___U3CU3E4__this_2;
			NullCheck(L_36);
			VirtualActionInvoker0::Invoke(15 /* System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::CleanupSpawnedObjects() */, L_36);
			// break;
			goto IL_01d7_1;
		}

IL_01ac_1:
		{
			// Debug.Log("Shouldn't get here for app state " + currentAppState);
			CreateAnchors_tA07D067CF9EC4F138D659554565C2E39B8E3B087* L_37 = __this->___U3CU3E4__this_2;
			NullCheck(L_37);
			int32_t L_38;
			L_38 = CreateAnchors_get_currentAppState_m9F19F217EDC0F0025CCF2A8A8CD60D3D67AD1068(L_37, NULL);
			V_2 = L_38;
			Il2CppFakeBox<int32_t> L_39(AppState_tF1751F8AB365E3B241B4B00F476E2E7C45B6C0BE_il2cpp_TypeInfo_var, (&V_2));
			String_t* L_40;
			L_40 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_39), NULL);
			String_t* L_41;
			L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral074E9A41B40CCA962AE4795B2D1D6F17F52248BF, L_40, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_41, NULL);
			// break;
			goto IL_01d7_1;
		}

IL_01d7_1:
		{
			goto IL_01f3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d9;
		}
		throw e;
	}

CATCH_01d9:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_43 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_42, L_43, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0207;
	}// end catch (depth: 1)

IL_01f3:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_44 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_44, NULL);
	}

IL_0207:
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.CreateAnchors/<AdvanceLocateFlowDemoAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceLocateFlowDemoAsyncU3Ed__30_SetStateMachine_mB06C4558EAB0A27B7B7FF233EEAE360DECD226E7 (U3CAdvanceLocateFlowDemoAsyncU3Ed__30_t198CCD97FC7918703F55DFCF81D2E01C594879EF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
