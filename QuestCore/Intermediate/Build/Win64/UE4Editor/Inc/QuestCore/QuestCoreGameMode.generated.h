// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTCORE_QuestCoreGameMode_generated_h
#error "QuestCoreGameMode.generated.h already included, missing '#pragma once' in QuestCoreGameMode.h"
#endif
#define QUESTCORE_QuestCoreGameMode_generated_h

#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_RPC_WRAPPERS
#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAQuestCoreGameMode(); \
	friend QUESTCORE_API class UClass* Z_Construct_UClass_AQuestCoreGameMode(); \
	public: \
	DECLARE_CLASS(AQuestCoreGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, QuestCore, NO_API) \
	DECLARE_SERIALIZER(AQuestCoreGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AQuestCoreGameMode*>(this); }


#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAQuestCoreGameMode(); \
	friend QUESTCORE_API class UClass* Z_Construct_UClass_AQuestCoreGameMode(); \
	public: \
	DECLARE_CLASS(AQuestCoreGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, QuestCore, NO_API) \
	DECLARE_SERIALIZER(AQuestCoreGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AQuestCoreGameMode*>(this); }


#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestCoreGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestCoreGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestCoreGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestCoreGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AQuestCoreGameMode(const AQuestCoreGameMode& InCopy); \
public:


#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestCoreGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AQuestCoreGameMode(const AQuestCoreGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestCoreGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestCoreGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestCoreGameMode)


#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_11_PROLOG
#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_RPC_WRAPPERS \
	QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_INCLASS \
	QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_INCLASS_NO_PURE_DECLS \
	QuestCore_Source_QuestCore_QuestCoreGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuestCore_Source_QuestCore_QuestCoreGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
