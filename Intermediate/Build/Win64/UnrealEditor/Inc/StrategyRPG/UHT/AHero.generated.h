// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AHero.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGYRPG_AHero_generated_h
#error "AHero.generated.h already included, missing '#pragma once' in AHero.h"
#endif
#define STRATEGYRPG_AHero_generated_h

#define FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execModifyAttribute); \
	DECLARE_FUNCTION(execCalculateDerivedStats);


#define FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrategyRPG"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHero(AHero&&); \
	AHero(const AHero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHero) \
	NO_API virtual ~AHero();


#define FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_9_PROLOG
#define FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRATEGYRPG_API UClass* StaticClass<class AHero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AHero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
