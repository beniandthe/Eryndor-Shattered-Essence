// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/GridTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridTile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AGridTile
void AGridTile::StaticRegisterNativesAGridTile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridTile);
UClass* Z_Construct_UClass_AGridTile_NoRegister()
{
	return AGridTile::StaticClass();
}
struct Z_Construct_UClass_AGridTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GridTile.h" },
		{ "ModuleRelativePath", "Public/GridTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridX_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid Position\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/GridTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOccupied_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the tile is occupied by a unit\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the tile is occupied by a unit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Tile Type (e.g., Grass, Water, Mountain)\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Tile Type (e.g., Grass, Water, Mountain)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static void NewProp_bIsOccupied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOccupied;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridTile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, GridX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridX_MetaData), NewProp_GridX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, GridY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridY_MetaData), NewProp_GridY_MetaData) };
void Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied_SetBit(void* Obj)
{
	((AGridTile*)Obj)->bIsOccupied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied = { "bIsOccupied", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridTile), &Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOccupied_MetaData), NewProp_bIsOccupied_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, TileType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileType_MetaData), NewProp_TileType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_TileType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridTile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridTile_Statics::ClassParams = {
	&AGridTile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGridTile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridTile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridTile()
{
	if (!Z_Registration_Info_UClass_AGridTile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridTile.OuterSingleton, Z_Construct_UClass_AGridTile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridTile.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AGridTile>()
{
	return AGridTile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridTile);
AGridTile::~AGridTile() {}
// End Class AGridTile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_GridTile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridTile, AGridTile::StaticClass, TEXT("AGridTile"), &Z_Registration_Info_UClass_AGridTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridTile), 2588731705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_GridTile_h_1130363814(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_GridTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_OneDrive_Desktop_StrategyRPG_Source_StrategyRPG_Public_GridTile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
