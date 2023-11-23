#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ParticleManager[]
struct ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// ShapeManager[]
struct ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Transform[,]
struct TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DragSettingsManager
struct DragSettingsManager_t1E9D364241D9A0348BB54B5F3524F03AC8CACE3A;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// FirstSquareController
struct FirstSquareController_t9F2EDD03BC3578BD6A238B6D95CF852546B98820;
// FollowShapeManager
struct FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// IconManager
struct IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// IntroManager
struct IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ParticleManager
struct ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39;
// ScreenFadeManager
struct ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD;
// SecondSquareController
struct SecondSquareController_tE97038ED8A4043F27F78D6A13F65DB6577F7CA33;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// ShapeManager
struct ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// SpawnerManager
struct SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TestEventManager
struct TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TouchManager
struct TouchManager_t38556C99556388530402BB02D83E19164E477D1C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// BoardManager/<CleanAllLine>d__17
struct U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06;
// GameManager/<GameOverRoutine>d__48
struct U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF;
// GameManager/<LevelUpRoutine>d__47
struct U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82;
// IntroManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD;
// IntroManager/<OpenNumbersRoutine>d__5
struct U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// ScreenFadeManager/<FadeRoutine>d__5
struct U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C;
// ShapeManager/<MoveCoroutine>d__11
struct U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SpawnerManager/<ShapeImageRoutine>d__6
struct U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC;
// TestEventManager/ClickAction
struct ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A;
// TouchManager/TouchEventDelegate
struct TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2;

IL2CPP_EXTERN_C RuntimeClass* ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1550FA161D85495D6D219921B1CDD67899EFCE45;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral2DEBB2C2B57EEE32D11A6037F959AE7F1EA007D2;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral755A8C0936AE971555FE50C6626A2788F8D906AC;
IL2CPP_EXTERN_C String_t* _stringLiteral7ED7F1D4484BD84C0E5B5F9028AA8045387EBCDF;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE699A8CF6139FF0E6D4E5130C76B14E0178934;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8926C6AE3D1340D4ACC8C2BB0EDCAB6AF0CEA90B;
IL2CPP_EXTERN_C String_t* _stringLiteral94514A06DA6CAD43EAC4B195BF6B84F816DC7F80;
IL2CPP_EXTERN_C String_t* _stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0;
IL2CPP_EXTERN_C String_t* _stringLiteral9C93EE82B51F7ED30422709474AE250B6E8526EF;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralD3F90389C65DFB594960A31CACC44D314A33FCB5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m5A53DBBEC351F939C04CB60CF7CD9C7E0E5A65AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirstSquareController_ChangeColor_mE71BA2EED3416377FC7079A999EBDD38782781EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_SurukleBitti_m78C8F4E3E26CE7CDC03CF171CF9DE7587861450B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_Surukle_m38964E332542567D5A9985961DB007DB665AC893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_TapFnc_m3979703D06A76970752743BE66BB5C2B97D89C53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_U3CShapePlacedU3Eb__43_0_m35B0A3D1E2E1B120EE7F117BC42E3D794E105365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_U3CStartGameU3Eb__35_0_m84D66931A3F8915D1CB2D83981922FDFE196A385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B_m7ED9BA6E60A08C6DA1BC9BE29878B6F0252129FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D_m56FC90A84F4E0E3B50CECB7C82E057C0FDAB22C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_m14EE68458F39D29F7196A02D49E978AFA028E02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF_m44C3FD40A4BE15FDED205A2CB1A732381A4BA821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisTouchManager_t38556C99556388530402BB02D83E19164E477D1C_m5EC1260CBF5A537C69CB21E6C931F3108F79F0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecondSquareController_TurnObject_m7D09C3316B799494F0CDE49A33C838EE9019AC14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_m0D14325CA867AA1EDF52A00D01D1C8301ABB30AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCleanAllLineU3Ed__17_System_Collections_IEnumerator_Reset_mBB4C502495F488F9035F567FF57421DE8EAA6E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m6C7F1B22E93D9BFA7515B965491684094EF74902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameOverRoutineU3Ed__48_System_Collections_IEnumerator_Reset_m7EC935D5A538DD1AA86A5E7B07C2625CED9E1D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLevelUpRoutineU3Ed__47_System_Collections_IEnumerator_Reset_mE76C9BDB230D8006181234FAA185D289A59ED6A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m068C0C2FF82DDF6AF1C27F1140C05131D67AD43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenNumbersRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m5C9D63C8239E98088CC47C8BACFBE2D75301003A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShapeImageRoutineU3Ed__6_System_Collections_IEnumerator_Reset_mB89040481C470136C851ED670ACEC244DE67B845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__0_mC6334450FA5B28361B889F9D18EDB48E5B5463B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__1_m863D571C4C1448B4A4CE3D4BD750490F26BEEE49_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2;
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
struct TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F;

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

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// BoardManager/<CleanAllLine>d__17
struct U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06  : public RuntimeObject
{
	// System.Int32 BoardManager/<CleanAllLine>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BoardManager/<CleanAllLine>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BoardManager BoardManager/<CleanAllLine>d__17::<>4__this
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___U3CU3E4__this_2;
	// System.Int32 BoardManager/<CleanAllLine>d__17::<y>5__2
	int32_t ___U3CyU3E5__2_3;
};

// GameManager/<GameOverRoutine>d__48
struct U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF  : public RuntimeObject
{
	// System.Int32 GameManager/<GameOverRoutine>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<GameOverRoutine>d__48::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<GameOverRoutine>d__48::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
	// System.Int32 GameManager/<GameOverRoutine>d__48::<counter>5__2
	int32_t ___U3CcounterU3E5__2_3;
};

// GameManager/<LevelUpRoutine>d__47
struct U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82  : public RuntimeObject
{
	// System.Int32 GameManager/<LevelUpRoutine>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<LevelUpRoutine>d__47::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<LevelUpRoutine>d__47::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
	// System.Int32 GameManager/<LevelUpRoutine>d__47::<counter>5__2
	int32_t ___U3CcounterU3E5__2_3;
};

// IntroManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD  : public RuntimeObject
{
	// IntroManager IntroManager/<>c__DisplayClass5_0::<>4__this
	IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* ___U3CU3E4__this_0;
	// System.Int32 IntroManager/<>c__DisplayClass5_0::counter
	int32_t ___counter_1;
};

// IntroManager/<OpenNumbersRoutine>d__5
struct U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91  : public RuntimeObject
{
	// System.Int32 IntroManager/<OpenNumbersRoutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IntroManager/<OpenNumbersRoutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// IntroManager IntroManager/<OpenNumbersRoutine>d__5::<>4__this
	IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* ___U3CU3E4__this_2;
	// IntroManager/<>c__DisplayClass5_0 IntroManager/<OpenNumbersRoutine>d__5::<>8__1
	U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* ___U3CU3E8__1_3;
};

// ScreenFadeManager/<FadeRoutine>d__5
struct U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C  : public RuntimeObject
{
	// System.Int32 ScreenFadeManager/<FadeRoutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScreenFadeManager/<FadeRoutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ScreenFadeManager ScreenFadeManager/<FadeRoutine>d__5::<>4__this
	ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* ___U3CU3E4__this_2;
};

// ShapeManager/<MoveCoroutine>d__11
struct U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE  : public RuntimeObject
{
	// System.Int32 ShapeManager/<MoveCoroutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShapeManager/<MoveCoroutine>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ShapeManager ShapeManager/<MoveCoroutine>d__11::<>4__this
	ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___U3CU3E4__this_2;
};

// SpawnerManager/<ShapeImageRoutine>d__6
struct U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC  : public RuntimeObject
{
	// System.Int32 SpawnerManager/<ShapeImageRoutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnerManager/<ShapeImageRoutine>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SpawnerManager SpawnerManager/<ShapeImageRoutine>d__6::<>4__this
	SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* ___U3CU3E4__this_2;
	// System.Int32 SpawnerManager/<ShapeImageRoutine>d__6::<counter>5__2
	int32_t ___U3CcounterU3E5__2_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
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

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TestEventManager/ClickAction
struct ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A  : public MulticastDelegate_t
{
};

// TouchManager/TouchEventDelegate
struct TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform BoardManager::tilePrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tilePrefab_4;
	// System.Int32 BoardManager::height
	int32_t ___height_5;
	// System.Int32 BoardManager::width
	int32_t ___width_6;
	// UnityEngine.Transform[,] BoardManager::grid
	TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* ___grid_7;
	// System.Int32 BoardManager::completedRaw
	int32_t ___completedRaw_8;
	// ParticleManager[] BoardManager::rawEffects
	ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* ___rawEffects_9;
};

// DragSettingsManager
struct DragSettingsManager_t1E9D364241D9A0348BB54B5F3524F03AC8CACE3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager DragSettingsManager::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
	// TouchManager DragSettingsManager::touchManager
	TouchManager_t38556C99556388530402BB02D83E19164E477D1C* ___touchManager_5;
	// UnityEngine.UI.Slider DragSettingsManager::dokunmaSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___dokunmaSlider_6;
	// UnityEngine.UI.Slider DragSettingsManager::suruklemeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___suruklemeSlider_7;
	// UnityEngine.UI.Slider DragSettingsManager::dokunmaHizSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___dokunmaHizSlider_8;
};

// FirstSquareController
struct FirstSquareController_t9F2EDD03BC3578BD6A238B6D95CF852546B98820  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FollowShapeManager
struct FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ShapeManager FollowShapeManager::followShape
	ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___followShape_4;
	// System.Boolean FollowShapeManager::isGroundTouch
	bool ___isGroundTouch_5;
	// UnityEngine.Color FollowShapeManager::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_6;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SpawnerManager GameManager::spawner
	SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* ___spawner_4;
	// BoardManager GameManager::board
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___board_5;
	// FollowShapeManager GameManager::followShape
	FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* ___followShape_6;
	// ScoreManager GameManager::scoreManager
	ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* ___scoreManager_7;
	// ShapeManager GameManager::activeShape
	ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___activeShape_8;
	// ShapeManager GameManager::holderShape
	ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___holderShape_9;
	// UnityEngine.UI.Image GameManager::holderShapeImg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___holderShapeImg_10;
	// System.Boolean GameManager::isHolderShapeChange
	bool ___isHolderShapeChange_11;
	// System.Boolean GameManager::isMove
	bool ___isMove_12;
	// ParticleManager[] GameManager::levelUpEffect
	ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* ___levelUpEffect_13;
	// ParticleManager[] GameManager::gameOverEffect
	ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* ___gameOverEffect_14;
	// System.Single GameManager::downTimer
	float ___downTimer_15;
	// System.Single GameManager::downCounter
	float ___downCounter_16;
	// System.Single GameManager::downLevelCounter
	float ___downLevelCounter_17;
	// System.Single GameManager::keyPressTimer
	float ___keyPressTimer_18;
	// System.Single GameManager::keyPressCounter
	float ___keyPressCounter_19;
	// System.Single GameManager::rotationTimer
	float ___rotationTimer_20;
	// System.Single GameManager::rotationCounter
	float ___rotationCounter_21;
	// System.Single GameManager::getdownTimer
	float ___getdownTimer_22;
	// System.Single GameManager::getdownCounter
	float ___getdownCounter_23;
	// System.Boolean GameManager::isGameOver
	bool ___isGameOver_24;
	// System.Boolean GameManager::isRight
	bool ___isRight_25;
	// IconManager GameManager::rotateIcon
	IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* ___rotateIcon_26;
	// UnityEngine.GameObject GameManager::gameOverPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverPanel_27;
	// GameManager/Direction GameManager::suruklemeYonu
	int32_t ___suruklemeYonu_28;
	// GameManager/Direction GameManager::suruklemeBitisYonu
	int32_t ___suruklemeBitisYonu_29;
	// System.Single GameManager::sonrakiDokunmaZamani
	float ___sonrakiDokunmaZamani_30;
	// System.Single GameManager::sonrakiSuruklemeZamani
	float ___sonrakiSuruklemeZamani_31;
	// System.Single GameManager::minDokunmaZamani
	float ___minDokunmaZamani_32;
	// System.Single GameManager::minSuruklemeZamani
	float ___minSuruklemeZamani_33;
	// System.Boolean GameManager::isTouch
	bool ___isTouch_34;
};

// IconManager
struct IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite IconManager::onIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___onIcon_4;
	// UnityEngine.Sprite IconManager::offIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___offIcon_5;
	// UnityEngine.UI.Image IconManager::iconImg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___iconImg_6;
	// System.Boolean IconManager::isCurrentIcon
	bool ___isCurrentIcon_7;
};

// IntroManager
struct IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] IntroManager::numbers
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___numbers_4;
	// UnityEngine.GameObject IntroManager::numbersTransform
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___numbersTransform_5;
	// GameManager IntroManager::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_6;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MenuManager::mainMenu
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainMenu_4;
	// UnityEngine.Transform MenuManager::settingsMenu
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___settingsMenu_5;
	// UnityEngine.AudioSource MenuManager::musicSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___musicSource_6;
	// UnityEngine.UI.Slider MenuManager::musicBackSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___musicBackSlider_7;
	// UnityEngine.UI.Slider MenuManager::fxSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___fxSlider_8;
};

// ParticleManager
struct ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem[] ParticleManager::allEffects
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___allEffects_4;
};

// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ScoreManager::score
	int32_t ___score_4;
	// System.Int32 ScoreManager::satirlar
	int32_t ___satirlar_5;
	// System.Int32 ScoreManager::level
	int32_t ___level_6;
	// System.Int32 ScoreManager::numberRowsInLevel
	int32_t ___numberRowsInLevel_7;
	// System.Int32 ScoreManager::minSatir
	int32_t ___minSatir_8;
	// System.Int32 ScoreManager::maxSatir
	int32_t ___maxSatir_9;
	// TMPro.TextMeshProUGUI ScoreManager::rowText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___rowText_10;
	// TMPro.TextMeshProUGUI ScoreManager::levelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___levelText_11;
	// TMPro.TextMeshProUGUI ScoreManager::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_12;
	// System.Boolean ScoreManager::isLevelUp
	bool ___isLevelUp_13;
};

// ScreenFadeManager
struct ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ScreenFadeManager::startAlpha
	float ___startAlpha_4;
	// System.Single ScreenFadeManager::endAlpha
	float ___endAlpha_5;
	// System.Single ScreenFadeManager::waitingTime
	float ___waitingTime_6;
	// System.Single ScreenFadeManager::fadeTime
	float ___fadeTime_7;
};

// SecondSquareController
struct SecondSquareController_tE97038ED8A4043F27F78D6A13F65DB6577F7CA33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ShapeManager
struct ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ShapeManager::isTurn
	bool ___isTurn_4;
	// UnityEngine.Sprite ShapeManager::shapeSekil
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___shapeSekil_5;
	// UnityEngine.GameObject[] ShapeManager::placedEffects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___placedEffects_6;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip[] SoundManager::musicClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___musicClips_5;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___musicSource_6;
	// UnityEngine.AudioClip SoundManager::randomMusicClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___randomMusicClip_7;
	// System.Boolean SoundManager::isMusicRun
	bool ___isMusicRun_8;
	// System.Boolean SoundManager::isEffectRun
	bool ___isEffectRun_9;
	// UnityEngine.AudioSource[] SoundManager::soundEffects
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___soundEffects_10;
	// UnityEngine.AudioSource[] SoundManager::vocalClips
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___vocalClips_11;
	// IconManager SoundManager::musicIcon
	IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* ___musicIcon_12;
	// IconManager SoundManager::fxIcon
	IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* ___fxIcon_13;
};

// SpawnerManager
struct SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ShapeManager[] SpawnerManager::allShapes
	ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* ___allShapes_4;
	// UnityEngine.UI.Image[] SpawnerManager::shapeImages
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___shapeImages_5;
	// ShapeManager[] SpawnerManager::nextShapes
	ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* ___nextShapes_6;
};

// TestEventManager
struct TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TouchManager
struct TouchManager_t38556C99556388530402BB02D83E19164E477D1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 TouchManager::touchMove
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchMove_7;
	// System.Int32 TouchManager::minDragUzaklik
	int32_t ___minDragUzaklik_8;
	// System.Int32 TouchManager::minSwipeDistance
	int32_t ___minSwipeDistance_9;
	// System.Boolean TouchManager::isTxtUsed
	bool ___isTxtUsed_10;
	// System.Single TouchManager::tiklamaMaxSure
	float ___tiklamaMaxSure_11;
	// System.Single TouchManager::ekranaTiklamaSuresi
	float ___ekranaTiklamaSuresi_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UIManager::isGameStop
	bool ___isGameStop_4;
	// UnityEngine.GameObject UIManager::pausePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pausePanel_5;
	// GameManager UIManager::_gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ____gameManager_6;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// BoardManager/<CleanAllLine>d__17

// BoardManager/<CleanAllLine>d__17

// GameManager/<GameOverRoutine>d__48

// GameManager/<GameOverRoutine>d__48

// GameManager/<LevelUpRoutine>d__47

// GameManager/<LevelUpRoutine>d__47

// IntroManager/<>c__DisplayClass5_0

// IntroManager/<>c__DisplayClass5_0

// IntroManager/<OpenNumbersRoutine>d__5

// IntroManager/<OpenNumbersRoutine>d__5

// ScreenFadeManager/<FadeRoutine>d__5

// ScreenFadeManager/<FadeRoutine>d__5

// ShapeManager/<MoveCoroutine>d__11

// ShapeManager/<MoveCoroutine>d__11

// SpawnerManager/<ShapeImageRoutine>d__6

// SpawnerManager/<ShapeImageRoutine>d__6

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

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

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Touch

// UnityEngine.Touch

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.AsyncCallback

// System.AsyncCallback

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Transform

// UnityEngine.Transform

// DG.Tweening.TweenCallback

// DG.Tweening.TweenCallback

// TestEventManager/ClickAction

// TestEventManager/ClickAction

// TouchManager/TouchEventDelegate

// TouchManager/TouchEventDelegate

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BoardManager

// BoardManager

// DragSettingsManager

// DragSettingsManager

// FirstSquareController

// FirstSquareController

// FollowShapeManager

// FollowShapeManager

// GameManager

// GameManager

// IconManager

// IconManager

// IntroManager

// IntroManager

// MenuManager

// MenuManager

// ParticleManager

// ParticleManager

// ScoreManager

// ScoreManager

// ScreenFadeManager

// ScreenFadeManager

// SecondSquareController

// SecondSquareController

// ShapeManager

// ShapeManager

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::instance
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___instance_4;
};

// SoundManager

// SpawnerManager

// SpawnerManager

// TestEventManager
struct TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_StaticFields
{
	// TestEventManager/ClickAction TestEventManager::OnClicked
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* ___OnClicked_4;
};

// TestEventManager

// TouchManager
struct TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields
{
	// TouchManager/TouchEventDelegate TouchManager::DragEvent
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___DragEvent_4;
	// TouchManager/TouchEventDelegate TouchManager::SwipeEvent
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___SwipeEvent_5;
	// TouchManager/TouchEventDelegate TouchManager::TapEvent
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___TapEvent_6;
};

// TouchManager

// UIManager

// UIManager

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[,]
struct TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ParticleManager[]
struct ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* m_Items[1];

	inline ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28  : public RuntimeArray
{
	ALIGN_FIELD (8) SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* m_Items[1];

	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// ShapeManager[]
struct ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2  : public RuntimeArray
{
	ALIGN_FIELD (8) ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* m_Items[1];

	inline ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___0_t, int32_t ___1_ease, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void BoardManager::CreateEmptyBoxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_CreateEmptyBoxes_mDDFC674FEC0249EB28C1C04011D49812DE09B374 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 BoardManager::VectorToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoardManager_VectorToInt_m5534E7E3AA3C37F0E27AAA661FB8DBDE5CDBEDDF (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) ;
// System.Boolean BoardManager::isInBoard(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isInBoard_mEC1520B141F8AD885ECDE1CAFB5989A2736568EE (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Boolean BoardManager::isSquareFull(System.Int32,System.Int32,ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isSquareFull_mE13CA0C091F6507A028A8DCCE09C1146C50468A7 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_x, int32_t ___1_y, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___2_shape, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void BoardManager::DownOneLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_DownOneLine_m5B96BDEEF5E2D18F77D42F75EE7E0654F1B9A3B5 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_y, const RuntimeMethod* method) ;
// System.Void BoardManager/<CleanAllLine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanAllLineU3Ed__17__ctor_m5128BB56A11B781C59E16DF100DA0CC1C1533F21 (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void ParticleManager::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleManager_PlayEffect_m523FB25CC9F50D5D0CEB1244C25674A92C328C4C (ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean BoardManager::isLineFull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isLineFull_mC1BBD133124B87FD403913DC59589276B9D67E3C (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_y, const RuntimeMethod* method) ;
// System.Void BoardManager::RunRawEffect(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_RunRawEffect_m83AA0B5C497FB63B4FD6742890631423F33CA0D8 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_kacinciSatir, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void BoardManager::CleanLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_CleanLine_mBB05E9CDF3DAC28C2C10E83BEDE420F9A7BD7DEA (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_y, const RuntimeMethod* method) ;
// System.Void BoardManager::DownAllLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_DownAllLine_mEF7D71A52E8FD874EABA871DE2B59A3CA505C64A (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_startY, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<ShapeManager>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1 (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* (*) (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SpriteRenderer>()
inline SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* Component_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m5A53DBBEC351F939C04CB60CF7CD9C7E0E5A65AB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void ShapeManager::DownMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_DownMove_m68E4B35855C95B14472188A7CDA97CA252CEBDB0 (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) ;
// System.Boolean BoardManager::InCurrentPosition(ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_shape, const RuntimeMethod* method) ;
// System.Void ShapeManager::UpMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_UpMove_m578FA7DB97C7018A4D9CC88041D96EF3C741123C (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void TouchManager/TouchEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void TouchManager::add_DragEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_add_DragEvent_mD23665D160A937186689317B8363B46A296D6F46 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) ;
// System.Void TouchManager::add_SwipeEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_add_SwipeEvent_m1C429B529DC5A59B8FF0D077C893821F7E09926E (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) ;
// System.Void TouchManager::add_TapEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_add_TapEvent_m8AAFCB2186EB5CF8A5D0D81C223F5D276204DA70 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) ;
// System.Void TouchManager::remove_DragEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_remove_DragEvent_m55301CE4C63CDFC40F9B15BD575DA52D82976D80 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) ;
// System.Void TouchManager::remove_SwipeEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_remove_SwipeEvent_m27AD7B71DBCB81AA70BC9D61A96EACA88A6344C8 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) ;
// System.Void TouchManager::remove_TapEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_remove_TapEvent_m1CCFE4472DD6E0D1C8F3DB0D87607C4277327D77 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<BoardManager>()
inline BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC (const RuntimeMethod* method)
{
	return ((  BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<SpawnerManager>()
inline SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* Object_FindObjectOfType_TisSpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF_m44C3FD40A4BE15FDED205A2CB1A732381A4BA821 (const RuntimeMethod* method)
{
	return ((  SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<ScoreManager>()
inline ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* Object_FindObjectOfType_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_m14EE68458F39D29F7196A02D49E978AFA028E02C (const RuntimeMethod* method)
{
	return ((  ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<FollowShapeManager>()
inline FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* Object_FindObjectOfType_TisFollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D_m56FC90A84F4E0E3B50CECB7C82E057C0FDAB22C0 (const RuntimeMethod* method)
{
	return ((  FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void SpawnerManager::AllShapeNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerManager_AllShapeNull_mD13A51CFB069C5079E405A61B05E88F578B8B9B2 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) ;
// ShapeManager SpawnerManager::CreateShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_CreateShape_m5E7912109E5C4FAA0E2D8A75BE5C6363634A0EE1 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 GameManager::VectorToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GameManager_VectorToInt_m952FFC8BF5B97A3F0F4EFEFBCF3D3E3B19BA7A76 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_m5935113B55474CC0551EF8A8EA3CFA82371D5E99 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, int32_t ___1_ease, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___0_t, ___1_ease, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___0_t, ___1_action, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// ShapeManager SpawnerManager::CreateHolderShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_CreateHolderShape_m527B56BB226C1FFCC3FF07D5503AB2A453C3F115 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::InputController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InputController_mBD0AF191249EE93ED00069FE4776695161F39868 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void FollowShapeManager::CreateFollowShape(ShapeManager,BoardManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowShapeManager_CreateFollowShape_m997010AE1BDE4A3F235FE44AB40BF3CA69F428F5 (FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_realShape, BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___1_board, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void GameManager::RightMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RightMovement_m3F5E68ADBFBA0600C690F5A3A8761F7C5AA58BDD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::LeftMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LeftMovement_m83AEC01A2DC4C3BACF28E96F9014C2F65738D33B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::RotateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RotateMovement_mD775852160AEA94C9117C37A3B5C78105751D3D5 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DownMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DownMovement_mC425656E575547DD595C08A22EDA877B0A07DE95 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean BoardManager::isSpillOut(ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isSpillOut_m1429EC4DA6F8B32399641D479C852C3DCEDBA529 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_shape, const RuntimeMethod* method) ;
// System.Void SoundManager::SoundEffectRun(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, int32_t ___0_whichSound, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::GameOverRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameOverRoutine_mA1AE41628C875079BEE2B2A60FD79B60131BDEE1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void GameManager::ShapePlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShapePlaced_m8E7D744651FE0C864AE5C3A7B22C1AD88C099653 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void ShapeManager::TurnRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_TurnRight_mE4B0CA1B38FB248CABE99BC725529E96E6229603 (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) ;
// System.Void ShapeManager::LeftMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_LeftMove_m7672908150CF04890A2D6BA5CC65E861D4162C5C (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) ;
// System.Void IconManager::IconTurn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IconManager_IconTurn_mC4D1D3E52B2B18BB578046C4D65A9FD6C25BE8E3 (IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* __this, bool ___0_icon, const RuntimeMethod* method) ;
// System.Void ShapeManager::RightMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_RightMove_mF0B669360CACC81CF6CAA9263C0FE13D472E17BA (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) ;
// System.Void ShapeManager::PlayPlacedEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_PlayPlacedEffect_m9839A72E275FCA4489E5D18CE31C52CD38DDBA7F (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) ;
// System.Void BoardManager::InGrid(ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InGrid_mAA69E13E17CD4DA4DBC4EFD27FA234105CDF7A10 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_shape, const RuntimeMethod* method) ;
// System.Void FollowShapeManager::ResetFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowShapeManager_ResetFnc_mA555DCBD84A4E828F720E14C54ECD091EEB1C382 (FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BoardManager::CleanAllLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoardManager_CleanAllLine_mB6233DE1632DCFD959A7CAE2662CE5264916E67A (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::RowScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_RowScore_mB27B00AA79F7A0F74D9856F3A23644D3981963E1 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, int32_t ___0_n, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::LevelUpRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_LevelUpRoutine_mEB11F4849667A466A00E66DFB1CC417874DFBA82 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::LocalSoundRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_LocalSoundRun_mB3929958F5F434E83BBE126D49B8AFFAA4014F38 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void ShapeManager::RightRotateBtn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_RightRotateBtn_mB6F85DEFDA141D87786C4F036F2F9D39AEE98E3D (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, bool ___0_isRight, const RuntimeMethod* method) ;
// System.Void GameManager/<LevelUpRoutine>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__47__ctor_m99FCF3CBEADB14CA3092BBE47E532FB31E844277 (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void GameManager/<GameOverRoutine>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__48__ctor_m29AA3D36DF0A1AC694864F2B28AD90CFDAC86375 (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// GameManager/Direction GameManager::YonuBelirle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_YonuBelirle_mB8F9AC5CEF15EA577F332EABF043FBC4F191329C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_suruklemeHareket, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::ResetFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_ResetFnc_m1941B85BB045A2BE62A22609B3F857285CCE9648 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateText_mE30F12EFBD305A1DE4C01239CC57439CCCBEBD9F (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void ScoreManager::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_LevelUp_m3D6E43F6222AE8EC4C1AB8F1E5FFF22ADF9F21A2 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// System.String ScoreManager::AddZeroToScoreText(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScoreManager_AddZeroToScoreText_m3484BFE6B6C1986103ABB19ED29CAD6FBD47A976 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, int32_t ___0_score, int32_t ___1_rakamSayisi, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ParticleManager>()
inline ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* GameObject_GetComponent_TisParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B_m7ED9BA6E60A08C6DA1BC9BE29878B6F0252129FA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, int32_t ___3_relativeTo, const RuntimeMethod* method) ;
// System.Void ShapeManager/<MoveCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__11__ctor_m46B68CA46D8B502633D5A734184CC1096566BAE7 (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void ShapeManager::TurnLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_TurnLeft_m9340E7466E63A4D33929C710EBD8BB14D19C099B (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) ;
// ShapeManager SpawnerManager::TakeNextShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_TakeNextShape_mB8B3059DAB0A57360B595B8182749B8368E9A60A (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) ;
// System.Void SpawnerManager::FillNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerManager_FillNext_m94C807598A47205784B211F3A9DCC34AB190E6A8 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) ;
// ShapeManager SpawnerManager::RandomCreateShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_RandomCreateShape_m39331C0EEFF889E15EA25E5291015E03E0B24439 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SpawnerManager::ShapeImageRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnerManager_ShapeImageRoutine_mAC8F03F273106A9FE52478B142B41EB3CDB29FE3 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) ;
// System.Void SpawnerManager/<ShapeImageRoutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShapeImageRoutineU3Ed__6__ctor_m335D8B01E7CC770EDAF6178EE5655B9E0E2C9E29 (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMoveX(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOLocalMoveX_m3411FBE47AB4960B865E352F672F94B788F712D5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, float ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<TouchManager>()
inline TouchManager_t38556C99556388530402BB02D83E19164E477D1C* Object_FindObjectOfType_TisTouchManager_t38556C99556388530402BB02D83E19164E477D1C_m5EC1260CBF5A537C69CB21E6C931F3108F79F0E0 (const RuntimeMethod* method)
{
	return ((  TouchManager_t38556C99556388530402BB02D83E19164E477D1C* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void TestEventManager/ClickAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickAction__ctor_m43E131CBD548878A191B53BDACBE3D0BA23A45B2 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void TestEventManager::add_OnClicked(TestEventManager/ClickAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestEventManager_add_OnClicked_m81CFBB5F9780909928BF17DFB1C0927159A4AED6 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* ___0_value, const RuntimeMethod* method) ;
// System.Void TestEventManager::remove_OnClicked(TestEventManager/ClickAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestEventManager_remove_OnClicked_mCAF6AEF4C382BD46CEB374EBA4C7F7944197B465 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void TestEventManager/ClickAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_inline (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method) ;
// System.Void TouchManager/TouchEventDelegate::Invoke(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_inline (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void TouchManager::SwipeFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_SwipeFnc_mE3FD17130BF5C5C1A0FC45D6542499EAA349643C (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) ;
// System.Void TouchManager::SwipeEndFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_SwipeEndFnc_m42C6D8869F0ACB2BC05ED15F7098CBA3D3742A46 (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) ;
// System.Void TouchManager::Clicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_Clicked_mF38421FF49B97BF1C8A215E8030DD5C9BED57063 (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip SoundManager::RandomChoose(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* SoundManager_RandomChoose_m1FD4B68DC0E0285FA21122CCC3121CEC9A9824B7 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___0_clips, const RuntimeMethod* method) ;
// System.Void SoundManager::BackgroundMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_BackgroundMusic_mDC6D4053AB8F7717E7D8018F916170EBF96156A2 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_musicClip, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::MusicUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_MusicUpdate_m7E615F22ED614B07DA0EAC54BFF10E8CDAB3D36C (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator IntroManager::OpenNumbersRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntroManager_OpenNumbersRoutine_m9D98364FB744E21C31A8A62907B3D215EDDFD7BD (IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* __this, const RuntimeMethod* method) ;
// System.Void IntroManager/<OpenNumbersRoutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenNumbersRoutineU3Ed__5__ctor_mFFAFFA0367B499D4BA1BE9EC4EBFC2C2F77F1B2A (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void IntroManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m90A922F10BFAC97B26C24C1E1BD33C18A7CFC775 (U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, int32_t ___3_mode, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, int32_t ___1_ease, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* (*) (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___0_t, ___1_ease, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMoveY(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOLocalMoveY_mA4BDBF3ACA5B305B59551FBF9813D5BF35487CD5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, float ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_m0D14325CA867AA1EDF52A00D01D1C8301ABB30AB (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* (*) (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___0_t, ___1_action, method);
}
// System.Collections.IEnumerator ScreenFadeManager::FadeRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenFadeManager_FadeRoutine_m4F4425C7A99D9C9E42970A9013D325612E94CD3F (ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* __this, const RuntimeMethod* method) ;
// System.Void ScreenFadeManager/<FadeRoutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__5__ctor_mFB195483CC667830B62469284AC3142FD3B9B3C8 (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UIManager::PausePanelActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_PausePanelActive_mDC01CCA6AA0294B85C89748D3C648C8747F5A3F2 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
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
// System.Void BoardManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_Awake_mCDA32A6623BA2E7AE2B09F98CD03ED382848C397 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grid = new Transform[width, height];
		int32_t L_0 = __this->___width_6;
		int32_t L_1 = __this->___height_5;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_2 = (TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F*)GenArrayNew(TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F_il2cpp_TypeInfo_var, L_3);
		__this->___grid_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grid_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void BoardManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_Start_mA12FE9F57923857C2251FE94162437CB8CB17EA9 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// CreateEmptyBoxes();
		BoardManager_CreateEmptyBoxes_mDDFC674FEC0249EB28C1C04011D49812DE09B374(__this, NULL);
		// }
		return;
	}
}
// System.Boolean BoardManager::isInBoard(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isInBoard_mEC1520B141F8AD885ECDE1CAFB5989A2736568EE (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		// return (x >= 0 && x < width && y >= 0); //sekil board icerisinde mi kontrol sarti
		int32_t L_0 = ___0_x;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = __this->___width_6;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___1_y;
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean BoardManager::isSquareFull(System.Int32,System.Int32,ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isSquareFull_mE13CA0C091F6507A028A8DCCE09C1146C50468A7 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_x, int32_t ___1_y, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___2_shape, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (grid[x, y] != null && grid[x, y].parent != shape.transform); //kendi shape i ile degil baska shapelerin transformarliyla karsilastirsin
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_0 = __this->___grid_7;
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___1_y;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_5 = __this->___grid_7;
		int32_t L_6 = ___0_x;
		int32_t L_7 = ___1_y;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_10 = ___2_shape;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, L_11, NULL);
		return L_12;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Boolean BoardManager::InCurrentPosition(ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_shape, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		// foreach (Transform child in shape.transform)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = ___0_shape;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_4;
					if (!L_4)
					{
						goto IL_008d;
					}
				}
				{
					RuntimeObject* L_5 = V_4;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_008d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_000e_1:
			{
				// foreach (Transform child in shape.transform)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// Vector2 pos = VectorToInt(child.position);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
				L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
				L_11 = BoardManager_VectorToInt_m5534E7E3AA3C37F0E27AAA661FB8DBDE5CDBEDDF(__this, L_10, NULL);
				V_2 = L_11;
				// if (!isInBoard((int)pos.x,(int)pos.y))
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
				float L_13 = L_12.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
				float L_15 = L_14.___y_1;
				bool L_16;
				L_16 = BoardManager_isInBoard_mEC1520B141F8AD885ECDE1CAFB5989A2736568EE(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_13), il2cpp_codegen_cast_double_to_int<int32_t>(L_15), NULL);
				if (L_16)
				{
					goto IL_0046_1;
				}
			}
			{
				// return false; //Eger karelerden biri board disina ciktiysa false
				V_3 = (bool)0;
				goto IL_0090;
			}

IL_0046_1:
			{
				// if (pos.y < height)
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
				float L_18 = L_17.___y_1;
				int32_t L_19 = __this->___height_5;
				if ((!(((float)L_18) < ((float)((float)L_19)))))
				{
					goto IL_0070_1;
				}
			}
			{
				// if (isSquareFull((int)pos.x,(int)pos.y,shape))
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_2;
				float L_21 = L_20.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_2;
				float L_23 = L_22.___y_1;
				ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_24 = ___0_shape;
				bool L_25;
				L_25 = BoardManager_isSquareFull_mE13CA0C091F6507A028A8DCCE09C1146C50468A7(__this, il2cpp_codegen_cast_double_to_int<int32_t>(L_21), il2cpp_codegen_cast_double_to_int<int32_t>(L_23), L_24, NULL);
				if (!L_25)
				{
					goto IL_0070_1;
				}
			}
			{
				// return false;
				V_3 = (bool)0;
				goto IL_0090;
			}

IL_0070_1:
			{
				// foreach (Transform child in shape.transform)
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// return true;
		return (bool)1;
	}

IL_0090:
	{
		// }
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Void BoardManager::CreateEmptyBoxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_CreateEmptyBoxes_mDDFC674FEC0249EB28C1C04011D49812DE09B374 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral755A8C0936AE971555FE50C6626A2788F8D906AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EE699A8CF6139FF0E6D4E5130C76B14E0178934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C93EE82B51F7ED30422709474AE250B6E8526EF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (tilePrefab != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___tilePrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		// for (int y = 0; y < height; y++)
		V_0 = 0;
		goto IL_0073;
	}

IL_0012:
	{
		// for (int x = 0; x < width; x++)
		V_1 = 0;
		goto IL_0066;
	}

IL_0016:
	{
		// Transform tile = Instantiate(tilePrefab, new Vector3(x, y, 0), Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___tilePrefab_4;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)L_3), ((float)L_4), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_2, L_5, L_6, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		// tile.name = "x " + x.ToString() + " ," + "y" + y.ToString();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_11;
		L_11 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral9C93EE82B51F7ED30422709474AE250B6E8526EF, L_9, _stringLiteral7EE699A8CF6139FF0E6D4E5130C76B14E0178934, L_10, NULL);
		NullCheck(L_8);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, L_11, NULL);
		// tile.parent = this.transform; //board nesnesi icinde olussun
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_8, L_12, NULL);
		// for (int x = 0; x < width; x++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0066:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___width_6;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0016;
		}
	}
	{
		// for (int y = 0; y < height; y++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0073:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___height_5;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_007d:
	{
		// print("tile prefab null reference!");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral755A8C0936AE971555FE50C6626A2788F8D906AC, NULL);
		// }
		return;
	}
}
// System.Void BoardManager::InGrid(ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InGrid_mAA69E13E17CD4DA4DBC4EFD27FA234105CDF7A10 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_shape, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		// if (shape==null)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = ___0_shape;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// foreach (Transform child in shape.transform)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_2 = ___0_shape;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_006a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_0018_1:
			{
				// foreach (Transform child in shape.transform)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// Vector2 pos = VectorToInt(child.position);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
				NullCheck(L_10);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
				L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
				L_12 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_11, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
				L_13 = BoardManager_VectorToInt_m5534E7E3AA3C37F0E27AAA661FB8DBDE5CDBEDDF(__this, L_12, NULL);
				V_2 = L_13;
				// grid[(int)pos.x, (int)pos.y] = child;
				TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_14 = __this->___grid_7;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_2;
				float L_16 = L_15.___x_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
				float L_18 = L_17.___y_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_1;
				NullCheck(L_14);
				(L_14)->SetAt(il2cpp_codegen_cast_double_to_int<int32_t>(L_16), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), L_19);
			}

IL_0050_1:
			{
				// foreach (Transform child in shape.transform)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_006b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Boolean BoardManager::isLineFull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isLineFull_mC1BBD133124B87FD403913DC59589276B9D67E3C (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int x = 0; x < width; ++x)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// if (grid[x,y] == null)
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_0 = __this->___grid_7;
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_y;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001b:
	{
		// for (int x = 0; x < width; ++x)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001f:
	{
		// for (int x = 0; x < width; ++x)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___width_6;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void BoardManager::CleanLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_CleanLine_mBB05E9CDF3DAC28C2C10E83BEDE420F9A7BD7DEA (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int x = 0; x < width; ++x)
		V_0 = 0;
		goto IL_0042;
	}

IL_0004:
	{
		// if (grid[x,y] != null)
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_0 = __this->___grid_7;
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_y;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(grid[x,y].gameObject);
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_5 = __this->___grid_7;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_y;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
	}

IL_0030:
	{
		// grid[x, y] = null;
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_10 = __this->___grid_7;
		int32_t L_11 = V_0;
		int32_t L_12 = ___0_y;
		NullCheck(L_10);
		(L_10)->SetAt(L_11, L_12, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// for (int x = 0; x < width; ++x)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0042:
	{
		// for (int x = 0; x < width; ++x)
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___width_6;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::DownOneLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_DownOneLine_m5B96BDEEF5E2D18F77D42F75EE7E0654F1B9A3B5 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int x = 0; x < width; ++x)
		V_0 = 0;
		goto IL_006b;
	}

IL_0004:
	{
		// if (grid[x,y] != null)
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_0 = __this->___grid_7;
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_y;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		// grid[x, y - 1] = grid[x, y];
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_5 = __this->___grid_7;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_y;
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_8 = __this->___grid_7;
		int32_t L_9 = V_0;
		int32_t L_10 = ___0_y;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = (L_8)->GetAt(L_9, L_10);
		NullCheck(L_5);
		(L_5)->SetAt(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_11);
		// grid[x, y] = null;
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_12 = __this->___grid_7;
		int32_t L_13 = V_0;
		int32_t L_14 = ___0_y;
		NullCheck(L_12);
		(L_12)->SetAt(L_13, L_14, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// grid[x,y-1].position += Vector3.down;
		TransformU5BU2CU5D_tFCA88179EAA067449DA24A1E3FA3F1C686C3405F* L_15 = __this->___grid_7;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_y;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = (L_15)->GetAt(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_22, NULL);
	}

IL_0067:
	{
		// for (int x = 0; x < width; ++x)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006b:
	{
		// for (int x = 0; x < width; ++x)
		int32_t L_24 = V_0;
		int32_t L_25 = __this->___width_6;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::DownAllLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_DownAllLine_mEF7D71A52E8FD874EABA871DE2B59A3CA505C64A (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_startY, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = startY; i < height; ++i)
		int32_t L_0 = ___0_startY;
		V_0 = L_0;
		goto IL_000f;
	}

IL_0004:
	{
		// DownOneLine(i);
		int32_t L_1 = V_0;
		BoardManager_DownOneLine_m5B96BDEEF5E2D18F77D42F75EE7E0654F1B9A3B5(__this, L_1, NULL);
		// for (int i = startY; i < height; ++i)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000f:
	{
		// for (int i = startY; i < height; ++i)
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___height_5;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BoardManager::CleanAllLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoardManager_CleanAllLine_mB6233DE1632DCFD959A7CAE2662CE5264916E67A (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* L_0 = (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06*)il2cpp_codegen_object_new(U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCleanAllLineU3Ed__17__ctor_m5128BB56A11B781C59E16DF100DA0CC1C1533F21(L_0, 0, NULL);
		U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean BoardManager::isSpillOut(ShapeManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoardManager_isSpillOut_m1429EC4DA6F8B32399641D479C852C3DCEDBA529 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_shape, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (Transform child in shape.transform)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = ___0_shape;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0051;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_000e_1:
			{
				// foreach (Transform child in shape.transform)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				// if (child.transform.position.y >= height - 1)
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
				float L_10 = L_9.___y_3;
				int32_t L_11 = __this->___height_5;
				if ((!(((float)L_10) >= ((float)((float)((int32_t)il2cpp_codegen_subtract(L_11, 1)))))))
				{
					goto IL_0037_1;
				}
			}
			{
				// return true;
				V_1 = (bool)1;
				goto IL_0054;
			}

IL_0037_1:
			{
				// foreach (Transform child in shape.transform)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// return false;
		return (bool)0;
	}

IL_0054:
	{
		// }
		bool L_14 = V_1;
		return L_14;
	}
}
// UnityEngine.Vector2 BoardManager::VectorToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoardManager_VectorToInt_m5534E7E3AA3C37F0E27AAA661FB8DBDE5CDBEDDF (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) 
{
	{
		// return new Vector2(Mathf.Round(vector.x),Mathf.Round(vector.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = bankers_roundf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_vector;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = bankers_roundf(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void BoardManager::RunRawEffect(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_RunRawEffect_m83AA0B5C497FB63B4FD6742890631423F33CA0D8 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_kacinciSatir, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rawEffects[kacinciSatir])
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_0 = __this->___rawEffects_9;
		int32_t L_1 = ___0_kacinciSatir;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// rawEffects[kacinciSatir].transform.position = new Vector3(0, y, 0);
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_5 = __this->___rawEffects_9;
		int32_t L_6 = ___0_kacinciSatir;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		int32_t L_10 = ___1_y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), ((float)L_10), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_11, NULL);
		// rawEffects[kacinciSatir].PlayEffect();
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_12 = __this->___rawEffects_9;
		int32_t L_13 = ___0_kacinciSatir;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		ParticleManager_PlayEffect_m523FB25CC9F50D5D0CEB1244C25674A92C328C4C(L_15, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_m611C494A213953B5600647FBC3585123518899E0 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int height = 22;
		__this->___height_5 = ((int32_t)22);
		// public int width = 10;
		__this->___width_6 = ((int32_t)10);
		// public ParticleManager[] rawEffects = new ParticleManager[4];
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_0 = (ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6*)(ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6*)SZArrayNew(ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___rawEffects_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawEffects_9), (void*)L_0);
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
// System.Void BoardManager/<CleanAllLine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanAllLineU3Ed__17__ctor_m5128BB56A11B781C59E16DF100DA0CC1C1533F21 (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BoardManager/<CleanAllLine>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanAllLineU3Ed__17_System_IDisposable_Dispose_mE5245D37B1045592735A53D1D3F4A3D12CCFEC4B (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BoardManager/<CleanAllLine>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCleanAllLineU3Ed__17_MoveNext_m627CC44F3FC53C5D0F9B888707571848B2843E41 (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_00cf;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// completedRaw = 0;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_3 = V_1;
		NullCheck(L_3);
		L_3->___completedRaw_8 = 0;
		// for (int y = 0; y < height; ++y)
		V_2 = 0;
		goto IL_005c;
	}

IL_0034:
	{
		// if (isLineFull(y))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		bool L_6;
		L_6 = BoardManager_isLineFull_mC1BBD133124B87FD403913DC59589276B9D67E3C(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// RunRawEffect(completedRaw,y);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_7 = V_1;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___completedRaw_8;
		int32_t L_10 = V_2;
		NullCheck(L_7);
		BoardManager_RunRawEffect_m83AA0B5C497FB63B4FD6742890631423F33CA0D8(L_7, L_9, L_10, NULL);
		// completedRaw++;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_11 = V_1;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___completedRaw_8;
		NullCheck(L_11);
		L_11->___completedRaw_8 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0058:
	{
		// for (int y = 0; y < height; ++y)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005c:
	{
		// for (int y = 0; y < height; ++y)
		int32_t L_15 = V_2;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___height_5;
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0034;
		}
	}
	{
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int y = 0; y < height; y++)
		__this->___U3CyU3E5__2_3 = 0;
		goto IL_00f6;
	}

IL_008e:
	{
		// if (isLineFull(y))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_19 = V_1;
		int32_t L_20 = __this->___U3CyU3E5__2_3;
		NullCheck(L_19);
		bool L_21;
		L_21 = BoardManager_isLineFull_mC1BBD133124B87FD403913DC59589276B9D67E3C(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_00e6;
		}
	}
	{
		// CleanLine(y);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_22 = V_1;
		int32_t L_23 = __this->___U3CyU3E5__2_3;
		NullCheck(L_22);
		BoardManager_CleanLine_mBB05E9CDF3DAC28C2C10E83BEDE420F9A7BD7DEA(L_22, L_23, NULL);
		// DownAllLine(y+1);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_24 = V_1;
		int32_t L_25 = __this->___U3CyU3E5__2_3;
		NullCheck(L_24);
		BoardManager_DownAllLine_mEF7D71A52E8FD874EABA871DE2B59A3CA505C64A(L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_26 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_26, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00cf:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// y--;
		int32_t L_27 = __this->___U3CyU3E5__2_3;
		V_3 = L_27;
		int32_t L_28 = V_3;
		__this->___U3CyU3E5__2_3 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_00e6:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_29 = __this->___U3CyU3E5__2_3;
		V_3 = L_29;
		int32_t L_30 = V_3;
		__this->___U3CyU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00f6:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_31 = __this->___U3CyU3E5__2_3;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = L_32->___height_5;
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_008e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object BoardManager/<CleanAllLine>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCleanAllLineU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m450DADFCD4365EC7A89189DF64AA60971EEDCF0B (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BoardManager/<CleanAllLine>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCleanAllLineU3Ed__17_System_Collections_IEnumerator_Reset_mBB4C502495F488F9035F567FF57421DE8EAA6E53 (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCleanAllLineU3Ed__17_System_Collections_IEnumerator_Reset_mBB4C502495F488F9035F567FF57421DE8EAA6E53_RuntimeMethod_var)));
	}
}
// System.Object BoardManager/<CleanAllLine>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCleanAllLineU3Ed__17_System_Collections_IEnumerator_get_Current_mBBB5FF079E0C90CF699ED1765EB6787DA45B038C (U3CCleanAllLineU3Ed__17_tED4BCD537BAE5BFF744C732D02CB9D6A5213DD06* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FollowShapeManager::CreateFollowShape(ShapeManager,BoardManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowShapeManager_CreateFollowShape_m997010AE1BDE4A3F235FE44AB40BF3CA69F428F5 (FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* __this, ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* ___0_realShape, BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___1_board, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m5A53DBBEC351F939C04CB60CF7CD9C7E0E5A65AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ED7F1D4484BD84C0E5B5F9028AA8045387EBCDF);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!followShape)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = __this->___followShape_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0069;
		}
	}
	{
		// followShape = Instantiate(realShape,realShape.transform.position,realShape.transform.rotation) as ShapeManager;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_2 = ___0_realShape;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_3 = ___0_realShape;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_6 = ___0_realShape;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_9;
		L_9 = Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1(L_2, L_5, L_8, Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1_RuntimeMethod_var);
		__this->___followShape_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followShape_4), (void*)L_9);
		// followShape.name = "TakipShape";
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_10 = __this->___followShape_4;
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, _stringLiteral7ED7F1D4484BD84C0E5B5F9028AA8045387EBCDF, NULL);
		// SpriteRenderer[] allSprite = followShape.GetComponentsInChildren<SpriteRenderer>();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_11 = __this->___followShape_4;
		NullCheck(L_11);
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_12;
		L_12 = Component_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m5A53DBBEC351F939C04CB60CF7CD9C7E0E5A65AB(L_11, Component_GetComponentsInChildren_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m5A53DBBEC351F939C04CB60CF7CD9C7E0E5A65AB_RuntimeMethod_var);
		// foreach (SpriteRenderer sr in allSprite)
		V_0 = L_12;
		V_1 = 0;
		goto IL_0061;
	}

IL_004f:
	{
		// foreach (SpriteRenderer sr in allSprite)
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// sr.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___color_6;
		NullCheck(L_16);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_16, L_17, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0061:
	{
		// foreach (SpriteRenderer sr in allSprite)
		int32_t L_19 = V_1;
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_009f;
	}

IL_0069:
	{
		// followShape.transform.position = realShape.transform.position;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_21 = __this->___followShape_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_23 = ___0_realShape;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_25, NULL);
		// followShape.transform.rotation = realShape.transform.rotation;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_26 = __this->___followShape_4;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_28 = ___0_realShape;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_29, NULL);
		NullCheck(L_27);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_30, NULL);
	}

IL_009f:
	{
		// isGroundTouch = false;
		__this->___isGroundTouch_5 = (bool)0;
		goto IL_00d3;
	}

IL_00a8:
	{
		// followShape.DownMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_31 = __this->___followShape_4;
		NullCheck(L_31);
		ShapeManager_DownMove_m68E4B35855C95B14472188A7CDA97CA252CEBDB0(L_31, NULL);
		// if (!board.InCurrentPosition(followShape))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_32 = ___1_board;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_33 = __this->___followShape_4;
		NullCheck(L_32);
		bool L_34;
		L_34 = BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E(L_32, L_33, NULL);
		if (L_34)
		{
			goto IL_00d3;
		}
	}
	{
		// followShape.UpMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_35 = __this->___followShape_4;
		NullCheck(L_35);
		ShapeManager_UpMove_m578FA7DB97C7018A4D9CC88041D96EF3C741123C(L_35, NULL);
		// isGroundTouch = true;
		__this->___isGroundTouch_5 = (bool)1;
	}

IL_00d3:
	{
		// while (!isGroundTouch)
		bool L_36 = __this->___isGroundTouch_5;
		if (!L_36)
		{
			goto IL_00a8;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FollowShapeManager::ResetFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowShapeManager_ResetFnc_mA555DCBD84A4E828F720E14C54ECD091EEB1C382 (FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(followShape.gameObject);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = __this->___followShape_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void FollowShapeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowShapeManager__ctor_m108285DBC6CA9F50818792C57D67C54D59CB99F8 (FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* __this, const RuntimeMethod* method) 
{
	{
		// public Color color = new Color(1f,1f,1f,0.2f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (0.200000003f), /*hidden argument*/NULL);
		__this->___color_6 = L_0;
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
// System.Void GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_mCBA3C942196F2FE284CA416B26833E78468F635E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_SurukleBitti_m78C8F4E3E26CE7CDC03CF171CF9DE7587861450B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_Surukle_m38964E332542567D5A9985961DB007DB665AC893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_TapFnc_m3979703D06A76970752743BE66BB5C2B97D89C53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TouchManager.DragEvent += Surukle;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)il2cpp_codegen_object_new(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB(L_0, __this, (intptr_t)((void*)GameManager_Surukle_m38964E332542567D5A9985961DB007DB665AC893_RuntimeMethod_var), NULL);
		TouchManager_add_DragEvent_mD23665D160A937186689317B8363B46A296D6F46(L_0, NULL);
		// TouchManager.SwipeEvent += SurukleBitti;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)il2cpp_codegen_object_new(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB(L_1, __this, (intptr_t)((void*)GameManager_SurukleBitti_m78C8F4E3E26CE7CDC03CF171CF9DE7587861450B_RuntimeMethod_var), NULL);
		TouchManager_add_SwipeEvent_m1C429B529DC5A59B8FF0D077C893821F7E09926E(L_1, NULL);
		// TouchManager.TapEvent += TapFnc;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)il2cpp_codegen_object_new(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB(L_2, __this, (intptr_t)((void*)GameManager_TapFnc_m3979703D06A76970752743BE66BB5C2B97D89C53_RuntimeMethod_var), NULL);
		TouchManager_add_TapEvent_m8AAFCB2186EB5CF8A5D0D81C223F5D276204DA70(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_mF3CB4DACBE9C8FF46B0ED4D4E7BD71315230B968 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_SurukleBitti_m78C8F4E3E26CE7CDC03CF171CF9DE7587861450B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_Surukle_m38964E332542567D5A9985961DB007DB665AC893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_TapFnc_m3979703D06A76970752743BE66BB5C2B97D89C53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TouchManager.DragEvent -= Surukle;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)il2cpp_codegen_object_new(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB(L_0, __this, (intptr_t)((void*)GameManager_Surukle_m38964E332542567D5A9985961DB007DB665AC893_RuntimeMethod_var), NULL);
		TouchManager_remove_DragEvent_m55301CE4C63CDFC40F9B15BD575DA52D82976D80(L_0, NULL);
		// TouchManager.SwipeEvent -= SurukleBitti;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)il2cpp_codegen_object_new(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB(L_1, __this, (intptr_t)((void*)GameManager_SurukleBitti_m78C8F4E3E26CE7CDC03CF171CF9DE7587861450B_RuntimeMethod_var), NULL);
		TouchManager_remove_SwipeEvent_m27AD7B71DBCB81AA70BC9D61A96EACA88A6344C8(L_1, NULL);
		// TouchManager.TapEvent -= TapFnc;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)il2cpp_codegen_object_new(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB(L_2, __this, (intptr_t)((void*)GameManager_TapFnc_m3979703D06A76970752743BE66BB5C2B97D89C53_RuntimeMethod_var), NULL);
		TouchManager_remove_TapEvent_m1CCFE4472DD6E0D1C8F3DB0D87607C4277327D77(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D_m56FC90A84F4E0E3B50CECB7C82E057C0FDAB22C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_m14EE68458F39D29F7196A02D49E978AFA028E02C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF_m44C3FD40A4BE15FDED205A2CB1A732381A4BA821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// board = GameObject.FindObjectOfType<BoardManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_0;
		L_0 = Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC(Object_FindObjectOfType_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_mBBE2A1C40ECED44871E5D466FAE265FEA6E64BCC_RuntimeMethod_var);
		__this->___board_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___board_5), (void*)L_0);
		// spawner = GameObject.FindObjectOfType<SpawnerManager>();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_1;
		L_1 = Object_FindObjectOfType_TisSpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF_m44C3FD40A4BE15FDED205A2CB1A732381A4BA821(Object_FindObjectOfType_TisSpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF_m44C3FD40A4BE15FDED205A2CB1A732381A4BA821_RuntimeMethod_var);
		__this->___spawner_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawner_4), (void*)L_1);
		// scoreManager = GameObject.FindObjectOfType<ScoreManager>();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_2;
		L_2 = Object_FindObjectOfType_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_m14EE68458F39D29F7196A02D49E978AFA028E02C(Object_FindObjectOfType_TisScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_m14EE68458F39D29F7196A02D49E978AFA028E02C_RuntimeMethod_var);
		__this->___scoreManager_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreManager_7), (void*)L_2);
		// followShape = GameObject.FindObjectOfType<FollowShapeManager>();
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_3;
		L_3 = Object_FindObjectOfType_TisFollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D_m56FC90A84F4E0E3B50CECB7C82E057C0FDAB22C0(Object_FindObjectOfType_TisFollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D_m56FC90A84F4E0E3B50CECB7C82E057C0FDAB22C0_RuntimeMethod_var);
		__this->___followShape_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followShape_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_U3CStartGameU3Eb__35_0_m84D66931A3F8915D1CB2D83981922FDFE196A385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spawner)
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_0 = __this->___spawner_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0191;
		}
	}
	{
		// spawner.AllShapeNull();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_2 = __this->___spawner_4;
		NullCheck(L_2);
		SpawnerManager_AllShapeNull_mD13A51CFB069C5079E405A61B05E88F578B8B9B2(L_2, NULL);
		// if (activeShape == null)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_3 = __this->___activeShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_006a;
		}
	}
	{
		// activeShape = spawner.CreateShape();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_5 = __this->___spawner_4;
		NullCheck(L_5);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_6;
		L_6 = SpawnerManager_CreateShape_m5E7912109E5C4FAA0E2D8A75BE5C6363634A0EE1(L_5, NULL);
		__this->___activeShape_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeShape_8), (void*)L_6);
		// activeShape.transform.position = VectorToInt(activeShape.transform.position);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_7 = __this->___activeShape_8;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_9 = __this->___activeShape_8;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = GameManager_VectorToInt_m952FFC8BF5B97A3F0F4EFEFBCF3D3E3B19BA7A76(__this, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_14, NULL);
	}

IL_006a:
	{
		// if (activeShape)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_15 = __this->___activeShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_00c6;
		}
	}
	{
		// activeShape.transform.localScale = Vector3.zero;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_17 = __this->___activeShape_8;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_19, NULL);
		// isMove = false;
		__this->___isMove_12 = (bool)0;
		// activeShape.transform.DOScale(1, .5f).SetEase(Ease.OutBack).OnComplete(() => isMove = true);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_20 = __this->___activeShape_8;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_22;
		L_22 = ShortcutExtensions_DOScale_m5935113B55474CC0551EF8A8EA3CFA82371D5E99(L_21, (1.0f), (0.5f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_23;
		L_23 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_22, ((int32_t)27), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_24 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_24, __this, (intptr_t)((void*)GameManager_U3CStartGameU3Eb__35_0_m84D66931A3F8915D1CB2D83981922FDFE196A385_RuntimeMethod_var), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_25;
		L_25 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F(L_23, L_24, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
	}

IL_00c6:
	{
		// if (holderShape == null)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_26 = __this->___holderShape_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0191;
		}
	}
	{
		// holderShapeImg.GetComponent<CanvasGroup>().DOFade(1, .6f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___holderShapeImg_10;
		NullCheck(L_28);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_29;
		L_29 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_28, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_30;
		L_30 = DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C(L_29, (1.0f), (0.600000024f), NULL);
		// holderShape = spawner.CreateHolderShape();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_31 = __this->___spawner_4;
		NullCheck(L_31);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_32;
		L_32 = SpawnerManager_CreateHolderShape_m527B56BB226C1FFCC3FF07D5503AB2A453C3F115(L_31, NULL);
		__this->___holderShape_9 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___holderShape_9), (void*)L_32);
		// if (holderShape.name == activeShape.name)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_33 = __this->___holderShape_9;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_33, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_35 = __this->___activeShape_8;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_35, NULL);
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_016a;
		}
	}
	{
		// Destroy(holderShape.gameObject);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_38 = __this->___holderShape_9;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_39, NULL);
		// holderShape = spawner.CreateHolderShape();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_40 = __this->___spawner_4;
		NullCheck(L_40);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_41;
		L_41 = SpawnerManager_CreateHolderShape_m527B56BB226C1FFCC3FF07D5503AB2A453C3F115(L_40, NULL);
		__this->___holderShape_9 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___holderShape_9), (void*)L_41);
		// holderShapeImg.sprite = holderShape.shapeSekil;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___holderShapeImg_10;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_43 = __this->___holderShape_9;
		NullCheck(L_43);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_44 = L_43->___shapeSekil_5;
		NullCheck(L_42);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_42, L_44, NULL);
		// holderShape.gameObject.SetActive(false);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_45 = __this->___holderShape_9;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		goto IL_0191;
	}

IL_016a:
	{
		// holderShapeImg.sprite = holderShape.shapeSekil;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47 = __this->___holderShapeImg_10;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_48 = __this->___holderShape_9;
		NullCheck(L_48);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_49 = L_48->___shapeSekil_5;
		NullCheck(L_47);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_47, L_49, NULL);
		// holderShape.gameObject.SetActive(false);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_50 = __this->___holderShape_9;
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_50, NULL);
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)0, NULL);
	}

IL_0191:
	{
		// if (gameOverPanel)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___gameOverPanel_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_52, NULL);
		if (!L_53)
		{
			goto IL_01aa;
		}
	}
	{
		// gameOverPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___gameOverPanel_27;
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
	}

IL_01aa:
	{
		// downLevelCounter = downTimer;
		float L_55 = __this->___downTimer_15;
		__this->___downLevelCounter_17 = L_55;
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!board || !spawner || !activeShape || isGameOver || !scoreManager || !isMove)
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_0 = __this->___board_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_2 = __this->___spawner_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = __this->___activeShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		bool L_6 = __this->___isGameOver_24;
		if (L_6)
		{
			goto IL_0044;
		}
	}
	{
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_7 = __this->___scoreManager_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = __this->___isMove_12;
		if (L_9)
		{
			goto IL_0045;
		}
	}

IL_0044:
	{
		// return;
		return;
	}

IL_0045:
	{
		// InputController();
		GameManager_InputController_mBD0AF191249EE93ED00069FE4776695161F39868(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LateUpdate_m1A2595D1FD7E271BE4213CE7602FF7F2E9F80B95 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!board || !spawner || !activeShape || isGameOver || !scoreManager || !followShape || !isMove)
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_0 = __this->___board_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_2 = __this->___spawner_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = __this->___activeShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		bool L_6 = __this->___isGameOver_24;
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_7 = __this->___scoreManager_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_9 = __this->___followShape_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		bool L_11 = __this->___isMove_12;
		if (L_11)
		{
			goto IL_0052;
		}
	}

IL_0051:
	{
		// return;
		return;
	}

IL_0052:
	{
		// if (followShape)
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_12 = __this->___followShape_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		// followShape.CreateFollowShape(activeShape, board);
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_14 = __this->___followShape_6;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_15 = __this->___activeShape_8;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_16 = __this->___board_5;
		NullCheck(L_14);
		FollowShapeManager_CreateFollowShape_m997010AE1BDE4A3F235FE44AB40BF3CA69F428F5(L_14, L_15, L_16, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void GameManager::InputController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InputController_mBD0AF191249EE93ED00069FE4776695161F39868 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Input.GetKey("right") && Time.time > keyPressCounter) || Input.GetKeyDown("right"))
		bool L_0;
		L_0 = Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___keyPressCounter_19;
		if ((((float)L_1) > ((float)L_2)))
		{
			goto IL_0025;
		}
	}

IL_0019:
	{
		bool L_3;
		L_3 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}

IL_0025:
	{
		// RightMovement();
		GameManager_RightMovement_m3F5E68ADBFBA0600C690F5A3A8761F7C5AA58BDD(__this, NULL);
		goto IL_0198;
	}

IL_0030:
	{
		// else if ((Input.GetKey("left") && Time.time > keyPressCounter) || Input.GetKeyDown("left"))
		bool L_4;
		L_4 = Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_6 = __this->___keyPressCounter_19;
		if ((((float)L_5) > ((float)L_6)))
		{
			goto IL_0055;
		}
	}

IL_0049:
	{
		bool L_7;
		L_7 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}

IL_0055:
	{
		// LeftMovement();
		GameManager_LeftMovement_m83AEC01A2DC4C3BACF28E96F9014C2F65738D33B(__this, NULL);
		goto IL_0198;
	}

IL_0060:
	{
		// else if ((Input.GetKeyDown("up") && Time.time > rotationCounter))
		bool L_8;
		L_8 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, NULL);
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_10 = __this->___rotationCounter_21;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0084;
		}
	}
	{
		// RotateMovement();
		GameManager_RotateMovement_mD775852160AEA94C9117C37A3B5C78105751D3D5(__this, NULL);
		goto IL_0198;
	}

IL_0084:
	{
		// else if (((Input.GetKey("down") && Time.time > getdownTimer)) || Time.time > downCounter)
		bool L_11;
		L_11 = Input_GetKey_m8D6171F09AC784866255D2634A3986A75644BE6C(_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, NULL);
		if (!L_11)
		{
			goto IL_009d;
		}
	}
	{
		float L_12;
		L_12 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_13 = __this->___getdownTimer_22;
		if ((((float)L_12) > ((float)L_13)))
		{
			goto IL_00aa;
		}
	}

IL_009d:
	{
		float L_14;
		L_14 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_15 = __this->___downCounter_16;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_00b5;
		}
	}

IL_00aa:
	{
		// DownMovement();
		GameManager_DownMovement_mC425656E575547DD595C08A22EDA877B0A07DE95(__this, NULL);
		goto IL_0198;
	}

IL_00b5:
	{
		// else if ((suruklemeBitisYonu==Direction.sag && Time.time>sonrakiSuruklemeZamani) ||
		//          (suruklemeYonu== Direction.sag && Time.time>sonrakiDokunmaZamani))
		int32_t L_16 = __this->___suruklemeBitisYonu_29;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_00cb;
		}
	}
	{
		float L_17;
		L_17 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_18 = __this->___sonrakiSuruklemeZamani_31;
		if ((((float)L_17) > ((float)L_18)))
		{
			goto IL_00e1;
		}
	}

IL_00cb:
	{
		int32_t L_19 = __this->___suruklemeYonu_28;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_0110;
		}
	}
	{
		float L_20;
		L_20 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_21 = __this->___sonrakiDokunmaZamani_30;
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_0110;
		}
	}

IL_00e1:
	{
		// RightMovement();
		GameManager_RightMovement_m3F5E68ADBFBA0600C690F5A3A8761F7C5AA58BDD(__this, NULL);
		// sonrakiDokunmaZamani = Time.time + minDokunmaZamani;
		float L_22;
		L_22 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_23 = __this->___minDokunmaZamani_32;
		__this->___sonrakiDokunmaZamani_30 = ((float)il2cpp_codegen_add(L_22, L_23));
		// sonrakiSuruklemeZamani = Time.time + minSuruklemeZamani;
		float L_24;
		L_24 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_25 = __this->___minSuruklemeZamani_33;
		__this->___sonrakiSuruklemeZamani_31 = ((float)il2cpp_codegen_add(L_24, L_25));
		goto IL_0198;
	}

IL_0110:
	{
		// else if ((suruklemeBitisYonu==Direction.sol && Time.time>sonrakiSuruklemeZamani) ||
		//          (suruklemeYonu== Direction.sol && Time.time>sonrakiDokunmaZamani))
		int32_t L_26 = __this->___suruklemeBitisYonu_29;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0126;
		}
	}
	{
		float L_27;
		L_27 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_28 = __this->___sonrakiSuruklemeZamani_31;
		if ((((float)L_27) > ((float)L_28)))
		{
			goto IL_013c;
		}
	}

IL_0126:
	{
		int32_t L_29 = __this->___suruklemeYonu_28;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_0144;
		}
	}
	{
		float L_30;
		L_30 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_31 = __this->___sonrakiDokunmaZamani_30;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_0144;
		}
	}

IL_013c:
	{
		// LeftMovement();
		GameManager_LeftMovement_m83AEC01A2DC4C3BACF28E96F9014C2F65738D33B(__this, NULL);
		goto IL_0198;
	}

IL_0144:
	{
		// else if ((suruklemeBitisYonu==Direction.yukari && Time.time>sonrakiSuruklemeZamani) || (isTouch))
		int32_t L_32 = __this->___suruklemeBitisYonu_29;
		if ((!(((uint32_t)L_32) == ((uint32_t)3))))
		{
			goto IL_015a;
		}
	}
	{
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_34 = __this->___sonrakiSuruklemeZamani_31;
		if ((((float)L_33) > ((float)L_34)))
		{
			goto IL_0162;
		}
	}

IL_015a:
	{
		bool L_35 = __this->___isTouch_34;
		if (!L_35)
		{
			goto IL_017c;
		}
	}

IL_0162:
	{
		// RotateMovement();
		GameManager_RotateMovement_mD775852160AEA94C9117C37A3B5C78105751D3D5(__this, NULL);
		// sonrakiSuruklemeZamani = Time.time + minSuruklemeZamani;
		float L_36;
		L_36 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_37 = __this->___minSuruklemeZamani_33;
		__this->___sonrakiSuruklemeZamani_31 = ((float)il2cpp_codegen_add(L_36, L_37));
		goto IL_0198;
	}

IL_017c:
	{
		// else if (suruklemeYonu==Direction.asagi && Time.time > sonrakiDokunmaZamani)
		int32_t L_38 = __this->___suruklemeYonu_28;
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			goto IL_0198;
		}
	}
	{
		float L_39;
		L_39 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_40 = __this->___sonrakiDokunmaZamani_30;
		if ((!(((float)L_39) > ((float)L_40))))
		{
			goto IL_0198;
		}
	}
	{
		// DownMovement();
		GameManager_DownMovement_mC425656E575547DD595C08A22EDA877B0A07DE95(__this, NULL);
	}

IL_0198:
	{
		// suruklemeYonu = Direction.none;
		__this->___suruklemeYonu_28 = 0;
		// suruklemeBitisYonu = Direction.none;
		__this->___suruklemeBitisYonu_29 = 0;
		// isTouch = false;
		__this->___isTouch_34 = (bool)0;
		// }
		return;
	}
}
// System.Void GameManager::DownMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DownMovement_mC425656E575547DD595C08A22EDA877B0A07DE95 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// downCounter = Time.time + downLevelCounter;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___downLevelCounter_17;
		__this->___downCounter_16 = ((float)il2cpp_codegen_add(L_0, L_1));
		// getdownCounter = Time.time + getdownTimer;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___getdownTimer_22;
		__this->___getdownCounter_23 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if (activeShape)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = __this->___activeShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_00ab;
		}
	}
	{
		// activeShape.DownMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_6 = __this->___activeShape_8;
		NullCheck(L_6);
		ShapeManager_DownMove_m68E4B35855C95B14472188A7CDA97CA252CEBDB0(L_6, NULL);
		// if (!board.InCurrentPosition(activeShape))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_7 = __this->___board_5;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_8 = __this->___activeShape_8;
		NullCheck(L_7);
		bool L_9;
		L_9 = BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_00ab;
		}
	}
	{
		// if (board.isSpillOut(activeShape))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_10 = __this->___board_5;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_11 = __this->___activeShape_8;
		NullCheck(L_10);
		bool L_12;
		L_12 = BoardManager_isSpillOut_m1429EC4DA6F8B32399641D479C852C3DCEDBA529(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		// activeShape.UpMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_13 = __this->___activeShape_8;
		NullCheck(L_13);
		ShapeManager_UpMove_m578FA7DB97C7018A4D9CC88041D96EF3C741123C(L_13, NULL);
		// isGameOver = true;
		__this->___isGameOver_24 = (bool)1;
		// SoundManager.instance.SoundEffectRun(6);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_14 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_14);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_14, 6, NULL);
		// if (gameOverPanel)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___gameOverPanel_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		// StartCoroutine(GameOverRoutine());
		RuntimeObject* L_17;
		L_17 = GameManager_GameOverRoutine_mA1AE41628C875079BEE2B2A60FD79B60131BDEE1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_18;
		L_18 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_17, NULL);
	}

IL_0099:
	{
		// SoundManager.instance.SoundEffectRun(6);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_19 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_19);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_19, 6, NULL);
		return;
	}

IL_00a5:
	{
		// ShapePlaced();
		GameManager_ShapePlaced_m8E7D744651FE0C864AE5C3A7B22C1AD88C099653(__this, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void GameManager::RotateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RotateMovement_mD775852160AEA94C9117C37A3B5C78105751D3D5 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeShape.TurnRight();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = __this->___activeShape_8;
		NullCheck(L_0);
		ShapeManager_TurnRight_mE4B0CA1B38FB248CABE99BC725529E96E6229603(L_0, NULL);
		// rotationCounter = Time.time + rotationTimer;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___rotationTimer_20;
		__this->___rotationCounter_21 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (!board.InCurrentPosition(activeShape))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_3 = __this->___board_5;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = __this->___activeShape_8;
		NullCheck(L_3);
		bool L_5;
		L_5 = BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		// SoundManager.instance.SoundEffectRun(1);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_6 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_6, 1, NULL);
		// activeShape.LeftMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_7 = __this->___activeShape_8;
		NullCheck(L_7);
		ShapeManager_LeftMove_m7672908150CF04890A2D6BA5CC65E861D4162C5C(L_7, NULL);
		return;
	}

IL_0047:
	{
		// isRight = !isRight;
		bool L_8 = __this->___isRight_25;
		__this->___isRight_25 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// if (rotateIcon)
		IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* L_9 = __this->___rotateIcon_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// rotateIcon.IconTurn(isRight);
		IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* L_11 = __this->___rotateIcon_26;
		bool L_12 = __this->___isRight_25;
		NullCheck(L_11);
		IconManager_IconTurn_mC4D1D3E52B2B18BB578046C4D65A9FD6C25BE8E3(L_11, L_12, NULL);
	}

IL_0074:
	{
		// SoundManager.instance.SoundEffectRun(3);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_13 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_13);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_13, 3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::LeftMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LeftMovement_m83AEC01A2DC4C3BACF28E96F9014C2F65738D33B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeShape.LeftMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = __this->___activeShape_8;
		NullCheck(L_0);
		ShapeManager_LeftMove_m7672908150CF04890A2D6BA5CC65E861D4162C5C(L_0, NULL);
		// keyPressCounter = Time.time + keyPressTimer;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___keyPressTimer_18;
		__this->___keyPressCounter_19 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (!board.InCurrentPosition(activeShape))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_3 = __this->___board_5;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = __this->___activeShape_8;
		NullCheck(L_3);
		bool L_5;
		L_5 = BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		// SoundManager.instance.SoundEffectRun(1);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_6 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_6, 1, NULL);
		// activeShape.RightMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_7 = __this->___activeShape_8;
		NullCheck(L_7);
		ShapeManager_RightMove_mF0B669360CACC81CF6CAA9263C0FE13D472E17BA(L_7, NULL);
		return;
	}

IL_0047:
	{
		// SoundManager.instance.SoundEffectRun(3);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_8 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_8, 3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::RightMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RightMovement_m3F5E68ADBFBA0600C690F5A3A8761F7C5AA58BDD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeShape.RightMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = __this->___activeShape_8;
		NullCheck(L_0);
		ShapeManager_RightMove_mF0B669360CACC81CF6CAA9263C0FE13D472E17BA(L_0, NULL);
		// keyPressCounter = Time.time + keyPressTimer;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___keyPressTimer_18;
		__this->___keyPressCounter_19 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (!board.InCurrentPosition(activeShape))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_3 = __this->___board_5;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = __this->___activeShape_8;
		NullCheck(L_3);
		bool L_5;
		L_5 = BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		// SoundManager.instance.SoundEffectRun(1);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_6 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_6, 1, NULL);
		// activeShape.LeftMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_7 = __this->___activeShape_8;
		NullCheck(L_7);
		ShapeManager_LeftMove_m7672908150CF04890A2D6BA5CC65E861D4162C5C(L_7, NULL);
		return;
	}

IL_0047:
	{
		// SoundManager.instance.SoundEffectRun(3);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_8 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_8, 3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ShapePlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShapePlaced_m8E7D744651FE0C864AE5C3A7B22C1AD88C099653 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_U3CShapePlacedU3Eb__43_0_m35B0A3D1E2E1B120EE7F117BC42E3D794E105365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeShape)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0 = __this->___activeShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0255;
		}
	}
	{
		// keyPressCounter = Time.time;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___keyPressCounter_19 = L_2;
		// getdownCounter = Time.time;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___getdownCounter_23 = L_3;
		// rotationCounter = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___rotationCounter_21 = L_4;
		// activeShape.UpMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_5 = __this->___activeShape_8;
		NullCheck(L_5);
		ShapeManager_UpMove_m578FA7DB97C7018A4D9CC88041D96EF3C741123C(L_5, NULL);
		// activeShape.PlayPlacedEffect();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_6 = __this->___activeShape_8;
		NullCheck(L_6);
		ShapeManager_PlayPlacedEffect_m9839A72E275FCA4489E5D18CE31C52CD38DDBA7F(L_6, NULL);
		// board.InGrid(activeShape);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_7 = __this->___board_5;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_8 = __this->___activeShape_8;
		NullCheck(L_7);
		BoardManager_InGrid_mAA69E13E17CD4DA4DBC4EFD27FA234105CDF7A10(L_7, L_8, NULL);
		// SoundManager.instance.SoundEffectRun(5);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_9 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_9);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_9, 5, NULL);
		// isHolderShapeChange = true;
		__this->___isHolderShapeChange_11 = (bool)1;
		// if (spawner)
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_10 = __this->___spawner_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0186;
		}
	}
	{
		// activeShape = spawner.CreateShape();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_12 = __this->___spawner_4;
		NullCheck(L_12);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_13;
		L_13 = SpawnerManager_CreateShape_m5E7912109E5C4FAA0E2D8A75BE5C6363634A0EE1(L_12, NULL);
		__this->___activeShape_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeShape_8), (void*)L_13);
		// if (activeShape)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_14 = __this->___activeShape_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_00e7;
		}
	}
	{
		// activeShape.transform.localScale = Vector3.zero;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_16 = __this->___activeShape_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_17);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_17, L_18, NULL);
		// isMove = false;
		__this->___isMove_12 = (bool)0;
		// activeShape.transform.DOScale(1, .5f).SetEase(Ease.OutBack).OnComplete(() => isMove = true);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_19 = __this->___activeShape_8;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_21;
		L_21 = ShortcutExtensions_DOScale_m5935113B55474CC0551EF8A8EA3CFA82371D5E99(L_20, (1.0f), (0.5f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_22;
		L_22 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_21, ((int32_t)27), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_23 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_23, __this, (intptr_t)((void*)GameManager_U3CShapePlacedU3Eb__43_0_m35B0A3D1E2E1B120EE7F117BC42E3D794E105365_RuntimeMethod_var), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_24;
		L_24 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F(L_22, L_23, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
	}

IL_00e7:
	{
		// holderShape = spawner.CreateHolderShape();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_25 = __this->___spawner_4;
		NullCheck(L_25);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_26;
		L_26 = SpawnerManager_CreateHolderShape_m527B56BB226C1FFCC3FF07D5503AB2A453C3F115(L_25, NULL);
		__this->___holderShape_9 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___holderShape_9), (void*)L_26);
		// if (holderShape.name == activeShape.name)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_27 = __this->___holderShape_9;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_29 = __this->___activeShape_8;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_015f;
		}
	}
	{
		// Destroy(holderShape.gameObject);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_32 = __this->___holderShape_9;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_33, NULL);
		// holderShape = spawner.CreateHolderShape();
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_34 = __this->___spawner_4;
		NullCheck(L_34);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_35;
		L_35 = SpawnerManager_CreateHolderShape_m527B56BB226C1FFCC3FF07D5503AB2A453C3F115(L_34, NULL);
		__this->___holderShape_9 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___holderShape_9), (void*)L_35);
		// holderShapeImg.sprite = holderShape.shapeSekil;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = __this->___holderShapeImg_10;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_37 = __this->___holderShape_9;
		NullCheck(L_37);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = L_37->___shapeSekil_5;
		NullCheck(L_36);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_36, L_38, NULL);
		// holderShape.gameObject.SetActive(false);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_39 = __this->___holderShape_9;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		goto IL_0186;
	}

IL_015f:
	{
		// holderShapeImg.sprite = holderShape.shapeSekil;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___holderShapeImg_10;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_42 = __this->___holderShape_9;
		NullCheck(L_42);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_43 = L_42->___shapeSekil_5;
		NullCheck(L_41);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_41, L_43, NULL);
		// holderShape.gameObject.SetActive(false);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_44 = __this->___holderShape_9;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
	}

IL_0186:
	{
		// if (followShape)
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_46 = __this->___followShape_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_46, NULL);
		if (!L_47)
		{
			goto IL_019e;
		}
	}
	{
		// followShape.ResetFnc();
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_48 = __this->___followShape_6;
		NullCheck(L_48);
		FollowShapeManager_ResetFnc_mA555DCBD84A4E828F720E14C54ECD091EEB1C382(L_48, NULL);
	}

IL_019e:
	{
		// StartCoroutine(board.CleanAllLine());
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_49 = __this->___board_5;
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = BoardManager_CleanAllLine_mB6233DE1632DCFD959A7CAE2662CE5264916E67A(L_49, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_51;
		L_51 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_50, NULL);
		// if (board.completedRaw > 0)
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_52 = __this->___board_5;
		NullCheck(L_52);
		int32_t L_53 = L_52->___completedRaw_8;
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_0255;
		}
	}
	{
		// scoreManager.RowScore(board.completedRaw);
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_54 = __this->___scoreManager_7;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_55 = __this->___board_5;
		NullCheck(L_55);
		int32_t L_56 = L_55->___completedRaw_8;
		NullCheck(L_54);
		ScoreManager_RowScore_mB27B00AA79F7A0F74D9856F3A23644D3981963E1(L_54, L_56, NULL);
		// if (scoreManager.isLevelUp)
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_57 = __this->___scoreManager_7;
		NullCheck(L_57);
		bool L_58 = L_57->___isLevelUp_13;
		if (!L_58)
		{
			goto IL_0232;
		}
	}
	{
		// SoundManager.instance.SoundEffectRun(7);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_59 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_59);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_59, 7, NULL);
		// downLevelCounter = downTimer - Mathf.Clamp(((float)scoreManager.level - 1) * .1f, 0.05f, 1f);
		float L_60 = __this->___downTimer_15;
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_61 = __this->___scoreManager_7;
		NullCheck(L_61);
		int32_t L_62 = L_61->___level_6;
		float L_63;
		L_63 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_62), (1.0f))), (0.100000001f))), (0.0500000007f), (1.0f), NULL);
		__this->___downLevelCounter_17 = ((float)il2cpp_codegen_subtract(L_60, L_63));
		// StartCoroutine(LevelUpRoutine());
		RuntimeObject* L_64;
		L_64 = GameManager_LevelUpRoutine_mEB11F4849667A466A00E66DFB1CC417874DFBA82(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_65;
		L_65 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_64, NULL);
		goto IL_024a;
	}

IL_0232:
	{
		// if (board.completedRaw > 1)
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_66 = __this->___board_5;
		NullCheck(L_66);
		int32_t L_67 = L_66->___completedRaw_8;
		if ((((int32_t)L_67) <= ((int32_t)1)))
		{
			goto IL_024a;
		}
	}
	{
		// SoundManager.instance.LocalSoundRun();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_68 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_68);
		SoundManager_LocalSoundRun_mB3929958F5F434E83BBE126D49B8AFFAA4014F38(L_68, NULL);
	}

IL_024a:
	{
		// SoundManager.instance.SoundEffectRun(4);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_69 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_69);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_69, 4, NULL);
	}

IL_0255:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 GameManager::VectorToInt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GameManager_VectorToInt_m952FFC8BF5B97A3F0F4EFEFBCF3D3E3B19BA7A76 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_vector, const RuntimeMethod* method) 
{
	{
		// return new Vector2(Mathf.Round(vector.x), Mathf.Round(vector.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_vector;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = bankers_roundf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_vector;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = bankers_roundf(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void GameManager::RotationIconDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RotationIconDirection_mFA45B4233731CD7AF2F45526698E00625E4F62E3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isRight = !isRight;
		bool L_0 = __this->___isRight_25;
		__this->___isRight_25 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// activeShape.RightRotateBtn(isRight);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_1 = __this->___activeShape_8;
		bool L_2 = __this->___isRight_25;
		NullCheck(L_1);
		ShapeManager_RightRotateBtn_mB6F85DEFDA141D87786C4F036F2F9D39AEE98E3D(L_1, L_2, NULL);
		// if (!board.InCurrentPosition(activeShape))
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_3 = __this->___board_5;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = __this->___activeShape_8;
		NullCheck(L_3);
		bool L_5;
		L_5 = BoardManager_InCurrentPosition_m26F61AC82D7C75142CFAF0BD1B1DD0864B61A66E(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0053;
		}
	}
	{
		// activeShape.RightRotateBtn(!isRight);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_6 = __this->___activeShape_8;
		bool L_7 = __this->___isRight_25;
		NullCheck(L_6);
		ShapeManager_RightRotateBtn_mB6F85DEFDA141D87786C4F036F2F9D39AEE98E3D(L_6, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), NULL);
		// SoundManager.instance.SoundEffectRun(3);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_8 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_8, 3, NULL);
		return;
	}

IL_0053:
	{
		// if (rotateIcon)
		IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* L_9 = __this->___rotateIcon_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// rotateIcon.IconTurn(isRight);
		IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* L_11 = __this->___rotateIcon_26;
		bool L_12 = __this->___isRight_25;
		NullCheck(L_11);
		IconManager_IconTurn_mC4D1D3E52B2B18BB578046C4D65A9FD6C25BE8E3(L_11, L_12, NULL);
	}

IL_0071:
	{
		// SoundManager.instance.SoundEffectRun(2);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_13 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_13);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_13, 2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ChangeHolderShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ChangeHolderShape_mDCF1F5AFA03E45D40121EB367E5BBF18EB06134F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isHolderShapeChange)
		bool L_0 = __this->___isHolderShapeChange_11;
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		// isHolderShapeChange = false;
		__this->___isHolderShapeChange_11 = (bool)0;
		// activeShape.gameObject.SetActive(false);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_1 = __this->___activeShape_8;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// holderShape.gameObject.SetActive(true);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_3 = __this->___holderShape_9;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// holderShape.transform.position = activeShape.transform.position;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_5 = __this->___holderShape_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_7 = __this->___activeShape_8;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// activeShape = holderShape;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_10 = __this->___holderShape_9;
		__this->___activeShape_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeShape_8), (void*)L_10);
	}

IL_005d:
	{
		// if (followShape)
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_11 = __this->___followShape_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// followShape.ResetFnc();
		FollowShapeManager_t542D38C4D20FDD6BB45753AFF8D40FF6ECE50D9D* L_13 = __this->___followShape_6;
		NullCheck(L_13);
		FollowShapeManager_ResetFnc_mA555DCBD84A4E828F720E14C54ECD091EEB1C382(L_13, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::LevelUpRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_LevelUpRoutine_mEB11F4849667A466A00E66DFB1CC417874DFBA82 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* L_0 = (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82*)il2cpp_codegen_object_new(U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLevelUpRoutineU3Ed__47__ctor_m99FCF3CBEADB14CA3092BBE47E532FB31E844277(L_0, 0, NULL);
		U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::GameOverRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameOverRoutine_mA1AE41628C875079BEE2B2A60FD79B60131BDEE1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* L_0 = (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF*)il2cpp_codegen_object_new(U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameOverRoutineU3Ed__48__ctor_m29AA3D36DF0A1AC694864F2B28AD90CFDAC86375(L_0, 0, NULL);
		U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::Surukle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Surukle_m38964E332542567D5A9985961DB007DB665AC893 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_suruklemeHareket, const RuntimeMethod* method) 
{
	{
		// suruklemeYonu = YonuBelirle(suruklemeHareket);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_suruklemeHareket;
		int32_t L_1;
		L_1 = GameManager_YonuBelirle_mB8F9AC5CEF15EA577F332EABF043FBC4F191329C(__this, L_0, NULL);
		__this->___suruklemeYonu_28 = L_1;
		// }
		return;
	}
}
// System.Void GameManager::SurukleBitti(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SurukleBitti_m78C8F4E3E26CE7CDC03CF171CF9DE7587861450B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_suruklemeHareket, const RuntimeMethod* method) 
{
	{
		// suruklemeBitisYonu = YonuBelirle(suruklemeHareket);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_suruklemeHareket;
		int32_t L_1;
		L_1 = GameManager_YonuBelirle_mB8F9AC5CEF15EA577F332EABF043FBC4F191329C(__this, L_0, NULL);
		__this->___suruklemeBitisYonu_29 = L_1;
		// }
		return;
	}
}
// System.Void GameManager::TapFnc(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TapFnc_m3979703D06A76970752743BE66BB5C2B97D89C53 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_suruklemeHareket, const RuntimeMethod* method) 
{
	{
		// isTouch = true;
		__this->___isTouch_34 = (bool)1;
		// }
		return;
	}
}
// GameManager/Direction GameManager::YonuBelirle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_YonuBelirle_mB8F9AC5CEF15EA577F332EABF043FBC4F191329C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_suruklemeHareket, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// Direction suruklemeYonu=Direction.none;
		V_0 = 0;
		// if (Mathf.Abs(suruklemeHareket.x)>Mathf.Abs(suruklemeHareket.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_suruklemeHareket;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_suruklemeHareket;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		// suruklemeYonu=(suruklemeHareket.x >= 0) ? Direction.sag: Direction.sol;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_suruklemeHareket;
		float L_7 = L_6.___x_0;
		if ((((float)L_7) >= ((float)(0.0f))))
		{
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 2;
	}

IL_002b:
	{
		V_0 = G_B4_0;
		goto IL_0040;
	}

IL_002e:
	{
		// suruklemeYonu = (suruklemeHareket.y >= 0) ? Direction.yukari : Direction.asagi;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_suruklemeHareket;
		float L_9 = L_8.___y_1;
		if ((((float)L_9) >= ((float)(0.0f))))
		{
			goto IL_003e;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_003f;
	}

IL_003e:
	{
		G_B8_0 = 3;
	}

IL_003f:
	{
		V_0 = G_B8_0;
	}

IL_0040:
	{
		// return suruklemeYonu;
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isHolderShapeChange = true;
		__this->___isHolderShapeChange_11 = (bool)1;
		// private bool isMove = true; //hareket etsin mi
		__this->___isMove_12 = (bool)1;
		// public ParticleManager[] levelUpEffect = new ParticleManager[5];
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_0 = (ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6*)(ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6*)SZArrayNew(ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___levelUpEffect_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levelUpEffect_13), (void*)L_0);
		// public ParticleManager[] gameOverEffect = new ParticleManager[5];
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_1 = (ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6*)(ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6*)SZArrayNew(ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___gameOverEffect_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameOverEffect_14), (void*)L_1);
		// private float downTimer = .5f; //asagi inme suresi
		__this->___downTimer_15 = (0.5f);
		// [Range(0.02f, 1f)] [SerializeField] private float keyPressTimer = .25f; //sag sol tuslarina basma suresi
		__this->___keyPressTimer_18 = (0.25f);
		// [Range(0.02f, 1f)] [SerializeField] private float rotationTimer = .25f; //sag sol donme suresi
		__this->___rotationTimer_20 = (0.25f);
		// [Range(0.02f, 1f)] [SerializeField] private float getdownTimer = .25f; //asagi tusa basma suresi
		__this->___getdownTimer_22 = (0.25f);
		// public bool isRight = true; //saat yonu mu
		__this->___isRight_25 = (bool)1;
		// [Range(0.05f, 1f)] public float minDokunmaZamani = 0.15f;
		__this->___minDokunmaZamani_32 = (0.150000006f);
		// [Range(0.05f, 1f)] public float minSuruklemeZamani = 0.3f;
		__this->___minSuruklemeZamani_33 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GameManager::<StartGame>b__35_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_U3CStartGameU3Eb__35_0_m84D66931A3F8915D1CB2D83981922FDFE196A385 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// activeShape.transform.DOScale(1, .5f).SetEase(Ease.OutBack).OnComplete(() => isMove = true);
		__this->___isMove_12 = (bool)1;
		return;
	}
}
// System.Void GameManager::<ShapePlaced>b__43_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_U3CShapePlacedU3Eb__43_0_m35B0A3D1E2E1B120EE7F117BC42E3D794E105365 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// activeShape.transform.DOScale(1, .5f).SetEase(Ease.OutBack).OnComplete(() => isMove = true);
		__this->___isMove_12 = (bool)1;
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
// System.Void GameManager/<LevelUpRoutine>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__47__ctor_m99FCF3CBEADB14CA3092BBE47E532FB31E844277 (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<LevelUpRoutine>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__47_System_IDisposable_Dispose_mA889D89E239754C821E4D8280DD3644A7B421C35 (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<LevelUpRoutine>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLevelUpRoutineU3Ed__47_MoveNext_m40CFB08C973AACD2F399A6F7731D2F72D99B46B8 (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_007d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int counter = 0;
		__this->___U3CcounterU3E5__2_3 = 0;
		goto IL_0094;
	}

IL_0052:
	{
		// levelUpEffect[counter].PlayEffect();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_5 = L_4->___levelUpEffect_13;
		int32_t L_6 = __this->___U3CcounterU3E5__2_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		ParticleManager_PlayEffect_m523FB25CC9F50D5D0CEB1244C25674A92C328C4C(L_8, NULL);
		// yield return new WaitForSeconds(.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// counter++;
		int32_t L_10 = __this->___U3CcounterU3E5__2_3;
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->___U3CcounterU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0094:
	{
		// while (counter < levelUpEffect.Length)
		int32_t L_12 = __this->___U3CcounterU3E5__2_3;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		NullCheck(L_13);
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_14 = L_13->___levelUpEffect_13;
		NullCheck(L_14);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0052;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<LevelUpRoutine>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelUpRoutineU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m98B9418DD885AFBA4BD5789E8E6A186B2DA779F4 (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<LevelUpRoutine>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLevelUpRoutineU3Ed__47_System_Collections_IEnumerator_Reset_mE76C9BDB230D8006181234FAA185D289A59ED6A6 (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLevelUpRoutineU3Ed__47_System_Collections_IEnumerator_Reset_mE76C9BDB230D8006181234FAA185D289A59ED6A6_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<LevelUpRoutine>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLevelUpRoutineU3Ed__47_System_Collections_IEnumerator_get_Current_mCED1F04272C305721E5B600459DF90353DAC3D68 (U3CLevelUpRoutineU3Ed__47_tB658EDAB494E75F6C3D760FA29527445E8271D82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager/<GameOverRoutine>d__48::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__48__ctor_m29AA3D36DF0A1AC694864F2B28AD90CFDAC86375 (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<GameOverRoutine>d__48::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__48_System_IDisposable_Dispose_mCB11142C3C1BCE4E015F273692A35F995105529F (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<GameOverRoutine>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameOverRoutineU3Ed__48_MoveNext_mA18E308FC13C6ED250F26AA853B881235BDFB5B6 (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_00c1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int counter = 0;
		__this->___U3CcounterU3E5__2_3 = 0;
		goto IL_0098;
	}

IL_0056:
	{
		// gameOverEffect[counter].PlayEffect();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_5 = L_4->___gameOverEffect_14;
		int32_t L_6 = __this->___U3CcounterU3E5__2_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		ParticleManager_PlayEffect_m523FB25CC9F50D5D0CEB1244C25674A92C328C4C(L_8, NULL);
		// yield return new WaitForSeconds(.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0081:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// counter++;
		int32_t L_10 = __this->___U3CcounterU3E5__2_3;
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->___U3CcounterU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0098:
	{
		// while (counter < gameOverEffect.Length)
		int32_t L_12 = __this->___U3CcounterU3E5__2_3;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		NullCheck(L_13);
		ParticleManagerU5BU5D_tCF6AF831F80AB6E09EBEE64D2D5A9EF39EB26AD6* L_14 = L_13->___gameOverEffect_14;
		NullCheck(L_14);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0056;
		}
	}
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00c1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (gameOverPanel)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___gameOverPanel_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_17, NULL);
		if (!L_18)
		{
			goto IL_0118;
		}
	}
	{
		// gameOverPanel.transform.localScale = Vector3.zero;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19 = V_1;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___gameOverPanel_27;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_22, NULL);
		// gameOverPanel.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = V_1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___gameOverPanel_27;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// gameOverPanel.transform.DOScale(1, .5f).SetEase(Ease.OutBack);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___gameOverPanel_27;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_28;
		L_28 = ShortcutExtensions_DOScale_m5935113B55474CC0551EF8A8EA3CFA82371D5E99(L_27, (1.0f), (0.5f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_29;
		L_29 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_28, ((int32_t)27), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
	}

IL_0118:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<GameOverRoutine>d__48::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverRoutineU3Ed__48_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC45A1D98AFB0F3FBB05F5DF95E7A3040CCE3D9D1 (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<GameOverRoutine>d__48::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverRoutineU3Ed__48_System_Collections_IEnumerator_Reset_m7EC935D5A538DD1AA86A5E7B07C2625CED9E1D95 (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameOverRoutineU3Ed__48_System_Collections_IEnumerator_Reset_m7EC935D5A538DD1AA86A5E7B07C2625CED9E1D95_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<GameOverRoutine>d__48::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverRoutineU3Ed__48_System_Collections_IEnumerator_get_Current_m5A83C7853C0BEA6310FC3A99EDBFB4F1B26B3C1F (U3CGameOverRoutineU3Ed__48_t521D66020EC2D6BFD7F357A59506D428E29D99CF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_m7E00370AD0134DB3AEA647B9BA69055725AA83FE (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// ResetFnc();
		ScoreManager_ResetFnc_m1941B85BB045A2BE62A22609B3F857285CCE9648(__this, NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::ResetFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_ResetFnc_m1941B85BB045A2BE62A22609B3F857285CCE9648 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// level = 1;
		__this->___level_6 = 1;
		// satirlar = numberRowsInLevel * level;
		int32_t L_0 = __this->___numberRowsInLevel_7;
		int32_t L_1 = __this->___level_6;
		__this->___satirlar_5 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		// UpdateText();
		ScoreManager_UpdateText_mE30F12EFBD305A1DE4C01239CC57439CCCBEBD9F(__this, NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::RowScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_RowScore_mB27B00AA79F7A0F74D9856F3A23644D3981963E1 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, int32_t ___0_n, const RuntimeMethod* method) 
{
	{
		// isLevelUp = false;
		__this->___isLevelUp_13 = (bool)0;
		// n = Mathf.Clamp(n, minSatir, maxSatir); //10 satir silinse bile 1 ile 4 arasinda sinirlanacak
		int32_t L_0 = ___0_n;
		int32_t L_1 = __this->___minSatir_8;
		int32_t L_2 = __this->___maxSatir_9;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, L_1, L_2, NULL);
		___0_n = L_3;
		int32_t L_4 = ___0_n;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, 1)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0099;
	}

IL_0035:
	{
		// score += 30 * level;
		int32_t L_5 = __this->___score_4;
		int32_t L_6 = __this->___level_6;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_multiply(((int32_t)30), L_6))));
		// break;
		goto IL_0099;
	}

IL_004d:
	{
		// score += 50 * level;
		int32_t L_7 = __this->___score_4;
		int32_t L_8 = __this->___level_6;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_multiply(((int32_t)50), L_8))));
		// break;
		goto IL_0099;
	}

IL_0065:
	{
		// score += 150 * level;
		int32_t L_9 = __this->___score_4;
		int32_t L_10 = __this->___level_6;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)il2cpp_codegen_multiply(((int32_t)150), L_10))));
		// break;
		goto IL_0099;
	}

IL_0080:
	{
		// score += 500 * level;
		int32_t L_11 = __this->___score_4;
		int32_t L_12 = __this->___level_6;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(((int32_t)500), L_12))));
	}

IL_0099:
	{
		// satirlar -= n;
		int32_t L_13 = __this->___satirlar_5;
		int32_t L_14 = ___0_n;
		__this->___satirlar_5 = ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
		// if (satirlar <= 0)
		int32_t L_15 = __this->___satirlar_5;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		// LevelUp();
		ScoreManager_LevelUp_m3D6E43F6222AE8EC4C1AB8F1E5FFF22ADF9F21A2(__this, NULL);
	}

IL_00b6:
	{
		// UpdateText();
		ScoreManager_UpdateText_mE30F12EFBD305A1DE4C01239CC57439CCCBEBD9F(__this, NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateText_mE30F12EFBD305A1DE4C01239CC57439CCCBEBD9F (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scoreText)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___scoreText_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// scoreText.text = AddZeroToScoreText(score,5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___scoreText_12;
		int32_t L_3 = __this->___score_4;
		String_t* L_4;
		L_4 = ScoreManager_AddZeroToScoreText_m3484BFE6B6C1986103ABB19ED29CAD6FBD47A976(__this, L_3, 5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
	}

IL_0025:
	{
		// if (levelText)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___levelText_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// levelText.text = level.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___levelText_11;
		int32_t* L_8 = (&__this->___level_6);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
	}

IL_0048:
	{
		// if (rowText)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___rowText_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// rowText.text = satirlar.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___rowText_10;
		int32_t* L_13 = (&__this->___satirlar_5);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_14);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.String ScoreManager::AddZeroToScoreText(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScoreManager_AddZeroToScoreText_m3484BFE6B6C1986103ABB19ED29CAD6FBD47A976 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, int32_t ___0_score, int32_t ___1_rakamSayisi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string skorStr = score.ToString();
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_score), NULL);
		V_0 = L_0;
		goto IL_0016;
	}

IL_000a:
	{
		// skorStr = "0" + skorStr;
		String_t* L_1 = V_0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_1, NULL);
		V_0 = L_2;
	}

IL_0016:
	{
		// while (skorStr.Length < rakamSayisi)
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		int32_t L_5 = ___1_rakamSayisi;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000a;
		}
	}
	{
		// return skorStr;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void ScoreManager::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_LevelUp_m3D6E43F6222AE8EC4C1AB8F1E5FFF22ADF9F21A2 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// level++;
		int32_t L_0 = __this->___level_6;
		__this->___level_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// satirlar = numberRowsInLevel * level;
		int32_t L_1 = __this->___numberRowsInLevel_7;
		int32_t L_2 = __this->___level_6;
		__this->___satirlar_5 = ((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		// isLevelUp = true;
		__this->___isLevelUp_13 = (bool)1;
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_mE5C264C34A9CBBAB72DCF99CCCC9841AF8F9FEE6 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// public int level = 1;
		__this->___level_6 = 1;
		// public int numberRowsInLevel = 5; //seviyedeki satir sayisi
		__this->___numberRowsInLevel_7 = 5;
		// private int minSatir = 1;
		__this->___minSatir_8 = 1;
		// private int maxSatir = 4;
		__this->___maxSatir_9 = 4;
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
// System.Void ShapeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_Start_mAE4F8B7FB93B244A8C622B2EDEAF81713FD0EE3D (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1550FA161D85495D6D219921B1CDD67899EFCE45);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placedEffects = GameObject.FindGameObjectsWithTag("PlacedEffect");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral1550FA161D85495D6D219921B1CDD67899EFCE45, NULL);
		__this->___placedEffects_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedEffects_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ShapeManager::PlayPlacedEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_PlayPlacedEffect_m9839A72E275FCA4489E5D18CE31C52CD38DDBA7F (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B_m7ED9BA6E60A08C6DA1BC9BE29878B6F0252129FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// int counter = 0;
		V_0 = 0;
		// foreach (Transform child in gameObject.transform)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_4;
					if (!L_4)
					{
						goto IL_009f;
					}
				}
				{
					RuntimeObject* L_5 = V_4;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_009f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0082_1;
			}

IL_0015_1:
			{
				// foreach (Transform child in gameObject.transform)
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (placedEffects[counter])
				GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___placedEffects_6;
				int32_t L_9 = V_0;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_12;
				L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
				if (!L_12)
				{
					goto IL_007e_1;
				}
			}
			{
				// placedEffects[counter].transform.position = new Vector3(child.position.x,child.position.y,0f);
				GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___placedEffects_6;
				int32_t L_14 = V_0;
				NullCheck(L_13);
				int32_t L_15 = L_14;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
				NullCheck(L_16);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
				L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_2;
				NullCheck(L_18);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
				float L_20 = L_19.___x_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_2;
				NullCheck(L_21);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
				L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
				float L_23 = L_22.___y_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				memset((&L_24), 0, sizeof(L_24));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_20, L_23, (0.0f), /*hidden argument*/NULL);
				NullCheck(L_17);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_24, NULL);
				// ParticleManager particleManager = placedEffects[counter].GetComponent<ParticleManager>();
				GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___placedEffects_6;
				int32_t L_26 = V_0;
				NullCheck(L_25);
				int32_t L_27 = L_26;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
				NullCheck(L_28);
				ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_29;
				L_29 = GameObject_GetComponent_TisParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B_m7ED9BA6E60A08C6DA1BC9BE29878B6F0252129FA(L_28, GameObject_GetComponent_TisParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B_m7ED9BA6E60A08C6DA1BC9BE29878B6F0252129FA_RuntimeMethod_var);
				V_3 = L_29;
				// if (particleManager)
				ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_30 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_31;
				L_31 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_30, NULL);
				if (!L_31)
				{
					goto IL_007e_1;
				}
			}
			{
				// particleManager.PlayEffect();
				ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* L_32 = V_3;
				NullCheck(L_32);
				ParticleManager_PlayEffect_m523FB25CC9F50D5D0CEB1244C25674A92C328C4C(L_32, NULL);
			}

IL_007e_1:
			{
				// counter++;
				int32_t L_33 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
			}

IL_0082_1:
			{
				// foreach (Transform child in gameObject.transform)
				RuntimeObject* L_34 = V_1;
				NullCheck(L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void ShapeManager::LeftMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_LeftMove_m7672908150CF04890A2D6BA5CC65E861D4162C5C (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.left,Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		NullCheck(L_0);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void ShapeManager::RightMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_RightMove_mF0B669360CACC81CF6CAA9263C0FE13D472E17BA (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.right,Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		NullCheck(L_0);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void ShapeManager::DownMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_DownMove_m68E4B35855C95B14472188A7CDA97CA252CEBDB0 (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.down,Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		NullCheck(L_0);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void ShapeManager::UpMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_UpMove_m578FA7DB97C7018A4D9CC88041D96EF3C741123C (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.up,Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_0);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void ShapeManager::TurnRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_TurnRight_mE4B0CA1B38FB248CABE99BC725529E96E6229603 (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	{
		// if (isTurn)
		bool L_0 = __this->___isTurn_4;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// transform.Rotate(0,0,-90,Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_1, (0.0f), (0.0f), (-90.0f), 0, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void ShapeManager::TurnLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_TurnLeft_m9340E7466E63A4D33929C710EBD8BB14D19C099B (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	{
		// if (isTurn)
		bool L_0 = __this->___isTurn_4;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// transform.Rotate(0,0,90,Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_1, (0.0f), (0.0f), (90.0f), 0, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ShapeManager::MoveCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShapeManager_MoveCoroutine_m40E44068D472D015E0D7DA55140DE02C021A437E (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* L_0 = (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE*)il2cpp_codegen_object_new(U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveCoroutineU3Ed__11__ctor_m46B68CA46D8B502633D5A734184CC1096566BAE7(L_0, 0, NULL);
		U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ShapeManager::RightRotateBtn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager_RightRotateBtn_mB6F85DEFDA141D87786C4F036F2F9D39AEE98E3D (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, bool ___0_isRight, const RuntimeMethod* method) 
{
	{
		// if (isRight)
		bool L_0 = ___0_isRight;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// TurnRight();
		ShapeManager_TurnRight_mE4B0CA1B38FB248CABE99BC725529E96E6229603(__this, NULL);
		return;
	}

IL_000a:
	{
		// TurnLeft();
		ShapeManager_TurnLeft_m9340E7466E63A4D33929C710EBD8BB14D19C099B(__this, NULL);
		// }
		return;
	}
}
// System.Void ShapeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeManager__ctor_mDFA42D38D1BAC2F21C82942308F083E6EAAECE57 (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* __this, const RuntimeMethod* method) 
{
	{
		// private bool isTurn=true;
		__this->___isTurn_4 = (bool)1;
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
// System.Void ShapeManager/<MoveCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__11__ctor_m46B68CA46D8B502633D5A734184CC1096566BAE7 (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ShapeManager/<MoveCoroutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__11_System_IDisposable_Dispose_m9B8FF0187C3001878E533E40CF2F4C6BEFD8D031 (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ShapeManager/<MoveCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveCoroutineU3Ed__11_MoveNext_mAE9B575B85342C1A0CEF11BBD0FB7D68DDAF1BA9 (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// DownMove();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4 = V_1;
		NullCheck(L_4);
		ShapeManager_DownMove_m68E4B35855C95B14472188A7CDA97CA252CEBDB0(L_4, NULL);
		// yield return new WaitForSeconds(.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_001e;
	}
}
// System.Object ShapeManager/<MoveCoroutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveCoroutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2EAE508218A471B8DBD98D87B0F92C6A65E3CE37 (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ShapeManager/<MoveCoroutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m068C0C2FF82DDF6AF1C27F1140C05131D67AD43F (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m068C0C2FF82DDF6AF1C27F1140C05131D67AD43F_RuntimeMethod_var)));
	}
}
// System.Object ShapeManager/<MoveCoroutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveCoroutineU3Ed__11_System_Collections_IEnumerator_get_Current_m2C7F8E3E97FD03A6A1725BDF30DA6490DAB9D6B2 (U3CMoveCoroutineU3Ed__11_t8962AB2BE7BB70F359811ACC0745725B945BE8CE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// ShapeManager SpawnerManager::CreateShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_CreateShape_m5E7912109E5C4FAA0E2D8A75BE5C6363634A0EE1 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* V_0 = NULL;
	{
		// ShapeManager shape = null;
		V_0 = (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)NULL;
		// shape = TakeNextShape();
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0;
		L_0 = SpawnerManager_TakeNextShape_mB8B3059DAB0A57360B595B8182749B8368E9A60A(__this, NULL);
		V_0 = L_0;
		// shape.gameObject.SetActive(true);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_1 = V_0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// shape.transform.position = transform.position;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// if (shape != null)
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return shape;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_9 = V_0;
		return L_9;
	}

IL_0036:
	{
		// return null;
		return (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)NULL;
	}
}
// System.Void SpawnerManager::AllShapeNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerManager_AllShapeNull_mD13A51CFB069C5079E405A61B05E88F578B8B9B2 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < nextShapes.Length; i++)
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// nextShapes[i] = null;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_0 = __this->___nextShapes_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, NULL);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)NULL);
		// for (int i = 0; i < nextShapes.Length; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		// for (int i = 0; i < nextShapes.Length; i++)
		int32_t L_3 = V_0;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_4 = __this->___nextShapes_6;
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// FillNext();
		SpawnerManager_FillNext_m94C807598A47205784B211F3A9DCC34AB190E6A8(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnerManager::FillNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerManager_FillNext_m94C807598A47205784B211F3A9DCC34AB190E6A8 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < nextShapes.Length; i++)
		V_0 = 0;
		goto IL_0067;
	}

IL_0004:
	{
		// if (!nextShapes[i])
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_0 = __this->___nextShapes_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0063;
		}
	}
	{
		// nextShapes[i] = Instantiate(RandomCreateShape(),transform.position,Quaternion.identity) as ShapeManager;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_5 = __this->___nextShapes_6;
		int32_t L_6 = V_0;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_7;
		L_7 = SpawnerManager_RandomCreateShape_m39331C0EEFF889E15EA25E5291015E03E0B24439(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_11;
		L_11 = Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1(L_7, L_9, L_10, Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_11);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)L_11);
		// nextShapes[i].gameObject.SetActive(false);
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_12 = __this->___nextShapes_6;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// shapeImages[i].sprite = nextShapes[i].shapeSekil;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_17 = __this->___shapeImages_5;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_21 = __this->___nextShapes_6;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25 = L_24->___shapeSekil_5;
		NullCheck(L_20);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_20, L_25, NULL);
	}

IL_0063:
	{
		// for (int i = 0; i < nextShapes.Length; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0067:
	{
		// for (int i = 0; i < nextShapes.Length; i++)
		int32_t L_27 = V_0;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_28 = __this->___nextShapes_6;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// StartCoroutine(ShapeImageRoutine());
		RuntimeObject* L_29;
		L_29 = SpawnerManager_ShapeImageRoutine_mAC8F03F273106A9FE52478B142B41EB3CDB29FE3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_29, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnerManager::ShapeImageRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnerManager_ShapeImageRoutine_mAC8F03F273106A9FE52478B142B41EB3CDB29FE3 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* L_0 = (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC*)il2cpp_codegen_object_new(U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShapeImageRoutineU3Ed__6__ctor_m335D8B01E7CC770EDAF6178EE5655B9E0E2C9E29(L_0, 0, NULL);
		U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// ShapeManager SpawnerManager::RandomCreateShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_RandomCreateShape_m39331C0EEFF889E15EA25E5291015E03E0B24439 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomShape = Random.Range(0, allShapes.Length);
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_0 = __this->___allShapes_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		// if (allShapes[randomShape])
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_2 = __this->___allShapes_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		// return allShapes[randomShape];
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_7 = __this->___allShapes_4;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_0027:
	{
		// return null;
		return (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)NULL;
	}
}
// ShapeManager SpawnerManager::TakeNextShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_TakeNextShape_mB8B3059DAB0A57360B595B8182749B8368E9A60A (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// ShapeManager nextShape = null;
		V_0 = (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)NULL;
		// if (nextShapes[0])
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_0 = __this->___nextShapes_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// nextShape = nextShapes[0];
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_4 = __this->___nextShapes_6;
		NullCheck(L_4);
		int32_t L_5 = 0;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
	}

IL_001a:
	{
		// for (int i = 1; i < nextShapes.Length; i++)
		V_1 = 1;
		goto IL_0052;
	}

IL_001e:
	{
		// nextShapes[i - 1] = nextShapes[i];
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_7 = __this->___nextShapes_6;
		int32_t L_8 = V_1;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_9 = __this->___nextShapes_6;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_8, 1))), (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)L_12);
		// shapeImages[i - 1].sprite = nextShapes[i - 1].shapeSekil;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_13 = __this->___shapeImages_5;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_17 = __this->___nextShapes_6;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = L_20->___shapeSekil_5;
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_21, NULL);
		// for (int i = 1; i < nextShapes.Length; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0052:
	{
		// for (int i = 1; i < nextShapes.Length; i++)
		int32_t L_23 = V_1;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_24 = __this->___nextShapes_6;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// nextShapes[nextShapes.Length - 1] = null;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_25 = __this->___nextShapes_6;
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_26 = __this->___nextShapes_6;
		NullCheck(L_26);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, NULL);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), 1))), (ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA*)NULL);
		// FillNext();
		SpawnerManager_FillNext_m94C807598A47205784B211F3A9DCC34AB190E6A8(__this, NULL);
		// return nextShape;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_27 = V_0;
		return L_27;
	}
}
// ShapeManager SpawnerManager::CreateHolderShape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* SpawnerManager_CreateHolderShape_m527B56BB226C1FFCC3FF07D5503AB2A453C3F115 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// holderShape = Instantiate(RandomCreateShape(),transform.position,Quaternion.identity) as ShapeManager;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_0;
		L_0 = SpawnerManager_RandomCreateShape_m39331C0EEFF889E15EA25E5291015E03E0B24439(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_4;
		L_4 = Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1(L_0, L_2, L_3, Object_Instantiate_TisShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA_m1EC5D921D3C4849D0CFBFC11A59926C66E3EC0F1_RuntimeMethod_var);
		// holderShape.transform.position = transform.position;
		ShapeManager_t652D94FE0662F6E4BCA598D719D0C44108D84FFA* L_5 = L_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		// return holderShape;
		return L_5;
	}
}
// System.Void SpawnerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerManager__ctor_m1A5D128B1DF9E27335B383E6D9D176DC8B946FF3 (SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private Image[] shapeImages = new Image[2];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_0 = (ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78*)(ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78*)SZArrayNew(ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___shapeImages_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shapeImages_5), (void*)L_0);
		// private ShapeManager[] nextShapes = new ShapeManager[2];
		ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2* L_1 = (ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2*)(ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2*)SZArrayNew(ShapeManagerU5BU5D_t0DC8691B0A0F356881C538E082DD9E913EAA51E2_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___nextShapes_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextShapes_6), (void*)L_1);
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
// System.Void SpawnerManager/<ShapeImageRoutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShapeImageRoutineU3Ed__6__ctor_m335D8B01E7CC770EDAF6178EE5655B9E0E2C9E29 (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SpawnerManager/<ShapeImageRoutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShapeImageRoutineU3Ed__6_System_IDisposable_Dispose_m65E78AE321F1C98E6F9C1292B2130FAD36281CF5 (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SpawnerManager/<ShapeImageRoutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShapeImageRoutineU3Ed__6_MoveNext_m04533CA422522727D9851837CA27A9AF030221E9 (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0107;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < shapeImages.Length; i++)
		V_2 = 0;
		goto IL_005f;
	}

IL_002d:
	{
		// shapeImages[i].GetComponent<CanvasGroup>().alpha=0f;
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_3 = V_1;
		NullCheck(L_3);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_4 = L_3->___shapeImages_5;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8;
		L_8 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_7, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		NullCheck(L_8);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_8, (0.0f), NULL);
		// shapeImages[i].GetComponent<RectTransform>().localScale=Vector3.zero;
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_9 = V_1;
		NullCheck(L_9);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = L_9->___shapeImages_5;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_13, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_15, NULL);
		// for (int i = 0; i < shapeImages.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		// for (int i = 0; i < shapeImages.Length; i++)
		int32_t L_17 = V_2;
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_18 = V_1;
		NullCheck(L_18);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_19 = L_18->___shapeImages_5;
		NullCheck(L_19);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_002d;
		}
	}
	{
		// yield return new WaitForSeconds(.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0083:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int counter = 0;
		__this->___U3CcounterU3E5__2_3 = 0;
		goto IL_010e;
	}

IL_0093:
	{
		// shapeImages[counter].GetComponent<CanvasGroup>().DOFade(1, .6f);
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_21 = V_1;
		NullCheck(L_21);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_22 = L_21->___shapeImages_5;
		int32_t L_23 = __this->___U3CcounterU3E5__2_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_26;
		L_26 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_25, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_27;
		L_27 = DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C(L_26, (1.0f), (0.600000024f), NULL);
		// shapeImages[counter].GetComponent<RectTransform>().DOScale(1, .6f).SetEase(Ease.OutBack);
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_28 = V_1;
		NullCheck(L_28);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_29 = L_28->___shapeImages_5;
		int32_t L_30 = __this->___U3CcounterU3E5__2_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33;
		L_33 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_32, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_34;
		L_34 = ShortcutExtensions_DOScale_m5935113B55474CC0551EF8A8EA3CFA82371D5E99(L_33, (1.0f), (0.600000024f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_35;
		L_35 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_34, ((int32_t)27), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		// counter++;
		int32_t L_36 = __this->___U3CcounterU3E5__2_3;
		V_3 = L_36;
		int32_t L_37 = V_3;
		__this->___U3CcounterU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		// yield return new WaitForSeconds(.4f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_38 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_38, (0.400000006f), NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0107:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_010e:
	{
		// while (counter < shapeImages.Length)
		int32_t L_39 = __this->___U3CcounterU3E5__2_3;
		SpawnerManager_tC45F726DA2CB29A6C511FAF4C51A21E3833F29BF* L_40 = V_1;
		NullCheck(L_40);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_41 = L_40->___shapeImages_5;
		NullCheck(L_41);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SpawnerManager/<ShapeImageRoutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShapeImageRoutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4A1D497F64329C221ABB86317B015964EE0C6FAD (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SpawnerManager/<ShapeImageRoutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShapeImageRoutineU3Ed__6_System_Collections_IEnumerator_Reset_mB89040481C470136C851ED670ACEC244DE67B845 (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShapeImageRoutineU3Ed__6_System_Collections_IEnumerator_Reset_mB89040481C470136C851ED670ACEC244DE67B845_RuntimeMethod_var)));
	}
}
// System.Object SpawnerManager/<ShapeImageRoutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShapeImageRoutineU3Ed__6_System_Collections_IEnumerator_get_Current_m0BC71BFA89CAF349683A578AFE43E38C91194BF9 (U3CShapeImageRoutineU3Ed__6_t763DF065D61EAF1D2C84338BE98F544B269CE1CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m58062825AA9A256E42311B4A4833E7425589BBDF (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerPrefs.HasKey("musicVolume"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// PlayerPrefs.SetFloat("musicVolume",1);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, (1.0f), NULL);
		// musicBackSlider.value = PlayerPrefs.GetFloat("musicVolume");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___musicBackSlider_7;
		float L_2;
		L_2 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
		goto IL_0047;
	}

IL_0032:
	{
		// musicBackSlider.value = PlayerPrefs.GetFloat("musicVolume");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___musicBackSlider_7;
		float L_4;
		L_4 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_4);
	}

IL_0047:
	{
		// fxSlider.value = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___fxSlider_8;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, (1.0f));
		// }
		return;
	}
}
// System.Void MenuManager::OpenSettingsMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_OpenSettingsMenu_m5569A3140777127666B5B5811A8439007612C46C (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainMenu.GetComponent<RectTransform>().DOLocalMoveX(-1200, .5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___mainMenu_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_2;
		L_2 = ShortcutExtensions_DOLocalMoveX_m3411FBE47AB4960B865E352F672F94B788F712D5(L_1, (-1200.0f), (0.5f), (bool)0, NULL);
		// settingsMenu.GetComponent<RectTransform>().DOLocalMoveX(0f, .5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___settingsMenu_5;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_3, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_5;
		L_5 = ShortcutExtensions_DOLocalMoveX_m3411FBE47AB4960B865E352F672F94B788F712D5(L_4, (0.0f), (0.5f), (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::CloseSettingsMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_CloseSettingsMenu_m0067C872E899AF3EAF1300D56EE6B8E18DF96289 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainMenu.GetComponent<RectTransform>().DOLocalMoveX(0, .5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___mainMenu_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_2;
		L_2 = ShortcutExtensions_DOLocalMoveX_m3411FBE47AB4960B865E352F672F94B788F712D5(L_1, (0.0f), (0.5f), (bool)0, NULL);
		// settingsMenu.GetComponent<RectTransform>().DOLocalMoveX(1200f, .5f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___settingsMenu_5;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_3, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_5;
		L_5 = ShortcutExtensions_DOLocalMoveX_m3411FBE47AB4960B865E352F672F94B788F712D5(L_4, (1200.0f), (0.5f), (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::GamePlayScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_GamePlayScene_m2C9228C72C41557C1ADA210DF93538F8DFE5107F (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ChangeBackGroundVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ChangeBackGroundVolume_m47B32CB040F91EA304516B6DA23FAEE09C061D6F (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// musicSource.volume = musicBackSlider.value;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___musicBackSlider_7;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_2, NULL);
		// PlayerPrefs.SetFloat("musicVolume",musicBackSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___musicBackSlider_7;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, L_4, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ChangeFXVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ChangeFXVolume_m15BCC31EE29FA1EA790F7B30FA082E2C08A46072 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8926C6AE3D1340D4ACC8C2BB0EDCAB6AF0CEA90B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("FxVolume",fxSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___fxSlider_8;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral8926C6AE3D1340D4ACC8C2BB0EDCAB6AF0CEA90B, L_1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
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
// System.Void DragSettingsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragSettingsManager_Start_mDEA16EF641D51CDAE3F143386D470B64F22C9466 (DragSettingsManager_t1E9D364241D9A0348BB54B5F3524F03AC8CACE3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTouchManager_t38556C99556388530402BB02D83E19164E477D1C_m5EC1260CBF5A537C69CB21E6C931F3108F79F0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		__this->___gameManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_4), (void*)L_0);
		// touchManager = GameObject.FindObjectOfType<TouchManager>();
		TouchManager_t38556C99556388530402BB02D83E19164E477D1C* L_1;
		L_1 = Object_FindObjectOfType_TisTouchManager_t38556C99556388530402BB02D83E19164E477D1C_m5EC1260CBF5A537C69CB21E6C931F3108F79F0E0(Object_FindObjectOfType_TisTouchManager_t38556C99556388530402BB02D83E19164E477D1C_m5EC1260CBF5A537C69CB21E6C931F3108F79F0E0_RuntimeMethod_var);
		__this->___touchManager_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchManager_5), (void*)L_1);
		// if (dokunmaSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___dokunmaSlider_6;
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// dokunmaSlider.value = 100;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___dokunmaSlider_6;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, (100.0f));
		// dokunmaSlider.minValue = 50;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___dokunmaSlider_6;
		NullCheck(L_5);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_5, (50.0f), NULL);
		// dokunmaSlider.maxValue = 150;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___dokunmaSlider_6;
		NullCheck(L_6);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_6, (150.0f), NULL);
	}

IL_0054:
	{
		// if (suruklemeSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___suruklemeSlider_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		// suruklemeSlider.value = 50;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___suruklemeSlider_7;
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, (50.0f));
		// suruklemeSlider.minValue = 20;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___suruklemeSlider_7;
		NullCheck(L_10);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_10, (20.0f), NULL);
		// suruklemeSlider.maxValue = 250;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___suruklemeSlider_7;
		NullCheck(L_11);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_11, (250.0f), NULL);
	}

IL_0092:
	{
		// if (dokunmaHizSlider != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___dokunmaHizSlider_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_00d0;
		}
	}
	{
		// dokunmaHizSlider.value = 0.5f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___dokunmaHizSlider_8;
		NullCheck(L_14);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, (0.5f));
		// dokunmaHizSlider.minValue = 0.05f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->___dokunmaHizSlider_8;
		NullCheck(L_15);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_15, (0.0500000007f), NULL);
		// dokunmaHizSlider.maxValue = 0.5f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_16 = __this->___dokunmaHizSlider_8;
		NullCheck(L_16);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_16, (0.5f), NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void DragSettingsManager::UpdateSettingsPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragSettingsManager_UpdateSettingsPanel_m850ACAA37CCA2C1D7924A77E63C342DC2B8B8F96 (DragSettingsManager_t1E9D364241D9A0348BB54B5F3524F03AC8CACE3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dokunmaSlider != null && touchManager != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___dokunmaSlider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		TouchManager_t38556C99556388530402BB02D83E19164E477D1C* L_2 = __this->___touchManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// touchManager.minDragUzaklik = (int)dokunmaSlider.value;
		TouchManager_t38556C99556388530402BB02D83E19164E477D1C* L_4 = __this->___touchManager_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->___dokunmaSlider_6;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_4);
		L_4->___minDragUzaklik_8 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
	}

IL_0033:
	{
		// if (suruklemeSlider != null && touchManager != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___suruklemeSlider_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		TouchManager_t38556C99556388530402BB02D83E19164E477D1C* L_9 = __this->___touchManager_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// touchManager.minSwipeDistance = (int)suruklemeSlider.value;
		TouchManager_t38556C99556388530402BB02D83E19164E477D1C* L_11 = __this->___touchManager_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___suruklemeSlider_7;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_12);
		NullCheck(L_11);
		L_11->___minSwipeDistance_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_13);
	}

IL_0066:
	{
		// if (dokunmaSlider != null && gameManager != null)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___dokunmaSlider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0098;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = __this->___gameManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0098;
		}
	}
	{
		// gameManager.minDokunmaZamani = dokunmaHizSlider.value;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = __this->___gameManager_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___dokunmaHizSlider_8;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_19);
		NullCheck(L_18);
		L_18->___minDokunmaZamani_32 = L_20;
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void DragSettingsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragSettingsManager__ctor_mF1864CCB191EE704BD2AAB59A512661BBA1F0E80 (DragSettingsManager_t1E9D364241D9A0348BB54B5F3524F03AC8CACE3A* __this, const RuntimeMethod* method) 
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
// System.Void FirstSquareController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstSquareController_OnEnable_m2B5A3931FA0E9084F0A3F85B29409FC8D9694121 (FirstSquareController_t9F2EDD03BC3578BD6A238B6D95CF852546B98820* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstSquareController_ChangeColor_mE71BA2EED3416377FC7079A999EBDD38782781EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TestEventManager.OnClicked += ChangeColor;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_0 = (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)il2cpp_codegen_object_new(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ClickAction__ctor_m43E131CBD548878A191B53BDACBE3D0BA23A45B2(L_0, __this, (intptr_t)((void*)FirstSquareController_ChangeColor_mE71BA2EED3416377FC7079A999EBDD38782781EA_RuntimeMethod_var), NULL);
		TestEventManager_add_OnClicked_m81CFBB5F9780909928BF17DFB1C0927159A4AED6(L_0, NULL);
		// }
		return;
	}
}
// System.Void FirstSquareController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstSquareController_OnDisable_m0ED8DA122AA1408F18BC09DF8102035061F36B7E (FirstSquareController_t9F2EDD03BC3578BD6A238B6D95CF852546B98820* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstSquareController_ChangeColor_mE71BA2EED3416377FC7079A999EBDD38782781EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TestEventManager.OnClicked -= ChangeColor;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_0 = (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)il2cpp_codegen_object_new(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ClickAction__ctor_m43E131CBD548878A191B53BDACBE3D0BA23A45B2(L_0, __this, (intptr_t)((void*)FirstSquareController_ChangeColor_mE71BA2EED3416377FC7079A999EBDD38782781EA_RuntimeMethod_var), NULL);
		TestEventManager_remove_OnClicked_mCAF6AEF4C382BD46CEB374EBA4C7F7944197B465(L_0, NULL);
		// }
		return;
	}
}
// System.Void FirstSquareController::ChangeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstSquareController_ChangeColor_mE71BA2EED3416377FC7079A999EBDD38782781EA (FirstSquareController_t9F2EDD03BC3578BD6A238B6D95CF852546B98820* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color color = new Color(Random.value, Random.value, Random.value);
		float L_0;
		L_0 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_2;
		L_2 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), L_0, L_1, L_2, NULL);
		// GetComponent<SpriteRenderer>().color = color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void FirstSquareController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstSquareController__ctor_m68DB911475FD966D6252DDA8D40E28B26BDB0CAA (FirstSquareController_t9F2EDD03BC3578BD6A238B6D95CF852546B98820* __this, const RuntimeMethod* method) 
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
// System.Void SecondSquareController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondSquareController_OnEnable_m358BD40951A8D673C90EC74E6B2787710FAD7EF6 (SecondSquareController_tE97038ED8A4043F27F78D6A13F65DB6577F7CA33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecondSquareController_TurnObject_m7D09C3316B799494F0CDE49A33C838EE9019AC14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TestEventManager.OnClicked += TurnObject;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_0 = (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)il2cpp_codegen_object_new(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ClickAction__ctor_m43E131CBD548878A191B53BDACBE3D0BA23A45B2(L_0, __this, (intptr_t)((void*)SecondSquareController_TurnObject_m7D09C3316B799494F0CDE49A33C838EE9019AC14_RuntimeMethod_var), NULL);
		TestEventManager_add_OnClicked_m81CFBB5F9780909928BF17DFB1C0927159A4AED6(L_0, NULL);
		// }
		return;
	}
}
// System.Void SecondSquareController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondSquareController_OnDisable_m97CA45887D1848DE8F6AB24C47F68FA0034CD634 (SecondSquareController_tE97038ED8A4043F27F78D6A13F65DB6577F7CA33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecondSquareController_TurnObject_m7D09C3316B799494F0CDE49A33C838EE9019AC14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TestEventManager.OnClicked -= TurnObject;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_0 = (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)il2cpp_codegen_object_new(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ClickAction__ctor_m43E131CBD548878A191B53BDACBE3D0BA23A45B2(L_0, __this, (intptr_t)((void*)SecondSquareController_TurnObject_m7D09C3316B799494F0CDE49A33C838EE9019AC14_RuntimeMethod_var), NULL);
		TestEventManager_remove_OnClicked_mCAF6AEF4C382BD46CEB374EBA4C7F7944197B465(L_0, NULL);
		// }
		return;
	}
}
// System.Void SecondSquareController::TurnObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondSquareController_TurnObject_m7D09C3316B799494F0CDE49A33C838EE9019AC14 (SecondSquareController_tE97038ED8A4043F27F78D6A13F65DB6577F7CA33* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(new Vector3(0,0,30));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (30.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SecondSquareController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondSquareController__ctor_mACCA2380964DA0CEEF12B6F030949CE6E2234D3E (SecondSquareController_tE97038ED8A4043F27F78D6A13F65DB6577F7CA33* __this, const RuntimeMethod* method) 
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
// System.Void TestEventManager::add_OnClicked(TestEventManager/ClickAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestEventManager_add_OnClicked_m81CFBB5F9780909928BF17DFB1C0927159A4AED6 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* V_0 = NULL;
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* V_1 = NULL;
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* V_2 = NULL;
	{
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_0 = ((TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_StaticFields*)il2cpp_codegen_static_fields_for(TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var))->___OnClicked_4;
		V_0 = L_0;
	}

IL_0006:
	{
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_1 = V_0;
		V_1 = L_1;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_2 = V_1;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)CastclassSealed((RuntimeObject*)L_4, ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var));
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_5 = V_2;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_6 = V_1;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_7;
		L_7 = InterlockedCompareExchangeImpl<ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*>((&((TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_StaticFields*)il2cpp_codegen_static_fields_for(TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var))->___OnClicked_4), L_5, L_6);
		V_0 = L_7;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_8 = V_0;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_9 = V_1;
		if ((!(((RuntimeObject*)(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)L_8) == ((RuntimeObject*)(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TestEventManager::remove_OnClicked(TestEventManager/ClickAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestEventManager_remove_OnClicked_mCAF6AEF4C382BD46CEB374EBA4C7F7944197B465 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* V_0 = NULL;
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* V_1 = NULL;
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* V_2 = NULL;
	{
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_0 = ((TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_StaticFields*)il2cpp_codegen_static_fields_for(TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var))->___OnClicked_4;
		V_0 = L_0;
	}

IL_0006:
	{
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_1 = V_0;
		V_1 = L_1;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_2 = V_1;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)CastclassSealed((RuntimeObject*)L_4, ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A_il2cpp_TypeInfo_var));
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_5 = V_2;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_6 = V_1;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_7;
		L_7 = InterlockedCompareExchangeImpl<ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*>((&((TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_StaticFields*)il2cpp_codegen_static_fields_for(TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var))->___OnClicked_4), L_5, L_6);
		V_0 = L_7;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_8 = V_0;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_9 = V_1;
		if ((!(((RuntimeObject*)(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)L_8) == ((RuntimeObject*)(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TestEventManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestEventManager_Update_mC90066876B443C4D54DBAE83476EAFD8D6472B91 (TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* G_B3_0 = NULL;
	ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* G_B2_0 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// OnClicked?.Invoke();
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_1 = ((TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_StaticFields*)il2cpp_codegen_static_fields_for(TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022_il2cpp_TypeInfo_var))->___OnClicked_4;
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_inline(G_B3_0, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void TestEventManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestEventManager__ctor_m8EF45D545D73064A31C6EC8856D4262589B08E18 (TestEventManager_tF348D803B47DF96C6C191731F30526C92F48A022* __this, const RuntimeMethod* method) 
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
void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_Multicast(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* currentDelegate = reinterpret_cast<ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_OpenInst(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_OpenStatic(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_OpenStaticInvoker(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_ClosedStaticInvoker(ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TestEventManager/ClickAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickAction__ctor_m43E131CBD548878A191B53BDACBE3D0BA23A45B2 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_Multicast;
}
// System.Void TestEventManager/ClickAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TestEventManager/ClickAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClickAction_BeginInvoke_m3011E1B807B1DEBA6AFC9DB8F9F28A69D04C174B (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void TestEventManager/ClickAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickAction_EndInvoke_mD05F7D315395806D3AB41DB56917883808791B09 (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchManager::add_DragEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_add_DragEvent_mD23665D160A937186689317B8363B46A296D6F46 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_0 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_1 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_2 = NULL;
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___DragEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = V_0;
		V_1 = L_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)CastclassSealed((RuntimeObject*)L_4, TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var));
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_5 = V_2;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_6 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_7;
		L_7 = InterlockedCompareExchangeImpl<TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*>((&((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___DragEvent_4), L_5, L_6);
		V_0 = L_7;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_8 = V_0;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_9 = V_1;
		if ((!(((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_8) == ((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TouchManager::remove_DragEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_remove_DragEvent_m55301CE4C63CDFC40F9B15BD575DA52D82976D80 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_0 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_1 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_2 = NULL;
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___DragEvent_4;
		V_0 = L_0;
	}

IL_0006:
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = V_0;
		V_1 = L_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)CastclassSealed((RuntimeObject*)L_4, TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var));
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_5 = V_2;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_6 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_7;
		L_7 = InterlockedCompareExchangeImpl<TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*>((&((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___DragEvent_4), L_5, L_6);
		V_0 = L_7;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_8 = V_0;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_9 = V_1;
		if ((!(((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_8) == ((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TouchManager::add_SwipeEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_add_SwipeEvent_m1C429B529DC5A59B8FF0D077C893821F7E09926E (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_0 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_1 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_2 = NULL;
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___SwipeEvent_5;
		V_0 = L_0;
	}

IL_0006:
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = V_0;
		V_1 = L_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)CastclassSealed((RuntimeObject*)L_4, TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var));
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_5 = V_2;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_6 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_7;
		L_7 = InterlockedCompareExchangeImpl<TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*>((&((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___SwipeEvent_5), L_5, L_6);
		V_0 = L_7;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_8 = V_0;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_9 = V_1;
		if ((!(((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_8) == ((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TouchManager::remove_SwipeEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_remove_SwipeEvent_m27AD7B71DBCB81AA70BC9D61A96EACA88A6344C8 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_0 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_1 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_2 = NULL;
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___SwipeEvent_5;
		V_0 = L_0;
	}

IL_0006:
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = V_0;
		V_1 = L_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)CastclassSealed((RuntimeObject*)L_4, TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var));
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_5 = V_2;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_6 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_7;
		L_7 = InterlockedCompareExchangeImpl<TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*>((&((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___SwipeEvent_5), L_5, L_6);
		V_0 = L_7;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_8 = V_0;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_9 = V_1;
		if ((!(((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_8) == ((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TouchManager::add_TapEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_add_TapEvent_m8AAFCB2186EB5CF8A5D0D81C223F5D276204DA70 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_0 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_1 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_2 = NULL;
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___TapEvent_6;
		V_0 = L_0;
	}

IL_0006:
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = V_0;
		V_1 = L_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)CastclassSealed((RuntimeObject*)L_4, TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var));
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_5 = V_2;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_6 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_7;
		L_7 = InterlockedCompareExchangeImpl<TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*>((&((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___TapEvent_6), L_5, L_6);
		V_0 = L_7;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_8 = V_0;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_9 = V_1;
		if ((!(((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_8) == ((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TouchManager::remove_TapEvent(TouchManager/TouchEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_remove_TapEvent_m1CCFE4472DD6E0D1C8F3DB0D87607C4277327D77 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_0 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_1 = NULL;
	TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* V_2 = NULL;
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___TapEvent_6;
		V_0 = L_0;
	}

IL_0006:
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = V_0;
		V_1 = L_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_2 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)CastclassSealed((RuntimeObject*)L_4, TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2_il2cpp_TypeInfo_var));
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_5 = V_2;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_6 = V_1;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_7;
		L_7 = InterlockedCompareExchangeImpl<TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*>((&((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___TapEvent_6), L_5, L_6);
		V_0 = L_7;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_8 = V_0;
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_9 = V_1;
		if ((!(((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_8) == ((RuntimeObject*)(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TouchManager::Clicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_Clicked_mF38421FF49B97BF1C8A215E8030DD5C9BED57063 (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TapEvent!= null)
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___TapEvent_6;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// TapEvent(touchMove);
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___TapEvent_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___touchMove_7;
		NullCheck(L_1);
		TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_inline(L_1, L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void TouchManager::SwipeFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_SwipeFnc_mE3FD17130BF5C5C1A0FC45D6542499EAA349643C (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DragEvent != null)
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___DragEvent_4;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// DragEvent(touchMove);
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___DragEvent_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___touchMove_7;
		NullCheck(L_1);
		TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_inline(L_1, L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void TouchManager::SwipeEndFnc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_SwipeEndFnc_m42C6D8869F0ACB2BC05ED15F7098CBA3D3742A46 (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SwipeEvent != null)
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_0 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___SwipeEvent_5;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// SwipeEvent(touchMove);
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* L_1 = ((TouchManager_t38556C99556388530402BB02D83E19164E477D1C_StaticFields*)il2cpp_codegen_static_fields_for(TouchManager_t38556C99556388530402BB02D83E19164E477D1C_il2cpp_TypeInfo_var))->___SwipeEvent_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___touchMove_7;
		NullCheck(L_1);
		TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_inline(L_1, L_2, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.String TouchManager::SwipeTani(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TouchManager_SwipeTani_m272F739E77CE1D35C5D583A2079BBA11CB0004EF (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_surukleHareketi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DEBB2C2B57EEE32D11A6037F959AE7F1EA007D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94514A06DA6CAD43EAC4B195BF6B84F816DC7F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3F90389C65DFB594960A31CACC44D314A33FCB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// string direction = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (Mathf.Abs(surukleHareketi.x) > Mathf.Abs(surukleHareketi.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_surukleHareketi;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_surukleHareketi;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_003a;
		}
	}
	{
		// direction = (surukleHareketi.x >= 0) ? "sag" : "sol";
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_surukleHareketi;
		float L_7 = L_6.___x_0;
		if ((((float)L_7) >= ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		G_B4_0 = _stringLiteralEC19981D10E4DFF34F5764FEEB856880224D055D;
		goto IL_0037;
	}

IL_0032:
	{
		G_B4_0 = _stringLiteral2DEBB2C2B57EEE32D11A6037F959AE7F1EA007D2;
	}

IL_0037:
	{
		V_0 = G_B4_0;
		goto IL_0054;
	}

IL_003a:
	{
		// direction = (surukleHareketi.y >= 0) ? "yukari" : "asagi";
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_surukleHareketi;
		float L_9 = L_8.___y_1;
		if ((((float)L_9) >= ((float)(0.0f))))
		{
			goto IL_004e;
		}
	}
	{
		G_B8_0 = _stringLiteralD3F90389C65DFB594960A31CACC44D314A33FCB5;
		goto IL_0053;
	}

IL_004e:
	{
		G_B8_0 = _stringLiteral94514A06DA6CAD43EAC4B195BF6B84F816DC7F80;
	}

IL_0053:
	{
		V_0 = G_B8_0;
	}

IL_0054:
	{
		// return direction;
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.Void TouchManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager_Update_m616B79BF04444263CF5F89ECE58BC0CEA44B2575 (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount>0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		// Touch touch = Input.touches[0];
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (touch.phase==TouchPhase.Began)
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		// touchMove = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___touchMove_7 = L_5;
		// tiklamaMaxSure = Time.time + ekranaTiklamaSuresi;
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_7 = __this->___ekranaTiklamaSuresi_12;
		__this->___tiklamaMaxSure_11 = ((float)il2cpp_codegen_add(L_6, L_7));
		return;
	}

IL_003e:
	{
		// else if (touch.phase==TouchPhase.Moved || touch.phase==TouchPhase.Stationary)
		int32_t L_8;
		L_8 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9;
		L_9 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0085;
		}
	}

IL_0052:
	{
		// touchMove += touch.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___touchMove_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_10, L_11, NULL);
		__this->___touchMove_7 = L_12;
		// if (touchMove.magnitude>minDragUzaklik)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___touchMove_7);
		float L_14;
		L_14 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_13, NULL);
		int32_t L_15 = __this->___minDragUzaklik_8;
		if ((!(((float)L_14) > ((float)((float)L_15)))))
		{
			goto IL_00bd;
		}
	}
	{
		// SwipeFnc();
		TouchManager_SwipeFnc_mE3FD17130BF5C5C1A0FC45D6542499EAA349643C(__this, NULL);
		return;
	}

IL_0085:
	{
		// else if (touch.phase==TouchPhase.Ended)
		int32_t L_16;
		L_16 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_00bd;
		}
	}
	{
		// if (touchMove.magnitude>minSwipeDistance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___touchMove_7);
		float L_18;
		L_18 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_17, NULL);
		int32_t L_19 = __this->___minSwipeDistance_9;
		if ((!(((float)L_18) > ((float)((float)L_19)))))
		{
			goto IL_00aa;
		}
	}
	{
		// SwipeEndFnc();
		TouchManager_SwipeEndFnc_m42C6D8869F0ACB2BC05ED15F7098CBA3D3742A46(__this, NULL);
		return;
	}

IL_00aa:
	{
		// else if (Time.time<tiklamaMaxSure)
		float L_20;
		L_20 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_21 = __this->___tiklamaMaxSure_11;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00bd;
		}
	}
	{
		// Clicked();
		TouchManager_Clicked_mF38421FF49B97BF1C8A215E8030DD5C9BED57063(__this, NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void TouchManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManager__ctor_m0EAB0489A0B81847F07F4C25B6AD78A22E96AE7D (TouchManager_t38556C99556388530402BB02D83E19164E477D1C* __this, const RuntimeMethod* method) 
{
	{
		// [Range(50, 250)] public int minDragUzaklik = 100;
		__this->___minDragUzaklik_8 = ((int32_t)100);
		// public int minSwipeDistance = 50; //minimum surukleme uzakligi
		__this->___minSwipeDistance_9 = ((int32_t)50);
		// public float ekranaTiklamaSuresi = .1f;
		__this->___ekranaTiklamaSuresi_12 = (0.100000001f);
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
void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_Multicast(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* currentDelegate = reinterpret_cast<TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_swipePos, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_OpenInst(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_swipePos, method);
}
void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_OpenStatic(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_swipePos, method);
}
void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_OpenStaticInvoker(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_swipePos);
}
void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_ClosedStaticInvoker(TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_swipePos);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_swipePos);

}
// System.Void TouchManager/TouchEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchEventDelegate__ctor_m5CD85FE27064E34E1F32177072BD815A44B527AB (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_Multicast;
}
// System.Void TouchManager/TouchEventDelegate::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_swipePos, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TouchManager/TouchEventDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchEventDelegate_BeginInvoke_m215DDA4FC5BDBADB1CD1F50F1CFB57C3B356B1F2 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___0_swipePos);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TouchManager/TouchEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchEventDelegate_EndInvoke_m73A65960B6AC99D951F2194FB1D94789526E7CC7 (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParticleManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleManager_Start_m27E75E0F01B69A90E93E9ED01D71C4A63CEF056D (ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// allEffects = GetComponentsInChildren<ParticleSystem>();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0;
		L_0 = Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D(__this, Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		__this->___allEffects_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allEffects_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ParticleManager::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleManager_PlayEffect_m523FB25CC9F50D5D0CEB1244C25674A92C328C4C (ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* __this, const RuntimeMethod* method) 
{
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (ParticleSystem effect in allEffects)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = __this->___allEffects_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// foreach (ParticleSystem effect in allEffects)
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// effect.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = L_4;
		NullCheck(L_5);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_5, NULL);
		// effect.Play();
		NullCheck(L_5);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// foreach (ParticleSystem effect in allEffects)
		int32_t L_7 = V_1;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ParticleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleManager__ctor_mC4857BA72CB7DC629CC940CFE8D69D3E21B12E56 (ParticleManager_t02429C82CA8A47B56B83960CE0CE2DC00DBF8C1B* __this, const RuntimeMethod* method) 
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_m114BCC9E38EB73FB08543ABE6B95FFA5756D7AF7 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// randomMusicClip = RandomChoose(musicClips);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___musicClips_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = SoundManager_RandomChoose_m1FD4B68DC0E0285FA21122CCC3121CEC9A9824B7(__this, L_0, NULL);
		__this->___randomMusicClip_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomMusicClip_7), (void*)L_1);
		// BackgroundMusic(randomMusicClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___randomMusicClip_7;
		SoundManager_BackgroundMusic_mDC6D4053AB8F7717E7D8018F916170EBF96156A2(__this, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.AudioClip SoundManager::RandomChoose(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* SoundManager_RandomChoose_m1FD4B68DC0E0285FA21122CCC3121CEC9A9824B7 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___0_clips, const RuntimeMethod* method) 
{
	{
		// AudioClip randomClip = clips[Random.Range(0, clips.Length)];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = ___0_clips;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = ___0_clips;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// return randomClip;
		return L_4;
	}
}
// System.Void SoundManager::BackgroundMusic(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_BackgroundMusic_mDC6D4053AB8F7717E7D8018F916170EBF96156A2 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_musicClip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!musicClip || !musicSource || !isMusicRun)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_musicClip;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___musicSource_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		bool L_4 = __this->___isMusicRun_8;
		if (L_4)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// musicSource.volume = PlayerPrefs.GetFloat("musicVolume");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___musicSource_6;
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		NullCheck(L_5);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_5, L_6, NULL);
		// musicSource.clip = musicClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___musicSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = ___0_musicClip;
		NullCheck(L_7);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_7, L_8, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___musicSource_6;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::MusicUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_MusicUpdate_m7E615F22ED614B07DA0EAC54BFF10E8CDAB3D36C (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// if (musicSource.isPlaying!=isMusicRun)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		bool L_2 = __this->___isMusicRun_8;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0045;
		}
	}
	{
		// if (isMusicRun)
		bool L_3 = __this->___isMusicRun_8;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// randomMusicClip = RandomChoose(musicClips);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_4 = __this->___musicClips_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = SoundManager_RandomChoose_m1FD4B68DC0E0285FA21122CCC3121CEC9A9824B7(__this, L_4, NULL);
		__this->___randomMusicClip_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___randomMusicClip_7), (void*)L_5);
		// BackgroundMusic(randomMusicClip);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___randomMusicClip_7;
		SoundManager_BackgroundMusic_mDC6D4053AB8F7717E7D8018F916170EBF96156A2(__this, L_6, NULL);
		return;
	}

IL_003a:
	{
		// musicSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___musicSource_6;
		NullCheck(L_7);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_7, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void SoundManager::MusicTurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_MusicTurnOff_m4141E8B1415722D29830D508DC924E3E0E728AF4 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// isMusicRun = !isMusicRun;
		bool L_0 = __this->___isMusicRun_8;
		__this->___isMusicRun_8 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// MusicUpdate();
		SoundManager_MusicUpdate_m7E615F22ED614B07DA0EAC54BFF10E8CDAB3D36C(__this, NULL);
		// musicIcon.IconTurn(isMusicRun);
		IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* L_1 = __this->___musicIcon_12;
		bool L_2 = __this->___isMusicRun_8;
		NullCheck(L_1);
		IconManager_IconTurn_mC4D1D3E52B2B18BB578046C4D65A9FD6C25BE8E3(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::SoundEffectRun(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, int32_t ___0_whichSound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8926C6AE3D1340D4ACC8C2BB0EDCAB6AF0CEA90B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isEffectRun && whichSound < soundEffects.Length)
		bool L_0 = __this->___isEffectRun_9;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_1 = ___0_whichSound;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_2 = __this->___soundEffects_10;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// soundEffects[whichSound].volume = PlayerPrefs.GetFloat("FxVolume");
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_3 = __this->___soundEffects_10;
		int32_t L_4 = ___0_whichSound;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7;
		L_7 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral8926C6AE3D1340D4ACC8C2BB0EDCAB6AF0CEA90B, NULL);
		NullCheck(L_6);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_6, L_7, NULL);
		// soundEffects[whichSound].Stop();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_8 = __this->___soundEffects_10;
		int32_t L_9 = ___0_whichSound;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_11, NULL);
		// soundEffects[whichSound].Play();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_12 = __this->___soundEffects_10;
		int32_t L_13 = ___0_whichSound;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_15, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void SoundManager::FXTurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_FXTurnOff_m9FD2591499B4EF1F4701526E72A7BD5C54466BEA (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// isEffectRun = !isEffectRun;
		bool L_0 = __this->___isEffectRun_9;
		__this->___isEffectRun_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// fxIcon.IconTurn(isEffectRun);
		IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* L_1 = __this->___fxIcon_13;
		bool L_2 = __this->___isEffectRun_9;
		NullCheck(L_1);
		IconManager_IconTurn_mC4D1D3E52B2B18BB578046C4D65A9FD6C25BE8E3(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::LocalSoundRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_LocalSoundRun_mB3929958F5F434E83BBE126D49B8AFFAA4014F38 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// if (isEffectRun)
		bool L_0 = __this->___isEffectRun_9;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// AudioSource source = vocalClips[Random.Range(0, vocalClips.Length)];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_1 = __this->___vocalClips_11;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_2 = __this->___vocalClips_11;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// source.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5;
		NullCheck(L_6);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_6, NULL);
		// source.Play();
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// public bool isMusicRun=true;
		__this->___isMusicRun_8 = (bool)1;
		// public bool isEffectRun = true;
		__this->___isEffectRun_9 = (bool)1;
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
// System.Void IconManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IconManager_Start_mC8A1E58021AE2DFEC65EF1A4DF76642255259BA3 (IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	{
		// iconImg = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___iconImg_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iconImg_6), (void*)L_0);
		// iconImg.sprite = (isCurrentIcon) ? onIcon : offIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___iconImg_6;
		bool L_2 = __this->___isCurrentIcon_7;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0022;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___offIcon_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0022:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___onIcon_4;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void IconManager::IconTurn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IconManager_IconTurn_mC4D1D3E52B2B18BB578046C4D65A9FD6C25BE8E3 (IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* __this, bool ___0_icon, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B6_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B5_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B7_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_1 = NULL;
	{
		// if (!iconImg || !onIcon || !offIcon)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___iconImg_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___onIcon_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___offIcon_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// iconImg.sprite = (icon) ? onIcon : offIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___iconImg_6;
		bool L_7 = ___0_icon;
		G_B5_0 = L_6;
		if (L_7)
		{
			G_B6_0 = L_6;
			goto IL_0039;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___offIcon_5;
		G_B7_0 = L_8;
		G_B7_1 = G_B5_0;
		goto IL_003f;
	}

IL_0039:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = __this->___onIcon_4;
		G_B7_0 = L_9;
		G_B7_1 = G_B6_0;
	}

IL_003f:
	{
		NullCheck(G_B7_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B7_1, G_B7_0, NULL);
		// }
		return;
	}
}
// System.Void IconManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IconManager__ctor_m029ADB05FC0709B02CDA0F66558B203D4386F08C (IconManager_t5C3395639561B71318DB2B5C70BD624C5AC01E5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool isCurrentIcon = true;
		__this->___isCurrentIcon_7 = (bool)1;
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
// System.Void IntroManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroManager_Awake_m402CA339E82E43D77EB81B82B85768947FED907E (IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		__this->___gameManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void IntroManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroManager_Start_m72CB22556491D6380E44B3BC8E9D17B5D91566B6 (IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(OpenNumbersRoutine());
		RuntimeObject* L_0;
		L_0 = IntroManager_OpenNumbersRoutine_m9D98364FB744E21C31A8A62907B3D215EDDFD7BD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator IntroManager::OpenNumbersRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntroManager_OpenNumbersRoutine_m9D98364FB744E21C31A8A62907B3D215EDDFD7BD (IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* L_0 = (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91*)il2cpp_codegen_object_new(U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenNumbersRoutineU3Ed__5__ctor_mFFAFFA0367B499D4BA1BE9EC4EBFC2C2F77F1B2A(L_0, 0, NULL);
		U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void IntroManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroManager__ctor_m9FA97A0D02CBF5D1D6B050A1779F3439A7C56D1F (IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* __this, const RuntimeMethod* method) 
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
// System.Void IntroManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m90A922F10BFAC97B26C24C1E1BD33C18A7CFC775 (U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void IntroManager/<>c__DisplayClass5_0::<OpenNumbersRoutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__0_mC6334450FA5B28361B889F9D18EDB48E5B5463B6 (U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// numbers[counter].GetComponent<RectTransform>().DOScale(1f,0.3f).SetEase(Ease.InBack));
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = L_0->___numbers_4;
		int32_t L_2 = __this->___counter_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_4, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_6;
		L_6 = ShortcutExtensions_DOScale_m5935113B55474CC0551EF8A8EA3CFA82371D5E99(L_5, (1.0f), (0.300000012f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_7;
		L_7 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_6, ((int32_t)26), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		return;
	}
}
// System.Void IntroManager/<>c__DisplayClass5_0::<OpenNumbersRoutine>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__1_m863D571C4C1448B4A4CE3D4BD750490F26BEEE49 (U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* __this, const RuntimeMethod* method) 
{
	{
		// numbersTransform.transform.parent.gameObject.SetActive(false);
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___numbersTransform_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// gameManager.StartGame();
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = L_5->___gameManager_6;
		NullCheck(L_6);
		GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7(L_6, NULL);
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
// System.Void IntroManager/<OpenNumbersRoutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenNumbersRoutineU3Ed__5__ctor_mFFAFFA0367B499D4BA1BE9EC4EBFC2C2F77F1B2A (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void IntroManager/<OpenNumbersRoutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenNumbersRoutineU3Ed__5_System_IDisposable_Dispose_m0164E46288CF38E64284C9BE5F9A84EED591FB28 (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean IntroManager/<OpenNumbersRoutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenNumbersRoutineU3Ed__5_MoveNext_mDF7053FEFC0136E643A65B6056E7BC157D53C290 (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_m0D14325CA867AA1EDF52A00D01D1C8301ABB30AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__0_mC6334450FA5B28361B889F9D18EDB48E5B5463B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__1_m863D571C4C1448B4A4CE3D4BD750490F26BEEE49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_0188;
			}
			case 4:
			{
				goto IL_01ec;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_3 = (U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass5_0__ctor_m90A922F10BFAC97B26C24C1E1BD33C18A7CFC775(L_3, NULL);
		__this->___U3CU3E8__1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_3);
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_4 = __this->___U3CU3E8__1_3;
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_0), (void*)L_5);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// numbersTransform.GetComponent<RectTransform>().DORotate(Vector3.zero, 0.3f).SetEase(Ease.OutBack);
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___numbersTransform_5;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_8, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_11;
		L_11 = ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470(L_9, L_10, (0.300000012f), 0, NULL);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_12;
		L_12 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE(L_11, ((int32_t)27), TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE_RuntimeMethod_var);
		// numbersTransform.GetComponent<CanvasGroup>().DOFade(1f, 0.3f);
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___numbersTransform_5;
		NullCheck(L_14);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_15;
		L_15 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_14, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_16;
		L_16 = DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C(L_15, (1.0f), (0.300000012f), NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_17, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int counter = 0;
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_18 = __this->___U3CU3E8__1_3;
		NullCheck(L_18);
		L_18->___counter_1 = 0;
		goto IL_01f3;
	}

IL_00dc:
	{
		// numbers[counter].GetComponent<RectTransform>().DOLocalMoveY(0, 0.5f);
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_19 = V_1;
		NullCheck(L_19);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = L_19->___numbers_4;
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_21 = __this->___U3CU3E8__1_3;
		NullCheck(L_21);
		int32_t L_22 = L_21->___counter_1;
		NullCheck(L_20);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25;
		L_25 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_24, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_26;
		L_26 = ShortcutExtensions_DOLocalMoveY_mA4BDBF3ACA5B305B59551FBF9813D5BF35487CD5(L_25, (0.0f), (0.5f), (bool)0, NULL);
		// numbers[counter].GetComponent<CanvasGroup>().DOFade(1f, 0.5f);
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_27 = V_1;
		NullCheck(L_27);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = L_27->___numbers_4;
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_29 = __this->___U3CU3E8__1_3;
		NullCheck(L_29);
		int32_t L_30 = L_29->___counter_1;
		NullCheck(L_28);
		int32_t L_31 = L_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_33;
		L_33 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_32, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_34;
		L_34 = DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C(L_33, (1.0f), (0.5f), NULL);
		// numbers[counter].GetComponent<RectTransform>().DOScale(2f, 0.3f).SetEase(Ease.OutBounce).OnComplete(()=>
		//     numbers[counter].GetComponent<RectTransform>().DOScale(1f,0.3f).SetEase(Ease.InBack));
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_35 = V_1;
		NullCheck(L_35);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = L_35->___numbers_4;
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_37 = __this->___U3CU3E8__1_3;
		NullCheck(L_37);
		int32_t L_38 = L_37->___counter_1;
		NullCheck(L_36);
		int32_t L_39 = L_38;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41;
		L_41 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_40, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_42;
		L_42 = ShortcutExtensions_DOScale_m5935113B55474CC0551EF8A8EA3CFA82371D5E99(L_41, (2.0f), (0.300000012f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_43;
		L_43 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_42, ((int32_t)30), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_44 = __this->___U3CU3E8__1_3;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_45 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__0_mC6334450FA5B28361B889F9D18EDB48E5B5463B6_RuntimeMethod_var), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_46;
		L_46 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F(L_43, L_45, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_47 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_47, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_47);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0188:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// counter++;
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_48 = __this->___U3CU3E8__1_3;
		NullCheck(L_48);
		int32_t L_49 = L_48->___counter_1;
		V_2 = L_49;
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_50 = __this->___U3CU3E8__1_3;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		L_50->___counter_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		// numbers[counter-1].GetComponent<RectTransform>().DOLocalMoveY(150f, 0.5f);
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_52 = V_1;
		NullCheck(L_52);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_53 = L_52->___numbers_4;
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_54 = __this->___U3CU3E8__1_3;
		NullCheck(L_54);
		int32_t L_55 = L_54->___counter_1;
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58;
		L_58 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_57, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_59;
		L_59 = ShortcutExtensions_DOLocalMoveY_mA4BDBF3ACA5B305B59551FBF9813D5BF35487CD5(L_58, (150.0f), (0.5f), (bool)0, NULL);
		// yield return new WaitForSeconds(.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_60 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_60, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_60);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_01ec:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01f3:
	{
		// while (counter<numbers.Length)
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_61 = __this->___U3CU3E8__1_3;
		NullCheck(L_61);
		int32_t L_62 = L_61->___counter_1;
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_63 = V_1;
		NullCheck(L_63);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_64 = L_63->___numbers_4;
		NullCheck(L_64);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
		{
			goto IL_00dc;
		}
	}
	{
		// numbersTransform.GetComponent<CanvasGroup>().DOFade(0f, 0.5f).OnComplete(() =>
		//     {
		//         //geri sayma bittiginde intro panelini kapat
		//         numbersTransform.transform.parent.gameObject.SetActive(false);
		// 
		//         //oyunu baslat
		//         gameManager.StartGame();
		//     }
		// 
		// 
		//     );
		IntroManager_tF4C788FA2F24CD86D9EBAC522769A95B766FA709* L_65 = V_1;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = L_65->___numbersTransform_5;
		NullCheck(L_66);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_67;
		L_67 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_66, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_68;
		L_68 = DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C(L_67, (0.0f), (0.5f), NULL);
		U3CU3Ec__DisplayClass5_0_t7D5F869A47B3023DACA517A9B6507E4FAF56C9AD* L_69 = __this->___U3CU3E8__1_3;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_70 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_70, L_69, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COpenNumbersRoutineU3Eb__1_m863D571C4C1448B4A4CE3D4BD750490F26BEEE49_RuntimeMethod_var), NULL);
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_71;
		L_71 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_m0D14325CA867AA1EDF52A00D01D1C8301ABB30AB(L_68, L_70, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_m0D14325CA867AA1EDF52A00D01D1C8301ABB30AB_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object IntroManager/<OpenNumbersRoutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenNumbersRoutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m77E56FB2CCD10EDD215F47151743170139592802 (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void IntroManager/<OpenNumbersRoutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenNumbersRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m5C9D63C8239E98088CC47C8BACFBE2D75301003A (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenNumbersRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m5C9D63C8239E98088CC47C8BACFBE2D75301003A_RuntimeMethod_var)));
	}
}
// System.Object IntroManager/<OpenNumbersRoutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenNumbersRoutineU3Ed__5_System_Collections_IEnumerator_get_Current_mD866F50726E3F424F6B952CFAD295F8F757D251F (U3COpenNumbersRoutineU3Ed__5_tBF503B58BC9B3F57928ACA6F9E034CD7C66C2C91* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ScreenFadeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFadeManager_Start_m4A94DFE3E9938393D743CA0B4FDB8E5C6F574023 (ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<CanvasGroup>().alpha = startAlpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0;
		L_0 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		float L_1 = __this->___startAlpha_4;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, L_1, NULL);
		// StartCoroutine(FadeRoutine());
		RuntimeObject* L_2;
		L_2 = ScreenFadeManager_FadeRoutine_m4F4425C7A99D9C9E42970A9013D325612E94CD3F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ScreenFadeManager::FadeRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenFadeManager_FadeRoutine_m4F4425C7A99D9C9E42970A9013D325612E94CD3F (ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* L_0 = (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C*)il2cpp_codegen_object_new(U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeRoutineU3Ed__5__ctor_mFB195483CC667830B62469284AC3142FD3B9B3C8(L_0, 0, NULL);
		U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ScreenFadeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFadeManager__ctor_m9F1583B83AC2626646D04091C982127FCCCD50B7 (ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* __this, const RuntimeMethod* method) 
{
	{
		// public float startAlpha = 1f;
		__this->___startAlpha_4 = (1.0f);
		// public float fadeTime = 1f;
		__this->___fadeTime_7 = (1.0f);
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
// System.Void ScreenFadeManager/<FadeRoutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__5__ctor_mFB195483CC667830B62469284AC3142FD3B9B3C8 (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ScreenFadeManager/<FadeRoutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__5_System_IDisposable_Dispose_m9EE226D74FA62FA89612439A1EC65ADED5B5A69B (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ScreenFadeManager/<FadeRoutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeRoutineU3Ed__5_MoveNext_m0DA9D679B31FF5EAEBDFDEC166486B1B8B3B507E (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(waitingTime);
		ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___waitingTime_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GetComponent<CanvasGroup>().DOFade(endAlpha,fadeTime);
		ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* L_7 = V_1;
		NullCheck(L_7);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8;
		L_8 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_7, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___endAlpha_5;
		ScreenFadeManager_t9CCA6E446FC83755B0F2C4E9CB12C5753075BDDD* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___fadeTime_7;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_13;
		L_13 = DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C(L_8, L_10, L_12, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ScreenFadeManager/<FadeRoutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8EE631AC77B08124DB69A8531395BF59BF3CA0A4 (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ScreenFadeManager/<FadeRoutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m6C7F1B22E93D9BFA7515B965491684094EF74902 (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m6C7F1B22E93D9BFA7515B965491684094EF74902_RuntimeMethod_var)));
	}
}
// System.Object ScreenFadeManager/<FadeRoutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__5_System_Collections_IEnumerator_get_Current_m9EE81D9CBC8C89DCA9818E78AAF2E2B6BD9D2656 (U3CFadeRoutineU3Ed__5_tB26B537A1BFE9CAEB107A71D4027876E0BF1316C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_m7EC364BDD53CE056E998BAB28F79998608BB16DF (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameManager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		__this->____gameManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gameManager_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_m113F392674AB08A26877728CD36F06332E869080 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pausePanel)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pausePanel_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// pausePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pausePanel_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m95D2E80B8F461F15C1B9BD6DB0811F5CC18571AB (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// PausePanelActive();
		UIManager_PausePanelActive_mDC01CCA6AA0294B85C89748D3C648C8747F5A3F2(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void UIManager::PausePanelActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_PausePanelActive_mDC01CCA6AA0294B85C89748D3C648C8747F5A3F2 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		// if (_gameManager.isGameOver)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->____gameManager_6;
		NullCheck(L_0);
		bool L_1 = L_0->___isGameOver_24;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// isGameStop = !isGameStop;
		bool L_2 = __this->___isGameStop_4;
		__this->___isGameStop_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// if (pausePanel)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pausePanel_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		// pausePanel.SetActive(isGameStop);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___pausePanel_5;
		bool L_6 = __this->___isGameStop_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		// if (SoundManager.instance)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_7 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// SoundManager.instance.SoundEffectRun(0);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_9 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_9);
		SoundManager_SoundEffectRun_m1E8FD856DAE6242A90102A04D65C8E367D3DCF94(L_9, 0, NULL);
		// Time.timeScale = (isGameStop) ? 0 : 1; //oyun durduysa zamani durdur durmadiysa zaman aksin
		bool L_10 = __this->___isGameStop_4;
		if (L_10)
		{
			goto IL_005d;
		}
	}
	{
		G_B7_0 = 1;
		goto IL_005e;
	}

IL_005d:
	{
		G_B7_0 = 0;
	}

IL_005e:
	{
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(((float)G_B7_0), NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void UIManager::PlayAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_PlayAgain_m36900D05EE9D914B70D463A93D52B440177106E7 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClickAction_Invoke_m2DE0278ADC1D53D79F50D8403D100F5B895F8273_inline (ClickAction_tF39B36A182E6861EBA7EA166C71756195ECFC79A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchEventDelegate_Invoke_m37712941D686ED1B2D6A820F086FC504F227D09B_inline (TouchEventDelegate_t7774CFFCF7FD93222980B8E41D5E181D5613D0E2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_swipePos, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_swipePos, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
