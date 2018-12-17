// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEDEV_GameDevCharacter_generated_h
#error "GameDevCharacter.generated.h already included, missing '#pragma once' in GameDevCharacter.h"
#endif
#define GAMEDEV_GameDevCharacter_generated_h

#define GameDev_Source_GameDev_GameDevCharacter_h_12_RPC_WRAPPERS
#define GameDev_Source_GameDev_GameDevCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameDev_Source_GameDev_GameDevCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameDevCharacter(); \
	friend struct Z_Construct_UClass_AGameDevCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameDevCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDev"), NO_API) \
	DECLARE_SERIALIZER(AGameDevCharacter)


#define GameDev_Source_GameDev_GameDevCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameDevCharacter(); \
	friend struct Z_Construct_UClass_AGameDevCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameDevCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDev"), NO_API) \
	DECLARE_SERIALIZER(AGameDevCharacter)


#define GameDev_Source_GameDev_GameDevCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameDevCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameDevCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameDevCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDevCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameDevCharacter(AGameDevCharacter&&); \
	NO_API AGameDevCharacter(const AGameDevCharacter&); \
public:


#define GameDev_Source_GameDev_GameDevCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameDevCharacter(AGameDevCharacter&&); \
	NO_API AGameDevCharacter(const AGameDevCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameDevCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameDevCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameDevCharacter)


#define GameDev_Source_GameDev_GameDevCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGameDevCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGameDevCharacter, FollowCamera); }


#define GameDev_Source_GameDev_GameDevCharacter_h_9_PROLOG
#define GameDev_Source_GameDev_GameDevCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDev_Source_GameDev_GameDevCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDev_Source_GameDev_GameDevCharacter_h_12_RPC_WRAPPERS \
	GameDev_Source_GameDev_GameDevCharacter_h_12_INCLASS \
	GameDev_Source_GameDev_GameDevCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameDev_Source_GameDev_GameDevCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameDev_Source_GameDev_GameDevCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GameDev_Source_GameDev_GameDevCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameDev_Source_GameDev_GameDevCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GameDev_Source_GameDev_GameDevCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameDev_Source_GameDev_GameDevCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
