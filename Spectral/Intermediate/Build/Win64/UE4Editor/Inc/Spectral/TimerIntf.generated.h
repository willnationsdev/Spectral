// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPECTRAL_TimerIntf_generated_h
#error "TimerIntf.generated.h already included, missing '#pragma once' in TimerIntf.h"
#endif
#define SPECTRAL_TimerIntf_generated_h

#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_RPC_WRAPPERS
#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimerIntf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimerIntf) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimerIntf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerIntf); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTimerIntf(const UTimerIntf& InCopy); \
public:


#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimerIntf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTimerIntf(const UTimerIntf& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimerIntf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerIntf); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimerIntf)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUTimerIntf(); \
	friend SPECTRAL_API class UClass* Z_Construct_UClass_UTimerIntf(); \
public: \
	DECLARE_CLASS(UTimerIntf, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, Spectral, NO_API) \
	DECLARE_SERIALIZER(UTimerIntf) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITimerIntf() {} \
public: \
	typedef UTimerIntf UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITimerIntf() {} \
public: \
	typedef UTimerIntf UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_10_PROLOG
#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_RPC_WRAPPERS \
	Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spectral_Source_Spectral_TimerSystem_TimerFramework_TimerIntf_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
