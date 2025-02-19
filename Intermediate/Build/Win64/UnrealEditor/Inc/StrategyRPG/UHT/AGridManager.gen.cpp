// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/AGridManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGridManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridManager();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AGridManager Function GenerateGrid
struct Z_Construct_UFunction_AGridManager_GenerateGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generates the grid based on current settings */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates the grid based on current settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GenerateGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGridManager_GenerateGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGenerateGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateGrid();
	P_NATIVE_END;
}
// End Class AGridManager Function GenerateGrid

// Begin Class AGridManager Function UpdateGridSize
struct Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics
{
	struct GridManager_eventUpdateGridSize_Parms
	{
		int32 NewWidth;
		int32 NewHeight;
		float NewTileSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates the grid size dynamically */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the grid size dynamically" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTileSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::NewProp_NewWidth = { "NewWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventUpdateGridSize_Parms, NewWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventUpdateGridSize_Parms, NewHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::NewProp_NewTileSize = { "NewTileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventUpdateGridSize_Parms, NewTileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::NewProp_NewWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::NewProp_NewHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::NewProp_NewTileSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "UpdateGridSize", nullptr, nullptr, Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::GridManager_eventUpdateGridSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::GridManager_eventUpdateGridSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_UpdateGridSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_UpdateGridSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execUpdateGridSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTileSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateGridSize(Z_Param_NewWidth,Z_Param_NewHeight,Z_Param_NewTileSize);
	P_NATIVE_END;
}
// End Class AGridManager Function UpdateGridSize

// Begin Class AGridManager
void AGridManager::StaticRegisterNativesAGridManager()
{
	UClass* Class = AGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateGrid", &AGridManager::execGenerateGrid },
		{ "UpdateGridSize", &AGridManager::execUpdateGridSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridManager);
UClass* Z_Construct_UClass_AGridManager_NoRegister()
{
	return AGridManager::StaticClass();
}
struct Z_Construct_UClass_AGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AGridManager.h" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Grid settings */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of tiles in width\n" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of tiles in width" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of tiles in height\n" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of tiles in height" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridTileClass_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance between tiles\n" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance between tiles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GridTileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_GenerateGrid, "GenerateGrid" }, // 224665160
		{ &Z_Construct_UFunction_AGridManager_UpdateGridSize, "UpdateGridSize" }, // 3861202782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridTileClass = { "GridTileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridTileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridTileClass_MetaData), NewProp_GridTileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridTileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
	&AGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridManager()
{
	if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AGridManager>()
{
	return AGridManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
AGridManager::~AGridManager() {}
// End Class AGridManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AGridManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 4114180427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AGridManager_h_1037370097(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AGridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_AGridManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
