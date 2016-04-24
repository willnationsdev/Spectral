// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPECTRAL_TargetingVolumeIntf_generated_h
#error "TargetingVolumeIntf.generated.h already included, missing '#pragma once' in TargetingVolumeIntf.h"
#endif
#define SPECTRAL_TargetingVolumeIntf_generated_h

#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_RPC_WRAPPERS
#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingVolumeIntf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingVolumeIntf) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingVolumeIntf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingVolumeIntf); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTargetingVolumeIntf(const UTargetingVolumeIntf& InCopy); \
public:


#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingVolumeIntf(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UTargetingVolumeIntf(const UTargetingVolumeIntf& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingVolumeIntf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingVolumeIntf); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingVolumeIntf)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUTargetingVolumeIntf(); \
	friend SPECTRAL_API class UClass* Z_Construct_UClass_UTargetingVolumeIntf(); \
public: \
	DECLARE_CLASS(UTargetingVolumeIntf, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, Spectral, NO_API) \
	DECLARE_SERIALIZER(UTargetingVolumeIntf) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITargetingVolumeIntf() {} \
public: \
	typedef UTargetingVolumeIntf UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~ITargetingVolumeIntf() {} \
public: \
	typedef UTargetingVolumeIntf UClassType; \
	virtual UObject* _getUObject() const = 0;


#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_7_PROLOG
#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_RPC_WRAPPERS \
	Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spectral_Source_Spectral_Skills_SkillFramework_TargetingFramework_TargetingVolumeIntf_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS