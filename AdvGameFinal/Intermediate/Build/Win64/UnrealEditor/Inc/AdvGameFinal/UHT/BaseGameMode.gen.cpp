// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGameFinal/Public/BaseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameMode() {}
// Cross Module References
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_ABaseGameMode();
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_ABaseGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AdvGameFinal();
// End Cross Module References
	void ABaseGameMode::StaticRegisterNativesABaseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGameMode);
	UClass* Z_Construct_UClass_ABaseGameMode_NoRegister()
	{
		return ABaseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGameFinal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BaseGameMode.h" },
		{ "ModuleRelativePath", "Public/BaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGameMode_Statics::ClassParams = {
		&ABaseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABaseGameMode()
	{
		if (!Z_Registration_Info_UClass_ABaseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGameMode.OuterSingleton, Z_Construct_UClass_ABaseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGameMode.OuterSingleton;
	}
	template<> ADVGAMEFINAL_API UClass* StaticClass<ABaseGameMode>()
	{
		return ABaseGameMode::StaticClass();
	}
	ABaseGameMode::ABaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGameMode);
	ABaseGameMode::~ABaseGameMode() {}
	struct Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_BaseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_BaseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGameMode, ABaseGameMode::StaticClass, TEXT("ABaseGameMode"), &Z_Registration_Info_UClass_ABaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGameMode), 1078496301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_BaseGameMode_h_3190568072(TEXT("/Script/AdvGameFinal"),
		Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_BaseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_BaseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
