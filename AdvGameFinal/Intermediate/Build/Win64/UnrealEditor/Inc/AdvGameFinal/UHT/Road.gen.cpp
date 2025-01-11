// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGameFinal/Public/Road.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoad() {}
// Cross Module References
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_ARoad();
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_ARoad_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGameFinal();
// End Cross Module References
	void ARoad::StaticRegisterNativesARoad()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoad);
	UClass* Z_Construct_UClass_ARoad_NoRegister()
	{
		return ARoad::StaticClass();
	}
	struct Z_Construct_UClass_ARoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGameFinal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Road.h" },
		{ "ModuleRelativePath", "Public/Road.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoad>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoad_Statics::ClassParams = {
		&ARoad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARoad()
	{
		if (!Z_Registration_Info_UClass_ARoad.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoad.OuterSingleton, Z_Construct_UClass_ARoad_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoad.OuterSingleton;
	}
	template<> ADVGAMEFINAL_API UClass* StaticClass<ARoad>()
	{
		return ARoad::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoad);
	ARoad::~ARoad() {}
	struct Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Road_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Road_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoad, ARoad::StaticClass, TEXT("ARoad"), &Z_Registration_Info_UClass_ARoad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoad), 994264010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Road_h_1686416046(TEXT("/Script/AdvGameFinal"),
		Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Road_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Road_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
