﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Exception
struct Exception_t;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1502828140;
// System.Threading.Tasks.Task`1<System.Int32>[]
struct Task_1U5BU5D_t2104922937;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.WaitCallback
struct WaitCallback_t2448485498;
// System.Action
struct Action_t1264377477;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Type
struct Type_t;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4022128754;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

struct Guid_t ;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;



// System.Runtime.InteropServices.IErrorInfo
struct NOVTABLE IErrorInfo_t3055706115 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetGUID_m1050404947(Guid_t * ___pGuid0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetSource_m3515283667(Il2CppChar** ___pBstrSource0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetDescription_m348776341(Il2CppChar** ___pbstrDescription0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpFile_m1121637497(Il2CppChar** ___pBstrHelpFile0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpContext_m1611286652(uint32_t* ___pdwHelpContext0, int32_t* comReturnValue) = 0;
};
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef JITHELPERS_T1212693971_H
#define JITHELPERS_T1212693971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t1212693971  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JITHELPERS_T1212693971_H
#ifndef RUNTIMEHELPERS_T1447613860_H
#define RUNTIMEHELPERS_T1447613860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t1447613860  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T1447613860_H
#ifndef MANAGEDERRORINFO_T1050660351_H
#define MANAGEDERRORINFO_T1050660351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ManagedErrorInfo
struct  ManagedErrorInfo_t1050660351  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.InteropServices.ManagedErrorInfo::m_Exception
	Exception_t * ___m_Exception_0;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ManagedErrorInfo_t1050660351, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exception_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDERRORINFO_T1050660351_H
#ifndef MARSHAL_T1757017490_H
#define MARSHAL_T1757017490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t1757017490  : public RuntimeObject
{
public:

public:
};

struct Marshal_t1757017490_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;
	// System.Boolean System.Runtime.InteropServices.Marshal::SetErrorInfoNotAvailable
	bool ___SetErrorInfoNotAvailable_2;
	// System.Boolean System.Runtime.InteropServices.Marshal::GetErrorInfoNotAvailable
	bool ___GetErrorInfoNotAvailable_3;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}

	inline static int32_t get_offset_of_SetErrorInfoNotAvailable_2() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___SetErrorInfoNotAvailable_2)); }
	inline bool get_SetErrorInfoNotAvailable_2() const { return ___SetErrorInfoNotAvailable_2; }
	inline bool* get_address_of_SetErrorInfoNotAvailable_2() { return &___SetErrorInfoNotAvailable_2; }
	inline void set_SetErrorInfoNotAvailable_2(bool value)
	{
		___SetErrorInfoNotAvailable_2 = value;
	}

	inline static int32_t get_offset_of_GetErrorInfoNotAvailable_3() { return static_cast<int32_t>(offsetof(Marshal_t1757017490_StaticFields, ___GetErrorInfoNotAvailable_3)); }
	inline bool get_GetErrorInfoNotAvailable_3() const { return ___GetErrorInfoNotAvailable_3; }
	inline bool* get_address_of_GetErrorInfoNotAvailable_3() { return &___GetErrorInfoNotAvailable_3; }
	inline void set_GetErrorInfoNotAvailable_3(bool value)
	{
		___GetErrorInfoNotAvailable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T1757017490_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef EXTENSIBLECLASSFACTORY_T574234438_H
#define EXTENSIBLECLASSFACTORY_T574234438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExtensibleClassFactory
struct  ExtensibleClassFactory_t574234438  : public RuntimeObject
{
public:

public:
};

struct ExtensibleClassFactory_t574234438_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.InteropServices.ExtensibleClassFactory::hashtable
	Hashtable_t1853889766 * ___hashtable_0;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(ExtensibleClassFactory_t574234438_StaticFields, ___hashtable_0)); }
	inline Hashtable_t1853889766 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t1853889766 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIBLECLASSFACTORY_T574234438_H
#ifndef RUNTIMEENVIRONMENT_T1702406123_H
#define RUNTIMEENVIRONMENT_T1702406123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RuntimeEnvironment
struct  RuntimeEnvironment_t1702406123  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEENVIRONMENT_T1702406123_H
#ifndef MOVENEXTRUNNER_T4042132640_H
#define MOVENEXTRUNNER_T4042132640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct  MoveNextRunner_t4042132640  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_context
	ExecutionContext_t1748372627 * ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;

public:
	inline static int32_t get_offset_of_m_context_0() { return static_cast<int32_t>(offsetof(MoveNextRunner_t4042132640, ___m_context_0)); }
	inline ExecutionContext_t1748372627 * get_m_context_0() const { return ___m_context_0; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_context_0() { return &___m_context_0; }
	inline void set_m_context_0(ExecutionContext_t1748372627 * value)
	{
		___m_context_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_context_0), value);
	}

	inline static int32_t get_offset_of_m_stateMachine_1() { return static_cast<int32_t>(offsetof(MoveNextRunner_t4042132640, ___m_stateMachine_1)); }
	inline RuntimeObject* get_m_stateMachine_1() const { return ___m_stateMachine_1; }
	inline RuntimeObject** get_address_of_m_stateMachine_1() { return &___m_stateMachine_1; }
	inline void set_m_stateMachine_1(RuntimeObject* value)
	{
		___m_stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_1), value);
	}
};

struct MoveNextRunner_t4042132640_StaticFields
{
public:
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::s_invokeMoveNext
	ContextCallback_t3823316192 * ___s_invokeMoveNext_2;

public:
	inline static int32_t get_offset_of_s_invokeMoveNext_2() { return static_cast<int32_t>(offsetof(MoveNextRunner_t4042132640_StaticFields, ___s_invokeMoveNext_2)); }
	inline ContextCallback_t3823316192 * get_s_invokeMoveNext_2() const { return ___s_invokeMoveNext_2; }
	inline ContextCallback_t3823316192 ** get_address_of_s_invokeMoveNext_2() { return &___s_invokeMoveNext_2; }
	inline void set_s_invokeMoveNext_2(ContextCallback_t3823316192 * value)
	{
		___s_invokeMoveNext_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_invokeMoveNext_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVENEXTRUNNER_T4042132640_H
#ifndef ASYNCTASKCACHE_T1993881178_H
#define ASYNCTASKCACHE_T1993881178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskCache
struct  AsyncTaskCache_t1993881178  : public RuntimeObject
{
public:

public:
};

struct AsyncTaskCache_t1993881178_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::TrueTask
	Task_1_t1502828140 * ___TrueTask_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::FalseTask
	Task_1_t1502828140 * ___FalseTask_1;
	// System.Threading.Tasks.Task`1<System.Int32>[] System.Runtime.CompilerServices.AsyncTaskCache::Int32Tasks
	Task_1U5BU5D_t2104922937* ___Int32Tasks_2;

public:
	inline static int32_t get_offset_of_TrueTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t1993881178_StaticFields, ___TrueTask_0)); }
	inline Task_1_t1502828140 * get_TrueTask_0() const { return ___TrueTask_0; }
	inline Task_1_t1502828140 ** get_address_of_TrueTask_0() { return &___TrueTask_0; }
	inline void set_TrueTask_0(Task_1_t1502828140 * value)
	{
		___TrueTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___TrueTask_0), value);
	}

	inline static int32_t get_offset_of_FalseTask_1() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t1993881178_StaticFields, ___FalseTask_1)); }
	inline Task_1_t1502828140 * get_FalseTask_1() const { return ___FalseTask_1; }
	inline Task_1_t1502828140 ** get_address_of_FalseTask_1() { return &___FalseTask_1; }
	inline void set_FalseTask_1(Task_1_t1502828140 * value)
	{
		___FalseTask_1 = value;
		Il2CppCodeGenWriteBarrier((&___FalseTask_1), value);
	}

	inline static int32_t get_offset_of_Int32Tasks_2() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t1993881178_StaticFields, ___Int32Tasks_2)); }
	inline Task_1U5BU5D_t2104922937* get_Int32Tasks_2() const { return ___Int32Tasks_2; }
	inline Task_1U5BU5D_t2104922937** get_address_of_Int32Tasks_2() { return &___Int32Tasks_2; }
	inline void set_Int32Tasks_2(Task_1U5BU5D_t2104922937* value)
	{
		___Int32Tasks_2 = value;
		Il2CppCodeGenWriteBarrier((&___Int32Tasks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKCACHE_T1993881178_H
#ifndef ISVOLATILE_T2097058663_H
#define ISVOLATILE_T2097058663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t2097058663  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T2097058663_H
#ifndef ERRORWRAPPER_T1772885312_H
#define ERRORWRAPPER_T1772885312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t1772885312  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::m_ErrorCode
	int32_t ___m_ErrorCode_0;

public:
	inline static int32_t get_offset_of_m_ErrorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t1772885312, ___m_ErrorCode_0)); }
	inline int32_t get_m_ErrorCode_0() const { return ___m_ErrorCode_0; }
	inline int32_t* get_address_of_m_ErrorCode_0() { return &___m_ErrorCode_0; }
	inline void set_m_ErrorCode_0(int32_t value)
	{
		___m_ErrorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T1772885312_H
#ifndef U3CU3EC_T3555681664_H
#define U3CU3EC_T3555681664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c
struct  U3CU3Ec_t3555681664  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3555681664_StaticFields
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9
	U3CU3Ec_t3555681664 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_0
	SendOrPostCallback_t2750080073 * ___U3CU3E9__6_0_1;
	// System.Threading.WaitCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_1
	WaitCallback_t2448485498 * ___U3CU3E9__6_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3555681664_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3555681664 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3555681664 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3555681664 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3555681664_StaticFields, ___U3CU3E9__6_0_1)); }
	inline SendOrPostCallback_t2750080073 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(SendOrPostCallback_t2750080073 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3555681664_StaticFields, ___U3CU3E9__6_1_2)); }
	inline WaitCallback_t2448485498 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline WaitCallback_t2448485498 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(WaitCallback_t2448485498 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3555681664_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef CONTINUATIONWRAPPER_T392291031_H
#define CONTINUATIONWRAPPER_T392291031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper
struct  ContinuationWrapper_t392291031  : public RuntimeObject
{
public:
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_continuation
	Action_t1264377477 * ___m_continuation_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_invokeAction
	Action_t1264377477 * ___m_invokeAction_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_innerTask
	Task_t3187275312 * ___m_innerTask_2;

public:
	inline static int32_t get_offset_of_m_continuation_0() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t392291031, ___m_continuation_0)); }
	inline Action_t1264377477 * get_m_continuation_0() const { return ___m_continuation_0; }
	inline Action_t1264377477 ** get_address_of_m_continuation_0() { return &___m_continuation_0; }
	inline void set_m_continuation_0(Action_t1264377477 * value)
	{
		___m_continuation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuation_0), value);
	}

	inline static int32_t get_offset_of_m_invokeAction_1() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t392291031, ___m_invokeAction_1)); }
	inline Action_t1264377477 * get_m_invokeAction_1() const { return ___m_invokeAction_1; }
	inline Action_t1264377477 ** get_address_of_m_invokeAction_1() { return &___m_invokeAction_1; }
	inline void set_m_invokeAction_1(Action_t1264377477 * value)
	{
		___m_invokeAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_invokeAction_1), value);
	}

	inline static int32_t get_offset_of_m_innerTask_2() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t392291031, ___m_innerTask_2)); }
	inline Task_t3187275312 * get_m_innerTask_2() const { return ___m_innerTask_2; }
	inline Task_t3187275312 ** get_address_of_m_innerTask_2() { return &___m_innerTask_2; }
	inline void set_m_innerTask_2(Task_t3187275312 * value)
	{
		___m_innerTask_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerTask_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINUATIONWRAPPER_T392291031_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T3836450705_H
#define U3CU3EC__DISPLAYCLASS4_0_T3836450705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t3836450705  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::innerTask
	Task_t3187275312 * ___innerTask_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::continuation
	Action_t1264377477 * ___continuation_1;

public:
	inline static int32_t get_offset_of_innerTask_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3836450705, ___innerTask_0)); }
	inline Task_t3187275312 * get_innerTask_0() const { return ___innerTask_0; }
	inline Task_t3187275312 ** get_address_of_innerTask_0() { return &___innerTask_0; }
	inline void set_innerTask_0(Task_t3187275312 * value)
	{
		___innerTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___innerTask_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3836450705, ___continuation_1)); }
	inline Action_t1264377477 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t1264377477 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t1264377477 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T3836450705_H
#ifndef STRINGFREEZINGATTRIBUTE_T3031362240_H
#define STRINGFREEZINGATTRIBUTE_T3031362240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t3031362240  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T3031362240_H
#ifndef EPHEMERON_T1602596362_H
#define EPHEMERON_T1602596362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.Ephemeron
struct  Ephemeron_t1602596362 
{
public:
	// System.Object System.Runtime.CompilerServices.Ephemeron::key
	RuntimeObject * ___key_0;
	// System.Object System.Runtime.CompilerServices.Ephemeron::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Ephemeron_t1602596362, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Ephemeron_t1602596362, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t1602596362_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t1602596362_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // EPHEMERON_T1602596362_H
#ifndef DISPIDATTRIBUTE_T491906453_H
#define DISPIDATTRIBUTE_T491906453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t491906453  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t491906453, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T491906453_H
#ifndef OUTATTRIBUTE_T3399657568_H
#define OUTATTRIBUTE_T3399657568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t3399657568  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T3399657568_H
#ifndef INATTRIBUTE_T4080363445_H
#define INATTRIBUTE_T4080363445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t4080363445  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T4080363445_H
#ifndef OPTIONALATTRIBUTE_T2982857498_H
#define OPTIONALATTRIBUTE_T2982857498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t2982857498  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T2982857498_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
struct  ComCompatibleVersionAttribute_t1233303509  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_major
	int32_t ____major_0;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_minor
	int32_t ____minor_1;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_build
	int32_t ____build_2;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_revision
	int32_t ____revision_3;

public:
	inline static int32_t get_offset_of__major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____major_0)); }
	inline int32_t get__major_0() const { return ____major_0; }
	inline int32_t* get_address_of__major_0() { return &____major_0; }
	inline void set__major_0(int32_t value)
	{
		____major_0 = value;
	}

	inline static int32_t get_offset_of__minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____minor_1)); }
	inline int32_t get__minor_1() const { return ____minor_1; }
	inline int32_t* get_address_of__minor_1() { return &____minor_1; }
	inline void set__minor_1(int32_t value)
	{
		____minor_1 = value;
	}

	inline static int32_t get_offset_of__build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____build_2)); }
	inline int32_t get__build_2() const { return ____build_2; }
	inline int32_t* get_address_of__build_2() { return &____build_2; }
	inline void set__build_2(int32_t value)
	{
		____build_2 = value;
	}

	inline static int32_t get_offset_of__revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____revision_3)); }
	inline int32_t get__revision_3() const { return ____revision_3; }
	inline int32_t* get_address_of__revision_3() { return &____revision_3; }
	inline void set__revision_3(int32_t value)
	{
		____revision_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#ifndef FIELDOFFSETATTRIBUTE_T3945874278_H
#define FIELDOFFSETATTRIBUTE_T3945874278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t3945874278  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t3945874278, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T3945874278_H
#ifndef PRESERVESIGATTRIBUTE_T979468563_H
#define PRESERVESIGATTRIBUTE_T979468563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t979468563  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T979468563_H
#ifndef COMVISIBLEATTRIBUTE_T1362837655_H
#define COMVISIBLEATTRIBUTE_T1362837655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t1362837655  : public Attribute_t861562559
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::_val
	bool ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t1362837655, ____val_0)); }
	inline bool get__val_0() const { return ____val_0; }
	inline bool* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(bool value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T1362837655_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#define COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t2734585253  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_val
	Type_t * ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t2734585253, ____val_0)); }
	inline Type_t * get__val_0() const { return ____val_0; }
	inline Type_t ** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(Type_t * value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef GUIDATTRIBUTE_T1304051729_H
#define GUIDATTRIBUTE_T1304051729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t1304051729  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t1304051729, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T1304051729_H
#ifndef COMIMPORTATTRIBUTE_T1295173782_H
#define COMIMPORTATTRIBUTE_T1295173782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t1295173782  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T1295173782_H
#ifndef UNSAFEVALUETYPEATTRIBUTE_T3766537972_H
#define UNSAFEVALUETYPEATTRIBUTE_T3766537972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.UnsafeValueTypeAttribute
struct  UnsafeValueTypeAttribute_t3766537972  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFEVALUETYPEATTRIBUTE_T3766537972_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TASKAWAITER_T919683548_H
#define TASKAWAITER_T919683548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t919683548 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t919683548, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
};
#endif // TASKAWAITER_T919683548_H
#ifndef CONFIGUREDTASKAWAITER_T555647845_H
#define CONFIGUREDTASKAWAITER_T555647845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t555647845 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T555647845_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef TYPEFORWARDEDFROMATTRIBUTE_T339055186_H
#define TYPEFORWARDEDFROMATTRIBUTE_T339055186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeForwardedFromAttribute
struct  TypeForwardedFromAttribute_t339055186  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.TypeForwardedFromAttribute::assemblyFullName
	String_t* ___assemblyFullName_0;

public:
	inline static int32_t get_offset_of_assemblyFullName_0() { return static_cast<int32_t>(offsetof(TypeForwardedFromAttribute_t339055186, ___assemblyFullName_0)); }
	inline String_t* get_assemblyFullName_0() const { return ___assemblyFullName_0; }
	inline String_t** get_address_of_assemblyFullName_0() { return &___assemblyFullName_0; }
	inline void set_assemblyFullName_0(String_t* value)
	{
		___assemblyFullName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyFullName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFORWARDEDFROMATTRIBUTE_T339055186_H
#ifndef STATEMACHINEATTRIBUTE_T4271320854_H
#define STATEMACHINEATTRIBUTE_T4271320854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StateMachineAttribute
struct  StateMachineAttribute_t4271320854  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.CompilerServices.StateMachineAttribute::<StateMachineType>k__BackingField
	Type_t * ___U3CStateMachineTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StateMachineAttribute_t4271320854, ___U3CStateMachineTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CStateMachineTypeU3Ek__BackingField_0() const { return ___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CStateMachineTypeU3Ek__BackingField_0() { return &___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline void set_U3CStateMachineTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CStateMachineTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStateMachineTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEATTRIBUTE_T4271320854_H
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t3680361199  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClassName
	String_t* ____importClassName_0;

public:
	inline static int32_t get_offset_of__importClassName_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t3680361199, ____importClassName_0)); }
	inline String_t* get__importClassName_0() const { return ____importClassName_0; }
	inline String_t** get_address_of__importClassName_0() { return &____importClassName_0; }
	inline void set__importClassName_0(String_t* value)
	{
		____importClassName_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClassName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#define RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeWrappedException
struct  RuntimeWrappedException_t2169265577  : public Exception_t
{
public:
	// System.Object System.Runtime.CompilerServices.RuntimeWrappedException::m_wrappedException
	RuntimeObject * ___m_wrappedException_17;

public:
	inline static int32_t get_offset_of_m_wrappedException_17() { return static_cast<int32_t>(offsetof(RuntimeWrappedException_t2169265577, ___m_wrappedException_17)); }
	inline RuntimeObject * get_m_wrappedException_17() const { return ___m_wrappedException_17; }
	inline RuntimeObject ** get_address_of_m_wrappedException_17() { return &___m_wrappedException_17; }
	inline void set_m_wrappedException_17(RuntimeObject * value)
	{
		___m_wrappedException_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrappedException_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T1169614002_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T1169614002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t1169614002  : public Attribute_t861562559
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t1169614002, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T1169614002_H
#ifndef EXTENSIONATTRIBUTE_T1723066603_H
#define EXTENSIONATTRIBUTE_T1723066603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t1723066603  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T1723066603_H
#ifndef TYPEDEPENDENCYATTRIBUTE_T1161440450_H
#define TYPEDEPENDENCYATTRIBUTE_T1161440450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeDependencyAttribute
struct  TypeDependencyAttribute_t1161440450  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.TypeDependencyAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeDependencyAttribute_t1161440450, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDEPENDENCYATTRIBUTE_T1161440450_H
#ifndef FIXEDBUFFERATTRIBUTE_T3759792648_H
#define FIXEDBUFFERATTRIBUTE_T3759792648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t3759792648  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t3759792648, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t3759792648, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDBUFFERATTRIBUTE_T3759792648_H
#ifndef FRIENDACCESSALLOWEDATTRIBUTE_T3640740047_H
#define FRIENDACCESSALLOWEDATTRIBUTE_T3640740047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FriendAccessAllowedAttribute
struct  FriendAccessAllowedAttribute_t3640740047  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDACCESSALLOWEDATTRIBUTE_T3640740047_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T922893634_H
#define INTERNALSVISIBLETOATTRIBUTE_T922893634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t922893634  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t922893634, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_0), value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t922893634, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T922893634_H
#ifndef COMPILERGENERATEDATTRIBUTE_T23527886_H
#define COMPILERGENERATEDATTRIBUTE_T23527886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t23527886  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T23527886_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#define CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CustomConstantAttribute
struct  CustomConstantAttribute_t1681301359  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t1721442111  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t1721442111, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#ifndef INVALIDOLEVARIANTTYPEEXCEPTION_T1577719016_H
#define INVALIDOLEVARIANTTYPEEXCEPTION_T1577719016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InvalidOleVariantTypeException
struct  InvalidOleVariantTypeException_t1577719016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOLEVARIANTTYPEEXCEPTION_T1577719016_H
#ifndef INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#define INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InvalidComObjectException
struct  InvalidComObjectException_t3939298412  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCOMOBJECTEXCEPTION_T3939298412_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T2580336406_H
#define MARSHALDIRECTIVEEXCEPTION_T2580336406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t2580336406  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T2580336406_H
#ifndef ASYNCTASKMETHODBUILDER_1_T642595793_H
#define ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t642595793 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4022128754 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_task_2)); }
	inline Task_1_t4022128754 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4022128754 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4022128754 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t642595793_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4022128754 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4022128754 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4022128754 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4022128754 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T3432586689_H
#ifndef SAFEARRAYTYPEMISMATCHEXCEPTION_T2694282323_H
#define SAFEARRAYTYPEMISMATCHEXCEPTION_T2694282323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeArrayTypeMismatchException
struct  SafeArrayTypeMismatchException_t2694282323  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEARRAYTYPEMISMATCHEXCEPTION_T2694282323_H
#ifndef SAFEHANDLE_T3273388951_H
#define SAFEHANDLE_T3273388951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3273388951  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3273388951_H
#ifndef HANDLEREF_T3745784362_H
#define HANDLEREF_T3745784362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t3745784362 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrapper_0), value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEREF_T3745784362_H
#ifndef CONFIGUREDTASKAWAITABLE_T166429847_H
#define CONFIGUREDTASKAWAITABLE_T166429847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t166429847 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t555647845  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t166429847, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t555647845  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t555647845  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t166429847_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t166429847_marshaled_com
{
	ConfiguredTaskAwaiter_t555647845_marshaled_com ___m_configuredTaskAwaiter_0;
};
#endif // CONFIGUREDTASKAWAITABLE_T166429847_H
#ifndef COMINTERFACETYPE_T2732813453_H
#define COMINTERFACETYPE_T2732813453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t2732813453 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ComInterfaceType_t2732813453, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMINTERFACETYPE_T2732813453_H
#ifndef ITERATORSTATEMACHINEATTRIBUTE_T542750406_H
#define ITERATORSTATEMACHINEATTRIBUTE_T542750406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IteratorStateMachineAttribute
struct  IteratorStateMachineAttribute_t542750406  : public StateMachineAttribute_t4271320854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITERATORSTATEMACHINEATTRIBUTE_T542750406_H
#ifndef CLASSINTERFACETYPE_T4029497327_H
#define CLASSINTERFACETYPE_T4029497327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t4029497327 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t4029497327, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACETYPE_T4029497327_H
#ifndef LOADHINT_T3743314490_H
#define LOADHINT_T3743314490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t3743314490 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadHint_t3743314490, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADHINT_T3743314490_H
#ifndef METHODIMPLOPTIONS_T4141524024_H
#define METHODIMPLOPTIONS_T4141524024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplOptions
struct  MethodImplOptions_t4141524024 
{
public:
	// System.Int32 System.Runtime.CompilerServices.MethodImplOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplOptions_t4141524024, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLOPTIONS_T4141524024_H
#ifndef DECIMALCONSTANTATTRIBUTE_T1976047975_H
#define DECIMALCONSTANTATTRIBUTE_T1976047975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t1976047975  : public Attribute_t861562559
{
public:
	// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::dec
	Decimal_t2948259380  ___dec_0;

public:
	inline static int32_t get_offset_of_dec_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1976047975, ___dec_0)); }
	inline Decimal_t2948259380  get_dec_0() const { return ___dec_0; }
	inline Decimal_t2948259380 * get_address_of_dec_0() { return &___dec_0; }
	inline void set_dec_0(Decimal_t2948259380  value)
	{
		___dec_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T1976047975_H
#ifndef COMPILATIONRELAXATIONS_T3292409279_H
#define COMPILATIONRELAXATIONS_T3292409279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t3292409279 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t3292409279, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONS_T3292409279_H
#ifndef DATETIMECONSTANTATTRIBUTE_T375130962_H
#define DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t375130962  : public CustomConstantAttribute_t1681301359
{
public:
	// System.DateTime System.Runtime.CompilerServices.DateTimeConstantAttribute::date
	DateTime_t3738529785  ___date_0;

public:
	inline static int32_t get_offset_of_date_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t375130962, ___date_0)); }
	inline DateTime_t3738529785  get_date_0() const { return ___date_0; }
	inline DateTime_t3738529785 * get_address_of_date_0() { return &___date_0; }
	inline void set_date_0(DateTime_t3738529785  value)
	{
		___date_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifndef ASYNCSTATEMACHINEATTRIBUTE_T3081685207_H
#define ASYNCSTATEMACHINEATTRIBUTE_T3081685207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncStateMachineAttribute
struct  AsyncStateMachineAttribute_t3081685207  : public StateMachineAttribute_t4271320854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATEMACHINEATTRIBUTE_T3081685207_H
#ifndef CALLINGCONVENTION_T1027624783_H
#define CALLINGCONVENTION_T1027624783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1027624783 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConvention_t1027624783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTION_T1027624783_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef CHARSET_T3391187264_H
#define CHARSET_T3391187264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t3391187264 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharSet_t3391187264, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARSET_T3391187264_H
#ifndef ASYNCVOIDMETHODBUILDER_T3819840891_H
#define ASYNCVOIDMETHODBUILDER_T3819840891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t3819840891 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t3187275312 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t2326897723 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t2326897723 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_synchronizationContext_0), value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_task_2)); }
	inline Task_t3187275312 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t3187275312 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t3187275312 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_pinvoke
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_com
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_com ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
#endif // ASYNCVOIDMETHODBUILDER_T3819840891_H
#ifndef VARENUM_T1077183404_H
#define VARENUM_T1077183404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VarEnum
struct  VarEnum_t1077183404 
{
public:
	// System.Int32 System.Runtime.InteropServices.VarEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VarEnum_t1077183404, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARENUM_T1077183404_H
#ifndef UNMANAGEDTYPE_T523127242_H
#define UNMANAGEDTYPE_T523127242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t523127242 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnmanagedType_t523127242, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T523127242_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1182193648  : public SafeHandle_t3273388951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#define DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t548613883  : public Attribute_t861562559
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::loadHint
	int32_t ___loadHint_0;

public:
	inline static int32_t get_offset_of_loadHint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t548613883, ___loadHint_0)); }
	inline int32_t get_loadHint_0() const { return ___loadHint_0; }
	inline int32_t* get_address_of_loadHint_0() { return &___loadHint_0; }
	inline void set_loadHint_0(int32_t value)
	{
		___loadHint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#ifndef CLASSINTERFACEATTRIBUTE_T2274790349_H
#define CLASSINTERFACEATTRIBUTE_T2274790349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2274790349  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2274790349, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2274790349_H
#ifndef INTERFACETYPEATTRIBUTE_T633123336_H
#define INTERFACETYPEATTRIBUTE_T633123336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t633123336  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t633123336, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T633123336_H
#ifndef COMEXCEPTION_T1620828383_H
#define COMEXCEPTION_T1620828383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1620828383  : public ExternalException_t3544951457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1620828383_H
#ifndef DLLIMPORTATTRIBUTE_T92573803_H
#define DLLIMPORTATTRIBUTE_T92573803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t92573803  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.DllImportAttribute::_val
	String_t* ____val_0;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_1;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_2;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}

	inline static int32_t get_offset_of_EntryPoint_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___EntryPoint_1)); }
	inline String_t* get_EntryPoint_1() const { return ___EntryPoint_1; }
	inline String_t** get_address_of_EntryPoint_1() { return &___EntryPoint_1; }
	inline void set_EntryPoint_1(String_t* value)
	{
		___EntryPoint_1 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_1), value);
	}

	inline static int32_t get_offset_of_CharSet_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___CharSet_2)); }
	inline int32_t get_CharSet_2() const { return ___CharSet_2; }
	inline int32_t* get_address_of_CharSet_2() { return &___CharSet_2; }
	inline void set_CharSet_2(int32_t value)
	{
		___CharSet_2 = value;
	}

	inline static int32_t get_offset_of_SetLastError_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___SetLastError_3)); }
	inline bool get_SetLastError_3() const { return ___SetLastError_3; }
	inline bool* get_address_of_SetLastError_3() { return &___SetLastError_3; }
	inline void set_SetLastError_3(bool value)
	{
		___SetLastError_3 = value;
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_CallingConvention_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___CallingConvention_6)); }
	inline int32_t get_CallingConvention_6() const { return ___CallingConvention_6; }
	inline int32_t* get_address_of_CallingConvention_6() { return &___CallingConvention_6; }
	inline void set_CallingConvention_6(int32_t value)
	{
		___CallingConvention_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T92573803_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t1554680451  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::m_callingConvention
	int32_t ___m_callingConvention_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::CharSet
	int32_t ___CharSet_1;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::BestFitMapping
	bool ___BestFitMapping_2;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_3;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::SetLastError
	bool ___SetLastError_4;

public:
	inline static int32_t get_offset_of_m_callingConvention_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___m_callingConvention_0)); }
	inline int32_t get_m_callingConvention_0() const { return ___m_callingConvention_0; }
	inline int32_t* get_address_of_m_callingConvention_0() { return &___m_callingConvention_0; }
	inline void set_m_callingConvention_0(int32_t value)
	{
		___m_callingConvention_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_2() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___BestFitMapping_2)); }
	inline bool get_BestFitMapping_2() const { return ___BestFitMapping_2; }
	inline bool* get_address_of_BestFitMapping_2() { return &___BestFitMapping_2; }
	inline void set_BestFitMapping_2(bool value)
	{
		___BestFitMapping_2 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_3() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___ThrowOnUnmappableChar_3)); }
	inline bool get_ThrowOnUnmappableChar_3() const { return ___ThrowOnUnmappableChar_3; }
	inline bool* get_address_of_ThrowOnUnmappableChar_3() { return &___ThrowOnUnmappableChar_3; }
	inline void set_ThrowOnUnmappableChar_3(bool value)
	{
		___ThrowOnUnmappableChar_3 = value;
	}

	inline static int32_t get_offset_of_SetLastError_4() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___SetLastError_4)); }
	inline bool get_SetLastError_4() const { return ___SetLastError_4; }
	inline bool* get_address_of_SetLastError_4() { return &___SetLastError_4; }
	inline void set_SetLastError_4(bool value)
	{
		___SetLastError_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#ifndef METHODIMPLATTRIBUTE_T4096584501_H
#define METHODIMPLATTRIBUTE_T4096584501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplAttribute
struct  MethodImplAttribute_t4096584501  : public Attribute_t861562559
{
public:
	// System.Runtime.CompilerServices.MethodImplOptions System.Runtime.CompilerServices.MethodImplAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(MethodImplAttribute_t4096584501, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTE_T4096584501_H
#ifndef MARSHALASATTRIBUTE_T3522571978_H
#define MARSHALASATTRIBUTE_T3522571978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t3522571978  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_0;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_1;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_2;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::SafeArrayUserDefinedSubType
	Type_t * ___SafeArrayUserDefinedSubType_3;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_4;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_5;
	// System.Runtime.InteropServices.VarEnum System.Runtime.InteropServices.MarshalAsAttribute::SafeArraySubType
	int32_t ___SafeArraySubType_6;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_7;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::IidParameterIndex
	int32_t ___IidParameterIndex_8;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_9;

public:
	inline static int32_t get_offset_of_MarshalCookie_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___MarshalCookie_0)); }
	inline String_t* get_MarshalCookie_0() const { return ___MarshalCookie_0; }
	inline String_t** get_address_of_MarshalCookie_0() { return &___MarshalCookie_0; }
	inline void set_MarshalCookie_0(String_t* value)
	{
		___MarshalCookie_0 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_0), value);
	}

	inline static int32_t get_offset_of_MarshalType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___MarshalType_1)); }
	inline String_t* get_MarshalType_1() const { return ___MarshalType_1; }
	inline String_t** get_address_of_MarshalType_1() { return &___MarshalType_1; }
	inline void set_MarshalType_1(String_t* value)
	{
		___MarshalType_1 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_1), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___MarshalTypeRef_2)); }
	inline Type_t * get_MarshalTypeRef_2() const { return ___MarshalTypeRef_2; }
	inline Type_t ** get_address_of_MarshalTypeRef_2() { return &___MarshalTypeRef_2; }
	inline void set_MarshalTypeRef_2(Type_t * value)
	{
		___MarshalTypeRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_2), value);
	}

	inline static int32_t get_offset_of_SafeArrayUserDefinedSubType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SafeArrayUserDefinedSubType_3)); }
	inline Type_t * get_SafeArrayUserDefinedSubType_3() const { return ___SafeArrayUserDefinedSubType_3; }
	inline Type_t ** get_address_of_SafeArrayUserDefinedSubType_3() { return &___SafeArrayUserDefinedSubType_3; }
	inline void set_SafeArrayUserDefinedSubType_3(Type_t * value)
	{
		___SafeArrayUserDefinedSubType_3 = value;
		Il2CppCodeGenWriteBarrier((&___SafeArrayUserDefinedSubType_3), value);
	}

	inline static int32_t get_offset_of_utype_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___utype_4)); }
	inline int32_t get_utype_4() const { return ___utype_4; }
	inline int32_t* get_address_of_utype_4() { return &___utype_4; }
	inline void set_utype_4(int32_t value)
	{
		___utype_4 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___ArraySubType_5)); }
	inline int32_t get_ArraySubType_5() const { return ___ArraySubType_5; }
	inline int32_t* get_address_of_ArraySubType_5() { return &___ArraySubType_5; }
	inline void set_ArraySubType_5(int32_t value)
	{
		___ArraySubType_5 = value;
	}

	inline static int32_t get_offset_of_SafeArraySubType_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SafeArraySubType_6)); }
	inline int32_t get_SafeArraySubType_6() const { return ___SafeArraySubType_6; }
	inline int32_t* get_address_of_SafeArraySubType_6() { return &___SafeArraySubType_6; }
	inline void set_SafeArraySubType_6(int32_t value)
	{
		___SafeArraySubType_6 = value;
	}

	inline static int32_t get_offset_of_SizeConst_7() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SizeConst_7)); }
	inline int32_t get_SizeConst_7() const { return ___SizeConst_7; }
	inline int32_t* get_address_of_SizeConst_7() { return &___SizeConst_7; }
	inline void set_SizeConst_7(int32_t value)
	{
		___SizeConst_7 = value;
	}

	inline static int32_t get_offset_of_IidParameterIndex_8() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___IidParameterIndex_8)); }
	inline int32_t get_IidParameterIndex_8() const { return ___IidParameterIndex_8; }
	inline int32_t* get_address_of_IidParameterIndex_8() { return &___IidParameterIndex_8; }
	inline void set_IidParameterIndex_8(int32_t value)
	{
		___IidParameterIndex_8 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_9() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SizeParamIndex_9)); }
	inline int16_t get_SizeParamIndex_9() const { return ___SizeParamIndex_9; }
	inline int16_t* get_address_of_SizeParamIndex_9() { return &___SizeParamIndex_9; }
	inline void set_SizeParamIndex_9(int16_t value)
	{
		___SizeParamIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T3522571978_H
#ifndef ASYNCTASKMETHODBUILDER_T3536885450_H
#define ASYNCTASKMETHODBUILDER_T3536885450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3536885450 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t642595793  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t642595793 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t642595793  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3536885450_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t4022128754 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t4022128754 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t4022128754 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t4022128754 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_com
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3536885450_H
#ifndef SAFEBUFFER_T3564637124_H
#define SAFEBUFFER_T3564637124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeBuffer
struct  SafeBuffer_t3564637124  : public SafeHandleZeroOrMinusOneIsInvalid_t1182193648
{
public:
	// System.Boolean System.Runtime.InteropServices.SafeBuffer::inited
	bool ___inited_6;

public:
	inline static int32_t get_offset_of_inited_6() { return static_cast<int32_t>(offsetof(SafeBuffer_t3564637124, ___inited_6)); }
	inline bool get_inited_6() const { return ___inited_6; }
	inline bool* get_address_of_inited_6() { return &___inited_6; }
	inline void set_inited_6(bool value)
	{
		___inited_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBUFFER_T3564637124_H
#ifndef OBJECTCREATIONDELEGATE_T3727257075_H
#define OBJECTCREATIONDELEGATE_T3727257075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ObjectCreationDelegate
struct  ObjectCreationDelegate_t3727257075  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTCREATIONDELEGATE_T3727257075_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (AsyncVoidMethodBuilder_t3819840891)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[3] = 
{
	AsyncVoidMethodBuilder_t3819840891::get_offset_of_m_synchronizationContext_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncVoidMethodBuilder_t3819840891::get_offset_of_m_coreState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncVoidMethodBuilder_t3819840891::get_offset_of_m_task_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (AsyncTaskMethodBuilder_t3536885450)+ sizeof (RuntimeObject), -1, sizeof(AsyncTaskMethodBuilder_t3536885450_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1401[2] = 
{
	AsyncTaskMethodBuilder_t3536885450_StaticFields::get_offset_of_s_cachedCompleted_0(),
	AsyncTaskMethodBuilder_t3536885450::get_offset_of_m_builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (AsyncTaskCache_t1993881178), -1, sizeof(AsyncTaskCache_t1993881178_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1403[3] = 
{
	AsyncTaskCache_t1993881178_StaticFields::get_offset_of_TrueTask_0(),
	AsyncTaskCache_t1993881178_StaticFields::get_offset_of_FalseTask_1(),
	AsyncTaskCache_t1993881178_StaticFields::get_offset_of_Int32Tasks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (AsyncMethodBuilderCore_t2955600131)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[2] = 
{
	AsyncMethodBuilderCore_t2955600131::get_offset_of_m_stateMachine_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncMethodBuilderCore_t2955600131::get_offset_of_m_defaultContextAction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (MoveNextRunner_t4042132640), -1, sizeof(MoveNextRunner_t4042132640_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1405[3] = 
{
	MoveNextRunner_t4042132640::get_offset_of_m_context_0(),
	MoveNextRunner_t4042132640::get_offset_of_m_stateMachine_1(),
	MoveNextRunner_t4042132640_StaticFields::get_offset_of_s_invokeMoveNext_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (ContinuationWrapper_t392291031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[3] = 
{
	ContinuationWrapper_t392291031::get_offset_of_m_continuation_0(),
	ContinuationWrapper_t392291031::get_offset_of_m_invokeAction_1(),
	ContinuationWrapper_t392291031::get_offset_of_m_innerTask_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (U3CU3Ec__DisplayClass4_0_t3836450705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[2] = 
{
	U3CU3Ec__DisplayClass4_0_t3836450705::get_offset_of_innerTask_0(),
	U3CU3Ec__DisplayClass4_0_t3836450705::get_offset_of_continuation_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (U3CU3Ec_t3555681664), -1, sizeof(U3CU3Ec_t3555681664_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1408[3] = 
{
	U3CU3Ec_t3555681664_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3555681664_StaticFields::get_offset_of_U3CU3E9__6_0_1(),
	U3CU3Ec_t3555681664_StaticFields::get_offset_of_U3CU3E9__6_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (AsyncStateMachineAttribute_t3081685207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (IteratorStateMachineAttribute_t542750406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (RuntimeCompatibilityAttribute_t1169614002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[1] = 
{
	RuntimeCompatibilityAttribute_t1169614002::get_offset_of_m_wrapNonExceptionThrows_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (RuntimeWrappedException_t2169265577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1415[1] = 
{
	RuntimeWrappedException_t2169265577::get_offset_of_m_wrappedException_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (StateMachineAttribute_t4271320854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1416[1] = 
{
	StateMachineAttribute_t4271320854::get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (TaskAwaiter_t919683548)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1417[1] = 
{
	TaskAwaiter_t919683548::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (ConfiguredTaskAwaitable_t166429847)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1419[1] = 
{
	ConfiguredTaskAwaitable_t166429847::get_offset_of_m_configuredTaskAwaiter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (ConfiguredTaskAwaiter_t555647845)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1420[2] = 
{
	ConfiguredTaskAwaiter_t555647845::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConfiguredTaskAwaiter_t555647845::get_offset_of_m_continueOnCapturedContext_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1421[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1422[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (TypeForwardedFromAttribute_t339055186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[1] = 
{
	TypeForwardedFromAttribute_t339055186::get_offset_of_assemblyFullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (LoadHint_t3743314490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1424[4] = 
{
	LoadHint_t3743314490::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (DefaultDependencyAttribute_t548613883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1425[1] = 
{
	DefaultDependencyAttribute_t548613883::get_offset_of_loadHint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (CompilationRelaxations_t3292409279)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1426[2] = 
{
	CompilationRelaxations_t3292409279::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (CompilationRelaxationsAttribute_t1721442111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[1] = 
{
	CompilationRelaxationsAttribute_t1721442111::get_offset_of_m_relaxations_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (CompilerGeneratedAttribute_t23527886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (CustomConstantAttribute_t1681301359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (DateTimeConstantAttribute_t375130962), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1430[1] = 
{
	DateTimeConstantAttribute_t375130962::get_offset_of_date_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (DecimalConstantAttribute_t1976047975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1431[1] = 
{
	DecimalConstantAttribute_t1976047975::get_offset_of_dec_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (ExtensionAttribute_t1723066603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (FixedBufferAttribute_t3759792648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1433[2] = 
{
	FixedBufferAttribute_t3759792648::get_offset_of_elementType_0(),
	FixedBufferAttribute_t3759792648::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (InternalsVisibleToAttribute_t922893634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1434[2] = 
{
	InternalsVisibleToAttribute_t922893634::get_offset_of__assemblyName_0(),
	InternalsVisibleToAttribute_t922893634::get_offset_of__allInternalsVisible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (FriendAccessAllowedAttribute_t3640740047), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (IsVolatile_t2097058663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (MethodImplOptions_t4141524024)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1437[9] = 
{
	MethodImplOptions_t4141524024::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (MethodImplAttribute_t4096584501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1438[1] = 
{
	MethodImplAttribute_t4096584501::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (TypeDependencyAttribute_t1161440450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[1] = 
{
	TypeDependencyAttribute_t1161440450::get_offset_of_typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (UnsafeValueTypeAttribute_t3766537972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (StringFreezingAttribute_t3031362240), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (JitHelpers_t1212693971), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (Ephemeron_t1602596362)+ sizeof (RuntimeObject), sizeof(Ephemeron_t1602596362_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1443[2] = 
{
	Ephemeron_t1602596362::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ephemeron_t1602596362::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1444[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (RuntimeHelpers_t1447613860), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (UnmanagedFunctionPointerAttribute_t1554680451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1447[5] = 
{
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_m_callingConvention_0(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_CharSet_1(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_BestFitMapping_2(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_ThrowOnUnmappableChar_3(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_SetLastError_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (DispIdAttribute_t491906453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1448[1] = 
{
	DispIdAttribute_t491906453::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (ComInterfaceType_t2732813453)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1449[5] = 
{
	ComInterfaceType_t2732813453::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (InterfaceTypeAttribute_t633123336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1450[1] = 
{
	InterfaceTypeAttribute_t633123336::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (ComDefaultInterfaceAttribute_t2734585253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1451[1] = 
{
	ComDefaultInterfaceAttribute_t2734585253::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (ClassInterfaceType_t4029497327)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1452[4] = 
{
	ClassInterfaceType_t4029497327::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (ClassInterfaceAttribute_t2274790349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[1] = 
{
	ClassInterfaceAttribute_t2274790349::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (ComVisibleAttribute_t1362837655), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1454[1] = 
{
	ComVisibleAttribute_t1362837655::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (TypeLibImportClassAttribute_t3680361199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1455[1] = 
{
	TypeLibImportClassAttribute_t3680361199::get_offset_of__importClassName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (VarEnum_t1077183404)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1456[45] = 
{
	VarEnum_t1077183404::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (UnmanagedType_t523127242)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1457[39] = 
{
	UnmanagedType_t523127242::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (ComImportAttribute_t1295173782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (GuidAttribute_t1304051729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1459[1] = 
{
	GuidAttribute_t1304051729::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (PreserveSigAttribute_t979468563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (InAttribute_t4080363445), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (OutAttribute_t3399657568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (OptionalAttribute_t2982857498), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (DllImportAttribute_t92573803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1464[9] = 
{
	DllImportAttribute_t92573803::get_offset_of__val_0(),
	DllImportAttribute_t92573803::get_offset_of_EntryPoint_1(),
	DllImportAttribute_t92573803::get_offset_of_CharSet_2(),
	DllImportAttribute_t92573803::get_offset_of_SetLastError_3(),
	DllImportAttribute_t92573803::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t92573803::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t92573803::get_offset_of_CallingConvention_6(),
	DllImportAttribute_t92573803::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t92573803::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (FieldOffsetAttribute_t3945874278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[1] = 
{
	FieldOffsetAttribute_t3945874278::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (ComCompatibleVersionAttribute_t1233303509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[4] = 
{
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__major_0(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__minor_1(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__build_2(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (CallingConvention_t1027624783)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1467[6] = 
{
	CallingConvention_t1027624783::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (CharSet_t3391187264)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1468[5] = 
{
	CharSet_t3391187264::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (COMException_t1620828383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (ErrorWrapper_t1772885312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1470[1] = 
{
	ErrorWrapper_t1772885312::get_offset_of_m_ErrorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (ExternalException_t3544951457), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (HandleRef_t3745784362)+ sizeof (RuntimeObject), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1472[2] = 
{
	HandleRef_t3745784362::get_offset_of_m_wrapper_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HandleRef_t3745784362::get_offset_of_m_handle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (InvalidComObjectException_t3939298412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (InvalidOleVariantTypeException_t1577719016), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (MarshalDirectiveException_t2580336406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (ObjectCreationDelegate_t3727257075), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (RuntimeEnvironment_t1702406123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (SafeArrayTypeMismatchException_t2694282323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (SafeHandle_t3273388951), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1480[6] = 
{
	SafeHandle_t3273388951::get_offset_of_handle_0(),
	SafeHandle_t3273388951::get_offset_of__state_1(),
	SafeHandle_t3273388951::get_offset_of__ownsHandle_2(),
	SafeHandle_t3273388951::get_offset_of__fullyInitialized_3(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (ExtensibleClassFactory_t574234438), -1, sizeof(ExtensibleClassFactory_t574234438_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1481[1] = 
{
	ExtensibleClassFactory_t574234438_StaticFields::get_offset_of_hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (GCHandle_t3351438187)+ sizeof (RuntimeObject), sizeof(GCHandle_t3351438187 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1482[1] = 
{
	GCHandle_t3351438187::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (GCHandleType_t3432586689)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1483[5] = 
{
	GCHandleType_t3432586689::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { 0, sizeof(IErrorInfo_t3055706115*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (ManagedErrorInfo_t1050660351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[1] = 
{
	ManagedErrorInfo_t1050660351::get_offset_of_m_Exception_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (Marshal_t1757017490), -1, sizeof(Marshal_t1757017490_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1486[4] = 
{
	Marshal_t1757017490_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t1757017490_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
	Marshal_t1757017490_StaticFields::get_offset_of_SetErrorInfoNotAvailable_2(),
	Marshal_t1757017490_StaticFields::get_offset_of_GetErrorInfoNotAvailable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (MarshalAsAttribute_t3522571978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1487[10] = 
{
	MarshalAsAttribute_t3522571978::get_offset_of_MarshalCookie_0(),
	MarshalAsAttribute_t3522571978::get_offset_of_MarshalType_1(),
	MarshalAsAttribute_t3522571978::get_offset_of_MarshalTypeRef_2(),
	MarshalAsAttribute_t3522571978::get_offset_of_SafeArrayUserDefinedSubType_3(),
	MarshalAsAttribute_t3522571978::get_offset_of_utype_4(),
	MarshalAsAttribute_t3522571978::get_offset_of_ArraySubType_5(),
	MarshalAsAttribute_t3522571978::get_offset_of_SafeArraySubType_6(),
	MarshalAsAttribute_t3522571978::get_offset_of_SizeConst_7(),
	MarshalAsAttribute_t3522571978::get_offset_of_IidParameterIndex_8(),
	MarshalAsAttribute_t3522571978::get_offset_of_SizeParamIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (SafeBuffer_t3564637124), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1488[1] = 
{
	SafeBuffer_t3564637124::get_offset_of_inited_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
