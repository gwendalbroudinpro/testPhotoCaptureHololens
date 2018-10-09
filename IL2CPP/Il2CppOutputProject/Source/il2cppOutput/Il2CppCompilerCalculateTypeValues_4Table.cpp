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


// System.Byte
struct Byte_t1134296376;
// System.Int32
struct Int32_t2950945753;
// System.Int16
struct Int16_t2552820387;
// System.UInt16
struct UInt16_t2177724958;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Reflection.Assembly
struct Assembly_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Resources.ResourceManager/ResourceManagerMediator
struct ResourceManagerMediator_t1468959918;
// System.TypeIdentifier
struct TypeIdentifier_t2999352009;
// System.Collections.Generic.List`1<System.TypeIdentifier>
struct List_1_t176459455;
// System.Collections.Generic.List`1<System.TypeSpec>
struct List_1_t3123561566;
// System.Collections.Generic.List`1<System.ModifierSpec>
struct List_1_t1546471780;
// System.Text.EncodingProvider[]
struct EncodingProviderU5BU5D_t3953861767;
// System.Char
struct Char_t3634460470;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t3523102303;
// System.Text.EncoderNLS
struct EncoderNLS_t449404832;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.Text.DecoderNLS
struct DecoderNLS_t637950881;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2402303981;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.ParameterizedStrings/FormatParam[]
struct FormatParamU5BU5D_t207249367;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.ParameterizedStrings/LowLevelStack
struct LowLevelStack_t4014997415;
// System.Resources.ResourceManager
struct ResourceManager_t4037989559;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Void
struct Void_t1185182177;
// System.TimeZoneInfo
struct TimeZoneInfo_t161405854;
// System.Text.InternalDecoderBestFitFallback
struct InternalDecoderBestFitFallback_t231958350;
// System.Text.InternalEncoderBestFitFallback
struct InternalEncoderBestFitFallback_t3121776013;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// Mono.Interop.ComInteropProxy
struct ComInteropProxy_t1891481270;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_t2613167486;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t3305173715;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t1451753063;
// System.Resources.IResourceGroveler
struct IResourceGroveler_t2853541466;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.TermInfoReader
struct TermInfoReader_t3116894478;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.IO.CStreamWriter
struct CStreamWriter_t3783449173;
// System.ByteMatcher
struct ByteMatcher_t2129355737;
// System.Int32[]
struct Int32U5BU5D_t385246372;

struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct ComInteropProxy_t1891481270_marshaled_pinvoke;
struct ComInteropProxy_t1891481270_marshaled_com;



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
#ifndef NORMALIZATION_T1645683087_H
#define NORMALIZATION_T1645683087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Normalization
struct  Normalization_t1645683087  : public RuntimeObject
{
public:

public:
};

struct Normalization_t1645683087_StaticFields
{
public:
	// System.Byte* System.Text.Normalization::props
	uint8_t* ___props_0;
	// System.Int32* System.Text.Normalization::mappedChars
	int32_t* ___mappedChars_1;
	// System.Int16* System.Text.Normalization::charMapIndex
	int16_t* ___charMapIndex_2;
	// System.Int16* System.Text.Normalization::helperIndex
	int16_t* ___helperIndex_3;
	// System.UInt16* System.Text.Normalization::mapIdxToComposite
	uint16_t* ___mapIdxToComposite_4;
	// System.Byte* System.Text.Normalization::combiningClass
	uint8_t* ___combiningClass_5;
	// System.Object System.Text.Normalization::forLock
	RuntimeObject * ___forLock_6;
	// System.Boolean System.Text.Normalization::isReady
	bool ___isReady_7;

public:
	inline static int32_t get_offset_of_props_0() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___props_0)); }
	inline uint8_t* get_props_0() const { return ___props_0; }
	inline uint8_t** get_address_of_props_0() { return &___props_0; }
	inline void set_props_0(uint8_t* value)
	{
		___props_0 = value;
	}

	inline static int32_t get_offset_of_mappedChars_1() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___mappedChars_1)); }
	inline int32_t* get_mappedChars_1() const { return ___mappedChars_1; }
	inline int32_t** get_address_of_mappedChars_1() { return &___mappedChars_1; }
	inline void set_mappedChars_1(int32_t* value)
	{
		___mappedChars_1 = value;
	}

	inline static int32_t get_offset_of_charMapIndex_2() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___charMapIndex_2)); }
	inline int16_t* get_charMapIndex_2() const { return ___charMapIndex_2; }
	inline int16_t** get_address_of_charMapIndex_2() { return &___charMapIndex_2; }
	inline void set_charMapIndex_2(int16_t* value)
	{
		___charMapIndex_2 = value;
	}

	inline static int32_t get_offset_of_helperIndex_3() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___helperIndex_3)); }
	inline int16_t* get_helperIndex_3() const { return ___helperIndex_3; }
	inline int16_t** get_address_of_helperIndex_3() { return &___helperIndex_3; }
	inline void set_helperIndex_3(int16_t* value)
	{
		___helperIndex_3 = value;
	}

	inline static int32_t get_offset_of_mapIdxToComposite_4() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___mapIdxToComposite_4)); }
	inline uint16_t* get_mapIdxToComposite_4() const { return ___mapIdxToComposite_4; }
	inline uint16_t** get_address_of_mapIdxToComposite_4() { return &___mapIdxToComposite_4; }
	inline void set_mapIdxToComposite_4(uint16_t* value)
	{
		___mapIdxToComposite_4 = value;
	}

	inline static int32_t get_offset_of_combiningClass_5() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___combiningClass_5)); }
	inline uint8_t* get_combiningClass_5() const { return ___combiningClass_5; }
	inline uint8_t** get_address_of_combiningClass_5() { return &___combiningClass_5; }
	inline void set_combiningClass_5(uint8_t* value)
	{
		___combiningClass_5 = value;
	}

	inline static int32_t get_offset_of_forLock_6() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___forLock_6)); }
	inline RuntimeObject * get_forLock_6() const { return ___forLock_6; }
	inline RuntimeObject ** get_address_of_forLock_6() { return &___forLock_6; }
	inline void set_forLock_6(RuntimeObject * value)
	{
		___forLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_6), value);
	}

	inline static int32_t get_offset_of_isReady_7() { return static_cast<int32_t>(offsetof(Normalization_t1645683087_StaticFields, ___isReady_7)); }
	inline bool get_isReady_7() const { return ___isReady_7; }
	inline bool* get_address_of_isReady_7() { return &___isReady_7; }
	inline void set_isReady_7(bool value)
	{
		___isReady_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NORMALIZATION_T1645683087_H
#ifndef ENCODINGHELPER_T1404249741_H
#define ENCODINGHELPER_T1404249741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingHelper
struct  EncodingHelper_t1404249741  : public RuntimeObject
{
public:

public:
};

struct EncodingHelper_t1404249741_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncodingHelper::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_0;
	// System.Object System.Text.EncodingHelper::lockobj
	RuntimeObject * ___lockobj_1;
	// System.Reflection.Assembly System.Text.EncodingHelper::i18nAssembly
	Assembly_t * ___i18nAssembly_2;
	// System.Boolean System.Text.EncodingHelper::i18nDisabled
	bool ___i18nDisabled_3;

public:
	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_0() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___utf8EncodingWithoutMarkers_0)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_0() const { return ___utf8EncodingWithoutMarkers_0; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_0() { return &___utf8EncodingWithoutMarkers_0; }
	inline void set_utf8EncodingWithoutMarkers_0(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_0 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_0), value);
	}

	inline static int32_t get_offset_of_lockobj_1() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___lockobj_1)); }
	inline RuntimeObject * get_lockobj_1() const { return ___lockobj_1; }
	inline RuntimeObject ** get_address_of_lockobj_1() { return &___lockobj_1; }
	inline void set_lockobj_1(RuntimeObject * value)
	{
		___lockobj_1 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_1), value);
	}

	inline static int32_t get_offset_of_i18nAssembly_2() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___i18nAssembly_2)); }
	inline Assembly_t * get_i18nAssembly_2() const { return ___i18nAssembly_2; }
	inline Assembly_t ** get_address_of_i18nAssembly_2() { return &___i18nAssembly_2; }
	inline void set_i18nAssembly_2(Assembly_t * value)
	{
		___i18nAssembly_2 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_2), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_3() { return static_cast<int32_t>(offsetof(EncodingHelper_t1404249741_StaticFields, ___i18nDisabled_3)); }
	inline bool get_i18nDisabled_3() const { return ___i18nDisabled_3; }
	inline bool* get_address_of_i18nDisabled_3() { return &___i18nDisabled_3; }
	inline void set_i18nDisabled_3(bool value)
	{
		___i18nDisabled_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGHELPER_T1404249741_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef STRINGBUILDERCACHE_T3006348846_H
#define STRINGBUILDERCACHE_T3006348846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilderCache
struct  StringBuilderCache_t3006348846  : public RuntimeObject
{
public:

public:
};

struct StringBuilderCache_t3006348846_ThreadStaticFields
{
public:
	// System.Text.StringBuilder System.Text.StringBuilderCache::CachedInstance
	StringBuilder_t * ___CachedInstance_0;

public:
	inline static int32_t get_offset_of_CachedInstance_0() { return static_cast<int32_t>(offsetof(StringBuilderCache_t3006348846_ThreadStaticFields, ___CachedInstance_0)); }
	inline StringBuilder_t * get_CachedInstance_0() const { return ___CachedInstance_0; }
	inline StringBuilder_t ** get_address_of_CachedInstance_0() { return &___CachedInstance_0; }
	inline void set_CachedInstance_0(StringBuilder_t * value)
	{
		___CachedInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___CachedInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDERCACHE_T3006348846_H
#ifndef FASTRESOURCECOMPARER_T2718874915_H
#define FASTRESOURCECOMPARER_T2718874915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FastResourceComparer
struct  FastResourceComparer_t2718874915  : public RuntimeObject
{
public:

public:
};

struct FastResourceComparer_t2718874915_StaticFields
{
public:
	// System.Resources.FastResourceComparer System.Resources.FastResourceComparer::Default
	FastResourceComparer_t2718874915 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(FastResourceComparer_t2718874915_StaticFields, ___Default_0)); }
	inline FastResourceComparer_t2718874915 * get_Default_0() const { return ___Default_0; }
	inline FastResourceComparer_t2718874915 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(FastResourceComparer_t2718874915 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTRESOURCECOMPARER_T2718874915_H
#ifndef MANIFESTBASEDRESOURCEGROVELER_T2768300725_H
#define MANIFESTBASEDRESOURCEGROVELER_T2768300725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ManifestBasedResourceGroveler
struct  ManifestBasedResourceGroveler_t2768300725  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.ManifestBasedResourceGroveler::_mediator
	ResourceManagerMediator_t1468959918 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(ManifestBasedResourceGroveler_t2768300725, ____mediator_0)); }
	inline ResourceManagerMediator_t1468959918 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t1468959918 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t1468959918 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIFESTBASEDRESOURCEGROVELER_T2768300725_H
#ifndef TYPESPEC_T1651486824_H
#define TYPESPEC_T1651486824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeSpec
struct  TypeSpec_t1651486824  : public RuntimeObject
{
public:
	// System.TypeIdentifier System.TypeSpec::name
	RuntimeObject* ___name_0;
	// System.String System.TypeSpec::assembly_name
	String_t* ___assembly_name_1;
	// System.Collections.Generic.List`1<System.TypeIdentifier> System.TypeSpec::nested
	List_1_t176459455 * ___nested_2;
	// System.Collections.Generic.List`1<System.TypeSpec> System.TypeSpec::generic_params
	List_1_t3123561566 * ___generic_params_3;
	// System.Collections.Generic.List`1<System.ModifierSpec> System.TypeSpec::modifier_spec
	List_1_t1546471780 * ___modifier_spec_4;
	// System.Boolean System.TypeSpec::is_byref
	bool ___is_byref_5;
	// System.String System.TypeSpec::display_fullname
	String_t* ___display_fullname_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___name_0)); }
	inline RuntimeObject* get_name_0() const { return ___name_0; }
	inline RuntimeObject** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(RuntimeObject* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_assembly_name_1() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___assembly_name_1)); }
	inline String_t* get_assembly_name_1() const { return ___assembly_name_1; }
	inline String_t** get_address_of_assembly_name_1() { return &___assembly_name_1; }
	inline void set_assembly_name_1(String_t* value)
	{
		___assembly_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_1), value);
	}

	inline static int32_t get_offset_of_nested_2() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___nested_2)); }
	inline List_1_t176459455 * get_nested_2() const { return ___nested_2; }
	inline List_1_t176459455 ** get_address_of_nested_2() { return &___nested_2; }
	inline void set_nested_2(List_1_t176459455 * value)
	{
		___nested_2 = value;
		Il2CppCodeGenWriteBarrier((&___nested_2), value);
	}

	inline static int32_t get_offset_of_generic_params_3() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___generic_params_3)); }
	inline List_1_t3123561566 * get_generic_params_3() const { return ___generic_params_3; }
	inline List_1_t3123561566 ** get_address_of_generic_params_3() { return &___generic_params_3; }
	inline void set_generic_params_3(List_1_t3123561566 * value)
	{
		___generic_params_3 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_3), value);
	}

	inline static int32_t get_offset_of_modifier_spec_4() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___modifier_spec_4)); }
	inline List_1_t1546471780 * get_modifier_spec_4() const { return ___modifier_spec_4; }
	inline List_1_t1546471780 ** get_address_of_modifier_spec_4() { return &___modifier_spec_4; }
	inline void set_modifier_spec_4(List_1_t1546471780 * value)
	{
		___modifier_spec_4 = value;
		Il2CppCodeGenWriteBarrier((&___modifier_spec_4), value);
	}

	inline static int32_t get_offset_of_is_byref_5() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___is_byref_5)); }
	inline bool get_is_byref_5() const { return ___is_byref_5; }
	inline bool* get_address_of_is_byref_5() { return &___is_byref_5; }
	inline void set_is_byref_5(bool value)
	{
		___is_byref_5 = value;
	}

	inline static int32_t get_offset_of_display_fullname_6() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___display_fullname_6)); }
	inline String_t* get_display_fullname_6() const { return ___display_fullname_6; }
	inline String_t** get_address_of_display_fullname_6() { return &___display_fullname_6; }
	inline void set_display_fullname_6(String_t* value)
	{
		___display_fullname_6 = value;
		Il2CppCodeGenWriteBarrier((&___display_fullname_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPESPEC_T1651486824_H
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
#ifndef FILEBASEDRESOURCEGROVELER_T1088115704_H
#define FILEBASEDRESOURCEGROVELER_T1088115704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FileBasedResourceGroveler
struct  FileBasedResourceGroveler_t1088115704  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.FileBasedResourceGroveler::_mediator
	ResourceManagerMediator_t1468959918 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(FileBasedResourceGroveler_t1088115704, ____mediator_0)); }
	inline ResourceManagerMediator_t1468959918 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t1468959918 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t1468959918 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEBASEDRESOURCEGROVELER_T1088115704_H
#ifndef ENCODINGPROVIDER_T3251932530_H
#define ENCODINGPROVIDER_T3251932530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingProvider
struct  EncodingProvider_t3251932530  : public RuntimeObject
{
public:

public:
};

struct EncodingProvider_t3251932530_StaticFields
{
public:
	// System.Object System.Text.EncodingProvider::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Text.EncodingProvider[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncodingProvider::s_providers
	EncodingProviderU5BU5D_t3953861767* ___s_providers_1;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(EncodingProvider_t3251932530_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_providers_1() { return static_cast<int32_t>(offsetof(EncodingProvider_t3251932530_StaticFields, ___s_providers_1)); }
	inline EncodingProviderU5BU5D_t3953861767* get_s_providers_1() const { return ___s_providers_1; }
	inline EncodingProviderU5BU5D_t3953861767** get_address_of_s_providers_1() { return &___s_providers_1; }
	inline void set_s_providers_1(EncodingProviderU5BU5D_t3953861767* value)
	{
		___s_providers_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_providers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGPROVIDER_T3251932530_H
#ifndef DECODERFALLBACKBUFFER_T2402303981_H
#define DECODERFALLBACKBUFFER_T2402303981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t2402303981  : public RuntimeObject
{
public:
	// System.Byte* System.Text.DecoderFallbackBuffer::byteStart
	uint8_t* ___byteStart_0;
	// System.Char* System.Text.DecoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;

public:
	inline static int32_t get_offset_of_byteStart_0() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t2402303981, ___byteStart_0)); }
	inline uint8_t* get_byteStart_0() const { return ___byteStart_0; }
	inline uint8_t** get_address_of_byteStart_0() { return &___byteStart_0; }
	inline void set_byteStart_0(uint8_t* value)
	{
		___byteStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t2402303981, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T2402303981_H
#ifndef DECODERFALLBACK_T3123823036_H
#define DECODERFALLBACK_T3123823036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t3123823036  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_t3123823036_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_t3123823036 * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_t3123823036 * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_t3123823036 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_t3123823036 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_t3123823036 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_t3123823036 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_t3123823036 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_t3123823036 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T3123823036_H
#ifndef ENCODER_T2198218980_H
#define ENCODER_T2198218980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoder
struct  Encoder_t2198218980  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t1188251036 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t3523102303 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___m_fallback_0)); }
	inline EncoderFallback_t1188251036 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t1188251036 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t1188251036 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t2198218980, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t3523102303 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t3523102303 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t3523102303 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T2198218980_H
#ifndef ENCODERFALLBACKBUFFER_T3523102303_H
#define ENCODERFALLBACKBUFFER_T3523102303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3523102303  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_t449404832 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___encoder_2)); }
	inline EncoderNLS_t449404832 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_t449404832 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_t449404832 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_2), value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t3523102303, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3523102303_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_10)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_13)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_14)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef ENCODINGBYTEBUFFER_T3631100277_H
#define ENCODINGBYTEBUFFER_T3631100277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/EncodingByteBuffer
struct  EncodingByteBuffer_t3631100277  : public RuntimeObject
{
public:
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::bytes
	uint8_t* ___bytes_0;
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::byteStart
	uint8_t* ___byteStart_1;
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::byteEnd
	uint8_t* ___byteEnd_2;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::chars
	Il2CppChar* ___chars_3;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::charStart
	Il2CppChar* ___charStart_4;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::charEnd
	Il2CppChar* ___charEnd_5;
	// System.Int32 System.Text.Encoding/EncodingByteBuffer::byteCountResult
	int32_t ___byteCountResult_6;
	// System.Text.Encoding System.Text.Encoding/EncodingByteBuffer::enc
	Encoding_t1523322056 * ___enc_7;
	// System.Text.EncoderNLS System.Text.Encoding/EncodingByteBuffer::encoder
	EncoderNLS_t449404832 * ___encoder_8;
	// System.Text.EncoderFallbackBuffer System.Text.Encoding/EncodingByteBuffer::fallbackBuffer
	EncoderFallbackBuffer_t3523102303 * ___fallbackBuffer_9;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___bytes_0)); }
	inline uint8_t* get_bytes_0() const { return ___bytes_0; }
	inline uint8_t** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(uint8_t* value)
	{
		___bytes_0 = value;
	}

	inline static int32_t get_offset_of_byteStart_1() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___byteStart_1)); }
	inline uint8_t* get_byteStart_1() const { return ___byteStart_1; }
	inline uint8_t** get_address_of_byteStart_1() { return &___byteStart_1; }
	inline void set_byteStart_1(uint8_t* value)
	{
		___byteStart_1 = value;
	}

	inline static int32_t get_offset_of_byteEnd_2() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___byteEnd_2)); }
	inline uint8_t* get_byteEnd_2() const { return ___byteEnd_2; }
	inline uint8_t** get_address_of_byteEnd_2() { return &___byteEnd_2; }
	inline void set_byteEnd_2(uint8_t* value)
	{
		___byteEnd_2 = value;
	}

	inline static int32_t get_offset_of_chars_3() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___chars_3)); }
	inline Il2CppChar* get_chars_3() const { return ___chars_3; }
	inline Il2CppChar** get_address_of_chars_3() { return &___chars_3; }
	inline void set_chars_3(Il2CppChar* value)
	{
		___chars_3 = value;
	}

	inline static int32_t get_offset_of_charStart_4() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___charStart_4)); }
	inline Il2CppChar* get_charStart_4() const { return ___charStart_4; }
	inline Il2CppChar** get_address_of_charStart_4() { return &___charStart_4; }
	inline void set_charStart_4(Il2CppChar* value)
	{
		___charStart_4 = value;
	}

	inline static int32_t get_offset_of_charEnd_5() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___charEnd_5)); }
	inline Il2CppChar* get_charEnd_5() const { return ___charEnd_5; }
	inline Il2CppChar** get_address_of_charEnd_5() { return &___charEnd_5; }
	inline void set_charEnd_5(Il2CppChar* value)
	{
		___charEnd_5 = value;
	}

	inline static int32_t get_offset_of_byteCountResult_6() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___byteCountResult_6)); }
	inline int32_t get_byteCountResult_6() const { return ___byteCountResult_6; }
	inline int32_t* get_address_of_byteCountResult_6() { return &___byteCountResult_6; }
	inline void set_byteCountResult_6(int32_t value)
	{
		___byteCountResult_6 = value;
	}

	inline static int32_t get_offset_of_enc_7() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___enc_7)); }
	inline Encoding_t1523322056 * get_enc_7() const { return ___enc_7; }
	inline Encoding_t1523322056 ** get_address_of_enc_7() { return &___enc_7; }
	inline void set_enc_7(Encoding_t1523322056 * value)
	{
		___enc_7 = value;
		Il2CppCodeGenWriteBarrier((&___enc_7), value);
	}

	inline static int32_t get_offset_of_encoder_8() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___encoder_8)); }
	inline EncoderNLS_t449404832 * get_encoder_8() const { return ___encoder_8; }
	inline EncoderNLS_t449404832 ** get_address_of_encoder_8() { return &___encoder_8; }
	inline void set_encoder_8(EncoderNLS_t449404832 * value)
	{
		___encoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_8), value);
	}

	inline static int32_t get_offset_of_fallbackBuffer_9() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3631100277, ___fallbackBuffer_9)); }
	inline EncoderFallbackBuffer_t3523102303 * get_fallbackBuffer_9() const { return ___fallbackBuffer_9; }
	inline EncoderFallbackBuffer_t3523102303 ** get_address_of_fallbackBuffer_9() { return &___fallbackBuffer_9; }
	inline void set_fallbackBuffer_9(EncoderFallbackBuffer_t3523102303 * value)
	{
		___fallbackBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackBuffer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGBYTEBUFFER_T3631100277_H
#ifndef ENCODERFALLBACK_T1188251036_H
#define ENCODERFALLBACK_T1188251036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1188251036  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t1188251036_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t1188251036 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t1188251036 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t1188251036 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t1188251036 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t1188251036 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t1188251036 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t1188251036 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1188251036_H
#ifndef ENCODINGCHARBUFFER_T3998946436_H
#define ENCODINGCHARBUFFER_T3998946436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/EncodingCharBuffer
struct  EncodingCharBuffer_t3998946436  : public RuntimeObject
{
public:
	// System.Char* System.Text.Encoding/EncodingCharBuffer::chars
	Il2CppChar* ___chars_0;
	// System.Char* System.Text.Encoding/EncodingCharBuffer::charStart
	Il2CppChar* ___charStart_1;
	// System.Char* System.Text.Encoding/EncodingCharBuffer::charEnd
	Il2CppChar* ___charEnd_2;
	// System.Int32 System.Text.Encoding/EncodingCharBuffer::charCountResult
	int32_t ___charCountResult_3;
	// System.Text.Encoding System.Text.Encoding/EncodingCharBuffer::enc
	Encoding_t1523322056 * ___enc_4;
	// System.Text.DecoderNLS System.Text.Encoding/EncodingCharBuffer::decoder
	DecoderNLS_t637950881 * ___decoder_5;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::byteStart
	uint8_t* ___byteStart_6;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::byteEnd
	uint8_t* ___byteEnd_7;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::bytes
	uint8_t* ___bytes_8;
	// System.Text.DecoderFallbackBuffer System.Text.Encoding/EncodingCharBuffer::fallbackBuffer
	DecoderFallbackBuffer_t2402303981 * ___fallbackBuffer_9;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___chars_0)); }
	inline Il2CppChar* get_chars_0() const { return ___chars_0; }
	inline Il2CppChar** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(Il2CppChar* value)
	{
		___chars_0 = value;
	}

	inline static int32_t get_offset_of_charStart_1() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___charStart_1)); }
	inline Il2CppChar* get_charStart_1() const { return ___charStart_1; }
	inline Il2CppChar** get_address_of_charStart_1() { return &___charStart_1; }
	inline void set_charStart_1(Il2CppChar* value)
	{
		___charStart_1 = value;
	}

	inline static int32_t get_offset_of_charEnd_2() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___charEnd_2)); }
	inline Il2CppChar* get_charEnd_2() const { return ___charEnd_2; }
	inline Il2CppChar** get_address_of_charEnd_2() { return &___charEnd_2; }
	inline void set_charEnd_2(Il2CppChar* value)
	{
		___charEnd_2 = value;
	}

	inline static int32_t get_offset_of_charCountResult_3() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___charCountResult_3)); }
	inline int32_t get_charCountResult_3() const { return ___charCountResult_3; }
	inline int32_t* get_address_of_charCountResult_3() { return &___charCountResult_3; }
	inline void set_charCountResult_3(int32_t value)
	{
		___charCountResult_3 = value;
	}

	inline static int32_t get_offset_of_enc_4() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___enc_4)); }
	inline Encoding_t1523322056 * get_enc_4() const { return ___enc_4; }
	inline Encoding_t1523322056 ** get_address_of_enc_4() { return &___enc_4; }
	inline void set_enc_4(Encoding_t1523322056 * value)
	{
		___enc_4 = value;
		Il2CppCodeGenWriteBarrier((&___enc_4), value);
	}

	inline static int32_t get_offset_of_decoder_5() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___decoder_5)); }
	inline DecoderNLS_t637950881 * get_decoder_5() const { return ___decoder_5; }
	inline DecoderNLS_t637950881 ** get_address_of_decoder_5() { return &___decoder_5; }
	inline void set_decoder_5(DecoderNLS_t637950881 * value)
	{
		___decoder_5 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_5), value);
	}

	inline static int32_t get_offset_of_byteStart_6() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___byteStart_6)); }
	inline uint8_t* get_byteStart_6() const { return ___byteStart_6; }
	inline uint8_t** get_address_of_byteStart_6() { return &___byteStart_6; }
	inline void set_byteStart_6(uint8_t* value)
	{
		___byteStart_6 = value;
	}

	inline static int32_t get_offset_of_byteEnd_7() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___byteEnd_7)); }
	inline uint8_t* get_byteEnd_7() const { return ___byteEnd_7; }
	inline uint8_t** get_address_of_byteEnd_7() { return &___byteEnd_7; }
	inline void set_byteEnd_7(uint8_t* value)
	{
		___byteEnd_7 = value;
	}

	inline static int32_t get_offset_of_bytes_8() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___bytes_8)); }
	inline uint8_t* get_bytes_8() const { return ___bytes_8; }
	inline uint8_t** get_address_of_bytes_8() { return &___bytes_8; }
	inline void set_bytes_8(uint8_t* value)
	{
		___bytes_8 = value;
	}

	inline static int32_t get_offset_of_fallbackBuffer_9() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t3998946436, ___fallbackBuffer_9)); }
	inline DecoderFallbackBuffer_t2402303981 * get_fallbackBuffer_9() const { return ___fallbackBuffer_9; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_fallbackBuffer_9() { return &___fallbackBuffer_9; }
	inline void set_fallbackBuffer_9(DecoderFallbackBuffer_t2402303981 * value)
	{
		___fallbackBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackBuffer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGCHARBUFFER_T3998946436_H
#ifndef DECODER_T2204182725_H
#define DECODER_T2204182725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2204182725  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_t3123823036 * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t2402303981 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___m_fallback_0)); }
	inline DecoderFallback_t3123823036 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t2402303981 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t2402303981 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2204182725_H
#ifndef POINTERSPEC_T334147946_H
#define POINTERSPEC_T334147946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PointerSpec
struct  PointerSpec_t334147946  : public RuntimeObject
{
public:
	// System.Int32 System.PointerSpec::pointer_level
	int32_t ___pointer_level_0;

public:
	inline static int32_t get_offset_of_pointer_level_0() { return static_cast<int32_t>(offsetof(PointerSpec_t334147946, ___pointer_level_0)); }
	inline int32_t get_pointer_level_0() const { return ___pointer_level_0; }
	inline int32_t* get_address_of_pointer_level_0() { return &___pointer_level_0; }
	inline void set_pointer_level_0(int32_t value)
	{
		___pointer_level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERSPEC_T334147946_H
#ifndef TERMINFOREADER_T3116894478_H
#define TERMINFOREADER_T3116894478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoReader
struct  TermInfoReader_t3116894478  : public RuntimeObject
{
public:
	// System.Int16 System.TermInfoReader::boolSize
	int16_t ___boolSize_0;
	// System.Int16 System.TermInfoReader::numSize
	int16_t ___numSize_1;
	// System.Int16 System.TermInfoReader::strOffsets
	int16_t ___strOffsets_2;
	// System.Byte[] System.TermInfoReader::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Int32 System.TermInfoReader::booleansOffset
	int32_t ___booleansOffset_4;

public:
	inline static int32_t get_offset_of_boolSize_0() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___boolSize_0)); }
	inline int16_t get_boolSize_0() const { return ___boolSize_0; }
	inline int16_t* get_address_of_boolSize_0() { return &___boolSize_0; }
	inline void set_boolSize_0(int16_t value)
	{
		___boolSize_0 = value;
	}

	inline static int32_t get_offset_of_numSize_1() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___numSize_1)); }
	inline int16_t get_numSize_1() const { return ___numSize_1; }
	inline int16_t* get_address_of_numSize_1() { return &___numSize_1; }
	inline void set_numSize_1(int16_t value)
	{
		___numSize_1 = value;
	}

	inline static int32_t get_offset_of_strOffsets_2() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___strOffsets_2)); }
	inline int16_t get_strOffsets_2() const { return ___strOffsets_2; }
	inline int16_t* get_address_of_strOffsets_2() { return &___strOffsets_2; }
	inline void set_strOffsets_2(int16_t value)
	{
		___strOffsets_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_booleansOffset_4() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___booleansOffset_4)); }
	inline int32_t get_booleansOffset_4() const { return ___booleansOffset_4; }
	inline int32_t* get_address_of_booleansOffset_4() { return &___booleansOffset_4; }
	inline void set_booleansOffset_4(int32_t value)
	{
		___booleansOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERMINFOREADER_T3116894478_H
#ifndef BYTEMATCHER_T2129355737_H
#define BYTEMATCHER_T2129355737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ByteMatcher
struct  ByteMatcher_t2129355737  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.ByteMatcher::map
	Hashtable_t1853889766 * ___map_0;
	// System.Collections.Hashtable System.ByteMatcher::starts
	Hashtable_t1853889766 * ___starts_1;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(ByteMatcher_t2129355737, ___map_0)); }
	inline Hashtable_t1853889766 * get_map_0() const { return ___map_0; }
	inline Hashtable_t1853889766 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(Hashtable_t1853889766 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier((&___map_0), value);
	}

	inline static int32_t get_offset_of_starts_1() { return static_cast<int32_t>(offsetof(ByteMatcher_t2129355737, ___starts_1)); }
	inline Hashtable_t1853889766 * get_starts_1() const { return ___starts_1; }
	inline Hashtable_t1853889766 ** get_address_of_starts_1() { return &___starts_1; }
	inline void set_starts_1(Hashtable_t1853889766 * value)
	{
		___starts_1 = value;
		Il2CppCodeGenWriteBarrier((&___starts_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEMATCHER_T2129355737_H
#ifndef TIMETYPE_T1772318449_H
#define TIMETYPE_T1772318449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeType
struct  TimeType_t1772318449  : public RuntimeObject
{
public:
	// System.Int32 System.TimeType::Offset
	int32_t ___Offset_0;
	// System.Boolean System.TimeType::IsDst
	bool ___IsDst_1;
	// System.String System.TimeType::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(TimeType_t1772318449, ___Offset_0)); }
	inline int32_t get_Offset_0() const { return ___Offset_0; }
	inline int32_t* get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(int32_t value)
	{
		___Offset_0 = value;
	}

	inline static int32_t get_offset_of_IsDst_1() { return static_cast<int32_t>(offsetof(TimeType_t1772318449, ___IsDst_1)); }
	inline bool get_IsDst_1() const { return ___IsDst_1; }
	inline bool* get_address_of_IsDst_1() { return &___IsDst_1; }
	inline void set_IsDst_1(bool value)
	{
		___IsDst_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(TimeType_t1772318449, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMETYPE_T1772318449_H
#ifndef TIMEZONE_T2038656743_H
#define TIMEZONE_T2038656743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t2038656743  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t2038656743_StaticFields
{
public:
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_0;

public:
	inline static int32_t get_offset_of_tz_lock_0() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___tz_lock_0)); }
	inline RuntimeObject * get_tz_lock_0() const { return ___tz_lock_0; }
	inline RuntimeObject ** get_address_of_tz_lock_0() { return &___tz_lock_0; }
	inline void set_tz_lock_0(RuntimeObject * value)
	{
		___tz_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T2038656743_H
#ifndef LOWLEVELSTACK_T4014997415_H
#define LOWLEVELSTACK_T4014997415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParameterizedStrings/LowLevelStack
struct  LowLevelStack_t4014997415  : public RuntimeObject
{
public:
	// System.ParameterizedStrings/FormatParam[] System.ParameterizedStrings/LowLevelStack::_arr
	FormatParamU5BU5D_t207249367* ____arr_0;
	// System.Int32 System.ParameterizedStrings/LowLevelStack::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of__arr_0() { return static_cast<int32_t>(offsetof(LowLevelStack_t4014997415, ____arr_0)); }
	inline FormatParamU5BU5D_t207249367* get__arr_0() const { return ____arr_0; }
	inline FormatParamU5BU5D_t207249367** get_address_of__arr_0() { return &____arr_0; }
	inline void set__arr_0(FormatParamU5BU5D_t207249367* value)
	{
		____arr_0 = value;
		Il2CppCodeGenWriteBarrier((&____arr_0), value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(LowLevelStack_t4014997415, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELSTACK_T4014997415_H
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
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef PARAMETERIZEDSTRINGS_T2383627466_H
#define PARAMETERIZEDSTRINGS_T2383627466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParameterizedStrings
struct  ParameterizedStrings_t2383627466  : public RuntimeObject
{
public:

public:
};

struct ParameterizedStrings_t2383627466_ThreadStaticFields
{
public:
	// System.ParameterizedStrings/LowLevelStack System.ParameterizedStrings::_cachedStack
	LowLevelStack_t4014997415 * ____cachedStack_0;

public:
	inline static int32_t get_offset_of__cachedStack_0() { return static_cast<int32_t>(offsetof(ParameterizedStrings_t2383627466_ThreadStaticFields, ____cachedStack_0)); }
	inline LowLevelStack_t4014997415 * get__cachedStack_0() const { return ____cachedStack_0; }
	inline LowLevelStack_t4014997415 ** get_address_of__cachedStack_0() { return &____cachedStack_0; }
	inline void set__cachedStack_0(LowLevelStack_t4014997415 * value)
	{
		____cachedStack_0 = value;
		Il2CppCodeGenWriteBarrier((&____cachedStack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDSTRINGS_T2383627466_H
#ifndef TYPEIDENTIFIERS_T3002432201_H
#define TYPEIDENTIFIERS_T3002432201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeIdentifiers
struct  TypeIdentifiers_t3002432201  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEIDENTIFIERS_T3002432201_H
#ifndef ATYPENAME_T2426384130_H
#define ATYPENAME_T2426384130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNames/ATypeName
struct  ATypeName_t2426384130  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATYPENAME_T2426384130_H
#ifndef RESOURCEMANAGERMEDIATOR_T1468959918_H
#define RESOURCEMANAGERMEDIATOR_T1468959918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/ResourceManagerMediator
struct  ResourceManagerMediator_t1468959918  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager System.Resources.ResourceManager/ResourceManagerMediator::_rm
	ResourceManager_t4037989559 * ____rm_0;

public:
	inline static int32_t get_offset_of__rm_0() { return static_cast<int32_t>(offsetof(ResourceManagerMediator_t1468959918, ____rm_0)); }
	inline ResourceManager_t4037989559 * get__rm_0() const { return ____rm_0; }
	inline ResourceManager_t4037989559 ** get_address_of__rm_0() { return &____rm_0; }
	inline void set__rm_0(ResourceManager_t4037989559 * value)
	{
		____rm_0 = value;
		Il2CppCodeGenWriteBarrier((&____rm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGERMEDIATOR_T1468959918_H
#ifndef TYPENAMES_T2453564441_H
#define TYPENAMES_T2453564441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNames
struct  TypeNames_t2453564441  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMES_T2453564441_H
#ifndef ARRAYSPEC_T3456100556_H
#define ARRAYSPEC_T3456100556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArraySpec
struct  ArraySpec_t3456100556  : public RuntimeObject
{
public:
	// System.Int32 System.ArraySpec::dimensions
	int32_t ___dimensions_0;
	// System.Boolean System.ArraySpec::bound
	bool ___bound_1;

public:
	inline static int32_t get_offset_of_dimensions_0() { return static_cast<int32_t>(offsetof(ArraySpec_t3456100556, ___dimensions_0)); }
	inline int32_t get_dimensions_0() const { return ___dimensions_0; }
	inline int32_t* get_address_of_dimensions_0() { return &___dimensions_0; }
	inline void set_dimensions_0(int32_t value)
	{
		___dimensions_0 = value;
	}

	inline static int32_t get_offset_of_bound_1() { return static_cast<int32_t>(offsetof(ArraySpec_t3456100556, ___bound_1)); }
	inline bool get_bound_1() const { return ___bound_1; }
	inline bool* get_address_of_bound_1() { return &___bound_1; }
	inline void set_bound_1(bool value)
	{
		___bound_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSPEC_T3456100556_H
#ifndef CULTURENAMERESOURCESETPAIR_T3305173715_H
#define CULTURENAMERESOURCESETPAIR_T3305173715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/CultureNameResourceSetPair
struct  CultureNameResourceSetPair_t3305173715  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURENAMERESOURCESETPAIR_T3305173715_H
#ifndef DEFAULTENCODER_T1761427806_H
#define DEFAULTENCODER_T1761427806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/DefaultEncoder
struct  DefaultEncoder_t1761427806  : public Encoder_t2198218980
{
public:
	// System.Text.Encoding System.Text.Encoding/DefaultEncoder::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Boolean System.Text.Encoding/DefaultEncoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;
	// System.Char System.Text.Encoding/DefaultEncoder::charLeftOver
	Il2CppChar ___charLeftOver_4;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DefaultEncoder_t1761427806, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(DefaultEncoder_t1761427806, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}

	inline static int32_t get_offset_of_charLeftOver_4() { return static_cast<int32_t>(offsetof(DefaultEncoder_t1761427806, ___charLeftOver_4)); }
	inline Il2CppChar get_charLeftOver_4() const { return ___charLeftOver_4; }
	inline Il2CppChar* get_address_of_charLeftOver_4() { return &___charLeftOver_4; }
	inline void set_charLeftOver_4(Il2CppChar value)
	{
		___charLeftOver_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTENCODER_T1761427806_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t1863187162  : public EncoderFallbackBuffer_t3523102303
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::strDefault
	String_t* ___strDefault_7;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::fallbackCount
	int32_t ___fallbackCount_8;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::fallbackIndex
	int32_t ___fallbackIndex_9;

public:
	inline static int32_t get_offset_of_strDefault_7() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___strDefault_7)); }
	inline String_t* get_strDefault_7() const { return ___strDefault_7; }
	inline String_t** get_address_of_strDefault_7() { return &___strDefault_7; }
	inline void set_strDefault_7(String_t* value)
	{
		___strDefault_7 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_7), value);
	}

	inline static int32_t get_offset_of_fallbackCount_8() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___fallbackCount_8)); }
	inline int32_t get_fallbackCount_8() const { return ___fallbackCount_8; }
	inline int32_t* get_address_of_fallbackCount_8() { return &___fallbackCount_8; }
	inline void set_fallbackCount_8(int32_t value)
	{
		___fallbackCount_8 = value;
	}

	inline static int32_t get_offset_of_fallbackIndex_9() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___fallbackIndex_9)); }
	inline int32_t get_fallbackIndex_9() const { return ___fallbackIndex_9; }
	inline int32_t* get_address_of_fallbackIndex_9() { return &___fallbackIndex_9; }
	inline void set_fallbackIndex_9(int32_t value)
	{
		___fallbackIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
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
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3597232471  : public EncoderFallbackBuffer_t3523102303
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1623206753_H
#define ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1623206753  : public EncoderFallback_t1188251036
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1623206753, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifndef ENCODERNLS_T449404832_H
#define ENCODERNLS_T449404832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderNLS
struct  EncoderNLS_t449404832  : public Encoder_t2198218980
{
public:
	// System.Char System.Text.EncoderNLS::charLeftOver
	Il2CppChar ___charLeftOver_2;
	// System.Text.Encoding System.Text.EncoderNLS::m_encoding
	Encoding_t1523322056 * ___m_encoding_3;
	// System.Boolean System.Text.EncoderNLS::m_mustFlush
	bool ___m_mustFlush_4;
	// System.Boolean System.Text.EncoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_5;
	// System.Int32 System.Text.EncoderNLS::m_charsUsed
	int32_t ___m_charsUsed_6;

public:
	inline static int32_t get_offset_of_charLeftOver_2() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___charLeftOver_2)); }
	inline Il2CppChar get_charLeftOver_2() const { return ___charLeftOver_2; }
	inline Il2CppChar* get_address_of_charLeftOver_2() { return &___charLeftOver_2; }
	inline void set_charLeftOver_2(Il2CppChar value)
	{
		___charLeftOver_2 = value;
	}

	inline static int32_t get_offset_of_m_encoding_3() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_encoding_3)); }
	inline Encoding_t1523322056 * get_m_encoding_3() const { return ___m_encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_3() { return &___m_encoding_3; }
	inline void set_m_encoding_3(Encoding_t1523322056 * value)
	{
		___m_encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_3), value);
	}

	inline static int32_t get_offset_of_m_mustFlush_4() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_mustFlush_4)); }
	inline bool get_m_mustFlush_4() const { return ___m_mustFlush_4; }
	inline bool* get_address_of_m_mustFlush_4() { return &___m_mustFlush_4; }
	inline void set_m_mustFlush_4(bool value)
	{
		___m_mustFlush_4 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_5() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_throwOnOverflow_5)); }
	inline bool get_m_throwOnOverflow_5() const { return ___m_throwOnOverflow_5; }
	inline bool* get_address_of_m_throwOnOverflow_5() { return &___m_throwOnOverflow_5; }
	inline void set_m_throwOnOverflow_5(bool value)
	{
		___m_throwOnOverflow_5 = value;
	}

	inline static int32_t get_offset_of_m_charsUsed_6() { return static_cast<int32_t>(offsetof(EncoderNLS_t449404832, ___m_charsUsed_6)); }
	inline int32_t get_m_charsUsed_6() const { return ___m_charsUsed_6; }
	inline int32_t* get_address_of_m_charsUsed_6() { return &___m_charsUsed_6; }
	inline void set_m_charsUsed_6(int32_t value)
	{
		___m_charsUsed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERNLS_T449404832_H
#ifndef UNICODEENCODING_T1959134050_H
#define UNICODEENCODING_T1959134050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t1959134050  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_t1959134050_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T1959134050_H
#ifndef DECODERUTF7FALLBACKBUFFER_T605274814_H
#define DECODERUTF7FALLBACKBUFFER_T605274814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct  DecoderUTF7FallbackBuffer_t605274814  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::cFallback
	Il2CppChar ___cFallback_2;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iSize
	int32_t ___iSize_4;

public:
	inline static int32_t get_offset_of_cFallback_2() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t605274814, ___cFallback_2)); }
	inline Il2CppChar get_cFallback_2() const { return ___cFallback_2; }
	inline Il2CppChar* get_address_of_cFallback_2() { return &___cFallback_2; }
	inline void set_cFallback_2(Il2CppChar value)
	{
		___cFallback_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t605274814, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t605274814, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERUTF7FALLBACKBUFFER_T605274814_H
#ifndef UTF32ENCODING_T312252005_H
#define UTF32ENCODING_T312252005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t312252005  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T312252005_H
#ifndef DECODERUTF7FALLBACK_T327311172_H
#define DECODERUTF7FALLBACK_T327311172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct  DecoderUTF7Fallback_t327311172  : public DecoderFallback_t3123823036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERUTF7FALLBACK_T327311172_H
#ifndef UTF7ENCODING_T2644108479_H
#define UTF7ENCODING_T2644108479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t2644108479  : public Encoding_t1523322056
{
public:
	// System.Byte[] System.Text.UTF7Encoding::base64Bytes
	ByteU5BU5D_t4116647657* ___base64Bytes_16;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t2651576203* ___base64Values_17;
	// System.Boolean[] System.Text.UTF7Encoding::directEncode
	BooleanU5BU5D_t2897418192* ___directEncode_18;
	// System.Boolean System.Text.UTF7Encoding::m_allowOptionals
	bool ___m_allowOptionals_19;

public:
	inline static int32_t get_offset_of_base64Bytes_16() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___base64Bytes_16)); }
	inline ByteU5BU5D_t4116647657* get_base64Bytes_16() const { return ___base64Bytes_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_base64Bytes_16() { return &___base64Bytes_16; }
	inline void set_base64Bytes_16(ByteU5BU5D_t4116647657* value)
	{
		___base64Bytes_16 = value;
		Il2CppCodeGenWriteBarrier((&___base64Bytes_16), value);
	}

	inline static int32_t get_offset_of_base64Values_17() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___base64Values_17)); }
	inline SByteU5BU5D_t2651576203* get_base64Values_17() const { return ___base64Values_17; }
	inline SByteU5BU5D_t2651576203** get_address_of_base64Values_17() { return &___base64Values_17; }
	inline void set_base64Values_17(SByteU5BU5D_t2651576203* value)
	{
		___base64Values_17 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_17), value);
	}

	inline static int32_t get_offset_of_directEncode_18() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___directEncode_18)); }
	inline BooleanU5BU5D_t2897418192* get_directEncode_18() const { return ___directEncode_18; }
	inline BooleanU5BU5D_t2897418192** get_address_of_directEncode_18() { return &___directEncode_18; }
	inline void set_directEncode_18(BooleanU5BU5D_t2897418192* value)
	{
		___directEncode_18 = value;
		Il2CppCodeGenWriteBarrier((&___directEncode_18), value);
	}

	inline static int32_t get_offset_of_m_allowOptionals_19() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___m_allowOptionals_19)); }
	inline bool get_m_allowOptionals_19() const { return ___m_allowOptionals_19; }
	inline bool* get_address_of_m_allowOptionals_19() { return &___m_allowOptionals_19; }
	inline void set_m_allowOptionals_19(bool value)
	{
		___m_allowOptionals_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T2644108479_H
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
#ifndef DEFAULTDECODER_T1768440197_H
#define DEFAULTDECODER_T1768440197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/DefaultDecoder
struct  DefaultDecoder_t1768440197  : public Decoder_t2204182725
{
public:
	// System.Text.Encoding System.Text.Encoding/DefaultDecoder::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Boolean System.Text.Encoding/DefaultDecoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DefaultDecoder_t1768440197, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(DefaultDecoder_t1768440197, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDECODER_T1768440197_H
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
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef ENCODINGNLS_T2860325670_H
#define ENCODINGNLS_T2860325670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingNLS
struct  EncodingNLS_t2860325670  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGNLS_T2860325670_H
#ifndef ENCODEREXCEPTIONFALLBACK_T1243849599_H
#define ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t1243849599  : public EncoderFallback_t1188251036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifndef INPUTRECORD_T2660212290_H
#define INPUTRECORD_T2660212290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InputRecord
struct  InputRecord_t2660212290 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
#endif // INPUTRECORD_T2660212290_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COORD_T397375283_H
#define COORD_T397375283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Coord
struct  Coord_t397375283 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T397375283_H
#ifndef ASCIIENCODING_T3446586211_H
#define ASCIIENCODING_T3446586211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3446586211  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3446586211_H
#ifndef SMALLRECT_T2930836963_H
#define SMALLRECT_T2930836963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SmallRect
struct  SmallRect_t2930836963 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLRECT_T2930836963_H
#ifndef CURRENTSYSTEMTIMEZONE_T3998352255_H
#define CURRENTSYSTEMTIMEZONE_T3998352255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t3998352255  : public TimeZone_t2038656743
{
public:
	// System.TimeZoneInfo System.CurrentSystemTimeZone::LocalTimeZone
	TimeZoneInfo_t161405854 * ___LocalTimeZone_1;

public:
	inline static int32_t get_offset_of_LocalTimeZone_1() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___LocalTimeZone_1)); }
	inline TimeZoneInfo_t161405854 * get_LocalTimeZone_1() const { return ___LocalTimeZone_1; }
	inline TimeZoneInfo_t161405854 ** get_address_of_LocalTimeZone_1() { return &___LocalTimeZone_1; }
	inline void set_LocalTimeZone_1(TimeZoneInfo_t161405854 * value)
	{
		___LocalTimeZone_1 = value;
		Il2CppCodeGenWriteBarrier((&___LocalTimeZone_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T3998352255_H
#ifndef FORMATPARAM_T4194474082_H
#define FORMATPARAM_T4194474082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParameterizedStrings/FormatParam
struct  FormatParam_t4194474082 
{
public:
	// System.Int32 System.ParameterizedStrings/FormatParam::_int32
	int32_t ____int32_0;
	// System.String System.ParameterizedStrings/FormatParam::_string
	String_t* ____string_1;

public:
	inline static int32_t get_offset_of__int32_0() { return static_cast<int32_t>(offsetof(FormatParam_t4194474082, ____int32_0)); }
	inline int32_t get__int32_0() const { return ____int32_0; }
	inline int32_t* get_address_of__int32_0() { return &____int32_0; }
	inline void set__int32_0(int32_t value)
	{
		____int32_0 = value;
	}

	inline static int32_t get_offset_of__string_1() { return static_cast<int32_t>(offsetof(FormatParam_t4194474082, ____string_1)); }
	inline String_t* get__string_1() const { return ____string_1; }
	inline String_t** get_address_of__string_1() { return &____string_1; }
	inline void set__string_1(String_t* value)
	{
		____string_1 = value;
		Il2CppCodeGenWriteBarrier((&____string_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParameterizedStrings/FormatParam
struct FormatParam_t4194474082_marshaled_pinvoke
{
	int32_t ____int32_0;
	char* ____string_1;
};
// Native definition for COM marshalling of System.ParameterizedStrings/FormatParam
struct FormatParam_t4194474082_marshaled_com
{
	int32_t ____int32_0;
	Il2CppChar* ____string_1;
};
#endif // FORMATPARAM_T4194474082_H
#ifndef DISPLAY_T2029414921_H
#define DISPLAY_T2029414921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeIdentifiers/Display
struct  Display_t2029414921  : public ATypeName_t2426384130
{
public:
	// System.String System.TypeIdentifiers/Display::displayName
	String_t* ___displayName_0;
	// System.String System.TypeIdentifiers/Display::internal_name
	String_t* ___internal_name_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Display_t2029414921, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_0), value);
	}

	inline static int32_t get_offset_of_internal_name_1() { return static_cast<int32_t>(offsetof(Display_t2029414921, ___internal_name_1)); }
	inline String_t* get_internal_name_1() const { return ___internal_name_1; }
	inline String_t** get_address_of_internal_name_1() { return &___internal_name_1; }
	inline void set_internal_name_1(String_t* value)
	{
		___internal_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___internal_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T2029414921_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef NOESCAPE_T3415473081_H
#define NOESCAPE_T3415473081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeIdentifiers/NoEscape
struct  NoEscape_t3415473081  : public ATypeName_t2426384130
{
public:
	// System.String System.TypeIdentifiers/NoEscape::simpleName
	String_t* ___simpleName_0;

public:
	inline static int32_t get_offset_of_simpleName_0() { return static_cast<int32_t>(offsetof(NoEscape_t3415473081, ___simpleName_0)); }
	inline String_t* get_simpleName_0() const { return ___simpleName_0; }
	inline String_t** get_address_of_simpleName_0() { return &___simpleName_0; }
	inline void set_simpleName_0(String_t* value)
	{
		___simpleName_0 = value;
		Il2CppCodeGenWriteBarrier((&___simpleName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOESCAPE_T3415473081_H
#ifndef INTERNALDECODERBESTFITFALLBACK_T231958350_H
#define INTERNALDECODERBESTFITFALLBACK_T231958350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.InternalDecoderBestFitFallback
struct  InternalDecoderBestFitFallback_t231958350  : public DecoderFallback_t3123823036
{
public:
	// System.Text.Encoding System.Text.InternalDecoderBestFitFallback::encoding
	Encoding_t1523322056 * ___encoding_4;
	// System.Char[] System.Text.InternalDecoderBestFitFallback::arrayBestFit
	CharU5BU5D_t3528271667* ___arrayBestFit_5;
	// System.Char System.Text.InternalDecoderBestFitFallback::cReplacement
	Il2CppChar ___cReplacement_6;

public:
	inline static int32_t get_offset_of_encoding_4() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallback_t231958350, ___encoding_4)); }
	inline Encoding_t1523322056 * get_encoding_4() const { return ___encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_encoding_4() { return &___encoding_4; }
	inline void set_encoding_4(Encoding_t1523322056 * value)
	{
		___encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_4), value);
	}

	inline static int32_t get_offset_of_arrayBestFit_5() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallback_t231958350, ___arrayBestFit_5)); }
	inline CharU5BU5D_t3528271667* get_arrayBestFit_5() const { return ___arrayBestFit_5; }
	inline CharU5BU5D_t3528271667** get_address_of_arrayBestFit_5() { return &___arrayBestFit_5; }
	inline void set_arrayBestFit_5(CharU5BU5D_t3528271667* value)
	{
		___arrayBestFit_5 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBestFit_5), value);
	}

	inline static int32_t get_offset_of_cReplacement_6() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallback_t231958350, ___cReplacement_6)); }
	inline Il2CppChar get_cReplacement_6() const { return ___cReplacement_6; }
	inline Il2CppChar* get_address_of_cReplacement_6() { return &___cReplacement_6; }
	inline void set_cReplacement_6(Il2CppChar value)
	{
		___cReplacement_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDECODERBESTFITFALLBACK_T231958350_H
#ifndef INTERNALENCODERBESTFITFALLBACK_T3121776013_H
#define INTERNALENCODERBESTFITFALLBACK_T3121776013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.InternalEncoderBestFitFallback
struct  InternalEncoderBestFitFallback_t3121776013  : public EncoderFallback_t1188251036
{
public:
	// System.Text.Encoding System.Text.InternalEncoderBestFitFallback::encoding
	Encoding_t1523322056 * ___encoding_4;
	// System.Char[] System.Text.InternalEncoderBestFitFallback::arrayBestFit
	CharU5BU5D_t3528271667* ___arrayBestFit_5;

public:
	inline static int32_t get_offset_of_encoding_4() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallback_t3121776013, ___encoding_4)); }
	inline Encoding_t1523322056 * get_encoding_4() const { return ___encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_encoding_4() { return &___encoding_4; }
	inline void set_encoding_4(Encoding_t1523322056 * value)
	{
		___encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_4), value);
	}

	inline static int32_t get_offset_of_arrayBestFit_5() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallback_t3121776013, ___arrayBestFit_5)); }
	inline CharU5BU5D_t3528271667* get_arrayBestFit_5() const { return ___arrayBestFit_5; }
	inline CharU5BU5D_t3528271667** get_address_of_arrayBestFit_5() { return &___arrayBestFit_5; }
	inline void set_arrayBestFit_5(CharU5BU5D_t3528271667* value)
	{
		___arrayBestFit_5 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBestFit_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALENCODERBESTFITFALLBACK_T3121776013_H
#ifndef DECODEREXCEPTIONFALLBACK_T3981484394_H
#define DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t3981484394  : public DecoderFallback_t3123823036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifndef DECODERNLS_T637950881_H
#define DECODERNLS_T637950881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderNLS
struct  DecoderNLS_t637950881  : public Decoder_t2204182725
{
public:
	// System.Text.Encoding System.Text.DecoderNLS::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Boolean System.Text.DecoderNLS::m_mustFlush
	bool ___m_mustFlush_3;
	// System.Boolean System.Text.DecoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_4;
	// System.Int32 System.Text.DecoderNLS::m_bytesUsed
	int32_t ___m_bytesUsed_5;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_mustFlush_3() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_mustFlush_3)); }
	inline bool get_m_mustFlush_3() const { return ___m_mustFlush_3; }
	inline bool* get_address_of_m_mustFlush_3() { return &___m_mustFlush_3; }
	inline void set_m_mustFlush_3(bool value)
	{
		___m_mustFlush_3 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_4() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_throwOnOverflow_4)); }
	inline bool get_m_throwOnOverflow_4() const { return ___m_throwOnOverflow_4; }
	inline bool* get_address_of_m_throwOnOverflow_4() { return &___m_throwOnOverflow_4; }
	inline void set_m_throwOnOverflow_4(bool value)
	{
		___m_throwOnOverflow_4 = value;
	}

	inline static int32_t get_offset_of_m_bytesUsed_5() { return static_cast<int32_t>(offsetof(DecoderNLS_t637950881, ___m_bytesUsed_5)); }
	inline int32_t get_m_bytesUsed_5() const { return ___m_bytesUsed_5; }
	inline int32_t* get_address_of_m_bytesUsed_5() { return &___m_bytesUsed_5; }
	inline void set_m_bytesUsed_5(int32_t value)
	{
		___m_bytesUsed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERNLS_T637950881_H
#ifndef DECODERREPLACEMENTFALLBACK_T1462101135_H
#define DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t1462101135  : public DecoderFallback_t3123823036
{
public:
	// System.String System.Text.DecoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t1462101135, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t90938522  : public DecoderFallbackBuffer_t2402303981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t841144779  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.String System.Text.DecoderReplacementFallbackBuffer::strDefault
	String_t* ___strDefault_2;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::fallbackCount
	int32_t ___fallbackCount_3;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::fallbackIndex
	int32_t ___fallbackIndex_4;

public:
	inline static int32_t get_offset_of_strDefault_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___strDefault_2)); }
	inline String_t* get_strDefault_2() const { return ___strDefault_2; }
	inline String_t** get_address_of_strDefault_2() { return &___strDefault_2; }
	inline void set_strDefault_2(String_t* value)
	{
		___strDefault_2 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_2), value);
	}

	inline static int32_t get_offset_of_fallbackCount_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___fallbackCount_3)); }
	inline int32_t get_fallbackCount_3() const { return ___fallbackCount_3; }
	inline int32_t* get_address_of_fallbackCount_3() { return &___fallbackCount_3; }
	inline void set_fallbackCount_3(int32_t value)
	{
		___fallbackCount_3 = value;
	}

	inline static int32_t get_offset_of_fallbackIndex_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___fallbackIndex_4)); }
	inline int32_t get_fallbackIndex_4() const { return ___fallbackIndex_4; }
	inline int32_t* get_address_of_fallbackIndex_4() { return &___fallbackIndex_4; }
	inline void set_fallbackIndex_4(int32_t value)
	{
		___fallbackIndex_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifndef INTERNALDECODERBESTFITFALLBACKBUFFER_T1499007376_H
#define INTERNALDECODERBESTFITFALLBACKBUFFER_T1499007376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.InternalDecoderBestFitFallbackBuffer
struct  InternalDecoderBestFitFallbackBuffer_t1499007376  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.Char System.Text.InternalDecoderBestFitFallbackBuffer::cBestFit
	Il2CppChar ___cBestFit_2;
	// System.Int32 System.Text.InternalDecoderBestFitFallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.InternalDecoderBestFitFallbackBuffer::iSize
	int32_t ___iSize_4;
	// System.Text.InternalDecoderBestFitFallback System.Text.InternalDecoderBestFitFallbackBuffer::oFallback
	InternalDecoderBestFitFallback_t231958350 * ___oFallback_5;

public:
	inline static int32_t get_offset_of_cBestFit_2() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallbackBuffer_t1499007376, ___cBestFit_2)); }
	inline Il2CppChar get_cBestFit_2() const { return ___cBestFit_2; }
	inline Il2CppChar* get_address_of_cBestFit_2() { return &___cBestFit_2; }
	inline void set_cBestFit_2(Il2CppChar value)
	{
		___cBestFit_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallbackBuffer_t1499007376, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallbackBuffer_t1499007376, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}

	inline static int32_t get_offset_of_oFallback_5() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallbackBuffer_t1499007376, ___oFallback_5)); }
	inline InternalDecoderBestFitFallback_t231958350 * get_oFallback_5() const { return ___oFallback_5; }
	inline InternalDecoderBestFitFallback_t231958350 ** get_address_of_oFallback_5() { return &___oFallback_5; }
	inline void set_oFallback_5(InternalDecoderBestFitFallback_t231958350 * value)
	{
		___oFallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___oFallback_5), value);
	}
};

struct InternalDecoderBestFitFallbackBuffer_t1499007376_StaticFields
{
public:
	// System.Object System.Text.InternalDecoderBestFitFallbackBuffer::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_6;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_6() { return static_cast<int32_t>(offsetof(InternalDecoderBestFitFallbackBuffer_t1499007376_StaticFields, ___s_InternalSyncObject_6)); }
	inline RuntimeObject * get_s_InternalSyncObject_6() const { return ___s_InternalSyncObject_6; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_6() { return &___s_InternalSyncObject_6; }
	inline void set_s_InternalSyncObject_6(RuntimeObject * value)
	{
		___s_InternalSyncObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDECODERBESTFITFALLBACKBUFFER_T1499007376_H
#ifndef INTERNALENCODERBESTFITFALLBACKBUFFER_T2370301869_H
#define INTERNALENCODERBESTFITFALLBACKBUFFER_T2370301869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.InternalEncoderBestFitFallbackBuffer
struct  InternalEncoderBestFitFallbackBuffer_t2370301869  : public EncoderFallbackBuffer_t3523102303
{
public:
	// System.Char System.Text.InternalEncoderBestFitFallbackBuffer::cBestFit
	Il2CppChar ___cBestFit_7;
	// System.Text.InternalEncoderBestFitFallback System.Text.InternalEncoderBestFitFallbackBuffer::oFallback
	InternalEncoderBestFitFallback_t3121776013 * ___oFallback_8;
	// System.Int32 System.Text.InternalEncoderBestFitFallbackBuffer::iCount
	int32_t ___iCount_9;
	// System.Int32 System.Text.InternalEncoderBestFitFallbackBuffer::iSize
	int32_t ___iSize_10;

public:
	inline static int32_t get_offset_of_cBestFit_7() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___cBestFit_7)); }
	inline Il2CppChar get_cBestFit_7() const { return ___cBestFit_7; }
	inline Il2CppChar* get_address_of_cBestFit_7() { return &___cBestFit_7; }
	inline void set_cBestFit_7(Il2CppChar value)
	{
		___cBestFit_7 = value;
	}

	inline static int32_t get_offset_of_oFallback_8() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___oFallback_8)); }
	inline InternalEncoderBestFitFallback_t3121776013 * get_oFallback_8() const { return ___oFallback_8; }
	inline InternalEncoderBestFitFallback_t3121776013 ** get_address_of_oFallback_8() { return &___oFallback_8; }
	inline void set_oFallback_8(InternalEncoderBestFitFallback_t3121776013 * value)
	{
		___oFallback_8 = value;
		Il2CppCodeGenWriteBarrier((&___oFallback_8), value);
	}

	inline static int32_t get_offset_of_iCount_9() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___iCount_9)); }
	inline int32_t get_iCount_9() const { return ___iCount_9; }
	inline int32_t* get_address_of_iCount_9() { return &___iCount_9; }
	inline void set_iCount_9(int32_t value)
	{
		___iCount_9 = value;
	}

	inline static int32_t get_offset_of_iSize_10() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869, ___iSize_10)); }
	inline int32_t get_iSize_10() const { return ___iSize_10; }
	inline int32_t* get_address_of_iSize_10() { return &___iSize_10; }
	inline void set_iSize_10(int32_t value)
	{
		___iSize_10 = value;
	}
};

struct InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields
{
public:
	// System.Object System.Text.InternalEncoderBestFitFallbackBuffer::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_11;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_11() { return static_cast<int32_t>(offsetof(InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields, ___s_InternalSyncObject_11)); }
	inline RuntimeObject * get_s_InternalSyncObject_11() const { return ___s_InternalSyncObject_11; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_11() { return &___s_InternalSyncObject_11; }
	inline void set_s_InternalSyncObject_11(RuntimeObject * value)
	{
		___s_InternalSyncObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALENCODERBESTFITFALLBACKBUFFER_T2370301869_H
#ifndef MISSINGMANIFESTRESOURCEEXCEPTION_T85971840_H
#define MISSINGMANIFESTRESOURCEEXCEPTION_T85971840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.MissingManifestResourceException
struct  MissingManifestResourceException_t85971840  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMANIFESTRESOURCEEXCEPTION_T85971840_H
#ifndef DISPLAYNAMEFORMAT_T2724649181_H
#define DISPLAYNAMEFORMAT_T2724649181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeSpec/DisplayNameFormat
struct  DisplayNameFormat_t2724649181 
{
public:
	// System.Int32 System.TypeSpec/DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_t2724649181, ___value___2)); }
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
#endif // DISPLAYNAMEFORMAT_T2724649181_H
#ifndef BRECORD_T3470580684_H
#define BRECORD_T3470580684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BRECORD
struct  BRECORD_t3470580684 
{
public:
	// System.IntPtr System.BRECORD::pvRecord
	intptr_t ___pvRecord_0;
	// System.IntPtr System.BRECORD::pRecInfo
	intptr_t ___pRecInfo_1;

public:
	inline static int32_t get_offset_of_pvRecord_0() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pvRecord_0)); }
	inline intptr_t get_pvRecord_0() const { return ___pvRecord_0; }
	inline intptr_t* get_address_of_pvRecord_0() { return &___pvRecord_0; }
	inline void set_pvRecord_0(intptr_t value)
	{
		___pvRecord_0 = value;
	}

	inline static int32_t get_offset_of_pRecInfo_1() { return static_cast<int32_t>(offsetof(BRECORD_t3470580684, ___pRecInfo_1)); }
	inline intptr_t get_pRecInfo_1() const { return ___pRecInfo_1; }
	inline intptr_t* get_address_of_pRecInfo_1() { return &___pRecInfo_1; }
	inline void set_pRecInfo_1(intptr_t value)
	{
		___pRecInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BRECORD_T3470580684_H
#ifndef NORMALIZATIONFORM_T3110136658_H
#define NORMALIZATIONFORM_T3110136658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.NormalizationForm
struct  NormalizationForm_t3110136658 
{
public:
	// System.Int32 System.Text.NormalizationForm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalizationForm_t3110136658, ___value___2)); }
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
#endif // NORMALIZATIONFORM_T3110136658_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___2)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef TERMINFOSTRINGS_T290279955_H
#define TERMINFOSTRINGS_T290279955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoStrings
struct  TermInfoStrings_t290279955 
{
public:
	// System.Int32 System.TermInfoStrings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TermInfoStrings_t290279955, ___value___2)); }
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
#endif // TERMINFOSTRINGS_T290279955_H
#ifndef CONSOLECOLOR_T2680034144_H
#define CONSOLECOLOR_T2680034144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleColor
struct  ConsoleColor_t2680034144 
{
public:
	// System.Int32 System.ConsoleColor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleColor_t2680034144, ___value___2)); }
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
#endif // CONSOLECOLOR_T2680034144_H
#ifndef TERMINFONUMBERS_T2028216776_H
#define TERMINFONUMBERS_T2028216776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoNumbers
struct  TermInfoNumbers_t2028216776 
{
public:
	// System.Int32 System.TermInfoNumbers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TermInfoNumbers_t2028216776, ___value___2)); }
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
#endif // TERMINFONUMBERS_T2028216776_H
#ifndef ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#define ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.UltimateResourceFallbackLocation
struct  UltimateResourceFallbackLocation_t690808888 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_t690808888, ___value___2)); }
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
#endif // ULTIMATERESOURCEFALLBACKLOCATION_T690808888_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___2)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DECODER_T3679984939_H
#define DECODER_T3679984939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/Decoder
struct  Decoder_t3679984939  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UnicodeEncoding/Decoder::lastByte
	int32_t ___lastByte_6;
	// System.Char System.Text.UnicodeEncoding/Decoder::lastChar
	Il2CppChar ___lastChar_7;

public:
	inline static int32_t get_offset_of_lastByte_6() { return static_cast<int32_t>(offsetof(Decoder_t3679984939, ___lastByte_6)); }
	inline int32_t get_lastByte_6() const { return ___lastByte_6; }
	inline int32_t* get_address_of_lastByte_6() { return &___lastByte_6; }
	inline void set_lastByte_6(int32_t value)
	{
		___lastByte_6 = value;
	}

	inline static int32_t get_offset_of_lastChar_7() { return static_cast<int32_t>(offsetof(Decoder_t3679984939, ___lastChar_7)); }
	inline Il2CppChar get_lastChar_7() const { return ___lastChar_7; }
	inline Il2CppChar* get_address_of_lastChar_7() { return &___lastChar_7; }
	inline void set_lastChar_7(Il2CppChar value)
	{
		___lastChar_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T3679984939_H
#ifndef HANDLES_T3280152003_H
#define HANDLES_T3280152003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Handles
struct  Handles_t3280152003 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handles_t3280152003, ___value___2)); }
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
#endif // HANDLES_T3280152003_H
#ifndef UTF32DECODER_T635925672_H
#define UTF32DECODER_T635925672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t635925672  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::iChar
	int32_t ___iChar_6;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::readByteCount
	int32_t ___readByteCount_7;

public:
	inline static int32_t get_offset_of_iChar_6() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___iChar_6)); }
	inline int32_t get_iChar_6() const { return ___iChar_6; }
	inline int32_t* get_address_of_iChar_6() { return &___iChar_6; }
	inline void set_iChar_6(int32_t value)
	{
		___iChar_6 = value;
	}

	inline static int32_t get_offset_of_readByteCount_7() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___readByteCount_7)); }
	inline int32_t get_readByteCount_7() const { return ___readByteCount_7; }
	inline int32_t* get_address_of_readByteCount_7() { return &___readByteCount_7; }
	inline void set_readByteCount_7(int32_t value)
	{
		___readByteCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T635925672_H
#ifndef CONSOLESCREENBUFFERINFO_T3095351730_H
#define CONSOLESCREENBUFFERINFO_T3095351730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t3095351730 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t397375283  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t397375283  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2930836963  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t397375283  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Size_0)); }
	inline Coord_t397375283  get_Size_0() const { return ___Size_0; }
	inline Coord_t397375283 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t397375283  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___CursorPosition_1)); }
	inline Coord_t397375283  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t397375283 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t397375283  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Window_3)); }
	inline SmallRect_t2930836963  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t2930836963 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t2930836963  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___MaxWindowSize_4)); }
	inline Coord_t397375283  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t397375283 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t397375283  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESCREENBUFFERINFO_T3095351730_H
#ifndef WINDOWSCONSOLEDRIVER_T3991887195_H
#define WINDOWSCONSOLEDRIVER_T3991887195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsConsoleDriver
struct  WindowsConsoleDriver_t3991887195  : public RuntimeObject
{
public:
	// System.IntPtr System.WindowsConsoleDriver::inputHandle
	intptr_t ___inputHandle_0;
	// System.IntPtr System.WindowsConsoleDriver::outputHandle
	intptr_t ___outputHandle_1;
	// System.Int16 System.WindowsConsoleDriver::defaultAttribute
	int16_t ___defaultAttribute_2;

public:
	inline static int32_t get_offset_of_inputHandle_0() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___inputHandle_0)); }
	inline intptr_t get_inputHandle_0() const { return ___inputHandle_0; }
	inline intptr_t* get_address_of_inputHandle_0() { return &___inputHandle_0; }
	inline void set_inputHandle_0(intptr_t value)
	{
		___inputHandle_0 = value;
	}

	inline static int32_t get_offset_of_outputHandle_1() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___outputHandle_1)); }
	inline intptr_t get_outputHandle_1() const { return ___outputHandle_1; }
	inline intptr_t* get_address_of_outputHandle_1() { return &___outputHandle_1; }
	inline void set_outputHandle_1(intptr_t value)
	{
		___outputHandle_1 = value;
	}

	inline static int32_t get_offset_of_defaultAttribute_2() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___defaultAttribute_2)); }
	inline int16_t get_defaultAttribute_2() const { return ___defaultAttribute_2; }
	inline int16_t* get_address_of_defaultAttribute_2() { return &___defaultAttribute_2; }
	inline void set_defaultAttribute_2(int16_t value)
	{
		___defaultAttribute_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSCONSOLEDRIVER_T3991887195_H
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___2)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___2)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifndef __COMOBJECT_T2735933417_H
#define __COMOBJECT_T2735933417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__ComObject
struct  __ComObject_t2735933417  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.__ComObject::iunknown
	intptr_t ___iunknown_1;
	// System.IntPtr System.__ComObject::hash_table
	intptr_t ___hash_table_2;
	// System.Threading.SynchronizationContext System.__ComObject::synchronization_context
	SynchronizationContext_t2326897723 * ___synchronization_context_3;
	// Mono.Interop.ComInteropProxy System.__ComObject::proxy
	ComInteropProxy_t1891481270 * ___proxy_4;

public:
	inline static int32_t get_offset_of_iunknown_1() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___iunknown_1)); }
	inline intptr_t get_iunknown_1() const { return ___iunknown_1; }
	inline intptr_t* get_address_of_iunknown_1() { return &___iunknown_1; }
	inline void set_iunknown_1(intptr_t value)
	{
		___iunknown_1 = value;
	}

	inline static int32_t get_offset_of_hash_table_2() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___hash_table_2)); }
	inline intptr_t get_hash_table_2() const { return ___hash_table_2; }
	inline intptr_t* get_address_of_hash_table_2() { return &___hash_table_2; }
	inline void set_hash_table_2(intptr_t value)
	{
		___hash_table_2 = value;
	}

	inline static int32_t get_offset_of_synchronization_context_3() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___synchronization_context_3)); }
	inline SynchronizationContext_t2326897723 * get_synchronization_context_3() const { return ___synchronization_context_3; }
	inline SynchronizationContext_t2326897723 ** get_address_of_synchronization_context_3() { return &___synchronization_context_3; }
	inline void set_synchronization_context_3(SynchronizationContext_t2326897723 * value)
	{
		___synchronization_context_3 = value;
		Il2CppCodeGenWriteBarrier((&___synchronization_context_3), value);
	}

	inline static int32_t get_offset_of_proxy_4() { return static_cast<int32_t>(offsetof(__ComObject_t2735933417, ___proxy_4)); }
	inline ComInteropProxy_t1891481270 * get_proxy_4() const { return ___proxy_4; }
	inline ComInteropProxy_t1891481270 ** get_address_of_proxy_4() { return &___proxy_4; }
	inline void set_proxy_4(ComInteropProxy_t1891481270 * value)
	{
		___proxy_4 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__ComObject
struct __ComObject_t2735933417_marshaled_pinvoke : public MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	intptr_t ___iunknown_1;
	intptr_t ___hash_table_2;
	SynchronizationContext_t2326897723 * ___synchronization_context_3;
	ComInteropProxy_t1891481270_marshaled_pinvoke* ___proxy_4;
};
// Native definition for COM marshalling of System.__ComObject
struct __ComObject_t2735933417_marshaled_com : public MarshalByRefObject_t2760389100_marshaled_com
{
	intptr_t ___iunknown_1;
	intptr_t ___hash_table_2;
	SynchronizationContext_t2326897723 * ___synchronization_context_3;
	ComInteropProxy_t1891481270_marshaled_com* ___proxy_4;
};
#endif // __COMOBJECT_T2735933417_H
#ifndef LATIN1ENCODING_T950549005_H
#define LATIN1ENCODING_T950549005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t950549005  : public EncodingNLS_t2860325670
{
public:

public:
};

struct Latin1Encoding_t950549005_StaticFields
{
public:
	// System.Char[] System.Text.Latin1Encoding::arrayCharBestFit
	CharU5BU5D_t3528271667* ___arrayCharBestFit_16;

public:
	inline static int32_t get_offset_of_arrayCharBestFit_16() { return static_cast<int32_t>(offsetof(Latin1Encoding_t950549005_StaticFields, ___arrayCharBestFit_16)); }
	inline CharU5BU5D_t3528271667* get_arrayCharBestFit_16() const { return ___arrayCharBestFit_16; }
	inline CharU5BU5D_t3528271667** get_address_of_arrayCharBestFit_16() { return &___arrayCharBestFit_16; }
	inline void set_arrayCharBestFit_16(CharU5BU5D_t3528271667* value)
	{
		___arrayCharBestFit_16 = value;
		Il2CppCodeGenWriteBarrier((&___arrayCharBestFit_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T950549005_H
#ifndef DECODER_T2991084040_H
#define DECODER_T2991084040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/Decoder
struct  Decoder_t2991084040  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UTF7Encoding/Decoder::bits
	int32_t ___bits_6;
	// System.Int32 System.Text.UTF7Encoding/Decoder::bitCount
	int32_t ___bitCount_7;
	// System.Boolean System.Text.UTF7Encoding/Decoder::firstByte
	bool ___firstByte_8;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(Decoder_t2991084040, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}

	inline static int32_t get_offset_of_bitCount_7() { return static_cast<int32_t>(offsetof(Decoder_t2991084040, ___bitCount_7)); }
	inline int32_t get_bitCount_7() const { return ___bitCount_7; }
	inline int32_t* get_address_of_bitCount_7() { return &___bitCount_7; }
	inline void set_bitCount_7(int32_t value)
	{
		___bitCount_7 = value;
	}

	inline static int32_t get_offset_of_firstByte_8() { return static_cast<int32_t>(offsetof(Decoder_t2991084040, ___firstByte_8)); }
	inline bool get_firstByte_8() const { return ___firstByte_8; }
	inline bool* get_address_of_firstByte_8() { return &___firstByte_8; }
	inline void set_firstByte_8(bool value)
	{
		___firstByte_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2991084040_H
#ifndef UTF8ENCODER_T3216382797_H
#define UTF8ENCODER_T3216382797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Encoder
struct  UTF8Encoder_t3216382797  : public EncoderNLS_t449404832
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::surrogateChar
	int32_t ___surrogateChar_7;

public:
	inline static int32_t get_offset_of_surrogateChar_7() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3216382797, ___surrogateChar_7)); }
	inline int32_t get_surrogateChar_7() const { return ___surrogateChar_7; }
	inline int32_t* get_address_of_surrogateChar_7() { return &___surrogateChar_7; }
	inline void set_surrogateChar_7(int32_t value)
	{
		___surrogateChar_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODER_T3216382797_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef NORMALIZATIONCHECK_T1142668067_H
#define NORMALIZATIONCHECK_T1142668067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.NormalizationCheck
struct  NormalizationCheck_t1142668067 
{
public:
	// System.Int32 System.Text.NormalizationCheck::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalizationCheck_t1142668067, ___value___2)); }
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
#endif // NORMALIZATIONCHECK_T1142668067_H
#ifndef UTF8DECODER_T2159214862_H
#define UTF8DECODER_T2159214862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t2159214862  : public DecoderNLS_t637950881
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T2159214862_H
#ifndef ENCODER_T3981253163_H
#define ENCODER_T3981253163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/Encoder
struct  Encoder_t3981253163  : public EncoderNLS_t449404832
{
public:
	// System.Int32 System.Text.UTF7Encoding/Encoder::bits
	int32_t ___bits_7;
	// System.Int32 System.Text.UTF7Encoding/Encoder::bitCount
	int32_t ___bitCount_8;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(Encoder_t3981253163, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}

	inline static int32_t get_offset_of_bitCount_8() { return static_cast<int32_t>(offsetof(Encoder_t3981253163, ___bitCount_8)); }
	inline int32_t get_bitCount_8() const { return ___bitCount_8; }
	inline int32_t* get_address_of_bitCount_8() { return &___bitCount_8; }
	inline void set_bitCount_8(int32_t value)
	{
		___bitCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T3981253163_H
#ifndef VARIANT_T2753289927_H
#define VARIANT_T2753289927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Variant
struct  Variant_t2753289927 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Variant::vt
			int16_t ___vt_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___vt_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved1_1_OffsetPadding[2];
			// System.UInt16 System.Variant::wReserved1
			uint16_t ___wReserved1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved1_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___wReserved1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved2_2_OffsetPadding[4];
			// System.UInt16 System.Variant::wReserved2
			uint16_t ___wReserved2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved2_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___wReserved2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved3_3_OffsetPadding[6];
			// System.UInt16 System.Variant::wReserved3
			uint16_t ___wReserved3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved3_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___wReserved3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___llVal_4_OffsetPadding[8];
			// System.Int64 System.Variant::llVal
			int64_t ___llVal_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___llVal_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ___llVal_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lVal_5_OffsetPadding[8];
			// System.Int32 System.Variant::lVal
			int32_t ___lVal_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lVal_5_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lVal_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bVal_6_OffsetPadding[8];
			// System.Byte System.Variant::bVal
			uint8_t ___bVal_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bVal_6_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___bVal_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___iVal_7_OffsetPadding[8];
			// System.Int16 System.Variant::iVal
			int16_t ___iVal_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___iVal_7_OffsetPadding_forAlignmentOnly[8];
			int16_t ___iVal_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___fltVal_8_OffsetPadding[8];
			// System.Single System.Variant::fltVal
			float ___fltVal_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___fltVal_8_OffsetPadding_forAlignmentOnly[8];
			float ___fltVal_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___dblVal_9_OffsetPadding[8];
			// System.Double System.Variant::dblVal
			double ___dblVal_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___dblVal_9_OffsetPadding_forAlignmentOnly[8];
			double ___dblVal_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolVal_10_OffsetPadding[8];
			// System.Int16 System.Variant::boolVal
			int16_t ___boolVal_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolVal_10_OffsetPadding_forAlignmentOnly[8];
			int16_t ___boolVal_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bstrVal_11_OffsetPadding[8];
			// System.IntPtr System.Variant::bstrVal
			intptr_t ___bstrVal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bstrVal_11_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___bstrVal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___cVal_12_OffsetPadding[8];
			// System.SByte System.Variant::cVal
			int8_t ___cVal_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___cVal_12_OffsetPadding_forAlignmentOnly[8];
			int8_t ___cVal_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uiVal_13_OffsetPadding[8];
			// System.UInt16 System.Variant::uiVal
			uint16_t ___uiVal_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uiVal_13_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uiVal_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulVal_14_OffsetPadding[8];
			// System.UInt32 System.Variant::ulVal
			uint32_t ___ulVal_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulVal_14_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulVal_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ullVal_15_OffsetPadding[8];
			// System.UInt64 System.Variant::ullVal
			uint64_t ___ullVal_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ullVal_15_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ullVal_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intVal_16_OffsetPadding[8];
			// System.Int32 System.Variant::intVal
			int32_t ___intVal_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intVal_16_OffsetPadding_forAlignmentOnly[8];
			int32_t ___intVal_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintVal_17_OffsetPadding[8];
			// System.UInt32 System.Variant::uintVal
			uint32_t ___uintVal_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintVal_17_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uintVal_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pdispVal_18_OffsetPadding[8];
			// System.IntPtr System.Variant::pdispVal
			intptr_t ___pdispVal_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___pdispVal_18_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___pdispVal_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bRecord_19_OffsetPadding[8];
			// System.BRECORD System.Variant::bRecord
			BRECORD_t3470580684  ___bRecord_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bRecord_19_OffsetPadding_forAlignmentOnly[8];
			BRECORD_t3470580684  ___bRecord_19_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_vt_0() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___vt_0)); }
	inline int16_t get_vt_0() const { return ___vt_0; }
	inline int16_t* get_address_of_vt_0() { return &___vt_0; }
	inline void set_vt_0(int16_t value)
	{
		___vt_0 = value;
	}

	inline static int32_t get_offset_of_wReserved1_1() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved1_1)); }
	inline uint16_t get_wReserved1_1() const { return ___wReserved1_1; }
	inline uint16_t* get_address_of_wReserved1_1() { return &___wReserved1_1; }
	inline void set_wReserved1_1(uint16_t value)
	{
		___wReserved1_1 = value;
	}

	inline static int32_t get_offset_of_wReserved2_2() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved2_2)); }
	inline uint16_t get_wReserved2_2() const { return ___wReserved2_2; }
	inline uint16_t* get_address_of_wReserved2_2() { return &___wReserved2_2; }
	inline void set_wReserved2_2(uint16_t value)
	{
		___wReserved2_2 = value;
	}

	inline static int32_t get_offset_of_wReserved3_3() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___wReserved3_3)); }
	inline uint16_t get_wReserved3_3() const { return ___wReserved3_3; }
	inline uint16_t* get_address_of_wReserved3_3() { return &___wReserved3_3; }
	inline void set_wReserved3_3(uint16_t value)
	{
		___wReserved3_3 = value;
	}

	inline static int32_t get_offset_of_llVal_4() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___llVal_4)); }
	inline int64_t get_llVal_4() const { return ___llVal_4; }
	inline int64_t* get_address_of_llVal_4() { return &___llVal_4; }
	inline void set_llVal_4(int64_t value)
	{
		___llVal_4 = value;
	}

	inline static int32_t get_offset_of_lVal_5() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___lVal_5)); }
	inline int32_t get_lVal_5() const { return ___lVal_5; }
	inline int32_t* get_address_of_lVal_5() { return &___lVal_5; }
	inline void set_lVal_5(int32_t value)
	{
		___lVal_5 = value;
	}

	inline static int32_t get_offset_of_bVal_6() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bVal_6)); }
	inline uint8_t get_bVal_6() const { return ___bVal_6; }
	inline uint8_t* get_address_of_bVal_6() { return &___bVal_6; }
	inline void set_bVal_6(uint8_t value)
	{
		___bVal_6 = value;
	}

	inline static int32_t get_offset_of_iVal_7() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___iVal_7)); }
	inline int16_t get_iVal_7() const { return ___iVal_7; }
	inline int16_t* get_address_of_iVal_7() { return &___iVal_7; }
	inline void set_iVal_7(int16_t value)
	{
		___iVal_7 = value;
	}

	inline static int32_t get_offset_of_fltVal_8() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___fltVal_8)); }
	inline float get_fltVal_8() const { return ___fltVal_8; }
	inline float* get_address_of_fltVal_8() { return &___fltVal_8; }
	inline void set_fltVal_8(float value)
	{
		___fltVal_8 = value;
	}

	inline static int32_t get_offset_of_dblVal_9() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___dblVal_9)); }
	inline double get_dblVal_9() const { return ___dblVal_9; }
	inline double* get_address_of_dblVal_9() { return &___dblVal_9; }
	inline void set_dblVal_9(double value)
	{
		___dblVal_9 = value;
	}

	inline static int32_t get_offset_of_boolVal_10() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___boolVal_10)); }
	inline int16_t get_boolVal_10() const { return ___boolVal_10; }
	inline int16_t* get_address_of_boolVal_10() { return &___boolVal_10; }
	inline void set_boolVal_10(int16_t value)
	{
		___boolVal_10 = value;
	}

	inline static int32_t get_offset_of_bstrVal_11() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bstrVal_11)); }
	inline intptr_t get_bstrVal_11() const { return ___bstrVal_11; }
	inline intptr_t* get_address_of_bstrVal_11() { return &___bstrVal_11; }
	inline void set_bstrVal_11(intptr_t value)
	{
		___bstrVal_11 = value;
	}

	inline static int32_t get_offset_of_cVal_12() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___cVal_12)); }
	inline int8_t get_cVal_12() const { return ___cVal_12; }
	inline int8_t* get_address_of_cVal_12() { return &___cVal_12; }
	inline void set_cVal_12(int8_t value)
	{
		___cVal_12 = value;
	}

	inline static int32_t get_offset_of_uiVal_13() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uiVal_13)); }
	inline uint16_t get_uiVal_13() const { return ___uiVal_13; }
	inline uint16_t* get_address_of_uiVal_13() { return &___uiVal_13; }
	inline void set_uiVal_13(uint16_t value)
	{
		___uiVal_13 = value;
	}

	inline static int32_t get_offset_of_ulVal_14() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ulVal_14)); }
	inline uint32_t get_ulVal_14() const { return ___ulVal_14; }
	inline uint32_t* get_address_of_ulVal_14() { return &___ulVal_14; }
	inline void set_ulVal_14(uint32_t value)
	{
		___ulVal_14 = value;
	}

	inline static int32_t get_offset_of_ullVal_15() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___ullVal_15)); }
	inline uint64_t get_ullVal_15() const { return ___ullVal_15; }
	inline uint64_t* get_address_of_ullVal_15() { return &___ullVal_15; }
	inline void set_ullVal_15(uint64_t value)
	{
		___ullVal_15 = value;
	}

	inline static int32_t get_offset_of_intVal_16() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___intVal_16)); }
	inline int32_t get_intVal_16() const { return ___intVal_16; }
	inline int32_t* get_address_of_intVal_16() { return &___intVal_16; }
	inline void set_intVal_16(int32_t value)
	{
		___intVal_16 = value;
	}

	inline static int32_t get_offset_of_uintVal_17() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___uintVal_17)); }
	inline uint32_t get_uintVal_17() const { return ___uintVal_17; }
	inline uint32_t* get_address_of_uintVal_17() { return &___uintVal_17; }
	inline void set_uintVal_17(uint32_t value)
	{
		___uintVal_17 = value;
	}

	inline static int32_t get_offset_of_pdispVal_18() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___pdispVal_18)); }
	inline intptr_t get_pdispVal_18() const { return ___pdispVal_18; }
	inline intptr_t* get_address_of_pdispVal_18() { return &___pdispVal_18; }
	inline void set_pdispVal_18(intptr_t value)
	{
		___pdispVal_18 = value;
	}

	inline static int32_t get_offset_of_bRecord_19() { return static_cast<int32_t>(offsetof(Variant_t2753289927, ___bRecord_19)); }
	inline BRECORD_t3470580684  get_bRecord_19() const { return ___bRecord_19; }
	inline BRECORD_t3470580684 * get_address_of_bRecord_19() { return &___bRecord_19; }
	inline void set_bRecord_19(BRECORD_t3470580684  value)
	{
		___bRecord_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIANT_T2753289927_H
#ifndef ENCODERFALLBACKEXCEPTION_T2773771926_H
#define ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t2773771926  : public ArgumentException_t132251570
{
public:
	// System.Char System.Text.EncoderFallbackException::charUnknown
	Il2CppChar ___charUnknown_18;
	// System.Char System.Text.EncoderFallbackException::charUnknownHigh
	Il2CppChar ___charUnknownHigh_19;
	// System.Char System.Text.EncoderFallbackException::charUnknownLow
	Il2CppChar ___charUnknownLow_20;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_21;

public:
	inline static int32_t get_offset_of_charUnknown_18() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___charUnknown_18)); }
	inline Il2CppChar get_charUnknown_18() const { return ___charUnknown_18; }
	inline Il2CppChar* get_address_of_charUnknown_18() { return &___charUnknown_18; }
	inline void set_charUnknown_18(Il2CppChar value)
	{
		___charUnknown_18 = value;
	}

	inline static int32_t get_offset_of_charUnknownHigh_19() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___charUnknownHigh_19)); }
	inline Il2CppChar get_charUnknownHigh_19() const { return ___charUnknownHigh_19; }
	inline Il2CppChar* get_address_of_charUnknownHigh_19() { return &___charUnknownHigh_19; }
	inline void set_charUnknownHigh_19(Il2CppChar value)
	{
		___charUnknownHigh_19 = value;
	}

	inline static int32_t get_offset_of_charUnknownLow_20() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___charUnknownLow_20)); }
	inline Il2CppChar get_charUnknownLow_20() const { return ___charUnknownLow_20; }
	inline Il2CppChar* get_address_of_charUnknownLow_20() { return &___charUnknownLow_20; }
	inline void set_charUnknownLow_20(Il2CppChar value)
	{
		___charUnknownLow_20 = value;
	}

	inline static int32_t get_offset_of_index_21() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___index_21)); }
	inline int32_t get_index_21() const { return ___index_21; }
	inline int32_t* get_address_of_index_21() { return &___index_21; }
	inline void set_index_21(int32_t value)
	{
		___index_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifndef DECODERFALLBACKEXCEPTION_T1661362184_H
#define DECODERFALLBACKEXCEPTION_T1661362184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t1661362184  : public ArgumentException_t132251570
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytesUnknown
	ByteU5BU5D_t4116647657* ___bytesUnknown_18;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_19;

public:
	inline static int32_t get_offset_of_bytesUnknown_18() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___bytesUnknown_18)); }
	inline ByteU5BU5D_t4116647657* get_bytesUnknown_18() const { return ___bytesUnknown_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytesUnknown_18() { return &___bytesUnknown_18; }
	inline void set_bytesUnknown_18(ByteU5BU5D_t4116647657* value)
	{
		___bytesUnknown_18 = value;
		Il2CppCodeGenWriteBarrier((&___bytesUnknown_18), value);
	}

	inline static int32_t get_offset_of_index_19() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___index_19)); }
	inline int32_t get_index_19() const { return ___index_19; }
	inline int32_t* get_address_of_index_19() { return &___index_19; }
	inline void set_index_19(int32_t value)
	{
		___index_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T1661362184_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t2027633532  : public Attribute_t861562559
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::_culture
	String_t* ____culture_0;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.NeutralResourcesLanguageAttribute::_fallbackLoc
	int32_t ____fallbackLoc_1;

public:
	inline static int32_t get_offset_of__culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t2027633532, ____culture_0)); }
	inline String_t* get__culture_0() const { return ____culture_0; }
	inline String_t** get_address_of__culture_0() { return &____culture_0; }
	inline void set__culture_0(String_t* value)
	{
		____culture_0 = value;
		Il2CppCodeGenWriteBarrier((&____culture_0), value);
	}

	inline static int32_t get_offset_of__fallbackLoc_1() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t2027633532, ____fallbackLoc_1)); }
	inline int32_t get__fallbackLoc_1() const { return ____fallbackLoc_1; }
	inline int32_t* get_address_of__fallbackLoc_1() { return &____fallbackLoc_1; }
	inline void set__fallbackLoc_1(int32_t value)
	{
		____fallbackLoc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T2027633532_H
#ifndef RESOURCEMANAGER_T4037989559_H
#define RESOURCEMANAGER_T4037989559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t4037989559  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t1853889766 * ___ResourceSets_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_t2613167486 * ____resourceSets_1;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_2;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t4157843068 * ____neutralResourcesCulture_3;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t3305173715 * ____lastUsedResourceCache_4;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_5;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_6;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_7;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_8;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t1451753063 * ___m_callingAssembly_9;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_10;

public:
	inline static int32_t get_offset_of_ResourceSets_0() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___ResourceSets_0)); }
	inline Hashtable_t1853889766 * get_ResourceSets_0() const { return ___ResourceSets_0; }
	inline Hashtable_t1853889766 ** get_address_of_ResourceSets_0() { return &___ResourceSets_0; }
	inline void set_ResourceSets_0(Hashtable_t1853889766 * value)
	{
		___ResourceSets_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceSets_0), value);
	}

	inline static int32_t get_offset_of__resourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____resourceSets_1)); }
	inline Dictionary_2_t2613167486 * get__resourceSets_1() const { return ____resourceSets_1; }
	inline Dictionary_2_t2613167486 ** get_address_of__resourceSets_1() { return &____resourceSets_1; }
	inline void set__resourceSets_1(Dictionary_2_t2613167486 * value)
	{
		____resourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((&____resourceSets_1), value);
	}

	inline static int32_t get_offset_of_MainAssembly_2() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___MainAssembly_2)); }
	inline Assembly_t * get_MainAssembly_2() const { return ___MainAssembly_2; }
	inline Assembly_t ** get_address_of_MainAssembly_2() { return &___MainAssembly_2; }
	inline void set_MainAssembly_2(Assembly_t * value)
	{
		___MainAssembly_2 = value;
		Il2CppCodeGenWriteBarrier((&___MainAssembly_2), value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_3() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____neutralResourcesCulture_3)); }
	inline CultureInfo_t4157843068 * get__neutralResourcesCulture_3() const { return ____neutralResourcesCulture_3; }
	inline CultureInfo_t4157843068 ** get_address_of__neutralResourcesCulture_3() { return &____neutralResourcesCulture_3; }
	inline void set__neutralResourcesCulture_3(CultureInfo_t4157843068 * value)
	{
		____neutralResourcesCulture_3 = value;
		Il2CppCodeGenWriteBarrier((&____neutralResourcesCulture_3), value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_4() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____lastUsedResourceCache_4)); }
	inline CultureNameResourceSetPair_t3305173715 * get__lastUsedResourceCache_4() const { return ____lastUsedResourceCache_4; }
	inline CultureNameResourceSetPair_t3305173715 ** get_address_of__lastUsedResourceCache_4() { return &____lastUsedResourceCache_4; }
	inline void set__lastUsedResourceCache_4(CultureNameResourceSetPair_t3305173715 * value)
	{
		____lastUsedResourceCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____lastUsedResourceCache_4), value);
	}

	inline static int32_t get_offset_of_UseManifest_5() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___UseManifest_5)); }
	inline bool get_UseManifest_5() const { return ___UseManifest_5; }
	inline bool* get_address_of_UseManifest_5() { return &___UseManifest_5; }
	inline void set_UseManifest_5(bool value)
	{
		___UseManifest_5 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_6() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___UseSatelliteAssem_6)); }
	inline bool get_UseSatelliteAssem_6() const { return ___UseSatelliteAssem_6; }
	inline bool* get_address_of_UseSatelliteAssem_6() { return &___UseSatelliteAssem_6; }
	inline void set_UseSatelliteAssem_6(bool value)
	{
		___UseSatelliteAssem_6 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_7() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____fallbackLoc_7)); }
	inline int32_t get__fallbackLoc_7() const { return ____fallbackLoc_7; }
	inline int32_t* get_address_of__fallbackLoc_7() { return &____fallbackLoc_7; }
	inline void set__fallbackLoc_7(int32_t value)
	{
		____fallbackLoc_7 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_8() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ____callingAssembly_8)); }
	inline Assembly_t * get__callingAssembly_8() const { return ____callingAssembly_8; }
	inline Assembly_t ** get_address_of__callingAssembly_8() { return &____callingAssembly_8; }
	inline void set__callingAssembly_8(Assembly_t * value)
	{
		____callingAssembly_8 = value;
		Il2CppCodeGenWriteBarrier((&____callingAssembly_8), value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_9() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___m_callingAssembly_9)); }
	inline RuntimeAssembly_t1451753063 * get_m_callingAssembly_9() const { return ___m_callingAssembly_9; }
	inline RuntimeAssembly_t1451753063 ** get_address_of_m_callingAssembly_9() { return &___m_callingAssembly_9; }
	inline void set_m_callingAssembly_9(RuntimeAssembly_t1451753063 * value)
	{
		___m_callingAssembly_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_callingAssembly_9), value);
	}

	inline static int32_t get_offset_of_resourceGroveler_10() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559, ___resourceGroveler_10)); }
	inline RuntimeObject* get_resourceGroveler_10() const { return ___resourceGroveler_10; }
	inline RuntimeObject** get_address_of_resourceGroveler_10() { return &___resourceGroveler_10; }
	inline void set_resourceGroveler_10(RuntimeObject* value)
	{
		___resourceGroveler_10 = value;
		Il2CppCodeGenWriteBarrier((&___resourceGroveler_10), value);
	}
};

struct ResourceManager_t4037989559_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_11;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_12;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_13;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_14;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_15;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_16;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_17;

public:
	inline static int32_t get_offset_of_MagicNumber_11() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MagicNumber_11)); }
	inline int32_t get_MagicNumber_11() const { return ___MagicNumber_11; }
	inline int32_t* get_address_of_MagicNumber_11() { return &___MagicNumber_11; }
	inline void set_MagicNumber_11(int32_t value)
	{
		___MagicNumber_11 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_12() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___HeaderVersionNumber_12)); }
	inline int32_t get_HeaderVersionNumber_12() const { return ___HeaderVersionNumber_12; }
	inline int32_t* get_address_of_HeaderVersionNumber_12() { return &___HeaderVersionNumber_12; }
	inline void set_HeaderVersionNumber_12(int32_t value)
	{
		___HeaderVersionNumber_12 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_13() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ____minResourceSet_13)); }
	inline Type_t * get__minResourceSet_13() const { return ____minResourceSet_13; }
	inline Type_t ** get_address_of__minResourceSet_13() { return &____minResourceSet_13; }
	inline void set__minResourceSet_13(Type_t * value)
	{
		____minResourceSet_13 = value;
		Il2CppCodeGenWriteBarrier((&____minResourceSet_13), value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_14() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResReaderTypeName_14)); }
	inline String_t* get_ResReaderTypeName_14() const { return ___ResReaderTypeName_14; }
	inline String_t** get_address_of_ResReaderTypeName_14() { return &___ResReaderTypeName_14; }
	inline void set_ResReaderTypeName_14(String_t* value)
	{
		___ResReaderTypeName_14 = value;
		Il2CppCodeGenWriteBarrier((&___ResReaderTypeName_14), value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_15() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___ResSetTypeName_15)); }
	inline String_t* get_ResSetTypeName_15() const { return ___ResSetTypeName_15; }
	inline String_t** get_address_of_ResSetTypeName_15() { return &___ResSetTypeName_15; }
	inline void set_ResSetTypeName_15(String_t* value)
	{
		___ResSetTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&___ResSetTypeName_15), value);
	}

	inline static int32_t get_offset_of_MscorlibName_16() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___MscorlibName_16)); }
	inline String_t* get_MscorlibName_16() const { return ___MscorlibName_16; }
	inline String_t** get_address_of_MscorlibName_16() { return &___MscorlibName_16; }
	inline void set_MscorlibName_16(String_t* value)
	{
		___MscorlibName_16 = value;
		Il2CppCodeGenWriteBarrier((&___MscorlibName_16), value);
	}

	inline static int32_t get_offset_of_DEBUG_17() { return static_cast<int32_t>(offsetof(ResourceManager_t4037989559_StaticFields, ___DEBUG_17)); }
	inline int32_t get_DEBUG_17() const { return ___DEBUG_17; }
	inline int32_t* get_address_of_DEBUG_17() { return &___DEBUG_17; }
	inline void set_DEBUG_17(int32_t value)
	{
		___DEBUG_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T4037989559_H
#ifndef TERMINFODRIVER_T2335718621_H
#define TERMINFODRIVER_T2335718621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoDriver
struct  TermInfoDriver_t2335718621  : public RuntimeObject
{
public:
	// System.TermInfoReader System.TermInfoDriver::reader
	TermInfoReader_t3116894478 * ___reader_3;
	// System.Int32 System.TermInfoDriver::cursorLeft
	int32_t ___cursorLeft_4;
	// System.Int32 System.TermInfoDriver::cursorTop
	int32_t ___cursorTop_5;
	// System.String System.TermInfoDriver::title
	String_t* ___title_6;
	// System.String System.TermInfoDriver::titleFormat
	String_t* ___titleFormat_7;
	// System.Boolean System.TermInfoDriver::cursorVisible
	bool ___cursorVisible_8;
	// System.String System.TermInfoDriver::csrVisible
	String_t* ___csrVisible_9;
	// System.String System.TermInfoDriver::csrInvisible
	String_t* ___csrInvisible_10;
	// System.String System.TermInfoDriver::clear
	String_t* ___clear_11;
	// System.String System.TermInfoDriver::bell
	String_t* ___bell_12;
	// System.String System.TermInfoDriver::term
	String_t* ___term_13;
	// System.IO.StreamReader System.TermInfoDriver::stdin
	StreamReader_t4009935899 * ___stdin_14;
	// System.IO.CStreamWriter System.TermInfoDriver::stdout
	CStreamWriter_t3783449173 * ___stdout_15;
	// System.Int32 System.TermInfoDriver::windowWidth
	int32_t ___windowWidth_16;
	// System.Int32 System.TermInfoDriver::windowHeight
	int32_t ___windowHeight_17;
	// System.Int32 System.TermInfoDriver::bufferHeight
	int32_t ___bufferHeight_18;
	// System.Int32 System.TermInfoDriver::bufferWidth
	int32_t ___bufferWidth_19;
	// System.Char[] System.TermInfoDriver::buffer
	CharU5BU5D_t3528271667* ___buffer_20;
	// System.Int32 System.TermInfoDriver::readpos
	int32_t ___readpos_21;
	// System.Int32 System.TermInfoDriver::writepos
	int32_t ___writepos_22;
	// System.String System.TermInfoDriver::keypadXmit
	String_t* ___keypadXmit_23;
	// System.String System.TermInfoDriver::keypadLocal
	String_t* ___keypadLocal_24;
	// System.Boolean System.TermInfoDriver::inited
	bool ___inited_25;
	// System.Object System.TermInfoDriver::initLock
	RuntimeObject * ___initLock_26;
	// System.Boolean System.TermInfoDriver::initKeys
	bool ___initKeys_27;
	// System.String System.TermInfoDriver::origPair
	String_t* ___origPair_28;
	// System.String System.TermInfoDriver::origColors
	String_t* ___origColors_29;
	// System.String System.TermInfoDriver::cursorAddress
	String_t* ___cursorAddress_30;
	// System.ConsoleColor System.TermInfoDriver::fgcolor
	int32_t ___fgcolor_31;
	// System.String System.TermInfoDriver::setfgcolor
	String_t* ___setfgcolor_32;
	// System.String System.TermInfoDriver::setbgcolor
	String_t* ___setbgcolor_33;
	// System.Int32 System.TermInfoDriver::maxColors
	int32_t ___maxColors_34;
	// System.Boolean System.TermInfoDriver::noGetPosition
	bool ___noGetPosition_35;
	// System.Collections.Hashtable System.TermInfoDriver::keymap
	Hashtable_t1853889766 * ___keymap_36;
	// System.ByteMatcher System.TermInfoDriver::rootmap
	ByteMatcher_t2129355737 * ___rootmap_37;
	// System.Int32 System.TermInfoDriver::rl_startx
	int32_t ___rl_startx_38;
	// System.Int32 System.TermInfoDriver::rl_starty
	int32_t ___rl_starty_39;
	// System.Byte[] System.TermInfoDriver::control_characters
	ByteU5BU5D_t4116647657* ___control_characters_40;
	// System.Char[] System.TermInfoDriver::echobuf
	CharU5BU5D_t3528271667* ___echobuf_42;
	// System.Int32 System.TermInfoDriver::echon
	int32_t ___echon_43;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___reader_3)); }
	inline TermInfoReader_t3116894478 * get_reader_3() const { return ___reader_3; }
	inline TermInfoReader_t3116894478 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(TermInfoReader_t3116894478 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier((&___reader_3), value);
	}

	inline static int32_t get_offset_of_cursorLeft_4() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorLeft_4)); }
	inline int32_t get_cursorLeft_4() const { return ___cursorLeft_4; }
	inline int32_t* get_address_of_cursorLeft_4() { return &___cursorLeft_4; }
	inline void set_cursorLeft_4(int32_t value)
	{
		___cursorLeft_4 = value;
	}

	inline static int32_t get_offset_of_cursorTop_5() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorTop_5)); }
	inline int32_t get_cursorTop_5() const { return ___cursorTop_5; }
	inline int32_t* get_address_of_cursorTop_5() { return &___cursorTop_5; }
	inline void set_cursorTop_5(int32_t value)
	{
		___cursorTop_5 = value;
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___title_6)); }
	inline String_t* get_title_6() const { return ___title_6; }
	inline String_t** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(String_t* value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier((&___title_6), value);
	}

	inline static int32_t get_offset_of_titleFormat_7() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___titleFormat_7)); }
	inline String_t* get_titleFormat_7() const { return ___titleFormat_7; }
	inline String_t** get_address_of_titleFormat_7() { return &___titleFormat_7; }
	inline void set_titleFormat_7(String_t* value)
	{
		___titleFormat_7 = value;
		Il2CppCodeGenWriteBarrier((&___titleFormat_7), value);
	}

	inline static int32_t get_offset_of_cursorVisible_8() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorVisible_8)); }
	inline bool get_cursorVisible_8() const { return ___cursorVisible_8; }
	inline bool* get_address_of_cursorVisible_8() { return &___cursorVisible_8; }
	inline void set_cursorVisible_8(bool value)
	{
		___cursorVisible_8 = value;
	}

	inline static int32_t get_offset_of_csrVisible_9() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___csrVisible_9)); }
	inline String_t* get_csrVisible_9() const { return ___csrVisible_9; }
	inline String_t** get_address_of_csrVisible_9() { return &___csrVisible_9; }
	inline void set_csrVisible_9(String_t* value)
	{
		___csrVisible_9 = value;
		Il2CppCodeGenWriteBarrier((&___csrVisible_9), value);
	}

	inline static int32_t get_offset_of_csrInvisible_10() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___csrInvisible_10)); }
	inline String_t* get_csrInvisible_10() const { return ___csrInvisible_10; }
	inline String_t** get_address_of_csrInvisible_10() { return &___csrInvisible_10; }
	inline void set_csrInvisible_10(String_t* value)
	{
		___csrInvisible_10 = value;
		Il2CppCodeGenWriteBarrier((&___csrInvisible_10), value);
	}

	inline static int32_t get_offset_of_clear_11() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___clear_11)); }
	inline String_t* get_clear_11() const { return ___clear_11; }
	inline String_t** get_address_of_clear_11() { return &___clear_11; }
	inline void set_clear_11(String_t* value)
	{
		___clear_11 = value;
		Il2CppCodeGenWriteBarrier((&___clear_11), value);
	}

	inline static int32_t get_offset_of_bell_12() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___bell_12)); }
	inline String_t* get_bell_12() const { return ___bell_12; }
	inline String_t** get_address_of_bell_12() { return &___bell_12; }
	inline void set_bell_12(String_t* value)
	{
		___bell_12 = value;
		Il2CppCodeGenWriteBarrier((&___bell_12), value);
	}

	inline static int32_t get_offset_of_term_13() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___term_13)); }
	inline String_t* get_term_13() const { return ___term_13; }
	inline String_t** get_address_of_term_13() { return &___term_13; }
	inline void set_term_13(String_t* value)
	{
		___term_13 = value;
		Il2CppCodeGenWriteBarrier((&___term_13), value);
	}

	inline static int32_t get_offset_of_stdin_14() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___stdin_14)); }
	inline StreamReader_t4009935899 * get_stdin_14() const { return ___stdin_14; }
	inline StreamReader_t4009935899 ** get_address_of_stdin_14() { return &___stdin_14; }
	inline void set_stdin_14(StreamReader_t4009935899 * value)
	{
		___stdin_14 = value;
		Il2CppCodeGenWriteBarrier((&___stdin_14), value);
	}

	inline static int32_t get_offset_of_stdout_15() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___stdout_15)); }
	inline CStreamWriter_t3783449173 * get_stdout_15() const { return ___stdout_15; }
	inline CStreamWriter_t3783449173 ** get_address_of_stdout_15() { return &___stdout_15; }
	inline void set_stdout_15(CStreamWriter_t3783449173 * value)
	{
		___stdout_15 = value;
		Il2CppCodeGenWriteBarrier((&___stdout_15), value);
	}

	inline static int32_t get_offset_of_windowWidth_16() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___windowWidth_16)); }
	inline int32_t get_windowWidth_16() const { return ___windowWidth_16; }
	inline int32_t* get_address_of_windowWidth_16() { return &___windowWidth_16; }
	inline void set_windowWidth_16(int32_t value)
	{
		___windowWidth_16 = value;
	}

	inline static int32_t get_offset_of_windowHeight_17() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___windowHeight_17)); }
	inline int32_t get_windowHeight_17() const { return ___windowHeight_17; }
	inline int32_t* get_address_of_windowHeight_17() { return &___windowHeight_17; }
	inline void set_windowHeight_17(int32_t value)
	{
		___windowHeight_17 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_18() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___bufferHeight_18)); }
	inline int32_t get_bufferHeight_18() const { return ___bufferHeight_18; }
	inline int32_t* get_address_of_bufferHeight_18() { return &___bufferHeight_18; }
	inline void set_bufferHeight_18(int32_t value)
	{
		___bufferHeight_18 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_19() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___bufferWidth_19)); }
	inline int32_t get_bufferWidth_19() const { return ___bufferWidth_19; }
	inline int32_t* get_address_of_bufferWidth_19() { return &___bufferWidth_19; }
	inline void set_bufferWidth_19(int32_t value)
	{
		___bufferWidth_19 = value;
	}

	inline static int32_t get_offset_of_buffer_20() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___buffer_20)); }
	inline CharU5BU5D_t3528271667* get_buffer_20() const { return ___buffer_20; }
	inline CharU5BU5D_t3528271667** get_address_of_buffer_20() { return &___buffer_20; }
	inline void set_buffer_20(CharU5BU5D_t3528271667* value)
	{
		___buffer_20 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_20), value);
	}

	inline static int32_t get_offset_of_readpos_21() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___readpos_21)); }
	inline int32_t get_readpos_21() const { return ___readpos_21; }
	inline int32_t* get_address_of_readpos_21() { return &___readpos_21; }
	inline void set_readpos_21(int32_t value)
	{
		___readpos_21 = value;
	}

	inline static int32_t get_offset_of_writepos_22() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___writepos_22)); }
	inline int32_t get_writepos_22() const { return ___writepos_22; }
	inline int32_t* get_address_of_writepos_22() { return &___writepos_22; }
	inline void set_writepos_22(int32_t value)
	{
		___writepos_22 = value;
	}

	inline static int32_t get_offset_of_keypadXmit_23() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___keypadXmit_23)); }
	inline String_t* get_keypadXmit_23() const { return ___keypadXmit_23; }
	inline String_t** get_address_of_keypadXmit_23() { return &___keypadXmit_23; }
	inline void set_keypadXmit_23(String_t* value)
	{
		___keypadXmit_23 = value;
		Il2CppCodeGenWriteBarrier((&___keypadXmit_23), value);
	}

	inline static int32_t get_offset_of_keypadLocal_24() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___keypadLocal_24)); }
	inline String_t* get_keypadLocal_24() const { return ___keypadLocal_24; }
	inline String_t** get_address_of_keypadLocal_24() { return &___keypadLocal_24; }
	inline void set_keypadLocal_24(String_t* value)
	{
		___keypadLocal_24 = value;
		Il2CppCodeGenWriteBarrier((&___keypadLocal_24), value);
	}

	inline static int32_t get_offset_of_inited_25() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___inited_25)); }
	inline bool get_inited_25() const { return ___inited_25; }
	inline bool* get_address_of_inited_25() { return &___inited_25; }
	inline void set_inited_25(bool value)
	{
		___inited_25 = value;
	}

	inline static int32_t get_offset_of_initLock_26() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___initLock_26)); }
	inline RuntimeObject * get_initLock_26() const { return ___initLock_26; }
	inline RuntimeObject ** get_address_of_initLock_26() { return &___initLock_26; }
	inline void set_initLock_26(RuntimeObject * value)
	{
		___initLock_26 = value;
		Il2CppCodeGenWriteBarrier((&___initLock_26), value);
	}

	inline static int32_t get_offset_of_initKeys_27() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___initKeys_27)); }
	inline bool get_initKeys_27() const { return ___initKeys_27; }
	inline bool* get_address_of_initKeys_27() { return &___initKeys_27; }
	inline void set_initKeys_27(bool value)
	{
		___initKeys_27 = value;
	}

	inline static int32_t get_offset_of_origPair_28() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___origPair_28)); }
	inline String_t* get_origPair_28() const { return ___origPair_28; }
	inline String_t** get_address_of_origPair_28() { return &___origPair_28; }
	inline void set_origPair_28(String_t* value)
	{
		___origPair_28 = value;
		Il2CppCodeGenWriteBarrier((&___origPair_28), value);
	}

	inline static int32_t get_offset_of_origColors_29() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___origColors_29)); }
	inline String_t* get_origColors_29() const { return ___origColors_29; }
	inline String_t** get_address_of_origColors_29() { return &___origColors_29; }
	inline void set_origColors_29(String_t* value)
	{
		___origColors_29 = value;
		Il2CppCodeGenWriteBarrier((&___origColors_29), value);
	}

	inline static int32_t get_offset_of_cursorAddress_30() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorAddress_30)); }
	inline String_t* get_cursorAddress_30() const { return ___cursorAddress_30; }
	inline String_t** get_address_of_cursorAddress_30() { return &___cursorAddress_30; }
	inline void set_cursorAddress_30(String_t* value)
	{
		___cursorAddress_30 = value;
		Il2CppCodeGenWriteBarrier((&___cursorAddress_30), value);
	}

	inline static int32_t get_offset_of_fgcolor_31() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___fgcolor_31)); }
	inline int32_t get_fgcolor_31() const { return ___fgcolor_31; }
	inline int32_t* get_address_of_fgcolor_31() { return &___fgcolor_31; }
	inline void set_fgcolor_31(int32_t value)
	{
		___fgcolor_31 = value;
	}

	inline static int32_t get_offset_of_setfgcolor_32() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___setfgcolor_32)); }
	inline String_t* get_setfgcolor_32() const { return ___setfgcolor_32; }
	inline String_t** get_address_of_setfgcolor_32() { return &___setfgcolor_32; }
	inline void set_setfgcolor_32(String_t* value)
	{
		___setfgcolor_32 = value;
		Il2CppCodeGenWriteBarrier((&___setfgcolor_32), value);
	}

	inline static int32_t get_offset_of_setbgcolor_33() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___setbgcolor_33)); }
	inline String_t* get_setbgcolor_33() const { return ___setbgcolor_33; }
	inline String_t** get_address_of_setbgcolor_33() { return &___setbgcolor_33; }
	inline void set_setbgcolor_33(String_t* value)
	{
		___setbgcolor_33 = value;
		Il2CppCodeGenWriteBarrier((&___setbgcolor_33), value);
	}

	inline static int32_t get_offset_of_maxColors_34() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___maxColors_34)); }
	inline int32_t get_maxColors_34() const { return ___maxColors_34; }
	inline int32_t* get_address_of_maxColors_34() { return &___maxColors_34; }
	inline void set_maxColors_34(int32_t value)
	{
		___maxColors_34 = value;
	}

	inline static int32_t get_offset_of_noGetPosition_35() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___noGetPosition_35)); }
	inline bool get_noGetPosition_35() const { return ___noGetPosition_35; }
	inline bool* get_address_of_noGetPosition_35() { return &___noGetPosition_35; }
	inline void set_noGetPosition_35(bool value)
	{
		___noGetPosition_35 = value;
	}

	inline static int32_t get_offset_of_keymap_36() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___keymap_36)); }
	inline Hashtable_t1853889766 * get_keymap_36() const { return ___keymap_36; }
	inline Hashtable_t1853889766 ** get_address_of_keymap_36() { return &___keymap_36; }
	inline void set_keymap_36(Hashtable_t1853889766 * value)
	{
		___keymap_36 = value;
		Il2CppCodeGenWriteBarrier((&___keymap_36), value);
	}

	inline static int32_t get_offset_of_rootmap_37() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___rootmap_37)); }
	inline ByteMatcher_t2129355737 * get_rootmap_37() const { return ___rootmap_37; }
	inline ByteMatcher_t2129355737 ** get_address_of_rootmap_37() { return &___rootmap_37; }
	inline void set_rootmap_37(ByteMatcher_t2129355737 * value)
	{
		___rootmap_37 = value;
		Il2CppCodeGenWriteBarrier((&___rootmap_37), value);
	}

	inline static int32_t get_offset_of_rl_startx_38() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___rl_startx_38)); }
	inline int32_t get_rl_startx_38() const { return ___rl_startx_38; }
	inline int32_t* get_address_of_rl_startx_38() { return &___rl_startx_38; }
	inline void set_rl_startx_38(int32_t value)
	{
		___rl_startx_38 = value;
	}

	inline static int32_t get_offset_of_rl_starty_39() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___rl_starty_39)); }
	inline int32_t get_rl_starty_39() const { return ___rl_starty_39; }
	inline int32_t* get_address_of_rl_starty_39() { return &___rl_starty_39; }
	inline void set_rl_starty_39(int32_t value)
	{
		___rl_starty_39 = value;
	}

	inline static int32_t get_offset_of_control_characters_40() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___control_characters_40)); }
	inline ByteU5BU5D_t4116647657* get_control_characters_40() const { return ___control_characters_40; }
	inline ByteU5BU5D_t4116647657** get_address_of_control_characters_40() { return &___control_characters_40; }
	inline void set_control_characters_40(ByteU5BU5D_t4116647657* value)
	{
		___control_characters_40 = value;
		Il2CppCodeGenWriteBarrier((&___control_characters_40), value);
	}

	inline static int32_t get_offset_of_echobuf_42() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___echobuf_42)); }
	inline CharU5BU5D_t3528271667* get_echobuf_42() const { return ___echobuf_42; }
	inline CharU5BU5D_t3528271667** get_address_of_echobuf_42() { return &___echobuf_42; }
	inline void set_echobuf_42(CharU5BU5D_t3528271667* value)
	{
		___echobuf_42 = value;
		Il2CppCodeGenWriteBarrier((&___echobuf_42), value);
	}

	inline static int32_t get_offset_of_echon_43() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___echon_43)); }
	inline int32_t get_echon_43() const { return ___echon_43; }
	inline int32_t* get_address_of_echon_43() { return &___echon_43; }
	inline void set_echon_43(int32_t value)
	{
		___echon_43 = value;
	}
};

struct TermInfoDriver_t2335718621_StaticFields
{
public:
	// System.Int32* System.TermInfoDriver::native_terminal_size
	int32_t* ___native_terminal_size_0;
	// System.Int32 System.TermInfoDriver::terminal_size
	int32_t ___terminal_size_1;
	// System.String[] System.TermInfoDriver::locations
	StringU5BU5D_t1281789340* ___locations_2;
	// System.Int32[] System.TermInfoDriver::_consoleColorToAnsiCode
	Int32U5BU5D_t385246372* ____consoleColorToAnsiCode_41;

public:
	inline static int32_t get_offset_of_native_terminal_size_0() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ___native_terminal_size_0)); }
	inline int32_t* get_native_terminal_size_0() const { return ___native_terminal_size_0; }
	inline int32_t** get_address_of_native_terminal_size_0() { return &___native_terminal_size_0; }
	inline void set_native_terminal_size_0(int32_t* value)
	{
		___native_terminal_size_0 = value;
	}

	inline static int32_t get_offset_of_terminal_size_1() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ___terminal_size_1)); }
	inline int32_t get_terminal_size_1() const { return ___terminal_size_1; }
	inline int32_t* get_address_of_terminal_size_1() { return &___terminal_size_1; }
	inline void set_terminal_size_1(int32_t value)
	{
		___terminal_size_1 = value;
	}

	inline static int32_t get_offset_of_locations_2() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ___locations_2)); }
	inline StringU5BU5D_t1281789340* get_locations_2() const { return ___locations_2; }
	inline StringU5BU5D_t1281789340** get_address_of_locations_2() { return &___locations_2; }
	inline void set_locations_2(StringU5BU5D_t1281789340* value)
	{
		___locations_2 = value;
		Il2CppCodeGenWriteBarrier((&___locations_2), value);
	}

	inline static int32_t get_offset_of__consoleColorToAnsiCode_41() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ____consoleColorToAnsiCode_41)); }
	inline Int32U5BU5D_t385246372* get__consoleColorToAnsiCode_41() const { return ____consoleColorToAnsiCode_41; }
	inline Int32U5BU5D_t385246372** get_address_of__consoleColorToAnsiCode_41() { return &____consoleColorToAnsiCode_41; }
	inline void set__consoleColorToAnsiCode_41(Int32U5BU5D_t385246372* value)
	{
		____consoleColorToAnsiCode_41 = value;
		Il2CppCodeGenWriteBarrier((&____consoleColorToAnsiCode_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERMINFODRIVER_T2335718621_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (RuntimeTypeHandle_t3027515415)+ sizeof (RuntimeObject), sizeof(RuntimeTypeHandle_t3027515415 ), 0, 0 };
extern const int32_t g_FieldOffsetTable400[1] = 
{
	RuntimeTypeHandle_t3027515415::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (StringComparison_t3657712135)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable401[7] = 
{
	StringComparison_t3657712135::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (TermInfoDriver_t2335718621), -1, sizeof(TermInfoDriver_t2335718621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable402[44] = 
{
	TermInfoDriver_t2335718621_StaticFields::get_offset_of_native_terminal_size_0(),
	TermInfoDriver_t2335718621_StaticFields::get_offset_of_terminal_size_1(),
	TermInfoDriver_t2335718621_StaticFields::get_offset_of_locations_2(),
	TermInfoDriver_t2335718621::get_offset_of_reader_3(),
	TermInfoDriver_t2335718621::get_offset_of_cursorLeft_4(),
	TermInfoDriver_t2335718621::get_offset_of_cursorTop_5(),
	TermInfoDriver_t2335718621::get_offset_of_title_6(),
	TermInfoDriver_t2335718621::get_offset_of_titleFormat_7(),
	TermInfoDriver_t2335718621::get_offset_of_cursorVisible_8(),
	TermInfoDriver_t2335718621::get_offset_of_csrVisible_9(),
	TermInfoDriver_t2335718621::get_offset_of_csrInvisible_10(),
	TermInfoDriver_t2335718621::get_offset_of_clear_11(),
	TermInfoDriver_t2335718621::get_offset_of_bell_12(),
	TermInfoDriver_t2335718621::get_offset_of_term_13(),
	TermInfoDriver_t2335718621::get_offset_of_stdin_14(),
	TermInfoDriver_t2335718621::get_offset_of_stdout_15(),
	TermInfoDriver_t2335718621::get_offset_of_windowWidth_16(),
	TermInfoDriver_t2335718621::get_offset_of_windowHeight_17(),
	TermInfoDriver_t2335718621::get_offset_of_bufferHeight_18(),
	TermInfoDriver_t2335718621::get_offset_of_bufferWidth_19(),
	TermInfoDriver_t2335718621::get_offset_of_buffer_20(),
	TermInfoDriver_t2335718621::get_offset_of_readpos_21(),
	TermInfoDriver_t2335718621::get_offset_of_writepos_22(),
	TermInfoDriver_t2335718621::get_offset_of_keypadXmit_23(),
	TermInfoDriver_t2335718621::get_offset_of_keypadLocal_24(),
	TermInfoDriver_t2335718621::get_offset_of_inited_25(),
	TermInfoDriver_t2335718621::get_offset_of_initLock_26(),
	TermInfoDriver_t2335718621::get_offset_of_initKeys_27(),
	TermInfoDriver_t2335718621::get_offset_of_origPair_28(),
	TermInfoDriver_t2335718621::get_offset_of_origColors_29(),
	TermInfoDriver_t2335718621::get_offset_of_cursorAddress_30(),
	TermInfoDriver_t2335718621::get_offset_of_fgcolor_31(),
	TermInfoDriver_t2335718621::get_offset_of_setfgcolor_32(),
	TermInfoDriver_t2335718621::get_offset_of_setbgcolor_33(),
	TermInfoDriver_t2335718621::get_offset_of_maxColors_34(),
	TermInfoDriver_t2335718621::get_offset_of_noGetPosition_35(),
	TermInfoDriver_t2335718621::get_offset_of_keymap_36(),
	TermInfoDriver_t2335718621::get_offset_of_rootmap_37(),
	TermInfoDriver_t2335718621::get_offset_of_rl_startx_38(),
	TermInfoDriver_t2335718621::get_offset_of_rl_starty_39(),
	TermInfoDriver_t2335718621::get_offset_of_control_characters_40(),
	TermInfoDriver_t2335718621_StaticFields::get_offset_of__consoleColorToAnsiCode_41(),
	TermInfoDriver_t2335718621::get_offset_of_echobuf_42(),
	TermInfoDriver_t2335718621::get_offset_of_echon_43(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (ParameterizedStrings_t2383627466), -1, 0, sizeof(ParameterizedStrings_t2383627466_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable403[1] = 
{
	ParameterizedStrings_t2383627466_ThreadStaticFields::get_offset_of__cachedStack_0() | THREAD_LOCAL_STATIC_MASK,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (FormatParam_t4194474082)+ sizeof (RuntimeObject), sizeof(FormatParam_t4194474082_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable404[2] = 
{
	FormatParam_t4194474082::get_offset_of__int32_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatParam_t4194474082::get_offset_of__string_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (LowLevelStack_t4014997415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable405[2] = 
{
	LowLevelStack_t4014997415::get_offset_of__arr_0(),
	LowLevelStack_t4014997415::get_offset_of__count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (ByteMatcher_t2129355737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable406[2] = 
{
	ByteMatcher_t2129355737::get_offset_of_map_0(),
	ByteMatcher_t2129355737::get_offset_of_starts_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (TermInfoNumbers_t2028216776)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable407[35] = 
{
	TermInfoNumbers_t2028216776::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (TermInfoReader_t3116894478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[5] = 
{
	TermInfoReader_t3116894478::get_offset_of_boolSize_0(),
	TermInfoReader_t3116894478::get_offset_of_numSize_1(),
	TermInfoReader_t3116894478::get_offset_of_strOffsets_2(),
	TermInfoReader_t3116894478::get_offset_of_buffer_3(),
	TermInfoReader_t3116894478::get_offset_of_booleansOffset_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (TermInfoStrings_t290279955)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable409[396] = 
{
	TermInfoStrings_t290279955::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (TimeZone_t2038656743), -1, sizeof(TimeZone_t2038656743_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable410[1] = 
{
	TimeZone_t2038656743_StaticFields::get_offset_of_tz_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (CurrentSystemTimeZone_t3998352255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[1] = 
{
	CurrentSystemTimeZone_t3998352255::get_offset_of_LocalTimeZone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (TimeType_t1772318449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable412[3] = 
{
	TimeType_t1772318449::get_offset_of_Offset_0(),
	TimeType_t1772318449::get_offset_of_IsDst_1(),
	TimeType_t1772318449::get_offset_of_Name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (TypeCode_t2987224087)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable413[19] = 
{
	TypeCode_t2987224087::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (TypeNames_t2453564441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (ATypeName_t2426384130), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (TypeIdentifiers_t3002432201), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (Display_t2029414921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable419[2] = 
{
	Display_t2029414921::get_offset_of_displayName_0(),
	Display_t2029414921::get_offset_of_internal_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (NoEscape_t3415473081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable420[1] = 
{
	NoEscape_t3415473081::get_offset_of_simpleName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (ArraySpec_t3456100556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable422[2] = 
{
	ArraySpec_t3456100556::get_offset_of_dimensions_0(),
	ArraySpec_t3456100556::get_offset_of_bound_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (PointerSpec_t334147946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable423[1] = 
{
	PointerSpec_t334147946::get_offset_of_pointer_level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (TypeSpec_t1651486824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable424[7] = 
{
	TypeSpec_t1651486824::get_offset_of_name_0(),
	TypeSpec_t1651486824::get_offset_of_assembly_name_1(),
	TypeSpec_t1651486824::get_offset_of_nested_2(),
	TypeSpec_t1651486824::get_offset_of_generic_params_3(),
	TypeSpec_t1651486824::get_offset_of_modifier_spec_4(),
	TypeSpec_t1651486824::get_offset_of_is_byref_5(),
	TypeSpec_t1651486824::get_offset_of_display_fullname_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (DisplayNameFormat_t2724649181)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable425[4] = 
{
	DisplayNameFormat_t2724649181::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (UIntPtr_t)+ sizeof (RuntimeObject), sizeof(uintptr_t), sizeof(UIntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable426[2] = 
{
	UIntPtr_t_StaticFields::get_offset_of_Zero_0(),
	UIntPtr_t::get_offset_of__pointer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (ValueType_t3640485471), sizeof(ValueType_t3640485471_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (Variant_t2753289927)+ sizeof (RuntimeObject), sizeof(Variant_t2753289927 ), 0, 0 };
extern const int32_t g_FieldOffsetTable428[20] = 
{
	Variant_t2753289927::get_offset_of_vt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_wReserved1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_wReserved2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_wReserved3_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_llVal_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_lVal_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_bVal_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_iVal_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_fltVal_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_dblVal_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_boolVal_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_bstrVal_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_cVal_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_uiVal_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_ulVal_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_ullVal_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_intVal_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_uintVal_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_pdispVal_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Variant_t2753289927::get_offset_of_bRecord_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (BRECORD_t3470580684)+ sizeof (RuntimeObject), sizeof(BRECORD_t3470580684 ), 0, 0 };
extern const int32_t g_FieldOffsetTable429[2] = 
{
	BRECORD_t3470580684::get_offset_of_pvRecord_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BRECORD_t3470580684::get_offset_of_pRecInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (Void_t1185182177)+ sizeof (RuntimeObject), 1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (WeakReference_t1334886716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable431[2] = 
{
	WeakReference_t1334886716::get_offset_of_isLongReference_0(),
	WeakReference_t1334886716::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (InputRecord_t2660212290)+ sizeof (RuntimeObject), sizeof(InputRecord_t2660212290_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable432[9] = 
{
	InputRecord_t2660212290::get_offset_of_EventType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_KeyDown_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_RepeatCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_VirtualKeyCode_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_VirtualScanCode_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_Character_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_ControlKeyState_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_pad1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_pad2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (Coord_t397375283)+ sizeof (RuntimeObject), sizeof(Coord_t397375283 ), 0, 0 };
extern const int32_t g_FieldOffsetTable433[2] = 
{
	Coord_t397375283::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Coord_t397375283::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (SmallRect_t2930836963)+ sizeof (RuntimeObject), sizeof(SmallRect_t2930836963 ), 0, 0 };
extern const int32_t g_FieldOffsetTable434[4] = 
{
	SmallRect_t2930836963::get_offset_of_Left_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Top_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Right_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Bottom_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (ConsoleScreenBufferInfo_t3095351730)+ sizeof (RuntimeObject), sizeof(ConsoleScreenBufferInfo_t3095351730 ), 0, 0 };
extern const int32_t g_FieldOffsetTable435[5] = 
{
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_CursorPosition_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Attribute_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Window_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_MaxWindowSize_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (Handles_t3280152003)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable436[4] = 
{
	Handles_t3280152003::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (WindowsConsoleDriver_t3991887195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[3] = 
{
	WindowsConsoleDriver_t3991887195::get_offset_of_inputHandle_0(),
	WindowsConsoleDriver_t3991887195::get_offset_of_outputHandle_1(),
	WindowsConsoleDriver_t3991887195::get_offset_of_defaultAttribute_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (__ComObject_t2735933417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable438[4] = 
{
	__ComObject_t2735933417::get_offset_of_iunknown_1(),
	__ComObject_t2735933417::get_offset_of_hash_table_2(),
	__ComObject_t2735933417::get_offset_of_synchronization_context_3(),
	__ComObject_t2735933417::get_offset_of_proxy_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (AssemblyHashAlgorithm_t1216504064)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable439[7] = 
{
	AssemblyHashAlgorithm_t1216504064::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (AssemblyVersionCompatibility_t766556580)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable440[4] = 
{
	AssemblyVersionCompatibility_t766556580::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (ASCIIEncoding_t3446586211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (Decoder_t2204182725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable442[2] = 
{
	Decoder_t2204182725::get_offset_of_m_fallback_0(),
	Decoder_t2204182725::get_offset_of_m_fallbackBuffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (InternalDecoderBestFitFallback_t231958350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[3] = 
{
	InternalDecoderBestFitFallback_t231958350::get_offset_of_encoding_4(),
	InternalDecoderBestFitFallback_t231958350::get_offset_of_arrayBestFit_5(),
	InternalDecoderBestFitFallback_t231958350::get_offset_of_cReplacement_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (InternalDecoderBestFitFallbackBuffer_t1499007376), -1, sizeof(InternalDecoderBestFitFallbackBuffer_t1499007376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable444[5] = 
{
	InternalDecoderBestFitFallbackBuffer_t1499007376::get_offset_of_cBestFit_2(),
	InternalDecoderBestFitFallbackBuffer_t1499007376::get_offset_of_iCount_3(),
	InternalDecoderBestFitFallbackBuffer_t1499007376::get_offset_of_iSize_4(),
	InternalDecoderBestFitFallbackBuffer_t1499007376::get_offset_of_oFallback_5(),
	InternalDecoderBestFitFallbackBuffer_t1499007376_StaticFields::get_offset_of_s_InternalSyncObject_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (DecoderExceptionFallback_t3981484394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (DecoderExceptionFallbackBuffer_t90938522), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (DecoderFallbackException_t1661362184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable447[2] = 
{
	DecoderFallbackException_t1661362184::get_offset_of_bytesUnknown_18(),
	DecoderFallbackException_t1661362184::get_offset_of_index_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (DecoderFallback_t3123823036), -1, sizeof(DecoderFallback_t3123823036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable448[4] = 
{
	DecoderFallback_t3123823036::get_offset_of_bIsMicrosoftBestFitFallback_0(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_replacementFallback_1(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_exceptionFallback_2(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_s_InternalSyncObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (DecoderFallbackBuffer_t2402303981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable449[2] = 
{
	DecoderFallbackBuffer_t2402303981::get_offset_of_byteStart_0(),
	DecoderFallbackBuffer_t2402303981::get_offset_of_charEnd_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (DecoderNLS_t637950881), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable450[4] = 
{
	DecoderNLS_t637950881::get_offset_of_m_encoding_2(),
	DecoderNLS_t637950881::get_offset_of_m_mustFlush_3(),
	DecoderNLS_t637950881::get_offset_of_m_throwOnOverflow_4(),
	DecoderNLS_t637950881::get_offset_of_m_bytesUsed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (DecoderReplacementFallback_t1462101135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable451[1] = 
{
	DecoderReplacementFallback_t1462101135::get_offset_of_strDefault_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (DecoderReplacementFallbackBuffer_t841144779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable452[3] = 
{
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_strDefault_2(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_fallbackCount_3(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_fallbackIndex_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (Encoder_t2198218980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable453[2] = 
{
	Encoder_t2198218980::get_offset_of_m_fallback_0(),
	Encoder_t2198218980::get_offset_of_m_fallbackBuffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (InternalEncoderBestFitFallback_t3121776013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[2] = 
{
	InternalEncoderBestFitFallback_t3121776013::get_offset_of_encoding_4(),
	InternalEncoderBestFitFallback_t3121776013::get_offset_of_arrayBestFit_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (InternalEncoderBestFitFallbackBuffer_t2370301869), -1, sizeof(InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable455[5] = 
{
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_cBestFit_7(),
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_oFallback_8(),
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_iCount_9(),
	InternalEncoderBestFitFallbackBuffer_t2370301869::get_offset_of_iSize_10(),
	InternalEncoderBestFitFallbackBuffer_t2370301869_StaticFields::get_offset_of_s_InternalSyncObject_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (EncoderExceptionFallback_t1243849599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (EncoderExceptionFallbackBuffer_t3597232471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (EncoderFallbackException_t2773771926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable458[4] = 
{
	EncoderFallbackException_t2773771926::get_offset_of_charUnknown_18(),
	EncoderFallbackException_t2773771926::get_offset_of_charUnknownHigh_19(),
	EncoderFallbackException_t2773771926::get_offset_of_charUnknownLow_20(),
	EncoderFallbackException_t2773771926::get_offset_of_index_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (EncoderFallback_t1188251036), -1, sizeof(EncoderFallback_t1188251036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable459[4] = 
{
	EncoderFallback_t1188251036::get_offset_of_bIsMicrosoftBestFitFallback_0(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_replacementFallback_1(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_exceptionFallback_2(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_s_InternalSyncObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (EncoderFallbackBuffer_t3523102303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable460[7] = 
{
	EncoderFallbackBuffer_t3523102303::get_offset_of_charStart_0(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_charEnd_1(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_encoder_2(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_setEncoder_3(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_bUsedEncoder_4(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_bFallingBack_5(),
	EncoderFallbackBuffer_t3523102303::get_offset_of_iRecursionCount_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (EncoderNLS_t449404832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable461[5] = 
{
	EncoderNLS_t449404832::get_offset_of_charLeftOver_2(),
	EncoderNLS_t449404832::get_offset_of_m_encoding_3(),
	EncoderNLS_t449404832::get_offset_of_m_mustFlush_4(),
	EncoderNLS_t449404832::get_offset_of_m_throwOnOverflow_5(),
	EncoderNLS_t449404832::get_offset_of_m_charsUsed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { sizeof (EncoderReplacementFallback_t1623206753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable462[1] = 
{
	EncoderReplacementFallback_t1623206753::get_offset_of_strDefault_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { sizeof (EncoderReplacementFallbackBuffer_t1863187162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable463[3] = 
{
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_strDefault_7(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_fallbackCount_8(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_fallbackIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { sizeof (Encoding_t1523322056), -1, sizeof(Encoding_t1523322056_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable464[16] = 
{
	Encoding_t1523322056_StaticFields::get_offset_of_defaultEncoding_0(),
	Encoding_t1523322056_StaticFields::get_offset_of_unicodeEncoding_1(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianUnicode_2(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf7Encoding_3(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8Encoding_4(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf32Encoding_5(),
	Encoding_t1523322056_StaticFields::get_offset_of_asciiEncoding_6(),
	Encoding_t1523322056_StaticFields::get_offset_of_latin1Encoding_7(),
	Encoding_t1523322056_StaticFields::get_offset_of_encodings_8(),
	Encoding_t1523322056::get_offset_of_m_codePage_9(),
	Encoding_t1523322056::get_offset_of_dataItem_10(),
	Encoding_t1523322056::get_offset_of_m_deserializedFromEverett_11(),
	Encoding_t1523322056::get_offset_of_m_isReadOnly_12(),
	Encoding_t1523322056::get_offset_of_encoderFallback_13(),
	Encoding_t1523322056::get_offset_of_decoderFallback_14(),
	Encoding_t1523322056_StaticFields::get_offset_of_s_InternalSyncObject_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { sizeof (DefaultEncoder_t1761427806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable465[3] = 
{
	DefaultEncoder_t1761427806::get_offset_of_m_encoding_2(),
	DefaultEncoder_t1761427806::get_offset_of_m_hasInitializedEncoding_3(),
	DefaultEncoder_t1761427806::get_offset_of_charLeftOver_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { sizeof (DefaultDecoder_t1768440197), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable466[2] = 
{
	DefaultDecoder_t1768440197::get_offset_of_m_encoding_2(),
	DefaultDecoder_t1768440197::get_offset_of_m_hasInitializedEncoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { sizeof (EncodingCharBuffer_t3998946436), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable467[10] = 
{
	EncodingCharBuffer_t3998946436::get_offset_of_chars_0(),
	EncodingCharBuffer_t3998946436::get_offset_of_charStart_1(),
	EncodingCharBuffer_t3998946436::get_offset_of_charEnd_2(),
	EncodingCharBuffer_t3998946436::get_offset_of_charCountResult_3(),
	EncodingCharBuffer_t3998946436::get_offset_of_enc_4(),
	EncodingCharBuffer_t3998946436::get_offset_of_decoder_5(),
	EncodingCharBuffer_t3998946436::get_offset_of_byteStart_6(),
	EncodingCharBuffer_t3998946436::get_offset_of_byteEnd_7(),
	EncodingCharBuffer_t3998946436::get_offset_of_bytes_8(),
	EncodingCharBuffer_t3998946436::get_offset_of_fallbackBuffer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { sizeof (EncodingByteBuffer_t3631100277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable468[10] = 
{
	EncodingByteBuffer_t3631100277::get_offset_of_bytes_0(),
	EncodingByteBuffer_t3631100277::get_offset_of_byteStart_1(),
	EncodingByteBuffer_t3631100277::get_offset_of_byteEnd_2(),
	EncodingByteBuffer_t3631100277::get_offset_of_chars_3(),
	EncodingByteBuffer_t3631100277::get_offset_of_charStart_4(),
	EncodingByteBuffer_t3631100277::get_offset_of_charEnd_5(),
	EncodingByteBuffer_t3631100277::get_offset_of_byteCountResult_6(),
	EncodingByteBuffer_t3631100277::get_offset_of_enc_7(),
	EncodingByteBuffer_t3631100277::get_offset_of_encoder_8(),
	EncodingByteBuffer_t3631100277::get_offset_of_fallbackBuffer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { sizeof (EncodingNLS_t2860325670), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { sizeof (EncodingProvider_t3251932530), -1, sizeof(EncodingProvider_t3251932530_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable470[2] = 
{
	EncodingProvider_t3251932530_StaticFields::get_offset_of_s_InternalSyncObject_0(),
	EncodingProvider_t3251932530_StaticFields::get_offset_of_s_providers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { sizeof (Latin1Encoding_t950549005), -1, sizeof(Latin1Encoding_t950549005_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable471[1] = 
{
	Latin1Encoding_t950549005_StaticFields::get_offset_of_arrayCharBestFit_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (StringBuilder_t), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable472[11] = 
{
	StringBuilder_t::get_offset_of_m_ChunkChars_0(),
	StringBuilder_t::get_offset_of_m_ChunkPrevious_1(),
	StringBuilder_t::get_offset_of_m_ChunkLength_2(),
	StringBuilder_t::get_offset_of_m_ChunkOffset_3(),
	StringBuilder_t::get_offset_of_m_MaxCapacity_4(),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (StringBuilderCache_t3006348846), -1, 0, sizeof(StringBuilderCache_t3006348846_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable473[1] = 
{
	StringBuilderCache_t3006348846_ThreadStaticFields::get_offset_of_CachedInstance_0() | THREAD_LOCAL_STATIC_MASK,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (UnicodeEncoding_t1959134050), -1, sizeof(UnicodeEncoding_t1959134050_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable474[4] = 
{
	UnicodeEncoding_t1959134050::get_offset_of_isThrowException_16(),
	UnicodeEncoding_t1959134050::get_offset_of_bigEndian_17(),
	UnicodeEncoding_t1959134050::get_offset_of_byteOrderMark_18(),
	UnicodeEncoding_t1959134050_StaticFields::get_offset_of_highLowPatternMask_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (Decoder_t3679984939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable475[2] = 
{
	Decoder_t3679984939::get_offset_of_lastByte_6(),
	Decoder_t3679984939::get_offset_of_lastChar_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (UTF32Encoding_t312252005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable476[3] = 
{
	UTF32Encoding_t312252005::get_offset_of_emitUTF32ByteOrderMark_16(),
	UTF32Encoding_t312252005::get_offset_of_isThrowException_17(),
	UTF32Encoding_t312252005::get_offset_of_bigEndian_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { sizeof (UTF32Decoder_t635925672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable477[2] = 
{
	UTF32Decoder_t635925672::get_offset_of_iChar_6(),
	UTF32Decoder_t635925672::get_offset_of_readByteCount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (UTF7Encoding_t2644108479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable478[4] = 
{
	UTF7Encoding_t2644108479::get_offset_of_base64Bytes_16(),
	UTF7Encoding_t2644108479::get_offset_of_base64Values_17(),
	UTF7Encoding_t2644108479::get_offset_of_directEncode_18(),
	UTF7Encoding_t2644108479::get_offset_of_m_allowOptionals_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (Decoder_t2991084040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable479[3] = 
{
	Decoder_t2991084040::get_offset_of_bits_6(),
	Decoder_t2991084040::get_offset_of_bitCount_7(),
	Decoder_t2991084040::get_offset_of_firstByte_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (Encoder_t3981253163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable480[2] = 
{
	Encoder_t3981253163::get_offset_of_bits_7(),
	Encoder_t3981253163::get_offset_of_bitCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (DecoderUTF7Fallback_t327311172), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (DecoderUTF7FallbackBuffer_t605274814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable482[3] = 
{
	DecoderUTF7FallbackBuffer_t605274814::get_offset_of_cFallback_2(),
	DecoderUTF7FallbackBuffer_t605274814::get_offset_of_iCount_3(),
	DecoderUTF7FallbackBuffer_t605274814::get_offset_of_iSize_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (UTF8Encoding_t3956466879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable483[2] = 
{
	UTF8Encoding_t3956466879::get_offset_of_emitUTF8Identifier_16(),
	UTF8Encoding_t3956466879::get_offset_of_isThrowException_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (UTF8Encoder_t3216382797), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable484[1] = 
{
	UTF8Encoder_t3216382797::get_offset_of_surrogateChar_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { sizeof (UTF8Decoder_t2159214862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable485[1] = 
{
	UTF8Decoder_t2159214862::get_offset_of_bits_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { sizeof (NormalizationCheck_t1142668067)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable486[4] = 
{
	NormalizationCheck_t1142668067::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (Normalization_t1645683087), -1, sizeof(Normalization_t1645683087_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable487[8] = 
{
	Normalization_t1645683087_StaticFields::get_offset_of_props_0(),
	Normalization_t1645683087_StaticFields::get_offset_of_mappedChars_1(),
	Normalization_t1645683087_StaticFields::get_offset_of_charMapIndex_2(),
	Normalization_t1645683087_StaticFields::get_offset_of_helperIndex_3(),
	Normalization_t1645683087_StaticFields::get_offset_of_mapIdxToComposite_4(),
	Normalization_t1645683087_StaticFields::get_offset_of_combiningClass_5(),
	Normalization_t1645683087_StaticFields::get_offset_of_forLock_6(),
	Normalization_t1645683087_StaticFields::get_offset_of_isReady_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (EncodingHelper_t1404249741), -1, sizeof(EncodingHelper_t1404249741_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable488[4] = 
{
	EncodingHelper_t1404249741_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_0(),
	EncodingHelper_t1404249741_StaticFields::get_offset_of_lockobj_1(),
	EncodingHelper_t1404249741_StaticFields::get_offset_of_i18nAssembly_2(),
	EncodingHelper_t1404249741_StaticFields::get_offset_of_i18nDisabled_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (NormalizationForm_t3110136658)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable489[5] = 
{
	NormalizationForm_t3110136658::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (FastResourceComparer_t2718874915), -1, sizeof(FastResourceComparer_t2718874915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable490[1] = 
{
	FastResourceComparer_t2718874915_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (FileBasedResourceGroveler_t1088115704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable491[1] = 
{
	FileBasedResourceGroveler_t1088115704::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (ManifestBasedResourceGroveler_t2768300725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable494[1] = 
{
	ManifestBasedResourceGroveler_t2768300725::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (MissingManifestResourceException_t85971840), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (NeutralResourcesLanguageAttribute_t2027633532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable496[2] = 
{
	NeutralResourcesLanguageAttribute_t2027633532::get_offset_of__culture_0(),
	NeutralResourcesLanguageAttribute_t2027633532::get_offset_of__fallbackLoc_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (ResourceManager_t4037989559), -1, sizeof(ResourceManager_t4037989559_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable497[18] = 
{
	ResourceManager_t4037989559::get_offset_of_ResourceSets_0(),
	ResourceManager_t4037989559::get_offset_of__resourceSets_1(),
	ResourceManager_t4037989559::get_offset_of_MainAssembly_2(),
	ResourceManager_t4037989559::get_offset_of__neutralResourcesCulture_3(),
	ResourceManager_t4037989559::get_offset_of__lastUsedResourceCache_4(),
	ResourceManager_t4037989559::get_offset_of_UseManifest_5(),
	ResourceManager_t4037989559::get_offset_of_UseSatelliteAssem_6(),
	ResourceManager_t4037989559::get_offset_of__fallbackLoc_7(),
	ResourceManager_t4037989559::get_offset_of__callingAssembly_8(),
	ResourceManager_t4037989559::get_offset_of_m_callingAssembly_9(),
	ResourceManager_t4037989559::get_offset_of_resourceGroveler_10(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_MagicNumber_11(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_HeaderVersionNumber_12(),
	ResourceManager_t4037989559_StaticFields::get_offset_of__minResourceSet_13(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_ResReaderTypeName_14(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_ResSetTypeName_15(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_MscorlibName_16(),
	ResourceManager_t4037989559_StaticFields::get_offset_of_DEBUG_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (CultureNameResourceSetPair_t3305173715), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (ResourceManagerMediator_t1468959918), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable499[1] = 
{
	ResourceManagerMediator_t1468959918::get_offset_of__rm_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
