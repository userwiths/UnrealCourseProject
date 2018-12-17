// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEDEV_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define GAMEDEV_Door_generated_h

#define GameDev_Source_GameDev_Door_h_12_RPC_WRAPPERS
#define GameDev_Source_GameDev_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameDev_Source_GameDev_Door_h_12_EVENT_PARMS \
	struct Door_eventOpen_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Door_eventOpen_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define GameDev_Source_GameDev_Door_h_12_CALLBACK_WRAPPERS
#define GameDev_Source_GameDev_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDev"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define GameDev_Source_GameDev_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDev"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define GameDev_Source_GameDev_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define GameDev_Source_GameDev_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define GameDev_Source_GameDev_Door_h_12_PRIVATE_PROPERTY_OFFSET
#define GameDev_Source_GameDev_Door_h_9_PROLOG \
	GameDev_Source_GameDev_Door_h_12_EVENT_PARMS


#define GameDev_Source_GameDev_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDev_Source_GameDev_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDev_Source_GameDev_Door_h_12_RPC_WRAPPERS \
	GameDev_Source_GameDev_Door_h_12_CALLBACK_WRAPPERS \
	GameDev_Source_GameDev_Door_h_12_INCLASS \
	GameDev_Source_GameDev_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameDev_Source_GameDev_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDev_Source_GameDev_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDev_Source_GameDev_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameDev_Source_GameDev_Door_h_12_CALLBACK_WRAPPERS \
	GameDev_Source_GameDev_Door_h_12_INCLASS_NO_PURE_DECLS \
	GameDev_Source_GameDev_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameDev_Source_GameDev_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
