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
// Windows.UI.Xaml.Interop.IBindableIterator
struct IBindableIterator_t667386168;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t1452810305;
// System.Char[]
struct CharU5BU5D_t3528271667;

struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;



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
#ifndef EQUALITYCOMPARER_1_T17223025_H
#define EQUALITYCOMPARER_1_T17223025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.String>
struct  EqualityComparer_1_t17223025  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t17223025_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t17223025 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t17223025_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t17223025 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t17223025 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t17223025 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T17223025_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef IBINDABLEITERATORTOIENUMERATORADAPTER_T1455462238_H
#define IBINDABLEITERATORTOIENUMERATORADAPTER_T1455462238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter
struct  IBindableIteratorToIEnumeratorAdapter_t1455462238  : public RuntimeObject
{
public:
	// Windows.UI.Xaml.Interop.IBindableIterator System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::iterator
	RuntimeObject* ___iterator_0;
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::initialized
	bool ___initialized_1;
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::hadCurrent
	bool ___hadCurrent_2;
	// System.Object System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_iterator_0() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___iterator_0)); }
	inline RuntimeObject* get_iterator_0() const { return ___iterator_0; }
	inline RuntimeObject** get_address_of_iterator_0() { return &___iterator_0; }
	inline void set_iterator_0(RuntimeObject* value)
	{
		___iterator_0 = value;
		Il2CppCodeGenWriteBarrier((&___iterator_0), value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_hadCurrent_2() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___hadCurrent_2)); }
	inline bool get_hadCurrent_2() const { return ___hadCurrent_2; }
	inline bool* get_address_of_hadCurrent_2() { return &___hadCurrent_2; }
	inline void set_hadCurrent_2(bool value)
	{
		___hadCurrent_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IBINDABLEITERATORTOIENUMERATORADAPTER_T1455462238_H
#ifndef EQUALITYCOMPARER_1_T3599036008_H
#define EQUALITYCOMPARER_1_T3599036008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct  EqualityComparer_1_t3599036008  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3599036008_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3599036008 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3599036008_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t3599036008 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t3599036008 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t3599036008 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T3599036008_H
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
#ifndef OBJECTEQUALITYCOMPARER_T1147032983_H
#define OBJECTEQUALITYCOMPARER_T1147032983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t1147032983  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t1147032983_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t1147032983 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t1147032983_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t1147032983 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t1147032983 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t1147032983 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T1147032983_H
#ifndef DICTIONARYHASHHELPERS_T1017827097_H
#define DICTIONARYHASHHELPERS_T1017827097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.DictionaryHashHelpers
struct  DictionaryHashHelpers_t1017827097  : public RuntimeObject
{
public:

public:
};

struct DictionaryHashHelpers_t1017827097_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Generic.DictionaryHashHelpers::<SerializationInfoTable>k__BackingField
	ConditionalWeakTable_2_t1452810305 * ___U3CSerializationInfoTableU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSerializationInfoTableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DictionaryHashHelpers_t1017827097_StaticFields, ___U3CSerializationInfoTableU3Ek__BackingField_0)); }
	inline ConditionalWeakTable_2_t1452810305 * get_U3CSerializationInfoTableU3Ek__BackingField_0() const { return ___U3CSerializationInfoTableU3Ek__BackingField_0; }
	inline ConditionalWeakTable_2_t1452810305 ** get_address_of_U3CSerializationInfoTableU3Ek__BackingField_0() { return &___U3CSerializationInfoTableU3Ek__BackingField_0; }
	inline void set_U3CSerializationInfoTableU3Ek__BackingField_0(ConditionalWeakTable_2_t1452810305 * value)
	{
		___U3CSerializationInfoTableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSerializationInfoTableU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYHASHHELPERS_T1017827097_H
#ifndef __STATICARRAYINITTYPESIZEU3D360_T971680545_H
#define __STATICARRAYINITTYPESIZEU3D360_T971680545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct  __StaticArrayInitTypeSizeU3D360_t971680545 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_t971680545__padding[360];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D360_T971680545_H
#ifndef __STATICARRAYINITTYPESIZEU3D998_T1291568276_H
#define __STATICARRAYINITTYPESIZEU3D998_T1291568276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
struct  __StaticArrayInitTypeSizeU3D998_t1291568276 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t1291568276__padding[998];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D998_T1291568276_H
#ifndef __STATICARRAYINITTYPESIZEU3D640_T4103651819_H
#define __STATICARRAYINITTYPESIZEU3D640_T4103651819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640
struct  __StaticArrayInitTypeSizeU3D640_t4103651819 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D640_t4103651819__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D640_T4103651819_H
#ifndef __STATICARRAYINITTYPESIZEU3D1208_T1462068942_H
#define __STATICARRAYINITTYPESIZEU3D1208_T1462068942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208
struct  __StaticArrayInitTypeSizeU3D1208_t1462068942 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_t1462068942__padding[1208];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1208_T1462068942_H
#ifndef __STATICARRAYINITTYPESIZEU3D1080_T1828617616_H
#define __STATICARRAYINITTYPESIZEU3D1080_T1828617616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1080
struct  __StaticArrayInitTypeSizeU3D1080_t1828617616 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1080_t1828617616__padding[1080];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1080_T1828617616_H
#ifndef __STATICARRAYINITTYPESIZEU3D1018_T2637921688_H
#define __STATICARRAYINITTYPESIZEU3D1018_T2637921688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
struct  __StaticArrayInitTypeSizeU3D1018_t2637921688 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t2637921688__padding[1018];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1018_T2637921688_H
#ifndef __STATICARRAYINITTYPESIZEU3D320_T3297279373_H
#define __STATICARRAYINITTYPESIZEU3D320_T3297279373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=320
struct  __StaticArrayInitTypeSizeU3D320_t3297279373 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D320_t3297279373__padding[320];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D320_T3297279373_H
#ifndef __STATICARRAYINITTYPESIZEU3D240_T4103913963_H
#define __STATICARRAYINITTYPESIZEU3D240_T4103913963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct  __StaticArrayInitTypeSizeU3D240_t4103913963 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t4103913963__padding[240];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D240_T4103913963_H
#ifndef __STATICARRAYINITTYPESIZEU3D212_T3318292412_H
#define __STATICARRAYINITTYPESIZEU3D212_T3318292412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
struct  __StaticArrayInitTypeSizeU3D212_t3318292412 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_t3318292412__padding[212];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D212_T3318292412_H
#ifndef __STATICARRAYINITTYPESIZEU3D174_T3302307462_H
#define __STATICARRAYINITTYPESIZEU3D174_T3302307462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
struct  __StaticArrayInitTypeSizeU3D174_t3302307462 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_t3302307462__padding[174];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D174_T3302307462_H
#ifndef __STATICARRAYINITTYPESIZEU3D288_T4020123951_H
#define __STATICARRAYINITTYPESIZEU3D288_T4020123951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct  __StaticArrayInitTypeSizeU3D288_t4020123951 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t4020123951__padding[288];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D288_T4020123951_H
#ifndef __STATICARRAYINITTYPESIZEU3D262_T589409057_H
#define __STATICARRAYINITTYPESIZEU3D262_T589409057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
struct  __StaticArrayInitTypeSizeU3D262_t589409057 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t589409057__padding[262];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D262_T589409057_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T1757367632_H
#define __STATICARRAYINITTYPESIZEU3D256_T1757367632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t1757367632 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t1757367632__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T1757367632_H
#ifndef __STATICARRAYINITTYPESIZEU3D21252_T1490422002_H
#define __STATICARRAYINITTYPESIZEU3D21252_T1490422002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=21252
struct  __StaticArrayInitTypeSizeU3D21252_t1490422002 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D21252_t1490422002__padding[21252];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D21252_T1490422002_H
#ifndef __STATICARRAYINITTYPESIZEU3D11614_T2244806902_H
#define __STATICARRAYINITTYPESIZEU3D11614_T2244806902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11614
struct  __StaticArrayInitTypeSizeU3D11614_t2244806902 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11614_t2244806902__padding[11614];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D11614_T2244806902_H
#ifndef __STATICARRAYINITTYPESIZEU3D4096_T4160781710_H
#define __STATICARRAYINITTYPESIZEU3D4096_T4160781710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096
struct  __StaticArrayInitTypeSizeU3D4096_t4160781710 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4096_t4160781710__padding[4096];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D4096_T4160781710_H
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
#ifndef __IL2CPPCOMDELEGATE_T1102178620_H
#define __IL2CPPCOMDELEGATE_T1102178620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1102178620  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1102178620_H
#ifndef __STATICARRAYINITTYPESIZEU3D3132_T3825993975_H
#define __STATICARRAYINITTYPESIZEU3D3132_T3825993975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct  __StaticArrayInitTypeSizeU3D3132_t3825993975 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_t3825993975__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3132_T3825993975_H
#ifndef __STATICARRAYINITTYPESIZEU3D2048_T1070431640_H
#define __STATICARRAYINITTYPESIZEU3D2048_T1070431640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct  __StaticArrayInitTypeSizeU3D2048_t1070431640 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t1070431640__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2048_T1070431640_H
#ifndef __STATICARRAYINITTYPESIZEU3D1665_T3813774423_H
#define __STATICARRAYINITTYPESIZEU3D1665_T3813774423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
struct  __StaticArrayInitTypeSizeU3D1665_t3813774423 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t3813774423__padding[1665];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1665_T3813774423_H
#ifndef __STATICARRAYINITTYPESIZEU3D1450_T1076996900_H
#define __STATICARRAYINITTYPESIZEU3D1450_T1076996900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
struct  __StaticArrayInitTypeSizeU3D1450_t1076996900 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t1076996900__padding[1450];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1450_T1076996900_H
#ifndef __STATICARRAYINITTYPESIZEU3D2382_T269021741_H
#define __STATICARRAYINITTYPESIZEU3D2382_T269021741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct  __StaticArrayInitTypeSizeU3D2382_t269021741 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_t269021741__padding[2382];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2382_T269021741_H
#ifndef __STATICARRAYINITTYPESIZEU3D2350_T1842999851_H
#define __STATICARRAYINITTYPESIZEU3D2350_T1842999851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct  __StaticArrayInitTypeSizeU3D2350_t1842999851 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t1842999851__padding[2350];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2350_T1842999851_H
#ifndef __STATICARRAYINITTYPESIZEU3D2100_T1871841525_H
#define __STATICARRAYINITTYPESIZEU3D2100_T1871841525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
struct  __StaticArrayInitTypeSizeU3D2100_t1871841525 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t1871841525__padding[2100];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2100_T1871841525_H
#ifndef __STATICARRAYINITTYPESIZEU3D24_T3517759979_H
#define __STATICARRAYINITTYPESIZEU3D24_T3517759979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t3517759979 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3517759979__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D24_T3517759979_H
#ifndef __STATICARRAYINITTYPESIZEU3D20_T1548391511_H
#define __STATICARRAYINITTYPESIZEU3D20_T1548391511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_t1548391511 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t1548391511__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T1548391511_H
#ifndef __STATICARRAYINITTYPESIZEU3D16_T385395489_H
#define __STATICARRAYINITTYPESIZEU3D16_T385395489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct  __StaticArrayInitTypeSizeU3D16_t385395489 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t385395489__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D16_T385395489_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125389 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125389__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#ifndef __STATICARRAYINITTYPESIZEU3D40_T1547998295_H
#define __STATICARRAYINITTYPESIZEU3D40_T1547998295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct  __StaticArrayInitTypeSizeU3D40_t1547998295 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1547998295__padding[40];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D40_T1547998295_H
#ifndef __STATICARRAYINITTYPESIZEU3D38_T1904556335_H
#define __STATICARRAYINITTYPESIZEU3D38_T1904556335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct  __StaticArrayInitTypeSizeU3D38_t1904556335 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t1904556335__padding[38];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D38_T1904556335_H
#ifndef __STATICARRAYINITTYPESIZEU3D36_T385526561_H
#define __STATICARRAYINITTYPESIZEU3D36_T385526561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct  __StaticArrayInitTypeSizeU3D36_t385526561 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t385526561__padding[36];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D36_T385526561_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T3517563371_H
#define __STATICARRAYINITTYPESIZEU3D14_T3517563371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t3517563371 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t3517563371__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T3517563371_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T3217885682_H
#define __STATICARRAYINITTYPESIZEU3D3_T3217885682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t3217885682 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t3217885682__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T3217885682_H
#ifndef BYTEEQUALITYCOMPARER_T2579698736_H
#define BYTEEQUALITYCOMPARER_T2579698736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ByteEqualityComparer
struct  ByteEqualityComparer_t2579698736  : public EqualityComparer_1_t3599036008
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEEQUALITYCOMPARER_T2579698736_H
#ifndef NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T1082005352_H
#define NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T1082005352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.NonRandomizedStringEqualityComparer
struct  NonRandomizedStringEqualityComparer_t1082005352  : public EqualityComparer_1_t17223025
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONRANDOMIZEDSTRINGEQUALITYCOMPARER_T1082005352_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T3217689074_H
#define __STATICARRAYINITTYPESIZEU3D6_T3217689074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t3217689074 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t3217689074__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T3217689074_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994317_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994317 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994317__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994317_H
#ifndef __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#define __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t1548194903 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1548194903__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278898_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278898 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278898__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278898_H
#ifndef __STATICARRAYINITTYPESIZEU3D94_T3518087659_H
#define __STATICARRAYINITTYPESIZEU3D94_T3518087659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
struct  __StaticArrayInitTypeSizeU3D94_t3518087659 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_t3518087659__padding[94];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D94_T3518087659_H
#ifndef __STATICARRAYINITTYPESIZEU3D84_T3518153195_H
#define __STATICARRAYINITTYPESIZEU3D84_T3518153195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
struct  __StaticArrayInitTypeSizeU3D84_t3518153195 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_t3518153195__padding[84];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D84_T3518153195_H
#ifndef __STATICARRAYINITTYPESIZEU3D82_T2711584141_H
#define __STATICARRAYINITTYPESIZEU3D82_T2711584141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=82
struct  __StaticArrayInitTypeSizeU3D82_t2711584141 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D82_t2711584141__padding[82];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D82_T2711584141_H
#ifndef __STATICARRAYINITTYPESIZEU3D120_T3297148301_H
#define __STATICARRAYINITTYPESIZEU3D120_T3297148301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct  __StaticArrayInitTypeSizeU3D120_t3297148301 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t3297148301__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D120_T3297148301_H
#ifndef __STATICARRAYINITTYPESIZEU3D162_T589212449_H
#define __STATICARRAYINITTYPESIZEU3D162_T589212449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=162
struct  __StaticArrayInitTypeSizeU3D162_t589212449 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D162_t589212449__padding[162];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D162_T589212449_H
#ifndef __STATICARRAYINITTYPESIZEU3D130_T568264946_H
#define __STATICARRAYINITTYPESIZEU3D130_T568264946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
struct  __StaticArrayInitTypeSizeU3D130_t568264946 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t568264946__padding[130];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D130_T568264946_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529101 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529101__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifndef __STATICARRAYINITTYPESIZEU3D76_T385264417_H
#define __STATICARRAYINITTYPESIZEU3D76_T385264417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct  __StaticArrayInitTypeSizeU3D76_t385264417 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t385264417__padding[76];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D76_T385264417_H
#ifndef __STATICARRAYINITTYPESIZEU3D48_T1904228655_H
#define __STATICARRAYINITTYPESIZEU3D48_T1904228655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t1904228655 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t1904228655__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T1904228655_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366763_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366763 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366763__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366763_H
#ifndef __STATICARRAYINITTYPESIZEU3D42_T2710797709_H
#define __STATICARRAYINITTYPESIZEU3D42_T2710797709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct  __StaticArrayInitTypeSizeU3D42_t2710797709 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2710797709__padding[42];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D42_T2710797709_H
#ifndef __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#define __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct  __StaticArrayInitTypeSizeU3D52_t2710732173 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t2710732173__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#ifndef __STATICARRAYINITTYPESIZEU3D72_T2710863245_H
#define __STATICARRAYINITTYPESIZEU3D72_T2710863245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct  __StaticArrayInitTypeSizeU3D72_t2710863245 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t2710863245__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D72_T2710863245_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#define __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t3517497835 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t3517497835__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#ifndef __STATICARRAYINITTYPESIZEU3D56_T385133345_H
#define __STATICARRAYINITTYPESIZEU3D56_T385133345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct  __StaticArrayInitTypeSizeU3D56_t385133345 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t385133345__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D56_T385133345_H
#ifndef INSERTIONBEHAVIOR_T4747287_H
#define INSERTIONBEHAVIOR_T4747287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.InsertionBehavior
struct  InsertionBehavior_t4747287 
{
public:
	// System.Byte System.Collections.Generic.InsertionBehavior::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InsertionBehavior_t4747287, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSERTIONBEHAVIOR_T4747287_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255361  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::0392525BCB01691D1F319D89F2C12BF93A478467
	__StaticArrayInitTypeSizeU3D256_t1757367632  ___0392525BCB01691D1F319D89F2C12BF93A478467_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::0588059ACBD52F7EA2835882F977A9CF72EB9775
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___0588059ACBD52F7EA2835882F977A9CF72EB9775_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84 <PrivateImplementationDetails>::0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C
	__StaticArrayInitTypeSizeU3D84_t3518153195  ___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::121EC59E23F7559B28D338D562528F6299C2DE22
	__StaticArrayInitTypeSizeU3D240_t4103913963  ___121EC59E23F7559B28D338D562528F6299C2DE22_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::1730F09044E91DB8371B849EFF5E6D17BDE4AED0
	__StaticArrayInitTypeSizeU3D24_t3517759979  ___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3
	__StaticArrayInitTypeSizeU3D4096_t4160781710  ___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5
	__StaticArrayInitTypeSizeU3D2048_t1070431640  ___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1FE6CE411858B3D864679DE2139FB081F08BFACD
	__StaticArrayInitTypeSizeU3D16_t385395489  ___1FE6CE411858B3D864679DE2139FB081F08BFACD_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::25420D0055076FA8D3E4DD96BC53AE24DE6E619F
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208 <PrivateImplementationDetails>::25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E
	__StaticArrayInitTypeSizeU3D1208_t1462068942  ___25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::29C1A61550F0E3260E1953D4FAD71C256218EF40
	__StaticArrayInitTypeSizeU3D42_t2710797709  ___29C1A61550F0E3260E1953D4FAD71C256218EF40_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2B33BEC8C30DFDC49DAFE20D3BDE19487850D717
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::2BA840FF6020B8FF623DBCB7188248CF853FAF4F
	__StaticArrayInitTypeSizeU3D36_t385526561  ___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2C840AFA48C27B9C05593E468C1232CA1CC74AFD
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2D1DA5BB407F0C11C3B5116196C0C6374D932B20
	__StaticArrayInitTypeSizeU3D16_t385395489  ___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_t3517563371  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_t3517497835  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::34476C29F6F81C989CFCA42F7C06E84C66236834
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___34476C29F6F81C989CFCA42F7C06E84C66236834_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382 <PrivateImplementationDetails>::35EED060772F2748D13B745DAEC8CD7BD3B87604
	__StaticArrayInitTypeSizeU3D2382_t269021741  ___35EED060772F2748D13B745DAEC8CD7BD3B87604_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3
	__StaticArrayInitTypeSizeU3D38_t1904556335  ___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450 <PrivateImplementationDetails>::379C06C9E702D31469C29033F0DD63931EB349F5
	__StaticArrayInitTypeSizeU3D1450_t1076996900  ___379C06C9E702D31469C29033F0DD63931EB349F5_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::399BD13E240F33F808CA7940293D6EC4E6FD5A00
	__StaticArrayInitTypeSizeU3D10_t1548194903  ___399BD13E240F33F808CA7940293D6EC4E6FD5A00_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::39C9CE73C7B0619D409EF28344F687C1B5C130FE
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___39C9CE73C7B0619D409EF28344F687C1B5C130FE_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=320 <PrivateImplementationDetails>::3C53AFB51FEC23491684C7BEDBC6D4E0F409F851
	__StaticArrayInitTypeSizeU3D320_t3297279373  ___3C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3E823444D2DFECF0F90B436B88F02A533CB376F1
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___3E823444D2DFECF0F90B436B88F02A533CB376F1_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3FE6C283BCF384FD2C8789880DFF59664E2AB4A1
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665 <PrivateImplementationDetails>::40981BAA39513E58B28DCF0103CC04DE2A0A0444
	__StaticArrayInitTypeSizeU3D1665_t3813774423  ___40981BAA39513E58B28DCF0103CC04DE2A0A0444_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::40E7C49413D261F3F38AD3A870C0AC69C8BDA048
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::421EC7E82F2967DF6CA8C3605514DC6F29EE5845
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::433175D38B13FFE177FDD661A309F1B528B3F6E2
	__StaticArrayInitTypeSizeU3D256_t1757367632  ___433175D38B13FFE177FDD661A309F1B528B3F6E2_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::46232052BC757E030490D851F265FB47FA100902
	__StaticArrayInitTypeSizeU3D120_t3297148301  ___46232052BC757E030490D851F265FB47FA100902_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::4858DB4AA76D3933F1CA9E6712D4FDB16903F628
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_t1904228655  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::4F7A8890F332B22B8DE0BD29D36FA7364748D76A
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::536422B321459B242ADED7240B7447E904E083E3
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___536422B321459B242ADED7240B7447E904E083E3_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1080 <PrivateImplementationDetails>::5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3
	__StaticArrayInitTypeSizeU3D1080_t1828617616  ___5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_t1548194903  ___56DFA5053B3131883637F53219E7D88CCEF35949_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::57218C316B6921E2CD61027A2387EDC31A2D9471
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___57218C316B6921E2CD61027A2387EDC31A2D9471_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::57F320D62696EC99727E0FE2045A05F1289CC0C6
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___57F320D62696EC99727E0FE2045A05F1289CC0C6_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3
	__StaticArrayInitTypeSizeU3D212_t3318292412  ___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::5BBDF8058D4235C33F2E8DCF76004031B6187A2F
	__StaticArrayInitTypeSizeU3D36_t385526561  ___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF
	__StaticArrayInitTypeSizeU3D288_t4020123951  ___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5BFE2819B4778217C56416C7585FF0E56EBACD89
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___5BFE2819B4778217C56416C7585FF0E56EBACD89_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::609C0E8D8DA86A09D6013D301C86BA8782C16B8C
	__StaticArrayInitTypeSizeU3D128_t531529101  ___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::62BAB0F245E66C3EB982CF5A7015F0A7C3382283
	__StaticArrayInitTypeSizeU3D48_t1904228655  ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::646036A65DECCD6835C914A46E6E44B729433B60
	__StaticArrayInitTypeSizeU3D2048_t1070431640  ___646036A65DECCD6835C914A46E6E44B729433B60_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::65E32B4E150FD8D24B93B0D42A17F1DAD146162B
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::6770974FEF1E98B9C1864370E2B5B786EB0EA39E
	__StaticArrayInitTypeSizeU3D52_t2710732173  ___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::67EEAD805D708D9AA4E14BF747E44CED801744F3
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___67EEAD805D708D9AA4E14BF747E44CED801744F3_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::6C71197D228427B2864C69B357FEF73D8C9D59DF
	__StaticArrayInitTypeSizeU3D120_t3297148301  ___6C71197D228427B2864C69B357FEF73D8C9D59DF_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3218278898  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::6D797C11E1D4FB68B6570CF2A92B792433527065
	__StaticArrayInitTypeSizeU3D2048_t1070431640  ___6D797C11E1D4FB68B6570CF2A92B792433527065_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_t3825993975  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::6FC754859E4EC74E447048364B216D825C6F8FE7
	__StaticArrayInitTypeSizeU3D76_t385264417  ___6FC754859E4EC74E447048364B216D825C6F8FE7_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::704939CD172085D1295FCE3F1D92431D685D7AA2
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___704939CD172085D1295FCE3F1D92431D685D7AA2_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::7088AAE49F0627B72729078DE6E3182DDCF8ED99
	__StaticArrayInitTypeSizeU3D24_t3517759979  ___7088AAE49F0627B72729078DE6E3182DDCF8ED99_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7341C933A70EAE383CC50C4B945ADB8E08F06737
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___7341C933A70EAE383CC50C4B945ADB8E08F06737_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___736D39815215889F11249D9958F6ED12D37B9F57_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::7F42F2EDC974BE29B2746957416ED1AEFA605F47
	__StaticArrayInitTypeSizeU3D4096_t4160781710  ___7F42F2EDC974BE29B2746957416ED1AEFA605F47_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=21252 <PrivateImplementationDetails>::811A927B7DADD378BE60BBDE794B9277AA9B50EC
	__StaticArrayInitTypeSizeU3D21252_t1490422002  ___811A927B7DADD378BE60BBDE794B9277AA9B50EC_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::81917F1E21F3C22B9F916994547A614FB03E968E
	__StaticArrayInitTypeSizeU3D36_t385526561  ___81917F1E21F3C22B9F916994547A614FB03E968E_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::823566DA642D6EA356E15585921F2A4CA23D6760
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___823566DA642D6EA356E15585921F2A4CA23D6760_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::82C2A59850B2E85BCE1A45A479537A384DF6098D
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___82C2A59850B2E85BCE1A45A479537A384DF6098D_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4
	__StaticArrayInitTypeSizeU3D44_t3517366763  ___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___86F4F563FA2C61798AE6238D789139739428463A_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::871B9CF85DB352BAADF12BAE8F19857683E385AC
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___871B9CF85DB352BAADF12BAE8F19857683E385AC_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::89A040451C8CC5C8FB268BE44BDD74964C104155
	__StaticArrayInitTypeSizeU3D16_t385395489  ___89A040451C8CC5C8FB268BE44BDD74964C104155_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8CAA092E783257106251246FF5C97F88D28517A6
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___8CAA092E783257106251246FF5C97F88D28517A6_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100 <PrivateImplementationDetails>::8D231DD55FE1AD7631BBD0905A17D5EB616C2154
	__StaticArrayInitTypeSizeU3D2100_t1871841525  ___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8E10AC2F34545DFBBF3FCBC06055D797A8C99991
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::8F22C9ECE1331718CBD268A9BBFD2F5E451441E3
	__StaticArrayInitTypeSizeU3D256_t1757367632  ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640 <PrivateImplementationDetails>::90A0542282A011472F94E97CEAE59F8B3B1A3291
	__StaticArrayInitTypeSizeU3D640_t4103651819  ___90A0542282A011472F94E97CEAE59F8B3B1A3291_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::93A63E90605400F34B49F0EB3361D23C89164BDA
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___93A63E90605400F34B49F0EB3361D23C89164BDA_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::94841DD2F330CCB1089BF413E4FA9B04505152E2
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___94841DD2F330CCB1089BF413E4FA9B04505152E2_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::95264589E48F94B7857CFF398FB72A537E13EEE2
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___95264589E48F94B7857CFF398FB72A537E13EEE2_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::95C48758CAE1715783472FB073AB158AB8A0AB2A
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___95C48758CAE1715783472FB073AB158AB8A0AB2A_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::973417296623D8DC6961B09664E54039E44CA5D8
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___973417296623D8DC6961B09664E54039E44CA5D8_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24
	__StaticArrayInitTypeSizeU3D4096_t4160781710  ___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_t3517497835  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A0074C15377C0C870B055927403EA9FA7A349D12
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___A0074C15377C0C870B055927403EA9FA7A349D12_88;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130 <PrivateImplementationDetails>::A1319B706116AB2C6D44483F60A7D0ACEA543396
	__StaticArrayInitTypeSizeU3D130_t568264946  ___A1319B706116AB2C6D44483F60A7D0ACEA543396_89;
	// System.Int64 <PrivateImplementationDetails>::A13AA52274D951A18029131A8DDECF76B569A15D
	int64_t ___A13AA52274D951A18029131A8DDECF76B569A15D_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::A5444763673307F6828C748D4B9708CFC02B0959
	__StaticArrayInitTypeSizeU3D212_t3318292412  ___A5444763673307F6828C748D4B9708CFC02B0959_92;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A6732F8E7FC23766AB329B492D6BF82E3B33233F
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___A6732F8E7FC23766AB329B492D6BF82E3B33233F_93;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::A705A106D95282BD15E13EEA6B0AF583FF786D83
	__StaticArrayInitTypeSizeU3D174_t3302307462  ___A705A106D95282BD15E13EEA6B0AF583FF786D83_94;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018 <PrivateImplementationDetails>::A8A491E4CED49AE0027560476C10D933CE70C8DF
	__StaticArrayInitTypeSizeU3D1018_t2637921688  ___A8A491E4CED49AE0027560476C10D933CE70C8DF_95;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::AC791C4F39504D1184B73478943D0636258DA7B1
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___AC791C4F39504D1184B73478943D0636258DA7B1_96;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::AFCD4E1211233E99373A3367B23105A3D624B1F2
	__StaticArrayInitTypeSizeU3D52_t2710732173  ___AFCD4E1211233E99373A3367B23105A3D624B1F2_97;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::B472ED77CB3B2A66D49D179F1EE2081B70A6AB61
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D
	__StaticArrayInitTypeSizeU3D16_t385395489  ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF
	__StaticArrayInitTypeSizeU3D256_t1757367632  ___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B
	__StaticArrayInitTypeSizeU3D4096_t4160781710  ___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998 <PrivateImplementationDetails>::B881DA88BE0B68D8A6B6B6893822586B8B2CFC45
	__StaticArrayInitTypeSizeU3D998_t1291568276  ___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=162 <PrivateImplementationDetails>::B8864ACB9DD69E3D42151513C840AAE270BF21C8
	__StaticArrayInitTypeSizeU3D162_t589212449  ___B8864ACB9DD69E3D42151513C840AAE270BF21C8_103;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::B8F87834C3597B2EEF22BA6D3A392CC925636401
	__StaticArrayInitTypeSizeU3D360_t971680545  ___B8F87834C3597B2EEF22BA6D3A392CC925636401_104;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::B9B670F134A59FB1107AF01A9FE8F8E3980B3093
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t1548391511  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::BEBC9ECC660A13EFC359BA3383411F698CFF25DB
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::BF5EB60806ECB74EE484105DD9D6F463BF994867
	__StaticArrayInitTypeSizeU3D6_t3217689074  ___BF5EB60806ECB74EE484105DD9D6F463BF994867_110;
	// System.Int64 <PrivateImplementationDetails>::C1A1100642BA9685B30A84D97348484E14AA1865
	int64_t ___C1A1100642BA9685B30A84D97348484E14AA1865_111;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C6F364A0AD934EFED8909446C215752E565D77C1
	__StaticArrayInitTypeSizeU3D16_t385395489  ___C6F364A0AD934EFED8909446C215752E565D77C1_112;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::CE5835130F5277F63D716FC9115526B0AC68FFAD
	__StaticArrayInitTypeSizeU3D174_t3302307462  ___CE5835130F5277F63D716FC9115526B0AC68FFAD_113;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::CE93C35B755802BC4B3D180716B048FC61701EF7
	__StaticArrayInitTypeSizeU3D6_t3217689074  ___CE93C35B755802BC4B3D180716B048FC61701EF7_114;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_t3517497835  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7
	__StaticArrayInitTypeSizeU3D256_t1757367632  ___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D117188BE8D4609C0D531C51B0BB911A4219DEBE
	__StaticArrayInitTypeSizeU3D32_t2711125389  ___D117188BE8D4609C0D531C51B0BB911A4219DEBE_117;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_t2711125389  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=82 <PrivateImplementationDetails>::D76478B994B312CD022DCA207AA2254880D2FCC9
	__StaticArrayInitTypeSizeU3D82_t2711584141  ___D76478B994B312CD022DCA207AA2254880D2FCC9_119;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636
	__StaticArrayInitTypeSizeU3D44_t3517366763  ___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::DA19DB47B583EFCF7825D2E39D661D2354F28219
	__StaticArrayInitTypeSizeU3D76_t385264417  ___DA19DB47B583EFCF7825D2E39D661D2354F28219_121;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82
	__StaticArrayInitTypeSizeU3D56_t385133345  ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t2710732173  ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_123;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::E1827270A5FE1C85F5352A66FD87BA747213D006
	__StaticArrayInitTypeSizeU3D36_t385526561  ___E1827270A5FE1C85F5352A66FD87BA747213D006_124;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::E45BAB43F7D5D038672B3E3431F92E34A7AF2571
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_t3517497835  ___E75835D001C843F156FBA01B001DFE1B8029AC17_126;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t2710732173  ___E92B39D8233061927D9ACDE54665E68E7535635A_127;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::EA9506959484C55CFE0C139C624DF6060E285866
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___EA9506959484C55CFE0C139C624DF6060E285866_128;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262 <PrivateImplementationDetails>::EB5E9A80A40096AB74D2E226650C7258D7BC5E9D
	__StaticArrayInitTypeSizeU3D262_t589409057  ___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::EBF68F411848D603D059DFDEA2321C5A5EA78044
	__StaticArrayInitTypeSizeU3D64_t3517497835  ___EBF68F411848D603D059DFDEA2321C5A5EA78044_130;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_t1548194903  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_t3217885682  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::EC89C317EA2BF49A70EFF5E89C691E34733D7C37
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F06E829E62F3AFBC045D064E10A4F5DF7C969612
	__StaticArrayInitTypeSizeU3D40_t1547998295  ___F06E829E62F3AFBC045D064E10A4F5DF7C969612_134;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11614 <PrivateImplementationDetails>::F073AA332018FDA0D572E99448FFF1D6422BD520
	__StaticArrayInitTypeSizeU3D11614_t2244806902  ___F073AA332018FDA0D572E99448FFF1D6422BD520_135;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::F34B0E10653402E8F788F8BC3F7CD7090928A429
	__StaticArrayInitTypeSizeU3D120_t3297148301  ___F34B0E10653402E8F788F8BC3F7CD7090928A429_136;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F37E34BEADB04F34FCC31078A59F49856CA83D5B
	__StaticArrayInitTypeSizeU3D72_t2710863245  ___F37E34BEADB04F34FCC31078A59F49856CA83D5B_137;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::F512A9ABF88066AAEB92684F95CC05D8101B462B
	__StaticArrayInitTypeSizeU3D94_t3518087659  ___F512A9ABF88066AAEB92684F95CC05D8101B462B_138;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::F8FAABB821300AA500C2CEC6091B3782A7FB44A4
	__StaticArrayInitTypeSizeU3D12_t2710994317  ___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350 <PrivateImplementationDetails>::FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B
	__StaticArrayInitTypeSizeU3D2350_t1842999851  ___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140;

public:
	inline static int32_t get_offset_of_U30392525BCB01691D1F319D89F2C12BF93A478467_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___0392525BCB01691D1F319D89F2C12BF93A478467_0)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632  get_U30392525BCB01691D1F319D89F2C12BF93A478467_0() const { return ___0392525BCB01691D1F319D89F2C12BF93A478467_0; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632 * get_address_of_U30392525BCB01691D1F319D89F2C12BF93A478467_0() { return &___0392525BCB01691D1F319D89F2C12BF93A478467_0; }
	inline void set_U30392525BCB01691D1F319D89F2C12BF93A478467_0(__StaticArrayInitTypeSizeU3D256_t1757367632  value)
	{
		___0392525BCB01691D1F319D89F2C12BF93A478467_0 = value;
	}

	inline static int32_t get_offset_of_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___0588059ACBD52F7EA2835882F977A9CF72EB9775_1)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1() const { return ___0588059ACBD52F7EA2835882F977A9CF72EB9775_1; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1() { return &___0588059ACBD52F7EA2835882F977A9CF72EB9775_1; }
	inline void set_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___0588059ACBD52F7EA2835882F977A9CF72EB9775_1 = value;
	}

	inline static int32_t get_offset_of_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2)); }
	inline __StaticArrayInitTypeSizeU3D84_t3518153195  get_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2() const { return ___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2; }
	inline __StaticArrayInitTypeSizeU3D84_t3518153195 * get_address_of_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2() { return &___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2; }
	inline void set_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2(__StaticArrayInitTypeSizeU3D84_t3518153195  value)
	{
		___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2 = value;
	}

	inline static int32_t get_offset_of_U3121EC59E23F7559B28D338D562528F6299C2DE22_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___121EC59E23F7559B28D338D562528F6299C2DE22_3)); }
	inline __StaticArrayInitTypeSizeU3D240_t4103913963  get_U3121EC59E23F7559B28D338D562528F6299C2DE22_3() const { return ___121EC59E23F7559B28D338D562528F6299C2DE22_3; }
	inline __StaticArrayInitTypeSizeU3D240_t4103913963 * get_address_of_U3121EC59E23F7559B28D338D562528F6299C2DE22_3() { return &___121EC59E23F7559B28D338D562528F6299C2DE22_3; }
	inline void set_U3121EC59E23F7559B28D338D562528F6299C2DE22_3(__StaticArrayInitTypeSizeU3D240_t4103913963  value)
	{
		___121EC59E23F7559B28D338D562528F6299C2DE22_3 = value;
	}

	inline static int32_t get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4() const { return ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4() { return &___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4; }
	inline void set_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4 = value;
	}

	inline static int32_t get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5() const { return ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5() { return &___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5; }
	inline void set_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5 = value;
	}

	inline static int32_t get_offset_of_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6)); }
	inline __StaticArrayInitTypeSizeU3D24_t3517759979  get_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6() const { return ___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6; }
	inline __StaticArrayInitTypeSizeU3D24_t3517759979 * get_address_of_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6() { return &___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6; }
	inline void set_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6(__StaticArrayInitTypeSizeU3D24_t3517759979  value)
	{
		___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_7)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_7; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_7; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_7 = value;
	}

	inline static int32_t get_offset_of_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8)); }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710  get_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8() const { return ___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8; }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710 * get_address_of_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8() { return &___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8; }
	inline void set_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8(__StaticArrayInitTypeSizeU3D4096_t4160781710  value)
	{
		___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8 = value;
	}

	inline static int32_t get_offset_of_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9)); }
	inline __StaticArrayInitTypeSizeU3D2048_t1070431640  get_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9() const { return ___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9; }
	inline __StaticArrayInitTypeSizeU3D2048_t1070431640 * get_address_of_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9() { return &___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9; }
	inline void set_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9(__StaticArrayInitTypeSizeU3D2048_t1070431640  value)
	{
		___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9 = value;
	}

	inline static int32_t get_offset_of_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___1FE6CE411858B3D864679DE2139FB081F08BFACD_10)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395489  get_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10() const { return ___1FE6CE411858B3D864679DE2139FB081F08BFACD_10; }
	inline __StaticArrayInitTypeSizeU3D16_t385395489 * get_address_of_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10() { return &___1FE6CE411858B3D864679DE2139FB081F08BFACD_10; }
	inline void set_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10(__StaticArrayInitTypeSizeU3D16_t385395489  value)
	{
		___1FE6CE411858B3D864679DE2139FB081F08BFACD_10 = value;
	}

	inline static int32_t get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11() const { return ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11() { return &___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11; }
	inline void set_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11 = value;
	}

	inline static int32_t get_offset_of_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12() const { return ___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12() { return &___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12; }
	inline void set_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12 = value;
	}

	inline static int32_t get_offset_of_U325CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13)); }
	inline __StaticArrayInitTypeSizeU3D1208_t1462068942  get_U325CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13() const { return ___25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13; }
	inline __StaticArrayInitTypeSizeU3D1208_t1462068942 * get_address_of_U325CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13() { return &___25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13; }
	inline void set_U325CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13(__StaticArrayInitTypeSizeU3D1208_t1462068942  value)
	{
		___25CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13 = value;
	}

	inline static int32_t get_offset_of_U329C1A61550F0E3260E1953D4FAD71C256218EF40_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___29C1A61550F0E3260E1953D4FAD71C256218EF40_14)); }
	inline __StaticArrayInitTypeSizeU3D42_t2710797709  get_U329C1A61550F0E3260E1953D4FAD71C256218EF40_14() const { return ___29C1A61550F0E3260E1953D4FAD71C256218EF40_14; }
	inline __StaticArrayInitTypeSizeU3D42_t2710797709 * get_address_of_U329C1A61550F0E3260E1953D4FAD71C256218EF40_14() { return &___29C1A61550F0E3260E1953D4FAD71C256218EF40_14; }
	inline void set_U329C1A61550F0E3260E1953D4FAD71C256218EF40_14(__StaticArrayInitTypeSizeU3D42_t2710797709  value)
	{
		___29C1A61550F0E3260E1953D4FAD71C256218EF40_14 = value;
	}

	inline static int32_t get_offset_of_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15() const { return ___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15() { return &___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15; }
	inline void set_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15 = value;
	}

	inline static int32_t get_offset_of_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_16)); }
	inline __StaticArrayInitTypeSizeU3D36_t385526561  get_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_16() const { return ___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_16; }
	inline __StaticArrayInitTypeSizeU3D36_t385526561 * get_address_of_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_16() { return &___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_16; }
	inline void set_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_16(__StaticArrayInitTypeSizeU3D36_t385526561  value)
	{
		___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_16 = value;
	}

	inline static int32_t get_offset_of_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_17)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_17() const { return ___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_17; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_17() { return &___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_17; }
	inline void set_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_17(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_17 = value;
	}

	inline static int32_t get_offset_of_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_18)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395489  get_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_18() const { return ___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_18; }
	inline __StaticArrayInitTypeSizeU3D16_t385395489 * get_address_of_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_18() { return &___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_18; }
	inline void set_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_18(__StaticArrayInitTypeSizeU3D16_t385395489  value)
	{
		___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_18 = value;
	}

	inline static int32_t get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19)); }
	inline __StaticArrayInitTypeSizeU3D14_t3517563371  get_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19() const { return ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19; }
	inline __StaticArrayInitTypeSizeU3D14_t3517563371 * get_address_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19() { return &___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19; }
	inline void set_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19(__StaticArrayInitTypeSizeU3D14_t3517563371  value)
	{
		___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19 = value;
	}

	inline static int32_t get_offset_of_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20() const { return ___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20() { return &___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20; }
	inline void set_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20 = value;
	}

	inline static int32_t get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835  get_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21() const { return ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835 * get_address_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21() { return &___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21; }
	inline void set_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21(__StaticArrayInitTypeSizeU3D64_t3517497835  value)
	{
		___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21 = value;
	}

	inline static int32_t get_offset_of_U334476C29F6F81C989CFCA42F7C06E84C66236834_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___34476C29F6F81C989CFCA42F7C06E84C66236834_22)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U334476C29F6F81C989CFCA42F7C06E84C66236834_22() const { return ___34476C29F6F81C989CFCA42F7C06E84C66236834_22; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U334476C29F6F81C989CFCA42F7C06E84C66236834_22() { return &___34476C29F6F81C989CFCA42F7C06E84C66236834_22; }
	inline void set_U334476C29F6F81C989CFCA42F7C06E84C66236834_22(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___34476C29F6F81C989CFCA42F7C06E84C66236834_22 = value;
	}

	inline static int32_t get_offset_of_U335EED060772F2748D13B745DAEC8CD7BD3B87604_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___35EED060772F2748D13B745DAEC8CD7BD3B87604_23)); }
	inline __StaticArrayInitTypeSizeU3D2382_t269021741  get_U335EED060772F2748D13B745DAEC8CD7BD3B87604_23() const { return ___35EED060772F2748D13B745DAEC8CD7BD3B87604_23; }
	inline __StaticArrayInitTypeSizeU3D2382_t269021741 * get_address_of_U335EED060772F2748D13B745DAEC8CD7BD3B87604_23() { return &___35EED060772F2748D13B745DAEC8CD7BD3B87604_23; }
	inline void set_U335EED060772F2748D13B745DAEC8CD7BD3B87604_23(__StaticArrayInitTypeSizeU3D2382_t269021741  value)
	{
		___35EED060772F2748D13B745DAEC8CD7BD3B87604_23 = value;
	}

	inline static int32_t get_offset_of_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24)); }
	inline __StaticArrayInitTypeSizeU3D38_t1904556335  get_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24() const { return ___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24; }
	inline __StaticArrayInitTypeSizeU3D38_t1904556335 * get_address_of_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24() { return &___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24; }
	inline void set_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24(__StaticArrayInitTypeSizeU3D38_t1904556335  value)
	{
		___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24 = value;
	}

	inline static int32_t get_offset_of_U3379C06C9E702D31469C29033F0DD63931EB349F5_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___379C06C9E702D31469C29033F0DD63931EB349F5_25)); }
	inline __StaticArrayInitTypeSizeU3D1450_t1076996900  get_U3379C06C9E702D31469C29033F0DD63931EB349F5_25() const { return ___379C06C9E702D31469C29033F0DD63931EB349F5_25; }
	inline __StaticArrayInitTypeSizeU3D1450_t1076996900 * get_address_of_U3379C06C9E702D31469C29033F0DD63931EB349F5_25() { return &___379C06C9E702D31469C29033F0DD63931EB349F5_25; }
	inline void set_U3379C06C9E702D31469C29033F0DD63931EB349F5_25(__StaticArrayInitTypeSizeU3D1450_t1076996900  value)
	{
		___379C06C9E702D31469C29033F0DD63931EB349F5_25 = value;
	}

	inline static int32_t get_offset_of_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___399BD13E240F33F808CA7940293D6EC4E6FD5A00_26)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903  get_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_26() const { return ___399BD13E240F33F808CA7940293D6EC4E6FD5A00_26; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903 * get_address_of_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_26() { return &___399BD13E240F33F808CA7940293D6EC4E6FD5A00_26; }
	inline void set_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_26(__StaticArrayInitTypeSizeU3D10_t1548194903  value)
	{
		___399BD13E240F33F808CA7940293D6EC4E6FD5A00_26 = value;
	}

	inline static int32_t get_offset_of_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___39C9CE73C7B0619D409EF28344F687C1B5C130FE_27)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_27() const { return ___39C9CE73C7B0619D409EF28344F687C1B5C130FE_27; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_27() { return &___39C9CE73C7B0619D409EF28344F687C1B5C130FE_27; }
	inline void set_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_27(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___39C9CE73C7B0619D409EF28344F687C1B5C130FE_27 = value;
	}

	inline static int32_t get_offset_of_U33C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___3C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28)); }
	inline __StaticArrayInitTypeSizeU3D320_t3297279373  get_U33C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28() const { return ___3C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28; }
	inline __StaticArrayInitTypeSizeU3D320_t3297279373 * get_address_of_U33C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28() { return &___3C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28; }
	inline void set_U33C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28(__StaticArrayInitTypeSizeU3D320_t3297279373  value)
	{
		___3C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28 = value;
	}

	inline static int32_t get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29() const { return ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29() { return &___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29; }
	inline void set_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29 = value;
	}

	inline static int32_t get_offset_of_U33E823444D2DFECF0F90B436B88F02A533CB376F1_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___3E823444D2DFECF0F90B436B88F02A533CB376F1_30)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_U33E823444D2DFECF0F90B436B88F02A533CB376F1_30() const { return ___3E823444D2DFECF0F90B436B88F02A533CB376F1_30; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_U33E823444D2DFECF0F90B436B88F02A533CB376F1_30() { return &___3E823444D2DFECF0F90B436B88F02A533CB376F1_30; }
	inline void set_U33E823444D2DFECF0F90B436B88F02A533CB376F1_30(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___3E823444D2DFECF0F90B436B88F02A533CB376F1_30 = value;
	}

	inline static int32_t get_offset_of_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31() const { return ___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31() { return &___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31; }
	inline void set_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31 = value;
	}

	inline static int32_t get_offset_of_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___40981BAA39513E58B28DCF0103CC04DE2A0A0444_32)); }
	inline __StaticArrayInitTypeSizeU3D1665_t3813774423  get_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_32() const { return ___40981BAA39513E58B28DCF0103CC04DE2A0A0444_32; }
	inline __StaticArrayInitTypeSizeU3D1665_t3813774423 * get_address_of_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_32() { return &___40981BAA39513E58B28DCF0103CC04DE2A0A0444_32; }
	inline void set_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_32(__StaticArrayInitTypeSizeU3D1665_t3813774423  value)
	{
		___40981BAA39513E58B28DCF0103CC04DE2A0A0444_32 = value;
	}

	inline static int32_t get_offset_of_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_33)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_33() const { return ___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_33; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_33() { return &___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_33; }
	inline void set_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_33(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_33 = value;
	}

	inline static int32_t get_offset_of_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34() const { return ___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34() { return &___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34; }
	inline void set_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34 = value;
	}

	inline static int32_t get_offset_of_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___433175D38B13FFE177FDD661A309F1B528B3F6E2_35)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632  get_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_35() const { return ___433175D38B13FFE177FDD661A309F1B528B3F6E2_35; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632 * get_address_of_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_35() { return &___433175D38B13FFE177FDD661A309F1B528B3F6E2_35; }
	inline void set_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_35(__StaticArrayInitTypeSizeU3D256_t1757367632  value)
	{
		___433175D38B13FFE177FDD661A309F1B528B3F6E2_35 = value;
	}

	inline static int32_t get_offset_of_U346232052BC757E030490D851F265FB47FA100902_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___46232052BC757E030490D851F265FB47FA100902_36)); }
	inline __StaticArrayInitTypeSizeU3D120_t3297148301  get_U346232052BC757E030490D851F265FB47FA100902_36() const { return ___46232052BC757E030490D851F265FB47FA100902_36; }
	inline __StaticArrayInitTypeSizeU3D120_t3297148301 * get_address_of_U346232052BC757E030490D851F265FB47FA100902_36() { return &___46232052BC757E030490D851F265FB47FA100902_36; }
	inline void set_U346232052BC757E030490D851F265FB47FA100902_36(__StaticArrayInitTypeSizeU3D120_t3297148301  value)
	{
		___46232052BC757E030490D851F265FB47FA100902_36 = value;
	}

	inline static int32_t get_offset_of_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_37)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_37() const { return ___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_37; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_37() { return &___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_37; }
	inline void set_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_37(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_37 = value;
	}

	inline static int32_t get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38)); }
	inline __StaticArrayInitTypeSizeU3D48_t1904228655  get_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38() const { return ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38; }
	inline __StaticArrayInitTypeSizeU3D48_t1904228655 * get_address_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38() { return &___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38; }
	inline void set_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38(__StaticArrayInitTypeSizeU3D48_t1904228655  value)
	{
		___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38 = value;
	}

	inline static int32_t get_offset_of_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_39)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_39() const { return ___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_39; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_39() { return &___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_39; }
	inline void set_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_39(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_39 = value;
	}

	inline static int32_t get_offset_of_U3536422B321459B242ADED7240B7447E904E083E3_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___536422B321459B242ADED7240B7447E904E083E3_40)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U3536422B321459B242ADED7240B7447E904E083E3_40() const { return ___536422B321459B242ADED7240B7447E904E083E3_40; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U3536422B321459B242ADED7240B7447E904E083E3_40() { return &___536422B321459B242ADED7240B7447E904E083E3_40; }
	inline void set_U3536422B321459B242ADED7240B7447E904E083E3_40(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___536422B321459B242ADED7240B7447E904E083E3_40 = value;
	}

	inline static int32_t get_offset_of_U35382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41)); }
	inline __StaticArrayInitTypeSizeU3D1080_t1828617616  get_U35382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41() const { return ___5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41; }
	inline __StaticArrayInitTypeSizeU3D1080_t1828617616 * get_address_of_U35382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41() { return &___5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41; }
	inline void set_U35382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41(__StaticArrayInitTypeSizeU3D1080_t1828617616  value)
	{
		___5382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41 = value;
	}

	inline static int32_t get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___56DFA5053B3131883637F53219E7D88CCEF35949_42)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903  get_U356DFA5053B3131883637F53219E7D88CCEF35949_42() const { return ___56DFA5053B3131883637F53219E7D88CCEF35949_42; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903 * get_address_of_U356DFA5053B3131883637F53219E7D88CCEF35949_42() { return &___56DFA5053B3131883637F53219E7D88CCEF35949_42; }
	inline void set_U356DFA5053B3131883637F53219E7D88CCEF35949_42(__StaticArrayInitTypeSizeU3D10_t1548194903  value)
	{
		___56DFA5053B3131883637F53219E7D88CCEF35949_42 = value;
	}

	inline static int32_t get_offset_of_U357218C316B6921E2CD61027A2387EDC31A2D9471_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___57218C316B6921E2CD61027A2387EDC31A2D9471_43)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U357218C316B6921E2CD61027A2387EDC31A2D9471_43() const { return ___57218C316B6921E2CD61027A2387EDC31A2D9471_43; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U357218C316B6921E2CD61027A2387EDC31A2D9471_43() { return &___57218C316B6921E2CD61027A2387EDC31A2D9471_43; }
	inline void set_U357218C316B6921E2CD61027A2387EDC31A2D9471_43(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___57218C316B6921E2CD61027A2387EDC31A2D9471_43 = value;
	}

	inline static int32_t get_offset_of_U357F320D62696EC99727E0FE2045A05F1289CC0C6_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___57F320D62696EC99727E0FE2045A05F1289CC0C6_44)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U357F320D62696EC99727E0FE2045A05F1289CC0C6_44() const { return ___57F320D62696EC99727E0FE2045A05F1289CC0C6_44; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U357F320D62696EC99727E0FE2045A05F1289CC0C6_44() { return &___57F320D62696EC99727E0FE2045A05F1289CC0C6_44; }
	inline void set_U357F320D62696EC99727E0FE2045A05F1289CC0C6_44(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___57F320D62696EC99727E0FE2045A05F1289CC0C6_44 = value;
	}

	inline static int32_t get_offset_of_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45)); }
	inline __StaticArrayInitTypeSizeU3D212_t3318292412  get_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45() const { return ___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45; }
	inline __StaticArrayInitTypeSizeU3D212_t3318292412 * get_address_of_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45() { return &___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45; }
	inline void set_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45(__StaticArrayInitTypeSizeU3D212_t3318292412  value)
	{
		___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45 = value;
	}

	inline static int32_t get_offset_of_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_46)); }
	inline __StaticArrayInitTypeSizeU3D36_t385526561  get_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_46() const { return ___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_46; }
	inline __StaticArrayInitTypeSizeU3D36_t385526561 * get_address_of_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_46() { return &___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_46; }
	inline void set_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_46(__StaticArrayInitTypeSizeU3D36_t385526561  value)
	{
		___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_46 = value;
	}

	inline static int32_t get_offset_of_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47)); }
	inline __StaticArrayInitTypeSizeU3D288_t4020123951  get_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47() const { return ___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47; }
	inline __StaticArrayInitTypeSizeU3D288_t4020123951 * get_address_of_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47() { return &___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47; }
	inline void set_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47(__StaticArrayInitTypeSizeU3D288_t4020123951  value)
	{
		___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47 = value;
	}

	inline static int32_t get_offset_of_U35BFE2819B4778217C56416C7585FF0E56EBACD89_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___5BFE2819B4778217C56416C7585FF0E56EBACD89_48)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U35BFE2819B4778217C56416C7585FF0E56EBACD89_48() const { return ___5BFE2819B4778217C56416C7585FF0E56EBACD89_48; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U35BFE2819B4778217C56416C7585FF0E56EBACD89_48() { return &___5BFE2819B4778217C56416C7585FF0E56EBACD89_48; }
	inline void set_U35BFE2819B4778217C56416C7585FF0E56EBACD89_48(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___5BFE2819B4778217C56416C7585FF0E56EBACD89_48 = value;
	}

	inline static int32_t get_offset_of_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529101  get_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49() const { return ___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49; }
	inline __StaticArrayInitTypeSizeU3D128_t531529101 * get_address_of_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49() { return &___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49; }
	inline void set_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49(__StaticArrayInitTypeSizeU3D128_t531529101  value)
	{
		___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49 = value;
	}

	inline static int32_t get_offset_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_50)); }
	inline __StaticArrayInitTypeSizeU3D48_t1904228655  get_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_50() const { return ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_50; }
	inline __StaticArrayInitTypeSizeU3D48_t1904228655 * get_address_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_50() { return &___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_50; }
	inline void set_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_50(__StaticArrayInitTypeSizeU3D48_t1904228655  value)
	{
		___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_50 = value;
	}

	inline static int32_t get_offset_of_U3646036A65DECCD6835C914A46E6E44B729433B60_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___646036A65DECCD6835C914A46E6E44B729433B60_51)); }
	inline __StaticArrayInitTypeSizeU3D2048_t1070431640  get_U3646036A65DECCD6835C914A46E6E44B729433B60_51() const { return ___646036A65DECCD6835C914A46E6E44B729433B60_51; }
	inline __StaticArrayInitTypeSizeU3D2048_t1070431640 * get_address_of_U3646036A65DECCD6835C914A46E6E44B729433B60_51() { return &___646036A65DECCD6835C914A46E6E44B729433B60_51; }
	inline void set_U3646036A65DECCD6835C914A46E6E44B729433B60_51(__StaticArrayInitTypeSizeU3D2048_t1070431640  value)
	{
		___646036A65DECCD6835C914A46E6E44B729433B60_51 = value;
	}

	inline static int32_t get_offset_of_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_52)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_52() const { return ___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_52; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_52() { return &___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_52; }
	inline void set_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_52(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_52 = value;
	}

	inline static int32_t get_offset_of_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_53() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_53)); }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173  get_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_53() const { return ___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_53; }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173 * get_address_of_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_53() { return &___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_53; }
	inline void set_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_53(__StaticArrayInitTypeSizeU3D52_t2710732173  value)
	{
		___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_53 = value;
	}

	inline static int32_t get_offset_of_U367EEAD805D708D9AA4E14BF747E44CED801744F3_54() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___67EEAD805D708D9AA4E14BF747E44CED801744F3_54)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U367EEAD805D708D9AA4E14BF747E44CED801744F3_54() const { return ___67EEAD805D708D9AA4E14BF747E44CED801744F3_54; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U367EEAD805D708D9AA4E14BF747E44CED801744F3_54() { return &___67EEAD805D708D9AA4E14BF747E44CED801744F3_54; }
	inline void set_U367EEAD805D708D9AA4E14BF747E44CED801744F3_54(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___67EEAD805D708D9AA4E14BF747E44CED801744F3_54 = value;
	}

	inline static int32_t get_offset_of_U36C71197D228427B2864C69B357FEF73D8C9D59DF_55() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___6C71197D228427B2864C69B357FEF73D8C9D59DF_55)); }
	inline __StaticArrayInitTypeSizeU3D120_t3297148301  get_U36C71197D228427B2864C69B357FEF73D8C9D59DF_55() const { return ___6C71197D228427B2864C69B357FEF73D8C9D59DF_55; }
	inline __StaticArrayInitTypeSizeU3D120_t3297148301 * get_address_of_U36C71197D228427B2864C69B357FEF73D8C9D59DF_55() { return &___6C71197D228427B2864C69B357FEF73D8C9D59DF_55; }
	inline void set_U36C71197D228427B2864C69B357FEF73D8C9D59DF_55(__StaticArrayInitTypeSizeU3D120_t3297148301  value)
	{
		___6C71197D228427B2864C69B357FEF73D8C9D59DF_55 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_56() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_56)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278898  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_56() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_56; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278898 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_56() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_56; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_56(__StaticArrayInitTypeSizeU3D9_t3218278898  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_56 = value;
	}

	inline static int32_t get_offset_of_U36D797C11E1D4FB68B6570CF2A92B792433527065_57() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___6D797C11E1D4FB68B6570CF2A92B792433527065_57)); }
	inline __StaticArrayInitTypeSizeU3D2048_t1070431640  get_U36D797C11E1D4FB68B6570CF2A92B792433527065_57() const { return ___6D797C11E1D4FB68B6570CF2A92B792433527065_57; }
	inline __StaticArrayInitTypeSizeU3D2048_t1070431640 * get_address_of_U36D797C11E1D4FB68B6570CF2A92B792433527065_57() { return &___6D797C11E1D4FB68B6570CF2A92B792433527065_57; }
	inline void set_U36D797C11E1D4FB68B6570CF2A92B792433527065_57(__StaticArrayInitTypeSizeU3D2048_t1070431640  value)
	{
		___6D797C11E1D4FB68B6570CF2A92B792433527065_57 = value;
	}

	inline static int32_t get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58)); }
	inline __StaticArrayInitTypeSizeU3D3132_t3825993975  get_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58() const { return ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58; }
	inline __StaticArrayInitTypeSizeU3D3132_t3825993975 * get_address_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58() { return &___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58; }
	inline void set_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58(__StaticArrayInitTypeSizeU3D3132_t3825993975  value)
	{
		___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58 = value;
	}

	inline static int32_t get_offset_of_U36FC754859E4EC74E447048364B216D825C6F8FE7_59() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___6FC754859E4EC74E447048364B216D825C6F8FE7_59)); }
	inline __StaticArrayInitTypeSizeU3D76_t385264417  get_U36FC754859E4EC74E447048364B216D825C6F8FE7_59() const { return ___6FC754859E4EC74E447048364B216D825C6F8FE7_59; }
	inline __StaticArrayInitTypeSizeU3D76_t385264417 * get_address_of_U36FC754859E4EC74E447048364B216D825C6F8FE7_59() { return &___6FC754859E4EC74E447048364B216D825C6F8FE7_59; }
	inline void set_U36FC754859E4EC74E447048364B216D825C6F8FE7_59(__StaticArrayInitTypeSizeU3D76_t385264417  value)
	{
		___6FC754859E4EC74E447048364B216D825C6F8FE7_59 = value;
	}

	inline static int32_t get_offset_of_U3704939CD172085D1295FCE3F1D92431D685D7AA2_60() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___704939CD172085D1295FCE3F1D92431D685D7AA2_60)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U3704939CD172085D1295FCE3F1D92431D685D7AA2_60() const { return ___704939CD172085D1295FCE3F1D92431D685D7AA2_60; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U3704939CD172085D1295FCE3F1D92431D685D7AA2_60() { return &___704939CD172085D1295FCE3F1D92431D685D7AA2_60; }
	inline void set_U3704939CD172085D1295FCE3F1D92431D685D7AA2_60(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___704939CD172085D1295FCE3F1D92431D685D7AA2_60 = value;
	}

	inline static int32_t get_offset_of_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_61() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___7088AAE49F0627B72729078DE6E3182DDCF8ED99_61)); }
	inline __StaticArrayInitTypeSizeU3D24_t3517759979  get_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_61() const { return ___7088AAE49F0627B72729078DE6E3182DDCF8ED99_61; }
	inline __StaticArrayInitTypeSizeU3D24_t3517759979 * get_address_of_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_61() { return &___7088AAE49F0627B72729078DE6E3182DDCF8ED99_61; }
	inline void set_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_61(__StaticArrayInitTypeSizeU3D24_t3517759979  value)
	{
		___7088AAE49F0627B72729078DE6E3182DDCF8ED99_61 = value;
	}

	inline static int32_t get_offset_of_U37341C933A70EAE383CC50C4B945ADB8E08F06737_62() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___7341C933A70EAE383CC50C4B945ADB8E08F06737_62)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U37341C933A70EAE383CC50C4B945ADB8E08F06737_62() const { return ___7341C933A70EAE383CC50C4B945ADB8E08F06737_62; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U37341C933A70EAE383CC50C4B945ADB8E08F06737_62() { return &___7341C933A70EAE383CC50C4B945ADB8E08F06737_62; }
	inline void set_U37341C933A70EAE383CC50C4B945ADB8E08F06737_62(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___7341C933A70EAE383CC50C4B945ADB8E08F06737_62 = value;
	}

	inline static int32_t get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_63() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___736D39815215889F11249D9958F6ED12D37B9F57_63)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U3736D39815215889F11249D9958F6ED12D37B9F57_63() const { return ___736D39815215889F11249D9958F6ED12D37B9F57_63; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U3736D39815215889F11249D9958F6ED12D37B9F57_63() { return &___736D39815215889F11249D9958F6ED12D37B9F57_63; }
	inline void set_U3736D39815215889F11249D9958F6ED12D37B9F57_63(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___736D39815215889F11249D9958F6ED12D37B9F57_63 = value;
	}

	inline static int32_t get_offset_of_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_64() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___7F42F2EDC974BE29B2746957416ED1AEFA605F47_64)); }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710  get_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_64() const { return ___7F42F2EDC974BE29B2746957416ED1AEFA605F47_64; }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710 * get_address_of_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_64() { return &___7F42F2EDC974BE29B2746957416ED1AEFA605F47_64; }
	inline void set_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_64(__StaticArrayInitTypeSizeU3D4096_t4160781710  value)
	{
		___7F42F2EDC974BE29B2746957416ED1AEFA605F47_64 = value;
	}

	inline static int32_t get_offset_of_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65() const { return ___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65() { return &___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65; }
	inline void set_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65 = value;
	}

	inline static int32_t get_offset_of_U3811A927B7DADD378BE60BBDE794B9277AA9B50EC_66() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___811A927B7DADD378BE60BBDE794B9277AA9B50EC_66)); }
	inline __StaticArrayInitTypeSizeU3D21252_t1490422002  get_U3811A927B7DADD378BE60BBDE794B9277AA9B50EC_66() const { return ___811A927B7DADD378BE60BBDE794B9277AA9B50EC_66; }
	inline __StaticArrayInitTypeSizeU3D21252_t1490422002 * get_address_of_U3811A927B7DADD378BE60BBDE794B9277AA9B50EC_66() { return &___811A927B7DADD378BE60BBDE794B9277AA9B50EC_66; }
	inline void set_U3811A927B7DADD378BE60BBDE794B9277AA9B50EC_66(__StaticArrayInitTypeSizeU3D21252_t1490422002  value)
	{
		___811A927B7DADD378BE60BBDE794B9277AA9B50EC_66 = value;
	}

	inline static int32_t get_offset_of_U381917F1E21F3C22B9F916994547A614FB03E968E_67() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___81917F1E21F3C22B9F916994547A614FB03E968E_67)); }
	inline __StaticArrayInitTypeSizeU3D36_t385526561  get_U381917F1E21F3C22B9F916994547A614FB03E968E_67() const { return ___81917F1E21F3C22B9F916994547A614FB03E968E_67; }
	inline __StaticArrayInitTypeSizeU3D36_t385526561 * get_address_of_U381917F1E21F3C22B9F916994547A614FB03E968E_67() { return &___81917F1E21F3C22B9F916994547A614FB03E968E_67; }
	inline void set_U381917F1E21F3C22B9F916994547A614FB03E968E_67(__StaticArrayInitTypeSizeU3D36_t385526561  value)
	{
		___81917F1E21F3C22B9F916994547A614FB03E968E_67 = value;
	}

	inline static int32_t get_offset_of_U3823566DA642D6EA356E15585921F2A4CA23D6760_68() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___823566DA642D6EA356E15585921F2A4CA23D6760_68)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U3823566DA642D6EA356E15585921F2A4CA23D6760_68() const { return ___823566DA642D6EA356E15585921F2A4CA23D6760_68; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U3823566DA642D6EA356E15585921F2A4CA23D6760_68() { return &___823566DA642D6EA356E15585921F2A4CA23D6760_68; }
	inline void set_U3823566DA642D6EA356E15585921F2A4CA23D6760_68(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___823566DA642D6EA356E15585921F2A4CA23D6760_68 = value;
	}

	inline static int32_t get_offset_of_U382C2A59850B2E85BCE1A45A479537A384DF6098D_69() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___82C2A59850B2E85BCE1A45A479537A384DF6098D_69)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_U382C2A59850B2E85BCE1A45A479537A384DF6098D_69() const { return ___82C2A59850B2E85BCE1A45A479537A384DF6098D_69; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_U382C2A59850B2E85BCE1A45A479537A384DF6098D_69() { return &___82C2A59850B2E85BCE1A45A479537A384DF6098D_69; }
	inline void set_U382C2A59850B2E85BCE1A45A479537A384DF6098D_69(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___82C2A59850B2E85BCE1A45A479537A384DF6098D_69 = value;
	}

	inline static int32_t get_offset_of_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70)); }
	inline __StaticArrayInitTypeSizeU3D44_t3517366763  get_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70() const { return ___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70; }
	inline __StaticArrayInitTypeSizeU3D44_t3517366763 * get_address_of_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70() { return &___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70; }
	inline void set_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70(__StaticArrayInitTypeSizeU3D44_t3517366763  value)
	{
		___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70 = value;
	}

	inline static int32_t get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_71() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___86F4F563FA2C61798AE6238D789139739428463A_71)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U386F4F563FA2C61798AE6238D789139739428463A_71() const { return ___86F4F563FA2C61798AE6238D789139739428463A_71; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U386F4F563FA2C61798AE6238D789139739428463A_71() { return &___86F4F563FA2C61798AE6238D789139739428463A_71; }
	inline void set_U386F4F563FA2C61798AE6238D789139739428463A_71(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___86F4F563FA2C61798AE6238D789139739428463A_71 = value;
	}

	inline static int32_t get_offset_of_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_72() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___871B9CF85DB352BAADF12BAE8F19857683E385AC_72)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_72() const { return ___871B9CF85DB352BAADF12BAE8F19857683E385AC_72; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_72() { return &___871B9CF85DB352BAADF12BAE8F19857683E385AC_72; }
	inline void set_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_72(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___871B9CF85DB352BAADF12BAE8F19857683E385AC_72 = value;
	}

	inline static int32_t get_offset_of_U389A040451C8CC5C8FB268BE44BDD74964C104155_73() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___89A040451C8CC5C8FB268BE44BDD74964C104155_73)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395489  get_U389A040451C8CC5C8FB268BE44BDD74964C104155_73() const { return ___89A040451C8CC5C8FB268BE44BDD74964C104155_73; }
	inline __StaticArrayInitTypeSizeU3D16_t385395489 * get_address_of_U389A040451C8CC5C8FB268BE44BDD74964C104155_73() { return &___89A040451C8CC5C8FB268BE44BDD74964C104155_73; }
	inline void set_U389A040451C8CC5C8FB268BE44BDD74964C104155_73(__StaticArrayInitTypeSizeU3D16_t385395489  value)
	{
		___89A040451C8CC5C8FB268BE44BDD74964C104155_73 = value;
	}

	inline static int32_t get_offset_of_U38CAA092E783257106251246FF5C97F88D28517A6_74() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___8CAA092E783257106251246FF5C97F88D28517A6_74)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U38CAA092E783257106251246FF5C97F88D28517A6_74() const { return ___8CAA092E783257106251246FF5C97F88D28517A6_74; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U38CAA092E783257106251246FF5C97F88D28517A6_74() { return &___8CAA092E783257106251246FF5C97F88D28517A6_74; }
	inline void set_U38CAA092E783257106251246FF5C97F88D28517A6_74(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___8CAA092E783257106251246FF5C97F88D28517A6_74 = value;
	}

	inline static int32_t get_offset_of_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_75() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_75)); }
	inline __StaticArrayInitTypeSizeU3D2100_t1871841525  get_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_75() const { return ___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_75; }
	inline __StaticArrayInitTypeSizeU3D2100_t1871841525 * get_address_of_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_75() { return &___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_75; }
	inline void set_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_75(__StaticArrayInitTypeSizeU3D2100_t1871841525  value)
	{
		___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_75 = value;
	}

	inline static int32_t get_offset_of_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_76() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_76)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_76() const { return ___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_76; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_76() { return &___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_76; }
	inline void set_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_76(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_76 = value;
	}

	inline static int32_t get_offset_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632  get_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77() const { return ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632 * get_address_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77() { return &___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77; }
	inline void set_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77(__StaticArrayInitTypeSizeU3D256_t1757367632  value)
	{
		___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77 = value;
	}

	inline static int32_t get_offset_of_U390A0542282A011472F94E97CEAE59F8B3B1A3291_78() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___90A0542282A011472F94E97CEAE59F8B3B1A3291_78)); }
	inline __StaticArrayInitTypeSizeU3D640_t4103651819  get_U390A0542282A011472F94E97CEAE59F8B3B1A3291_78() const { return ___90A0542282A011472F94E97CEAE59F8B3B1A3291_78; }
	inline __StaticArrayInitTypeSizeU3D640_t4103651819 * get_address_of_U390A0542282A011472F94E97CEAE59F8B3B1A3291_78() { return &___90A0542282A011472F94E97CEAE59F8B3B1A3291_78; }
	inline void set_U390A0542282A011472F94E97CEAE59F8B3B1A3291_78(__StaticArrayInitTypeSizeU3D640_t4103651819  value)
	{
		___90A0542282A011472F94E97CEAE59F8B3B1A3291_78 = value;
	}

	inline static int32_t get_offset_of_U393A63E90605400F34B49F0EB3361D23C89164BDA_79() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___93A63E90605400F34B49F0EB3361D23C89164BDA_79)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_U393A63E90605400F34B49F0EB3361D23C89164BDA_79() const { return ___93A63E90605400F34B49F0EB3361D23C89164BDA_79; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_U393A63E90605400F34B49F0EB3361D23C89164BDA_79() { return &___93A63E90605400F34B49F0EB3361D23C89164BDA_79; }
	inline void set_U393A63E90605400F34B49F0EB3361D23C89164BDA_79(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___93A63E90605400F34B49F0EB3361D23C89164BDA_79 = value;
	}

	inline static int32_t get_offset_of_U394841DD2F330CCB1089BF413E4FA9B04505152E2_80() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___94841DD2F330CCB1089BF413E4FA9B04505152E2_80)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U394841DD2F330CCB1089BF413E4FA9B04505152E2_80() const { return ___94841DD2F330CCB1089BF413E4FA9B04505152E2_80; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U394841DD2F330CCB1089BF413E4FA9B04505152E2_80() { return &___94841DD2F330CCB1089BF413E4FA9B04505152E2_80; }
	inline void set_U394841DD2F330CCB1089BF413E4FA9B04505152E2_80(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___94841DD2F330CCB1089BF413E4FA9B04505152E2_80 = value;
	}

	inline static int32_t get_offset_of_U395264589E48F94B7857CFF398FB72A537E13EEE2_81() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___95264589E48F94B7857CFF398FB72A537E13EEE2_81)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_U395264589E48F94B7857CFF398FB72A537E13EEE2_81() const { return ___95264589E48F94B7857CFF398FB72A537E13EEE2_81; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_U395264589E48F94B7857CFF398FB72A537E13EEE2_81() { return &___95264589E48F94B7857CFF398FB72A537E13EEE2_81; }
	inline void set_U395264589E48F94B7857CFF398FB72A537E13EEE2_81(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___95264589E48F94B7857CFF398FB72A537E13EEE2_81 = value;
	}

	inline static int32_t get_offset_of_U395C48758CAE1715783472FB073AB158AB8A0AB2A_82() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___95C48758CAE1715783472FB073AB158AB8A0AB2A_82)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U395C48758CAE1715783472FB073AB158AB8A0AB2A_82() const { return ___95C48758CAE1715783472FB073AB158AB8A0AB2A_82; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U395C48758CAE1715783472FB073AB158AB8A0AB2A_82() { return &___95C48758CAE1715783472FB073AB158AB8A0AB2A_82; }
	inline void set_U395C48758CAE1715783472FB073AB158AB8A0AB2A_82(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___95C48758CAE1715783472FB073AB158AB8A0AB2A_82 = value;
	}

	inline static int32_t get_offset_of_U3973417296623D8DC6961B09664E54039E44CA5D8_83() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___973417296623D8DC6961B09664E54039E44CA5D8_83)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_U3973417296623D8DC6961B09664E54039E44CA5D8_83() const { return ___973417296623D8DC6961B09664E54039E44CA5D8_83; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_U3973417296623D8DC6961B09664E54039E44CA5D8_83() { return &___973417296623D8DC6961B09664E54039E44CA5D8_83; }
	inline void set_U3973417296623D8DC6961B09664E54039E44CA5D8_83(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___973417296623D8DC6961B09664E54039E44CA5D8_83 = value;
	}

	inline static int32_t get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_84() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_84)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_84() const { return ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_84; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_84() { return &___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_84; }
	inline void set_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_84(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_84 = value;
	}

	inline static int32_t get_offset_of_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85)); }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710  get_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85() const { return ___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85; }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710 * get_address_of_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85() { return &___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85; }
	inline void set_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85(__StaticArrayInitTypeSizeU3D4096_t4160781710  value)
	{
		___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85 = value;
	}

	inline static int32_t get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835  get_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86() const { return ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835 * get_address_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86() { return &___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86; }
	inline void set_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86(__StaticArrayInitTypeSizeU3D64_t3517497835  value)
	{
		___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86 = value;
	}

	inline static int32_t get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87() const { return ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87() { return &___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87; }
	inline void set_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87 = value;
	}

	inline static int32_t get_offset_of_A0074C15377C0C870B055927403EA9FA7A349D12_88() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A0074C15377C0C870B055927403EA9FA7A349D12_88)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_A0074C15377C0C870B055927403EA9FA7A349D12_88() const { return ___A0074C15377C0C870B055927403EA9FA7A349D12_88; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_A0074C15377C0C870B055927403EA9FA7A349D12_88() { return &___A0074C15377C0C870B055927403EA9FA7A349D12_88; }
	inline void set_A0074C15377C0C870B055927403EA9FA7A349D12_88(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___A0074C15377C0C870B055927403EA9FA7A349D12_88 = value;
	}

	inline static int32_t get_offset_of_A1319B706116AB2C6D44483F60A7D0ACEA543396_89() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A1319B706116AB2C6D44483F60A7D0ACEA543396_89)); }
	inline __StaticArrayInitTypeSizeU3D130_t568264946  get_A1319B706116AB2C6D44483F60A7D0ACEA543396_89() const { return ___A1319B706116AB2C6D44483F60A7D0ACEA543396_89; }
	inline __StaticArrayInitTypeSizeU3D130_t568264946 * get_address_of_A1319B706116AB2C6D44483F60A7D0ACEA543396_89() { return &___A1319B706116AB2C6D44483F60A7D0ACEA543396_89; }
	inline void set_A1319B706116AB2C6D44483F60A7D0ACEA543396_89(__StaticArrayInitTypeSizeU3D130_t568264946  value)
	{
		___A1319B706116AB2C6D44483F60A7D0ACEA543396_89 = value;
	}

	inline static int32_t get_offset_of_A13AA52274D951A18029131A8DDECF76B569A15D_90() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A13AA52274D951A18029131A8DDECF76B569A15D_90)); }
	inline int64_t get_A13AA52274D951A18029131A8DDECF76B569A15D_90() const { return ___A13AA52274D951A18029131A8DDECF76B569A15D_90; }
	inline int64_t* get_address_of_A13AA52274D951A18029131A8DDECF76B569A15D_90() { return &___A13AA52274D951A18029131A8DDECF76B569A15D_90; }
	inline void set_A13AA52274D951A18029131A8DDECF76B569A15D_90(int64_t value)
	{
		___A13AA52274D951A18029131A8DDECF76B569A15D_90 = value;
	}

	inline static int32_t get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_91() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A323DB0813C4D072957BA6FDA79D9776674CD06B_91)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_A323DB0813C4D072957BA6FDA79D9776674CD06B_91() const { return ___A323DB0813C4D072957BA6FDA79D9776674CD06B_91; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_91() { return &___A323DB0813C4D072957BA6FDA79D9776674CD06B_91; }
	inline void set_A323DB0813C4D072957BA6FDA79D9776674CD06B_91(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___A323DB0813C4D072957BA6FDA79D9776674CD06B_91 = value;
	}

	inline static int32_t get_offset_of_A5444763673307F6828C748D4B9708CFC02B0959_92() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A5444763673307F6828C748D4B9708CFC02B0959_92)); }
	inline __StaticArrayInitTypeSizeU3D212_t3318292412  get_A5444763673307F6828C748D4B9708CFC02B0959_92() const { return ___A5444763673307F6828C748D4B9708CFC02B0959_92; }
	inline __StaticArrayInitTypeSizeU3D212_t3318292412 * get_address_of_A5444763673307F6828C748D4B9708CFC02B0959_92() { return &___A5444763673307F6828C748D4B9708CFC02B0959_92; }
	inline void set_A5444763673307F6828C748D4B9708CFC02B0959_92(__StaticArrayInitTypeSizeU3D212_t3318292412  value)
	{
		___A5444763673307F6828C748D4B9708CFC02B0959_92 = value;
	}

	inline static int32_t get_offset_of_A6732F8E7FC23766AB329B492D6BF82E3B33233F_93() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A6732F8E7FC23766AB329B492D6BF82E3B33233F_93)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_A6732F8E7FC23766AB329B492D6BF82E3B33233F_93() const { return ___A6732F8E7FC23766AB329B492D6BF82E3B33233F_93; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_A6732F8E7FC23766AB329B492D6BF82E3B33233F_93() { return &___A6732F8E7FC23766AB329B492D6BF82E3B33233F_93; }
	inline void set_A6732F8E7FC23766AB329B492D6BF82E3B33233F_93(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___A6732F8E7FC23766AB329B492D6BF82E3B33233F_93 = value;
	}

	inline static int32_t get_offset_of_A705A106D95282BD15E13EEA6B0AF583FF786D83_94() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A705A106D95282BD15E13EEA6B0AF583FF786D83_94)); }
	inline __StaticArrayInitTypeSizeU3D174_t3302307462  get_A705A106D95282BD15E13EEA6B0AF583FF786D83_94() const { return ___A705A106D95282BD15E13EEA6B0AF583FF786D83_94; }
	inline __StaticArrayInitTypeSizeU3D174_t3302307462 * get_address_of_A705A106D95282BD15E13EEA6B0AF583FF786D83_94() { return &___A705A106D95282BD15E13EEA6B0AF583FF786D83_94; }
	inline void set_A705A106D95282BD15E13EEA6B0AF583FF786D83_94(__StaticArrayInitTypeSizeU3D174_t3302307462  value)
	{
		___A705A106D95282BD15E13EEA6B0AF583FF786D83_94 = value;
	}

	inline static int32_t get_offset_of_A8A491E4CED49AE0027560476C10D933CE70C8DF_95() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___A8A491E4CED49AE0027560476C10D933CE70C8DF_95)); }
	inline __StaticArrayInitTypeSizeU3D1018_t2637921688  get_A8A491E4CED49AE0027560476C10D933CE70C8DF_95() const { return ___A8A491E4CED49AE0027560476C10D933CE70C8DF_95; }
	inline __StaticArrayInitTypeSizeU3D1018_t2637921688 * get_address_of_A8A491E4CED49AE0027560476C10D933CE70C8DF_95() { return &___A8A491E4CED49AE0027560476C10D933CE70C8DF_95; }
	inline void set_A8A491E4CED49AE0027560476C10D933CE70C8DF_95(__StaticArrayInitTypeSizeU3D1018_t2637921688  value)
	{
		___A8A491E4CED49AE0027560476C10D933CE70C8DF_95 = value;
	}

	inline static int32_t get_offset_of_AC791C4F39504D1184B73478943D0636258DA7B1_96() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___AC791C4F39504D1184B73478943D0636258DA7B1_96)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_AC791C4F39504D1184B73478943D0636258DA7B1_96() const { return ___AC791C4F39504D1184B73478943D0636258DA7B1_96; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_AC791C4F39504D1184B73478943D0636258DA7B1_96() { return &___AC791C4F39504D1184B73478943D0636258DA7B1_96; }
	inline void set_AC791C4F39504D1184B73478943D0636258DA7B1_96(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___AC791C4F39504D1184B73478943D0636258DA7B1_96 = value;
	}

	inline static int32_t get_offset_of_AFCD4E1211233E99373A3367B23105A3D624B1F2_97() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___AFCD4E1211233E99373A3367B23105A3D624B1F2_97)); }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173  get_AFCD4E1211233E99373A3367B23105A3D624B1F2_97() const { return ___AFCD4E1211233E99373A3367B23105A3D624B1F2_97; }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173 * get_address_of_AFCD4E1211233E99373A3367B23105A3D624B1F2_97() { return &___AFCD4E1211233E99373A3367B23105A3D624B1F2_97; }
	inline void set_AFCD4E1211233E99373A3367B23105A3D624B1F2_97(__StaticArrayInitTypeSizeU3D52_t2710732173  value)
	{
		___AFCD4E1211233E99373A3367B23105A3D624B1F2_97 = value;
	}

	inline static int32_t get_offset_of_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98() const { return ___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98() { return &___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98; }
	inline void set_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98 = value;
	}

	inline static int32_t get_offset_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395489  get_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99() const { return ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99; }
	inline __StaticArrayInitTypeSizeU3D16_t385395489 * get_address_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99() { return &___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99; }
	inline void set_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99(__StaticArrayInitTypeSizeU3D16_t385395489  value)
	{
		___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99 = value;
	}

	inline static int32_t get_offset_of_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632  get_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100() const { return ___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632 * get_address_of_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100() { return &___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100; }
	inline void set_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100(__StaticArrayInitTypeSizeU3D256_t1757367632  value)
	{
		___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100 = value;
	}

	inline static int32_t get_offset_of_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101)); }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710  get_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101() const { return ___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101; }
	inline __StaticArrayInitTypeSizeU3D4096_t4160781710 * get_address_of_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101() { return &___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101; }
	inline void set_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101(__StaticArrayInitTypeSizeU3D4096_t4160781710  value)
	{
		___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101 = value;
	}

	inline static int32_t get_offset_of_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102)); }
	inline __StaticArrayInitTypeSizeU3D998_t1291568276  get_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102() const { return ___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102; }
	inline __StaticArrayInitTypeSizeU3D998_t1291568276 * get_address_of_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102() { return &___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102; }
	inline void set_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102(__StaticArrayInitTypeSizeU3D998_t1291568276  value)
	{
		___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102 = value;
	}

	inline static int32_t get_offset_of_B8864ACB9DD69E3D42151513C840AAE270BF21C8_103() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B8864ACB9DD69E3D42151513C840AAE270BF21C8_103)); }
	inline __StaticArrayInitTypeSizeU3D162_t589212449  get_B8864ACB9DD69E3D42151513C840AAE270BF21C8_103() const { return ___B8864ACB9DD69E3D42151513C840AAE270BF21C8_103; }
	inline __StaticArrayInitTypeSizeU3D162_t589212449 * get_address_of_B8864ACB9DD69E3D42151513C840AAE270BF21C8_103() { return &___B8864ACB9DD69E3D42151513C840AAE270BF21C8_103; }
	inline void set_B8864ACB9DD69E3D42151513C840AAE270BF21C8_103(__StaticArrayInitTypeSizeU3D162_t589212449  value)
	{
		___B8864ACB9DD69E3D42151513C840AAE270BF21C8_103 = value;
	}

	inline static int32_t get_offset_of_B8F87834C3597B2EEF22BA6D3A392CC925636401_104() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B8F87834C3597B2EEF22BA6D3A392CC925636401_104)); }
	inline __StaticArrayInitTypeSizeU3D360_t971680545  get_B8F87834C3597B2EEF22BA6D3A392CC925636401_104() const { return ___B8F87834C3597B2EEF22BA6D3A392CC925636401_104; }
	inline __StaticArrayInitTypeSizeU3D360_t971680545 * get_address_of_B8F87834C3597B2EEF22BA6D3A392CC925636401_104() { return &___B8F87834C3597B2EEF22BA6D3A392CC925636401_104; }
	inline void set_B8F87834C3597B2EEF22BA6D3A392CC925636401_104(__StaticArrayInitTypeSizeU3D360_t971680545  value)
	{
		___B8F87834C3597B2EEF22BA6D3A392CC925636401_104 = value;
	}

	inline static int32_t get_offset_of_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105() const { return ___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105() { return &___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105; }
	inline void set_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105 = value;
	}

	inline static int32_t get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106)); }
	inline __StaticArrayInitTypeSizeU3D20_t1548391511  get_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106() const { return ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106; }
	inline __StaticArrayInitTypeSizeU3D20_t1548391511 * get_address_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106() { return &___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106; }
	inline void set_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106(__StaticArrayInitTypeSizeU3D20_t1548391511  value)
	{
		___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106 = value;
	}

	inline static int32_t get_offset_of_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107() const { return ___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107() { return &___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107; }
	inline void set_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107 = value;
	}

	inline static int32_t get_offset_of_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108() const { return ___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108() { return &___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108; }
	inline void set_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108 = value;
	}

	inline static int32_t get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109() const { return ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109() { return &___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109; }
	inline void set_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109 = value;
	}

	inline static int32_t get_offset_of_BF5EB60806ECB74EE484105DD9D6F463BF994867_110() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___BF5EB60806ECB74EE484105DD9D6F463BF994867_110)); }
	inline __StaticArrayInitTypeSizeU3D6_t3217689074  get_BF5EB60806ECB74EE484105DD9D6F463BF994867_110() const { return ___BF5EB60806ECB74EE484105DD9D6F463BF994867_110; }
	inline __StaticArrayInitTypeSizeU3D6_t3217689074 * get_address_of_BF5EB60806ECB74EE484105DD9D6F463BF994867_110() { return &___BF5EB60806ECB74EE484105DD9D6F463BF994867_110; }
	inline void set_BF5EB60806ECB74EE484105DD9D6F463BF994867_110(__StaticArrayInitTypeSizeU3D6_t3217689074  value)
	{
		___BF5EB60806ECB74EE484105DD9D6F463BF994867_110 = value;
	}

	inline static int32_t get_offset_of_C1A1100642BA9685B30A84D97348484E14AA1865_111() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___C1A1100642BA9685B30A84D97348484E14AA1865_111)); }
	inline int64_t get_C1A1100642BA9685B30A84D97348484E14AA1865_111() const { return ___C1A1100642BA9685B30A84D97348484E14AA1865_111; }
	inline int64_t* get_address_of_C1A1100642BA9685B30A84D97348484E14AA1865_111() { return &___C1A1100642BA9685B30A84D97348484E14AA1865_111; }
	inline void set_C1A1100642BA9685B30A84D97348484E14AA1865_111(int64_t value)
	{
		___C1A1100642BA9685B30A84D97348484E14AA1865_111 = value;
	}

	inline static int32_t get_offset_of_C6F364A0AD934EFED8909446C215752E565D77C1_112() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___C6F364A0AD934EFED8909446C215752E565D77C1_112)); }
	inline __StaticArrayInitTypeSizeU3D16_t385395489  get_C6F364A0AD934EFED8909446C215752E565D77C1_112() const { return ___C6F364A0AD934EFED8909446C215752E565D77C1_112; }
	inline __StaticArrayInitTypeSizeU3D16_t385395489 * get_address_of_C6F364A0AD934EFED8909446C215752E565D77C1_112() { return &___C6F364A0AD934EFED8909446C215752E565D77C1_112; }
	inline void set_C6F364A0AD934EFED8909446C215752E565D77C1_112(__StaticArrayInitTypeSizeU3D16_t385395489  value)
	{
		___C6F364A0AD934EFED8909446C215752E565D77C1_112 = value;
	}

	inline static int32_t get_offset_of_CE5835130F5277F63D716FC9115526B0AC68FFAD_113() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___CE5835130F5277F63D716FC9115526B0AC68FFAD_113)); }
	inline __StaticArrayInitTypeSizeU3D174_t3302307462  get_CE5835130F5277F63D716FC9115526B0AC68FFAD_113() const { return ___CE5835130F5277F63D716FC9115526B0AC68FFAD_113; }
	inline __StaticArrayInitTypeSizeU3D174_t3302307462 * get_address_of_CE5835130F5277F63D716FC9115526B0AC68FFAD_113() { return &___CE5835130F5277F63D716FC9115526B0AC68FFAD_113; }
	inline void set_CE5835130F5277F63D716FC9115526B0AC68FFAD_113(__StaticArrayInitTypeSizeU3D174_t3302307462  value)
	{
		___CE5835130F5277F63D716FC9115526B0AC68FFAD_113 = value;
	}

	inline static int32_t get_offset_of_CE93C35B755802BC4B3D180716B048FC61701EF7_114() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___CE93C35B755802BC4B3D180716B048FC61701EF7_114)); }
	inline __StaticArrayInitTypeSizeU3D6_t3217689074  get_CE93C35B755802BC4B3D180716B048FC61701EF7_114() const { return ___CE93C35B755802BC4B3D180716B048FC61701EF7_114; }
	inline __StaticArrayInitTypeSizeU3D6_t3217689074 * get_address_of_CE93C35B755802BC4B3D180716B048FC61701EF7_114() { return &___CE93C35B755802BC4B3D180716B048FC61701EF7_114; }
	inline void set_CE93C35B755802BC4B3D180716B048FC61701EF7_114(__StaticArrayInitTypeSizeU3D6_t3217689074  value)
	{
		___CE93C35B755802BC4B3D180716B048FC61701EF7_114 = value;
	}

	inline static int32_t get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835  get_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115() const { return ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835 * get_address_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115() { return &___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115; }
	inline void set_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115(__StaticArrayInitTypeSizeU3D64_t3517497835  value)
	{
		___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115 = value;
	}

	inline static int32_t get_offset_of_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632  get_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116() const { return ___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367632 * get_address_of_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116() { return &___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116; }
	inline void set_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116(__StaticArrayInitTypeSizeU3D256_t1757367632  value)
	{
		___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116 = value;
	}

	inline static int32_t get_offset_of_D117188BE8D4609C0D531C51B0BB911A4219DEBE_117() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___D117188BE8D4609C0D531C51B0BB911A4219DEBE_117)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389  get_D117188BE8D4609C0D531C51B0BB911A4219DEBE_117() const { return ___D117188BE8D4609C0D531C51B0BB911A4219DEBE_117; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389 * get_address_of_D117188BE8D4609C0D531C51B0BB911A4219DEBE_117() { return &___D117188BE8D4609C0D531C51B0BB911A4219DEBE_117; }
	inline void set_D117188BE8D4609C0D531C51B0BB911A4219DEBE_117(__StaticArrayInitTypeSizeU3D32_t2711125389  value)
	{
		___D117188BE8D4609C0D531C51B0BB911A4219DEBE_117 = value;
	}

	inline static int32_t get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389  get_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118() const { return ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389 * get_address_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118() { return &___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118; }
	inline void set_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118(__StaticArrayInitTypeSizeU3D32_t2711125389  value)
	{
		___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118 = value;
	}

	inline static int32_t get_offset_of_D76478B994B312CD022DCA207AA2254880D2FCC9_119() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___D76478B994B312CD022DCA207AA2254880D2FCC9_119)); }
	inline __StaticArrayInitTypeSizeU3D82_t2711584141  get_D76478B994B312CD022DCA207AA2254880D2FCC9_119() const { return ___D76478B994B312CD022DCA207AA2254880D2FCC9_119; }
	inline __StaticArrayInitTypeSizeU3D82_t2711584141 * get_address_of_D76478B994B312CD022DCA207AA2254880D2FCC9_119() { return &___D76478B994B312CD022DCA207AA2254880D2FCC9_119; }
	inline void set_D76478B994B312CD022DCA207AA2254880D2FCC9_119(__StaticArrayInitTypeSizeU3D82_t2711584141  value)
	{
		___D76478B994B312CD022DCA207AA2254880D2FCC9_119 = value;
	}

	inline static int32_t get_offset_of_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120)); }
	inline __StaticArrayInitTypeSizeU3D44_t3517366763  get_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120() const { return ___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120; }
	inline __StaticArrayInitTypeSizeU3D44_t3517366763 * get_address_of_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120() { return &___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120; }
	inline void set_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120(__StaticArrayInitTypeSizeU3D44_t3517366763  value)
	{
		___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120 = value;
	}

	inline static int32_t get_offset_of_DA19DB47B583EFCF7825D2E39D661D2354F28219_121() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___DA19DB47B583EFCF7825D2E39D661D2354F28219_121)); }
	inline __StaticArrayInitTypeSizeU3D76_t385264417  get_DA19DB47B583EFCF7825D2E39D661D2354F28219_121() const { return ___DA19DB47B583EFCF7825D2E39D661D2354F28219_121; }
	inline __StaticArrayInitTypeSizeU3D76_t385264417 * get_address_of_DA19DB47B583EFCF7825D2E39D661D2354F28219_121() { return &___DA19DB47B583EFCF7825D2E39D661D2354F28219_121; }
	inline void set_DA19DB47B583EFCF7825D2E39D661D2354F28219_121(__StaticArrayInitTypeSizeU3D76_t385264417  value)
	{
		___DA19DB47B583EFCF7825D2E39D661D2354F28219_121 = value;
	}

	inline static int32_t get_offset_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122)); }
	inline __StaticArrayInitTypeSizeU3D56_t385133345  get_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122() const { return ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122; }
	inline __StaticArrayInitTypeSizeU3D56_t385133345 * get_address_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122() { return &___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122; }
	inline void set_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122(__StaticArrayInitTypeSizeU3D56_t385133345  value)
	{
		___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122 = value;
	}

	inline static int32_t get_offset_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_123() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_123)); }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173  get_DD3AEFEADB1CD615F3017763F1568179FEE640B0_123() const { return ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_123; }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173 * get_address_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_123() { return &___DD3AEFEADB1CD615F3017763F1568179FEE640B0_123; }
	inline void set_DD3AEFEADB1CD615F3017763F1568179FEE640B0_123(__StaticArrayInitTypeSizeU3D52_t2710732173  value)
	{
		___DD3AEFEADB1CD615F3017763F1568179FEE640B0_123 = value;
	}

	inline static int32_t get_offset_of_E1827270A5FE1C85F5352A66FD87BA747213D006_124() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___E1827270A5FE1C85F5352A66FD87BA747213D006_124)); }
	inline __StaticArrayInitTypeSizeU3D36_t385526561  get_E1827270A5FE1C85F5352A66FD87BA747213D006_124() const { return ___E1827270A5FE1C85F5352A66FD87BA747213D006_124; }
	inline __StaticArrayInitTypeSizeU3D36_t385526561 * get_address_of_E1827270A5FE1C85F5352A66FD87BA747213D006_124() { return &___E1827270A5FE1C85F5352A66FD87BA747213D006_124; }
	inline void set_E1827270A5FE1C85F5352A66FD87BA747213D006_124(__StaticArrayInitTypeSizeU3D36_t385526561  value)
	{
		___E1827270A5FE1C85F5352A66FD87BA747213D006_124 = value;
	}

	inline static int32_t get_offset_of_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125() const { return ___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125() { return &___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125; }
	inline void set_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125 = value;
	}

	inline static int32_t get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_126() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___E75835D001C843F156FBA01B001DFE1B8029AC17_126)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835  get_E75835D001C843F156FBA01B001DFE1B8029AC17_126() const { return ___E75835D001C843F156FBA01B001DFE1B8029AC17_126; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835 * get_address_of_E75835D001C843F156FBA01B001DFE1B8029AC17_126() { return &___E75835D001C843F156FBA01B001DFE1B8029AC17_126; }
	inline void set_E75835D001C843F156FBA01B001DFE1B8029AC17_126(__StaticArrayInitTypeSizeU3D64_t3517497835  value)
	{
		___E75835D001C843F156FBA01B001DFE1B8029AC17_126 = value;
	}

	inline static int32_t get_offset_of_E92B39D8233061927D9ACDE54665E68E7535635A_127() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___E92B39D8233061927D9ACDE54665E68E7535635A_127)); }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173  get_E92B39D8233061927D9ACDE54665E68E7535635A_127() const { return ___E92B39D8233061927D9ACDE54665E68E7535635A_127; }
	inline __StaticArrayInitTypeSizeU3D52_t2710732173 * get_address_of_E92B39D8233061927D9ACDE54665E68E7535635A_127() { return &___E92B39D8233061927D9ACDE54665E68E7535635A_127; }
	inline void set_E92B39D8233061927D9ACDE54665E68E7535635A_127(__StaticArrayInitTypeSizeU3D52_t2710732173  value)
	{
		___E92B39D8233061927D9ACDE54665E68E7535635A_127 = value;
	}

	inline static int32_t get_offset_of_EA9506959484C55CFE0C139C624DF6060E285866_128() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___EA9506959484C55CFE0C139C624DF6060E285866_128)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_EA9506959484C55CFE0C139C624DF6060E285866_128() const { return ___EA9506959484C55CFE0C139C624DF6060E285866_128; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_EA9506959484C55CFE0C139C624DF6060E285866_128() { return &___EA9506959484C55CFE0C139C624DF6060E285866_128; }
	inline void set_EA9506959484C55CFE0C139C624DF6060E285866_128(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___EA9506959484C55CFE0C139C624DF6060E285866_128 = value;
	}

	inline static int32_t get_offset_of_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129)); }
	inline __StaticArrayInitTypeSizeU3D262_t589409057  get_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129() const { return ___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129; }
	inline __StaticArrayInitTypeSizeU3D262_t589409057 * get_address_of_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129() { return &___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129; }
	inline void set_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129(__StaticArrayInitTypeSizeU3D262_t589409057  value)
	{
		___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129 = value;
	}

	inline static int32_t get_offset_of_EBF68F411848D603D059DFDEA2321C5A5EA78044_130() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___EBF68F411848D603D059DFDEA2321C5A5EA78044_130)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835  get_EBF68F411848D603D059DFDEA2321C5A5EA78044_130() const { return ___EBF68F411848D603D059DFDEA2321C5A5EA78044_130; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835 * get_address_of_EBF68F411848D603D059DFDEA2321C5A5EA78044_130() { return &___EBF68F411848D603D059DFDEA2321C5A5EA78044_130; }
	inline void set_EBF68F411848D603D059DFDEA2321C5A5EA78044_130(__StaticArrayInitTypeSizeU3D64_t3517497835  value)
	{
		___EBF68F411848D603D059DFDEA2321C5A5EA78044_130 = value;
	}

	inline static int32_t get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903  get_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131() const { return ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903 * get_address_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131() { return &___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131; }
	inline void set_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131(__StaticArrayInitTypeSizeU3D10_t1548194903  value)
	{
		___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131 = value;
	}

	inline static int32_t get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682  get_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132() const { return ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885682 * get_address_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132() { return &___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132; }
	inline void set_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132(__StaticArrayInitTypeSizeU3D3_t3217885682  value)
	{
		___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132 = value;
	}

	inline static int32_t get_offset_of_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133() const { return ___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133() { return &___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133; }
	inline void set_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133 = value;
	}

	inline static int32_t get_offset_of_F06E829E62F3AFBC045D064E10A4F5DF7C969612_134() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___F06E829E62F3AFBC045D064E10A4F5DF7C969612_134)); }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295  get_F06E829E62F3AFBC045D064E10A4F5DF7C969612_134() const { return ___F06E829E62F3AFBC045D064E10A4F5DF7C969612_134; }
	inline __StaticArrayInitTypeSizeU3D40_t1547998295 * get_address_of_F06E829E62F3AFBC045D064E10A4F5DF7C969612_134() { return &___F06E829E62F3AFBC045D064E10A4F5DF7C969612_134; }
	inline void set_F06E829E62F3AFBC045D064E10A4F5DF7C969612_134(__StaticArrayInitTypeSizeU3D40_t1547998295  value)
	{
		___F06E829E62F3AFBC045D064E10A4F5DF7C969612_134 = value;
	}

	inline static int32_t get_offset_of_F073AA332018FDA0D572E99448FFF1D6422BD520_135() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___F073AA332018FDA0D572E99448FFF1D6422BD520_135)); }
	inline __StaticArrayInitTypeSizeU3D11614_t2244806902  get_F073AA332018FDA0D572E99448FFF1D6422BD520_135() const { return ___F073AA332018FDA0D572E99448FFF1D6422BD520_135; }
	inline __StaticArrayInitTypeSizeU3D11614_t2244806902 * get_address_of_F073AA332018FDA0D572E99448FFF1D6422BD520_135() { return &___F073AA332018FDA0D572E99448FFF1D6422BD520_135; }
	inline void set_F073AA332018FDA0D572E99448FFF1D6422BD520_135(__StaticArrayInitTypeSizeU3D11614_t2244806902  value)
	{
		___F073AA332018FDA0D572E99448FFF1D6422BD520_135 = value;
	}

	inline static int32_t get_offset_of_F34B0E10653402E8F788F8BC3F7CD7090928A429_136() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___F34B0E10653402E8F788F8BC3F7CD7090928A429_136)); }
	inline __StaticArrayInitTypeSizeU3D120_t3297148301  get_F34B0E10653402E8F788F8BC3F7CD7090928A429_136() const { return ___F34B0E10653402E8F788F8BC3F7CD7090928A429_136; }
	inline __StaticArrayInitTypeSizeU3D120_t3297148301 * get_address_of_F34B0E10653402E8F788F8BC3F7CD7090928A429_136() { return &___F34B0E10653402E8F788F8BC3F7CD7090928A429_136; }
	inline void set_F34B0E10653402E8F788F8BC3F7CD7090928A429_136(__StaticArrayInitTypeSizeU3D120_t3297148301  value)
	{
		___F34B0E10653402E8F788F8BC3F7CD7090928A429_136 = value;
	}

	inline static int32_t get_offset_of_F37E34BEADB04F34FCC31078A59F49856CA83D5B_137() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___F37E34BEADB04F34FCC31078A59F49856CA83D5B_137)); }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245  get_F37E34BEADB04F34FCC31078A59F49856CA83D5B_137() const { return ___F37E34BEADB04F34FCC31078A59F49856CA83D5B_137; }
	inline __StaticArrayInitTypeSizeU3D72_t2710863245 * get_address_of_F37E34BEADB04F34FCC31078A59F49856CA83D5B_137() { return &___F37E34BEADB04F34FCC31078A59F49856CA83D5B_137; }
	inline void set_F37E34BEADB04F34FCC31078A59F49856CA83D5B_137(__StaticArrayInitTypeSizeU3D72_t2710863245  value)
	{
		___F37E34BEADB04F34FCC31078A59F49856CA83D5B_137 = value;
	}

	inline static int32_t get_offset_of_F512A9ABF88066AAEB92684F95CC05D8101B462B_138() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___F512A9ABF88066AAEB92684F95CC05D8101B462B_138)); }
	inline __StaticArrayInitTypeSizeU3D94_t3518087659  get_F512A9ABF88066AAEB92684F95CC05D8101B462B_138() const { return ___F512A9ABF88066AAEB92684F95CC05D8101B462B_138; }
	inline __StaticArrayInitTypeSizeU3D94_t3518087659 * get_address_of_F512A9ABF88066AAEB92684F95CC05D8101B462B_138() { return &___F512A9ABF88066AAEB92684F95CC05D8101B462B_138; }
	inline void set_F512A9ABF88066AAEB92684F95CC05D8101B462B_138(__StaticArrayInitTypeSizeU3D94_t3518087659  value)
	{
		___F512A9ABF88066AAEB92684F95CC05D8101B462B_138 = value;
	}

	inline static int32_t get_offset_of_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317  get_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139() const { return ___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994317 * get_address_of_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139() { return &___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139; }
	inline void set_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139(__StaticArrayInitTypeSizeU3D12_t2710994317  value)
	{
		___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139 = value;
	}

	inline static int32_t get_offset_of_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140)); }
	inline __StaticArrayInitTypeSizeU3D2350_t1842999851  get_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140() const { return ___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140; }
	inline __StaticArrayInitTypeSizeU3D2350_t1842999851 * get_address_of_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140() { return &___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140; }
	inline void set_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140(__StaticArrayInitTypeSizeU3D2350_t1842999851  value)
	{
		___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1600 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1600[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1601 = { sizeof (InsertionBehavior_t4747287)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1601[4] = 
{
	InsertionBehavior_t4747287::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1602 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1602[14] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1603 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1603[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1604 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1604[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1605 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1605[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1606 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1606[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1607 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1607[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1608 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1608[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1609 = { sizeof (DictionaryHashHelpers_t1017827097), -1, sizeof(DictionaryHashHelpers_t1017827097_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1609[1] = 
{
	DictionaryHashHelpers_t1017827097_StaticFields::get_offset_of_U3CSerializationInfoTableU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1610 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1611 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1612 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1613 = { sizeof (NonRandomizedStringEqualityComparer_t1082005352), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1614 = { sizeof (ObjectEqualityComparer_t1147032983), -1, sizeof(ObjectEqualityComparer_t1147032983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1614[1] = 
{
	ObjectEqualityComparer_t1147032983_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1615 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1615[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1616 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1617 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1618 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1619 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1619[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1620 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1621 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1622 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1623 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1623[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1624 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1625 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1626 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1627 = { sizeof (ByteEqualityComparer_t2579698736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1628 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1629 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1630 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1631 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1632 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1633 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1634 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1635 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1636 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1637 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1638 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1639 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1640 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1641 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1642 = { sizeof (KeyNotFoundException_t2292407383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1643 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1643[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1644 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1644[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1645 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255361), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1645[141] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U30392525BCB01691D1F319D89F2C12BF93A478467_0(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3121EC59E23F7559B28D338D562528F6299C2DE22_3(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U325CF935D2AE9EDF05DD75BCD47FF84D9255D6F6E_13(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U329C1A61550F0E3260E1953D4FAD71C256218EF40_14(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_15(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_16(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_17(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_18(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_19(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_20(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_21(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U334476C29F6F81C989CFCA42F7C06E84C66236834_22(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U335EED060772F2748D13B745DAEC8CD7BD3B87604_23(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_24(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3379C06C9E702D31469C29033F0DD63931EB349F5_25(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_26(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_27(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U33C53AFB51FEC23491684C7BEDBC6D4E0F409F851_28(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_29(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U33E823444D2DFECF0F90B436B88F02A533CB376F1_30(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_31(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_32(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_33(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_34(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_35(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U346232052BC757E030490D851F265FB47FA100902_36(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_37(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_38(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_39(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3536422B321459B242ADED7240B7447E904E083E3_40(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U35382CEF491F422BFE0D6FC46EFAFF9EF9D4C89F3_41(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_42(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U357218C316B6921E2CD61027A2387EDC31A2D9471_43(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U357F320D62696EC99727E0FE2045A05F1289CC0C6_44(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_45(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_46(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_47(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U35BFE2819B4778217C56416C7585FF0E56EBACD89_48(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_49(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_50(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3646036A65DECCD6835C914A46E6E44B729433B60_51(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_52(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_53(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U367EEAD805D708D9AA4E14BF747E44CED801744F3_54(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U36C71197D228427B2864C69B357FEF73D8C9D59DF_55(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_56(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U36D797C11E1D4FB68B6570CF2A92B792433527065_57(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_58(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U36FC754859E4EC74E447048364B216D825C6F8FE7_59(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3704939CD172085D1295FCE3F1D92431D685D7AA2_60(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_61(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U37341C933A70EAE383CC50C4B945ADB8E08F06737_62(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_63(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_64(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_65(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3811A927B7DADD378BE60BBDE794B9277AA9B50EC_66(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U381917F1E21F3C22B9F916994547A614FB03E968E_67(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3823566DA642D6EA356E15585921F2A4CA23D6760_68(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U382C2A59850B2E85BCE1A45A479537A384DF6098D_69(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_70(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_71(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_72(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U389A040451C8CC5C8FB268BE44BDD74964C104155_73(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U38CAA092E783257106251246FF5C97F88D28517A6_74(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_75(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_76(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_77(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U390A0542282A011472F94E97CEAE59F8B3B1A3291_78(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U393A63E90605400F34B49F0EB3361D23C89164BDA_79(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U394841DD2F330CCB1089BF413E4FA9B04505152E2_80(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U395264589E48F94B7857CFF398FB72A537E13EEE2_81(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U395C48758CAE1715783472FB073AB158AB8A0AB2A_82(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U3973417296623D8DC6961B09664E54039E44CA5D8_83(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_84(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_85(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_86(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_87(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A0074C15377C0C870B055927403EA9FA7A349D12_88(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A1319B706116AB2C6D44483F60A7D0ACEA543396_89(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A13AA52274D951A18029131A8DDECF76B569A15D_90(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_91(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A5444763673307F6828C748D4B9708CFC02B0959_92(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A6732F8E7FC23766AB329B492D6BF82E3B33233F_93(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A705A106D95282BD15E13EEA6B0AF583FF786D83_94(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_A8A491E4CED49AE0027560476C10D933CE70C8DF_95(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_AC791C4F39504D1184B73478943D0636258DA7B1_96(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_AFCD4E1211233E99373A3367B23105A3D624B1F2_97(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_98(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_99(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_100(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_101(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_102(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B8864ACB9DD69E3D42151513C840AAE270BF21C8_103(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B8F87834C3597B2EEF22BA6D3A392CC925636401_104(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_105(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_106(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_107(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_108(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_109(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_BF5EB60806ECB74EE484105DD9D6F463BF994867_110(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_C1A1100642BA9685B30A84D97348484E14AA1865_111(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_C6F364A0AD934EFED8909446C215752E565D77C1_112(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_CE5835130F5277F63D716FC9115526B0AC68FFAD_113(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_CE93C35B755802BC4B3D180716B048FC61701EF7_114(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_115(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_116(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_D117188BE8D4609C0D531C51B0BB911A4219DEBE_117(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_118(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_D76478B994B312CD022DCA207AA2254880D2FCC9_119(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_120(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_DA19DB47B583EFCF7825D2E39D661D2354F28219_121(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_122(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_123(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_E1827270A5FE1C85F5352A66FD87BA747213D006_124(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_125(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_126(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_E92B39D8233061927D9ACDE54665E68E7535635A_127(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_EA9506959484C55CFE0C139C624DF6060E285866_128(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_129(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_EBF68F411848D603D059DFDEA2321C5A5EA78044_130(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_131(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_132(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_133(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_F06E829E62F3AFBC045D064E10A4F5DF7C969612_134(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_F073AA332018FDA0D572E99448FFF1D6422BD520_135(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_F34B0E10653402E8F788F8BC3F7CD7090928A429_136(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_F37E34BEADB04F34FCC31078A59F49856CA83D5B_137(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_F512A9ABF88066AAEB92684F95CC05D8101B462B_138(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_139(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_140(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1646 = { sizeof (__StaticArrayInitTypeSizeU3D3_t3217885682)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t3217885682 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1647 = { sizeof (__StaticArrayInitTypeSizeU3D6_t3217689074)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D6_t3217689074 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1648 = { sizeof (__StaticArrayInitTypeSizeU3D9_t3218278898)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t3218278898 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1649 = { sizeof (__StaticArrayInitTypeSizeU3D10_t1548194903)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D10_t1548194903 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1650 = { sizeof (__StaticArrayInitTypeSizeU3D12_t2710994317)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12_t2710994317 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1651 = { sizeof (__StaticArrayInitTypeSizeU3D14_t3517563371)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t3517563371 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1652 = { sizeof (__StaticArrayInitTypeSizeU3D16_t385395489)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D16_t385395489 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1653 = { sizeof (__StaticArrayInitTypeSizeU3D20_t1548391511)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D20_t1548391511 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1654 = { sizeof (__StaticArrayInitTypeSizeU3D24_t3517759979)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D24_t3517759979 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1655 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2711125389)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2711125389 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1656 = { sizeof (__StaticArrayInitTypeSizeU3D36_t385526561)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D36_t385526561 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1657 = { sizeof (__StaticArrayInitTypeSizeU3D38_t1904556335)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D38_t1904556335 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1658 = { sizeof (__StaticArrayInitTypeSizeU3D40_t1547998295)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D40_t1547998295 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1659 = { sizeof (__StaticArrayInitTypeSizeU3D42_t2710797709)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D42_t2710797709 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1660 = { sizeof (__StaticArrayInitTypeSizeU3D44_t3517366763)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t3517366763 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1661 = { sizeof (__StaticArrayInitTypeSizeU3D48_t1904228655)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D48_t1904228655 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1662 = { sizeof (__StaticArrayInitTypeSizeU3D52_t2710732173)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D52_t2710732173 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1663 = { sizeof (__StaticArrayInitTypeSizeU3D56_t385133345)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D56_t385133345 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1664 = { sizeof (__StaticArrayInitTypeSizeU3D64_t3517497835)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D64_t3517497835 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1665 = { sizeof (__StaticArrayInitTypeSizeU3D72_t2710863245)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D72_t2710863245 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1666 = { sizeof (__StaticArrayInitTypeSizeU3D76_t385264417)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D76_t385264417 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1667 = { sizeof (__StaticArrayInitTypeSizeU3D82_t2711584141)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D82_t2711584141 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1668 = { sizeof (__StaticArrayInitTypeSizeU3D84_t3518153195)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D84_t3518153195 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1669 = { sizeof (__StaticArrayInitTypeSizeU3D94_t3518087659)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D94_t3518087659 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1670 = { sizeof (__StaticArrayInitTypeSizeU3D120_t3297148301)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D120_t3297148301 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1671 = { sizeof (__StaticArrayInitTypeSizeU3D128_t531529101)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D128_t531529101 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1672 = { sizeof (__StaticArrayInitTypeSizeU3D130_t568264946)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D130_t568264946 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1673 = { sizeof (__StaticArrayInitTypeSizeU3D162_t589212449)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D162_t589212449 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1674 = { sizeof (__StaticArrayInitTypeSizeU3D174_t3302307462)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D174_t3302307462 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1675 = { sizeof (__StaticArrayInitTypeSizeU3D212_t3318292412)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D212_t3318292412 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1676 = { sizeof (__StaticArrayInitTypeSizeU3D240_t4103913963)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D240_t4103913963 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1677 = { sizeof (__StaticArrayInitTypeSizeU3D256_t1757367632)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D256_t1757367632 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1678 = { sizeof (__StaticArrayInitTypeSizeU3D262_t589409057)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D262_t589409057 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1679 = { sizeof (__StaticArrayInitTypeSizeU3D288_t4020123951)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D288_t4020123951 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1680 = { sizeof (__StaticArrayInitTypeSizeU3D320_t3297279373)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D320_t3297279373 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1681 = { sizeof (__StaticArrayInitTypeSizeU3D360_t971680545)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D360_t971680545 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1682 = { sizeof (__StaticArrayInitTypeSizeU3D640_t4103651819)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D640_t4103651819 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1683 = { sizeof (__StaticArrayInitTypeSizeU3D998_t1291568276)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D998_t1291568276 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1684 = { sizeof (__StaticArrayInitTypeSizeU3D1018_t2637921688)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1018_t2637921688 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1685 = { sizeof (__StaticArrayInitTypeSizeU3D1080_t1828617616)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1080_t1828617616 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1686 = { sizeof (__StaticArrayInitTypeSizeU3D1208_t1462068942)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1208_t1462068942 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1687 = { sizeof (__StaticArrayInitTypeSizeU3D1450_t1076996900)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1450_t1076996900 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1688 = { sizeof (__StaticArrayInitTypeSizeU3D1665_t3813774423)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1665_t3813774423 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1689 = { sizeof (__StaticArrayInitTypeSizeU3D2048_t1070431640)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2048_t1070431640 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1690 = { sizeof (__StaticArrayInitTypeSizeU3D2100_t1871841525)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2100_t1871841525 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1691 = { sizeof (__StaticArrayInitTypeSizeU3D2350_t1842999851)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2350_t1842999851 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1692 = { sizeof (__StaticArrayInitTypeSizeU3D2382_t269021741)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2382_t269021741 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1693 = { sizeof (__StaticArrayInitTypeSizeU3D3132_t3825993975)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3132_t3825993975 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1694 = { sizeof (__StaticArrayInitTypeSizeU3D4096_t4160781710)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D4096_t4160781710 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1695 = { sizeof (__StaticArrayInitTypeSizeU3D11614_t2244806902)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D11614_t2244806902 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1696 = { sizeof (__StaticArrayInitTypeSizeU3D21252_t1490422002)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D21252_t1490422002 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1697 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1698 = { sizeof (__Il2CppComDelegate_t1102178620), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1699 = { sizeof (IBindableIteratorToIEnumeratorAdapter_t1455462238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1699[4] = 
{
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_iterator_0(),
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_initialized_1(),
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_hadCurrent_2(),
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_current_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
