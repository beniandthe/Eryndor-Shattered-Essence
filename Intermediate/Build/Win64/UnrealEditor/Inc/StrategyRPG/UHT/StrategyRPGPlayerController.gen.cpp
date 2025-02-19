// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/StrategyRPGPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyRPGPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AStrategyRPGPlayerController();
STRATEGYRPG_API UClass* Z_Construct_UClass_AStrategyRPGPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AStrategyRPGPlayerController
void AStrategyRPGPlayerController::StaticRegisterNativesAStrategyRPGPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStrategyRPGPlayerController);
UClass* Z_Construct_UClass_AStrategyRPGPlayerController_NoRegister()
{
	return AStrategyRPGPlayerController::StaticClass();
}
struct Z_Construct_UClass_AStrategyRPGPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "StrategyRPGPlayerController.h" },
		{ "ModuleRelativePath", "StrategyRPGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "StrategyRPGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "StrategyRPGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "StrategyRPGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "StrategyRPGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "StrategyRPGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyRPGPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrategyRPGPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrategyRPGPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrategyRPGPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrategyRPGPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationClickAction_MetaData), NewProp_SetDestinationClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStrategyRPGPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationTouchAction_MetaData), NewProp_SetDestinationTouchAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStrategyRPGPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_SetDestinationClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStrategyRPGPlayerController_Statics::NewProp_SetDestinationTouchAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyRPGPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStrategyRPGPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyRPGPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStrategyRPGPlayerController_Statics::ClassParams = {
	&AStrategyRPGPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStrategyRPGPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyRPGPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyRPGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AStrategyRPGPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStrategyRPGPlayerController()
{
	if (!Z_Registration_Info_UClass_AStrategyRPGPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStrategyRPGPlayerController.OuterSingleton, Z_Construct_UClass_AStrategyRPGPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStrategyRPGPlayerController.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AStrategyRPGPlayerController>()
{
	return AStrategyRPGPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyRPGPlayerController);
AStrategyRPGPlayerController::~AStrategyRPGPlayerController() {}
// End Class AStrategyRPGPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_StrategyRPGPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStrategyRPGPlayerController, AStrategyRPGPlayerController::StaticClass, TEXT("AStrategyRPGPlayerController"), &Z_Registration_Info_UClass_AStrategyRPGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStrategyRPGPlayerController), 1784736284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_StrategyRPGPlayerController_h_1361474420(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_StrategyRPGPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_StrategyRPGPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
