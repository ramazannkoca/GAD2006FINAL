// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGameFinal/Public/AvatarBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarBase() {}
// Cross Module References
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_AAvatarBase();
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_AAvatarBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AdvGameFinal();
// End Cross Module References
	void AAvatarBase::StaticRegisterNativesAAvatarBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAvatarBase);
	UClass* Z_Construct_UClass_AAvatarBase_NoRegister()
	{
		return AAvatarBase::StaticClass();
	}
	struct Z_Construct_UClass_AAvatarBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvatarBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGameFinal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatarBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatarBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AvatarBase.h" },
		{ "ModuleRelativePath", "Public/AvatarBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvatarBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvatarBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAvatarBase_Statics::ClassParams = {
		&AAvatarBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatarBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAvatarBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAvatarBase()
	{
		if (!Z_Registration_Info_UClass_AAvatarBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAvatarBase.OuterSingleton, Z_Construct_UClass_AAvatarBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAvatarBase.OuterSingleton;
	}
	template<> ADVGAMEFINAL_API UClass* StaticClass<AAvatarBase>()
	{
		return AAvatarBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvatarBase);
	AAvatarBase::~AAvatarBase() {}
	struct Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_AvatarBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_AvatarBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAvatarBase, AAvatarBase::StaticClass, TEXT("AAvatarBase"), &Z_Registration_Info_UClass_AAvatarBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAvatarBase), 2116897772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_AvatarBase_h_94837298(TEXT("/Script/AdvGameFinal"),
		Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_AvatarBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_AvatarBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
