#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Single[]>
struct Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312;
// System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32>
struct Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Unity.WebAudioMicIn>
struct Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Voice.Unity.WebAudioMicIn>
struct KeyCollection_tB97271E7D7BA029CBD10B982E76D1944F3C1CCD7;
// Photon.Voice.ObjectFactory`2<System.Single[],System.Int32>
struct ObjectFactory_2_t9EEA813BF75BBD1954AB292E356F25756B84995D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Voice.Unity.WebAudioMicIn>
struct ValueCollection_tC45CF50BD422D3B78EA8E50BE1E13E8DB42B7B1C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Voice.Unity.WebAudioMicIn>[]
struct EntryU5BU5D_t2B5945C5B33574DAA3AC8837569CC5EEDA449A5B;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Photon.Voice.ILogger
struct ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Photon.Voice.Unity.WebAudioMicIn
struct WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11;

IL2CPP_EXTERN_C RuntimeClass* Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionCategory_t1C36CB8E4F7F94A6DE2B1D509AD12AF9BA667969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionMode_tF805910784023C190A8DD567B87F621B9EA11F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8460AECBE820085F2A6606F461369091075CC52F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD09F2EC9EC9E57A1D242B44D702260D2C425B6;
IL2CPP_EXTERN_C String_t* _stringLiteralA20CCD2F538CE2EFE7F631F26456DDDBDC6BFFBC;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAD21C33A03900F77396C80A13F18FC25D4EB2F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioUtil_Resample_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1BFFB841E808DDFEDC2923086D3472190CEA17BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD0C50AB1F0E1B17CCE4AE774F3AC3BBF59D06EC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m029B1D207F02E819DD5FB935DBF8E3E8F9DA8F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebAudioMicIn_createCallbackStatic_mCD76DF7A12966E7C3357250EA7D9D4142B5C820A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebAudioMicIn_dataCallbackStatic_m5496AD53D4297D77D4016D15C4A4FC91DF4B9CE3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Unity.WebAudioMicIn>
struct Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2B5945C5B33574DAA3AC8837569CC5EEDA449A5B* ____entries_1;
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
	KeyCollection_tB97271E7D7BA029CBD10B982E76D1944F3C1CCD7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC45CF50BD422D3B78EA8E50BE1E13E8DB42B7B1C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
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

// Photon.Voice.Unity.WebAudioMicIn
struct WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11  : public RuntimeObject
{
	// Photon.Voice.ILogger Photon.Voice.Unity.WebAudioMicIn::logger
	RuntimeObject* ___logger_1;
	// System.Int32 Photon.Voice.Unity.WebAudioMicIn::handle
	int32_t ___handle_2;
	// System.Single[] Photon.Voice.Unity.WebAudioMicIn::bufSource
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___bufSource_5;
	// System.Single[] Photon.Voice.Unity.WebAudioMicIn::bufTarget
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___bufTarget_6;
	// System.Int32 Photon.Voice.Unity.WebAudioMicIn::sourceSamplingRate
	int32_t ___sourceSamplingRate_7;
	// System.Action`1<System.Single[]> Photon.Voice.Unity.WebAudioMicIn::pushCallback
	Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* ___pushCallback_8;
	// System.Boolean Photon.Voice.Unity.WebAudioMicIn::disposed
	bool ___disposed_9;
	// System.String Photon.Voice.Unity.WebAudioMicIn::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_10;
	// System.Int32 Photon.Voice.Unity.WebAudioMicIn::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_11;
	// System.Int32 Photon.Voice.Unity.WebAudioMicIn::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_12;
};

struct WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Unity.WebAudioMicIn> Photon.Voice.Unity.WebAudioMicIn::handles
	Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* ___handles_3;
	// System.Int32 Photon.Voice.Unity.WebAudioMicIn::handleCnt
	int32_t ___handleCnt_4;
};

// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 
{
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* ___CategoryOptions_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t53F4031000B73B9D47BF87B4C2CBDBF32ABDBCBB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t53F4031000B73B9D47BF87B4C2CBDBF32ABDBCBB__padding[16];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tEC72908065E42AF62CFBD51BC5355E78406A8AA4  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tEC72908065E42AF62CFBD51BC5355E78406A8AA4_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1B643E546EE1E74A344BEFB0B9CA962B3ECDCF3EDC7072BBDA19525A9109FC94
	__StaticArrayInitTypeSizeU3D16_t53F4031000B73B9D47BF87B4C2CBDBF32ABDBCBB ___1B643E546EE1E74A344BEFB0B9CA962B3ECDCF3EDC7072BBDA19525A9109FC94_0;
};

// Photon.Voice.IOS.AudioSessionCategoryOption
struct AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3 
{
	// System.Int32 Photon.Voice.IOS.AudioSessionCategoryOption::value__
	int32_t ___value___2;
};

// Photon.Voice.IOS.AudioSessionParametersPresets
struct AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E  : public RuntimeObject
{
};

struct AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields
{
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioSessionParametersPresets::Game
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___Game_0;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioSessionParametersPresets::VoIP
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___VoIP_1;
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

// System.Action`1<System.Single[]>
struct Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312  : public MulticastDelegate_t
{
};

// System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32>
struct Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80  : public MulticastDelegate_t
{
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
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867  : public RuntimeArray
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


// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void Photon.Voice.AudioUtil::Resample<System.Single>(T[],System.Int32,System.Int32,T[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Resample_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1BFFB841E808DDFEDC2923086D3472190CEA17BA_gshared (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___src0, int32_t ___srcOffset1, int32_t ___srcCount2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___dst3, int32_t ___dstOffset4, int32_t ___dstCount5, int32_t ___channels6, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_mC889E292AD98982C9EEADC3A692E75758BE9C28D_gshared (Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8_gshared (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;

// System.Void Photon.Voice.Unity.WebAudioMicIn::createCallbackStatic(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_createCallbackStatic_mCD76DF7A12966E7C3357250EA7D9D4142B5C820A (int32_t ___handle0, int32_t ___err1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.WebAudioMicIn::dataCallbackStatic(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_dataCallbackStatic_m5496AD53D4297D77D4016D15C4A4FC91DF4B9CE3 (int32_t ___handle0, intptr_t ___p1, int32_t ___countFloat2, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Unity.WebAudioMicIn>::get_Item(TKey)
inline WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74 (Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* (*) (Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::createCallback(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_createCallback_m9E2EDD5E495E84EBF96F85B921AE3BDD64BE5CB4 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, int32_t ___err0, int32_t ___samplingRate1, int32_t ___channels2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.WebAudioMicIn::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebAudioMicIn_set_Error_m9BFECE584B79C7B59A71C36C232192C11B657703_inline (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Photon.Voice.Unity.WebAudioMicIn::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebAudioMicIn_get_Error_m3F6CBAB6775BC1E18D5C2D6606978993C599B478_inline (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::dataCallback(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_dataCallback_m564E6014EC3196E7DF7CF0911EF82D9B44CC8774 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, intptr_t ___p0, int32_t ___countFloat1, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.WebAudioMicIn::get_SamplingRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebAudioMicIn_get_SamplingRate_m64A1A8929698ED127CA4DA99B0E6070D22B88408_inline (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775 (intptr_t ___source0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void Photon.Voice.AudioUtil::Resample<System.Single>(T[],System.Int32,System.Int32,T[],System.Int32,System.Int32,System.Int32)
inline void AudioUtil_Resample_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1BFFB841E808DDFEDC2923086D3472190CEA17BA (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___src0, int32_t ___srcOffset1, int32_t ___srcCount2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___dst3, int32_t ___dstOffset4, int32_t ___dstCount5, int32_t ___channels6, const RuntimeMethod* method)
{
	((  void (*) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int32_t, int32_t, int32_t, const RuntimeMethod*))AudioUtil_Resample_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1BFFB841E808DDFEDC2923086D3472190CEA17BA_gshared)(___src0, ___srcOffset1, ___srcCount2, ___dst3, ___dstOffset4, ___dstCount5, ___channels6, method);
}
// System.Void System.Action`1<System.Single[]>::Invoke(T)
inline void Action_1_Invoke_mBE0A0BDCAD5FEDE1C45EA97B02BFEB89E5AA3728_inline (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Unity.WebAudioMicIn>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m029B1D207F02E819DD5FB935DBF8E3E8F9DA8F74 (Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* __this, int32_t ___key0, WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5*, int32_t, WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mC889E292AD98982C9EEADC3A692E75758BE9C28D (Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_4__ctor_mC889E292AD98982C9EEADC3A692E75758BE9C28D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8 (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 Photon.Voice.Unity.WebAudioMicIn::PhotonVoice_WebAudioMicIn_Start(System.Int32,System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32>,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebAudioMicIn_PhotonVoice_WebAudioMicIn_Start_mE27DCE5340F68D82E3D895E162853C62A9DE5503 (int32_t ___handle0, Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80* ___createCallbackStatic1, Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* ___dataCallbackStatic2, int32_t ___callIntervalMs3, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.WebAudioMicIn::PhotonVoice_WebAudioMicIn_Stop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_PhotonVoice_WebAudioMicIn_Stop_m48553AAC7430E16A517CFFA28B82521FF44AE0AE (int32_t ___hanle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Unity.WebAudioMicIn>::.ctor()
inline void Dictionary_2__ctor_mD0C50AB1F0E1B17CCE4AE774F3AC3BBF59D06EC7 (Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Int32 Photon.Voice.IOS.AudioSessionParameters::CategoryOptionsToInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String Photon.Voice.IOS.AudioSessionParameters::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t CDECL PhotonVoice_WebAudioMicIn_Start(int32_t, Il2CppMethodPointer, Il2CppMethodPointer, int32_t);
IL2CPP_EXTERN_C void CDECL PhotonVoice_WebAudioMicIn_Stop(int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebAudioMicIn_createCallbackStatic_mCD76DF7A12966E7C3357250EA7D9D4142B5C820A(int32_t ___handle0, int32_t ___err1, int32_t ___samplingRate2, int32_t ___channels3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebAudioMicIn_createCallbackStatic_mCD76DF7A12966E7C3357250EA7D9D4142B5C820A(___handle0, ___err1, ___samplingRate2, ___channels3, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebAudioMicIn_dataCallbackStatic_m5496AD53D4297D77D4016D15C4A4FC91DF4B9CE3(int32_t ___handle0, intptr_t ___p1, int32_t ___countFloat2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebAudioMicIn_dataCallbackStatic_m5496AD53D4297D77D4016D15C4A4FC91DF4B9CE3(___handle0, ___p1, ___countFloat2, NULL);

}
// System.Int32 Photon.Voice.Unity.WebAudioMicIn::PhotonVoice_WebAudioMicIn_Start(System.Int32,System.Action`4<System.Int32,System.Int32,System.Int32,System.Int32>,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebAudioMicIn_PhotonVoice_WebAudioMicIn_Start_mE27DCE5340F68D82E3D895E162853C62A9DE5503 (int32_t ___handle0, Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80* ___createCallbackStatic1, Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* ___dataCallbackStatic2, int32_t ___callIntervalMs3, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___createCallbackStatic1' to native representation
	Il2CppMethodPointer ____createCallbackStatic1_marshaled = NULL;
	____createCallbackStatic1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___createCallbackStatic1));

	// Marshaling of parameter '___dataCallbackStatic2' to native representation
	Il2CppMethodPointer ____dataCallbackStatic2_marshaled = NULL;
	____dataCallbackStatic2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___dataCallbackStatic2));

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(PhotonVoice_WebAudioMicIn_Start)(___handle0, ____createCallbackStatic1_marshaled, ____dataCallbackStatic2_marshaled, ___callIntervalMs3);

	return returnValue;
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::PhotonVoice_WebAudioMicIn_Stop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_PhotonVoice_WebAudioMicIn_Stop_m48553AAC7430E16A517CFFA28B82521FF44AE0AE (int32_t ___hanle0, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(PhotonVoice_WebAudioMicIn_Stop)(___hanle0);

}
// System.Void Photon.Voice.Unity.WebAudioMicIn::createCallbackStatic(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_createCallbackStatic_mCD76DF7A12966E7C3357250EA7D9D4142B5C820A (int32_t ___handle0, int32_t ___err1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handles[handle].createCallback(err, samplingRate, channels);
		il2cpp_codegen_runtime_class_init_inline(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* L_0 = ((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handles_3;
		int32_t L_1 = ___handle0;
		WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* L_2;
		L_2 = Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74(L_0, L_1, Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74_RuntimeMethod_var);
		int32_t L_3 = ___err1;
		int32_t L_4 = ___samplingRate2;
		int32_t L_5 = ___channels3;
		WebAudioMicIn_createCallback_m9E2EDD5E495E84EBF96F85B921AE3BDD64BE5CB4(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::createCallback(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_createCallback_m9E2EDD5E495E84EBF96F85B921AE3BDD64BE5CB4 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, int32_t ___err0, int32_t ___samplingRate1, int32_t ___channels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD09F2EC9EC9E57A1D242B44D702260D2C425B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA20CCD2F538CE2EFE7F631F26456DDDBDC6BFFBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAD21C33A03900F77396C80A13F18FC25D4EB2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (err != 0)
		int32_t L_0 = ___err0;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// Error = "Can't create MediaRecorder: " + err;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___err0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8DD09F2EC9EC9E57A1D242B44D702260D2C425B6, L_1, NULL);
		WebAudioMicIn_set_Error_m9BFECE584B79C7B59A71C36C232192C11B657703_inline(__this, L_2, NULL);
		// logger.LogError("[PV] WebAudioMicIn: " + Error);
		RuntimeObject* L_3 = __this->___logger_1;
		String_t* L_4;
		L_4 = WebAudioMicIn_get_Error_m3F6CBAB6775BC1E18D5C2D6606978993C599B478_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFBAD21C33A03900F77396C80A13F18FC25D4EB2F, L_4, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_3, L_5, L_6);
		return;
	}

IL_003b:
	{
		// sourceSamplingRate = samplingRate;
		int32_t L_7 = ___samplingRate1;
		__this->___sourceSamplingRate_7 = L_7;
		// logger.LogInfo("[PV] WebAudioMicIn: microphone initialized, handle = {0}, frequency = {1}, channels = {2}", handle, samplingRate, channels);
		RuntimeObject* L_8 = __this->___logger_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		int32_t L_11 = __this->___handle_2;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		int32_t L_15 = ___samplingRate1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		int32_t L_19 = ___channels2;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_21);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_8, _stringLiteralA20CCD2F538CE2EFE7F631F26456DDDBDC6BFFBC, L_18);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::dataCallbackStatic(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_dataCallbackStatic_m5496AD53D4297D77D4016D15C4A4FC91DF4B9CE3 (int32_t ___handle0, intptr_t ___p1, int32_t ___countFloat2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handles[handle].dataCallback(p, countFloat);
		il2cpp_codegen_runtime_class_init_inline(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* L_0 = ((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handles_3;
		int32_t L_1 = ___handle0;
		WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* L_2;
		L_2 = Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74(L_0, L_1, Dictionary_2_get_Item_m728F3D419708F55CC085C93C63BE7F0492A66A74_RuntimeMethod_var);
		intptr_t L_3 = ___p1;
		int32_t L_4 = ___countFloat2;
		WebAudioMicIn_dataCallback_m564E6014EC3196E7DF7CF0911EF82D9B44CC8774(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::dataCallback(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_dataCallback_m564E6014EC3196E7DF7CF0911EF82D9B44CC8774 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, intptr_t ___p0, int32_t ___countFloat1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioUtil_Resample_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1BFFB841E808DDFEDC2923086D3472190CEA17BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (pushCallback != null)
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_0 = __this->___pushCallback_8;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		// if (bufSource == null || bufSource.Length < countFloat)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___bufSource_5;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___bufSource_5;
		int32_t L_3 = ___countFloat1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) >= ((int32_t)L_3)))
		{
			goto IL_0041;
		}
	}

IL_001b:
	{
		// bufSource = new float[countFloat];
		int32_t L_4 = ___countFloat1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___bufSource_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufSource_5), (void*)L_5);
		// bufTarget = new float[countFloat * SamplingRate / sourceSamplingRate];
		int32_t L_6 = ___countFloat1;
		int32_t L_7;
		L_7 = WebAudioMicIn_get_SamplingRate_m64A1A8929698ED127CA4DA99B0E6070D22B88408_inline(__this, NULL);
		int32_t L_8 = __this->___sourceSamplingRate_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_multiply(L_6, L_7))/L_8)));
		__this->___bufTarget_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufTarget_6), (void*)L_9);
	}

IL_0041:
	{
		// Marshal.Copy(p, bufSource, 0, countFloat);
		intptr_t L_10 = ___p0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___bufSource_5;
		int32_t L_12 = ___countFloat1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m4744F803E7E605726758725D11D157455BD43775(L_10, L_11, 0, L_12, NULL);
		// var countTarget = countFloat * SamplingRate / sourceSamplingRate;
		int32_t L_13 = ___countFloat1;
		int32_t L_14;
		L_14 = WebAudioMicIn_get_SamplingRate_m64A1A8929698ED127CA4DA99B0E6070D22B88408_inline(__this, NULL);
		int32_t L_15 = __this->___sourceSamplingRate_7;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_13, L_14))/L_15));
		// AudioUtil.Resample<float>(bufSource, 0, countFloat, bufTarget, 0, countTarget, 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___bufSource_5;
		int32_t L_17 = ___countFloat1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___bufTarget_6;
		int32_t L_19 = V_0;
		AudioUtil_Resample_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1BFFB841E808DDFEDC2923086D3472190CEA17BA(L_16, 0, L_17, L_18, 0, L_19, 1, AudioUtil_Resample_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1BFFB841E808DDFEDC2923086D3472190CEA17BA_RuntimeMethod_var);
		// pushCallback(bufTarget);
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_20 = __this->___pushCallback_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___bufTarget_6;
		Action_1_Invoke_mBE0A0BDCAD5FEDE1C45EA97B02BFEB89E5AA3728_inline(L_20, L_21, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::.ctor(System.Int32,System.Int32,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn__ctor_m39CD25144071BC91CA41A6D926D7BD00D75438E3 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, int32_t ___suggestedFrequency0, int32_t ___suggestedChannels1, RuntimeObject* ___logger2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m029B1D207F02E819DD5FB935DBF8E3E8F9DA8F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebAudioMicIn_createCallbackStatic_mCD76DF7A12966E7C3357250EA7D9D4142B5C820A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebAudioMicIn_dataCallbackStatic_m5496AD53D4297D77D4016D15C4A4FC91DF4B9CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebAudioMicIn(int suggestedFrequency, int suggestedChannels, ILogger logger)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.SamplingRate = suggestedFrequency;
		int32_t L_0 = ___suggestedFrequency0;
		__this->___U3CSamplingRateU3Ek__BackingField_11 = L_0;
		// this.Channels = 1;
		__this->___U3CChannelsU3Ek__BackingField_12 = 1;
		// this.logger = logger;
		RuntimeObject* L_1 = ___logger2;
		__this->___logger_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logger_1), (void*)L_1);
		// handleCnt++;
		il2cpp_codegen_runtime_class_init_inline(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		int32_t L_2 = ((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handleCnt_4;
		((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handleCnt_4 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// this.handle = handleCnt;
		int32_t L_3 = ((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handleCnt_4;
		__this->___handle_2 = L_3;
		// handles[handle] = this;
		Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* L_4 = ((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handles_3;
		int32_t L_5 = __this->___handle_2;
		Dictionary_2_set_Item_m029B1D207F02E819DD5FB935DBF8E3E8F9DA8F74(L_4, L_5, __this, Dictionary_2_set_Item_m029B1D207F02E819DD5FB935DBF8E3E8F9DA8F74_RuntimeMethod_var);
		// PhotonVoice_WebAudioMicIn_Start(handle, createCallbackStatic, dataCallbackStatic, 30);
		int32_t L_6 = __this->___handle_2;
		Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80* L_7 = (Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80*)il2cpp_codegen_object_new(Action_4_t226D79A062EB6BFF3E2C7E7853FC37BB00B95A80_il2cpp_TypeInfo_var);
		Action_4__ctor_mC889E292AD98982C9EEADC3A692E75758BE9C28D(L_7, NULL, (intptr_t)((void*)WebAudioMicIn_createCallbackStatic_mCD76DF7A12966E7C3357250EA7D9D4142B5C820A_RuntimeMethod_var), NULL);
		Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312* L_8 = (Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312*)il2cpp_codegen_object_new(Action_3_tCA1CD1F31D2010AED19E3F3F3027533188D0D312_il2cpp_TypeInfo_var);
		Action_3__ctor_mBFCA39814E57ACF92B00660146991BFB608B87C8(L_8, NULL, (intptr_t)((void*)WebAudioMicIn_dataCallbackStatic_m5496AD53D4297D77D4016D15C4A4FC91DF4B9CE3_RuntimeMethod_var), NULL);
		int32_t L_9;
		L_9 = WebAudioMicIn_PhotonVoice_WebAudioMicIn_Start_mE27DCE5340F68D82E3D895E162853C62A9DE5503(L_6, L_7, L_8, ((int32_t)30), NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::SetCallback(System.Action`1<System.Single[]>,Photon.Voice.ObjectFactory`2<System.Single[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_SetCallback_m9B0559B20B5C60EA614F82A625F57D2AB25E27D1 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* ___callback0, RuntimeObject* ___bufferFactory1, const RuntimeMethod* method) 
{
	{
		// this.pushCallback = callback;
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_0 = ___callback0;
		__this->___pushCallback_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pushCallback_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_Dispose_mEC9B8C104076F366EA65263DF8C40C86A2A1F83B (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (this) // Dispose() can be called twice
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0031;
					}
				}
				{
					WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0031:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				// if (!disposed)
				bool L_3 = __this->___disposed_9;
				if (L_3)
				{
					goto IL_0026_1;
				}
			}
			{
				// PhotonVoice_WebAudioMicIn_Stop(handle);
				int32_t L_4 = __this->___handle_2;
				il2cpp_codegen_runtime_class_init_inline(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
				WebAudioMicIn_PhotonVoice_WebAudioMicIn_Stop_m48553AAC7430E16A517CFFA28B82521FF44AE0AE(L_4, NULL);
				// disposed = true;
				__this->___disposed_9 = (bool)1;
			}

IL_0026_1:
			{
				// }
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
		// }
		return;
	}
}
// System.String Photon.Voice.Unity.WebAudioMicIn::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebAudioMicIn_get_Error_m3F6CBAB6775BC1E18D5C2D6606978993C599B478 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn_set_Error_m9BFECE584B79C7B59A71C36C232192C11B657703 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Int32 Photon.Voice.Unity.WebAudioMicIn::get_SamplingRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebAudioMicIn_get_SamplingRate_m64A1A8929698ED127CA4DA99B0E6070D22B88408 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) 
{
	{
		// public int SamplingRate { get; }
		int32_t L_0 = __this->___U3CSamplingRateU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Int32 Photon.Voice.Unity.WebAudioMicIn::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebAudioMicIn_get_Channels_m8B0DE7558F4E35DB7D3906D1B4213A5A2E74CF82 (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) 
{
	{
		// public int Channels { get; }
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.WebAudioMicIn::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebAudioMicIn__cctor_m54144275F51364814515331E3F82AACBBEBDCCA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD0C50AB1F0E1B17CCE4AE774F3AC3BBF59D06EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<int, WebAudioMicIn> handles = new Dictionary<int, WebAudioMicIn>();
		Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5* L_0 = (Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5*)il2cpp_codegen_object_new(Dictionary_2_t9179218B38726012A63BC45CE48B4E488836BDE5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD0C50AB1F0E1B17CCE4AE774F3AC3BBF59D06EC7(L_0, Dictionary_2__ctor_mD0C50AB1F0E1B17CCE4AE774F3AC3BBF59D06EC7_RuntimeMethod_var);
		((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handles_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_StaticFields*)il2cpp_codegen_static_fields_for(WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11_il2cpp_TypeInfo_var))->___handles_3), (void*)L_0);
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
// Conversion methods for marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_pinvoke(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke& marshaled)
{
	marshaled.___Category_0 = unmarshaled.___Category_0;
	marshaled.___Mode_1 = unmarshaled.___Mode_1;
	if (unmarshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledCategoryOptions_Length = (unmarshaled.___CategoryOptions_2)->max_length;
		marshaled.___CategoryOptions_2 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaledCategoryOptions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledCategoryOptions_Length); i++)
		{
			(marshaled.___CategoryOptions_2)[i] = (unmarshaled.___CategoryOptions_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___CategoryOptions_2 = NULL;
	}
}
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_pinvoke_back(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke& marshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledCategory_temp_0 = 0;
	unmarshaledCategory_temp_0 = marshaled.___Category_0;
	unmarshaled.___Category_0 = unmarshaledCategory_temp_0;
	int32_t unmarshaledMode_temp_1 = 0;
	unmarshaledMode_temp_1 = marshaled.___Mode_1;
	unmarshaled.___Mode_1 = unmarshaledMode_temp_1;
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		if (unmarshaled.___CategoryOptions_2 == NULL)
		{
			unmarshaled.___CategoryOptions_2 = reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CategoryOptions_2), (void*)reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___CategoryOptions_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___CategoryOptions_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___CategoryOptions_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_pinvoke_cleanup(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke& marshaled)
{
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___CategoryOptions_2);
		marshaled.___CategoryOptions_2 = NULL;
	}
}
// Conversion methods for marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_com(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com& marshaled)
{
	marshaled.___Category_0 = unmarshaled.___Category_0;
	marshaled.___Mode_1 = unmarshaled.___Mode_1;
	if (unmarshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_array_size_t _unmarshaledCategoryOptions_Length = (unmarshaled.___CategoryOptions_2)->max_length;
		marshaled.___CategoryOptions_2 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaledCategoryOptions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledCategoryOptions_Length); i++)
		{
			(marshaled.___CategoryOptions_2)[i] = (unmarshaled.___CategoryOptions_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___CategoryOptions_2 = NULL;
	}
}
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_com_back(const AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com& marshaled, AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledCategory_temp_0 = 0;
	unmarshaledCategory_temp_0 = marshaled.___Category_0;
	unmarshaled.___Category_0 = unmarshaledCategory_temp_0;
	int32_t unmarshaledMode_temp_1 = 0;
	unmarshaledMode_temp_1 = marshaled.___Mode_1;
	unmarshaled.___Mode_1 = unmarshaledMode_temp_1;
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		if (unmarshaled.___CategoryOptions_2 == NULL)
		{
			unmarshaled.___CategoryOptions_2 = reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CategoryOptions_2), (void*)reinterpret_cast<AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*>((AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___CategoryOptions_2)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___CategoryOptions_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___CategoryOptions_2)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: Photon.Voice.IOS.AudioSessionParameters
IL2CPP_EXTERN_C void AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshal_com_cleanup(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com& marshaled)
{
	if (marshaled.___CategoryOptions_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___CategoryOptions_2);
		marshaled.___CategoryOptions_2 = NULL;
	}
}
// System.Int32 Photon.Voice.IOS.AudioSessionParameters::CategoryOptionsToInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int opt = 0;
		V_0 = 0;
		// if (CategoryOptions != null)
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_0 = __this->___CategoryOptions_2;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		V_1 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		// opt |= (int)CategoryOptions[i];
		int32_t L_1 = V_0;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_2 = __this->___CategoryOptions_2;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		int32_t L_5 = (int32_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_1|L_5));
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_7 = V_1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_8 = __this->___CategoryOptions_2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000e;
		}
	}

IL_0028:
	{
		// return opt;
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AudioSessionParameters_CategoryOptionsToInt_mE9ED527540A96EB5C1BB030E55DC861C230C3A28(_thisAdjusted, method);
	return _returnValue;
}
// System.String Photon.Voice.IOS.AudioSessionParameters::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7 (AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategory_t1C36CB8E4F7F94A6DE2B1D509AD12AF9BA667969_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionMode_tF805910784023C190A8DD567B87F621B9EA11F7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8460AECBE820085F2A6606F461369091075CC52F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var opt = "[";
		V_0 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
		// if (CategoryOptions != null)
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_0 = __this->___CategoryOptions_2;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		V_1 = 0;
		goto IL_004d;
	}

IL_0012:
	{
		// opt += CategoryOptions[i];
		String_t* L_1 = V_0;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_2 = __this->___CategoryOptions_2;
		int32_t L_3 = V_1;
		Il2CppFakeBox<int32_t> L_4(AudioSessionCategoryOption_tB65209ED5D05B821BF3DF03109C70597F97AAAF3_il2cpp_TypeInfo_var, ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3))));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_5, NULL);
		V_0 = L_6;
		// if (i != CategoryOptions.Length - 1)
		int32_t L_7 = V_1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_8 = __this->___CategoryOptions_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1)))))
		{
			goto IL_0049;
		}
	}
	{
		// opt += ", ";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		V_0 = L_10;
	}

IL_0049:
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < CategoryOptions.Length; i++)
		int32_t L_12 = V_1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_13 = __this->___CategoryOptions_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0012;
		}
	}

IL_0058:
	{
		// opt += "]";
		String_t* L_14 = V_0;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_0 = L_15;
		// return string.Format("category = {0}, mode = {1}, options = {2}", Category, Mode, opt);
		int32_t L_16 = __this->___Category_0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(AudioSessionCategory_t1C36CB8E4F7F94A6DE2B1D509AD12AF9BA667969_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = __this->___Mode_1;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(AudioSessionMode_tF805910784023C190A8DD567B87F621B9EA11F7D_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = V_0;
		String_t* L_23;
		L_23 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral8460AECBE820085F2A6606F461369091075CC52F, L_18, L_21, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7(_thisAdjusted, method);
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
// System.Void Photon.Voice.IOS.AudioSessionParametersPresets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSessionParametersPresets__cctor_mBB0B1694F7E614CEDDA3B549F375517DC6387266 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static AudioSessionParameters Game = new AudioSessionParameters()
		// {
		//     Category = AudioSessionCategory.PlayAndRecord,
		//     Mode = AudioSessionMode.Default,
		//     CategoryOptions = new AudioSessionCategoryOption[] { AudioSessionCategoryOption.DefaultToSpeaker, AudioSessionCategoryOption.AllowBluetooth }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37));
		(&V_0)->___Category_0 = 4;
		(&V_0)->___Mode_1 = 0;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_0 = (AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)8);
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)4);
		(&V_0)->___CategoryOptions_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___CategoryOptions_2), (void*)L_2);
		AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 L_3 = V_0;
		((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___Game_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___Game_0))->___CategoryOptions_2), (void*)NULL);
		// public static AudioSessionParameters VoIP = new AudioSessionParameters()
		// {
		//     Category = AudioSessionCategory.PlayAndRecord,
		//     Mode = AudioSessionMode.VoiceChat,
		//     // VoiceChat should have the side effect of setting AVAudioSessionCategoryOptionAllowBluetooth according to doc
		//     // but tests don't confirm this
		//     CategoryOptions = new AudioSessionCategoryOption[] { AudioSessionCategoryOption.AllowBluetooth }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37));
		(&V_0)->___Category_0 = 4;
		(&V_0)->___Mode_1 = 1;
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_4 = (AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867*)SZArrayNew(AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867_il2cpp_TypeInfo_var, (uint32_t)1);
		AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)4);
		(&V_0)->___CategoryOptions_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___CategoryOptions_2), (void*)L_5);
		AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 L_6 = V_0;
		((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___VoIP_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&((AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_StaticFields*)il2cpp_codegen_static_fields_for(AudioSessionParametersPresets_t91321D2EF989E33F1A68DC904658D50072EA2A7E_il2cpp_TypeInfo_var))->___VoIP_1))->___CategoryOptions_2), (void*)NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebAudioMicIn_set_Error_m9BFECE584B79C7B59A71C36C232192C11B657703_inline (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebAudioMicIn_get_Error_m3F6CBAB6775BC1E18D5C2D6606978993C599B478_inline (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebAudioMicIn_get_SamplingRate_m64A1A8929698ED127CA4DA99B0E6070D22B88408_inline (WebAudioMicIn_t4E3DD3E7DD7DB0B3DC162993CB6B484F51958D11* __this, const RuntimeMethod* method) 
{
	{
		// public int SamplingRate { get; }
		int32_t L_0 = __this->___U3CSamplingRateU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
