// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPECTRAL_SkillStorageIntf_generated_h
#error "SkillStorageIntf.generated.h already included, missing '#pragma once' in SkillStorageIntf.h"
#endif
#define SPECTRAL_SkillStorageIntf_generated_h

#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_RPC_WRAPPERS
#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesASkillStorageIntf(); \
	friend SPECTRAL_API class UClass* Z_Construct_UClass_ASkillStorageIntf(); \
	public: \
	DECLARE_CLASS(ASkillStorageIntf, AActor, COMPILED_IN_FLAGS(0), 0, Spectral, NO_API) \
	DECLARE_SERIALIZER(ASkillStorageIntf) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ASkillStorageIntf*>(this); }


#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesASkillStorageIntf(); \
	friend SPECTRAL_API class UClass* Z_Construct_UClass_ASkillStorageIntf(); \
	public: \
	DECLARE_CLASS(ASkillStorageIntf, AActor, COMPILED_IN_FLAGS(0), 0, Spectral, NO_API) \
	DECLARE_SERIALIZER(ASkillStorageIntf) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ASkillStorageIntf*>(this); }


#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkillStorageIntf(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkillStorageIntf) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkillStorageIntf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkillStorageIntf); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASkillStorageIntf(const ASkillStorageIntf& InCopy); \
public:


#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASkillStorageIntf(const ASkillStorageIntf& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkillStorageIntf); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkillStorageIntf); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASkillStorageIntf)


#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_8_PROLOG
#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_RPC_WRAPPERS \
	Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_INCLASS \
	Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_INCLASS_NO_PURE_DECLS \
	Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spectral_Source_Spectral_Skills_SkillFramework_SkillStorageIntf_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
