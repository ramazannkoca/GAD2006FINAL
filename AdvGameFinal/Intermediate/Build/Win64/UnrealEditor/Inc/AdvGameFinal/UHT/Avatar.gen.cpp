// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGameFinal/Public/Avatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatar() {}
// Cross Module References
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_AAvatar();
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	ADVGAMEFINAL_API UClass* Z_Construct_UClass_AAvatarBase();
	UPackage* Z_Construct_UPackage__Script_AdvGameFinal();
// End Cross Module References
	DEFINE_FUNCTION(AAvatar::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	void AAvatar::StaticRegisterNativesAAvatar()
	{
		UClass* Class = AAvatar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Shoot", &AAvatar::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAvatar_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Shoot_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//combat\n" },
#endif
		{ "ModuleRelativePath", "Public/Avatar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "combat" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "Shoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAvatar_Shoot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAvatar_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAvatar_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAvatar);
	UClass* Z_Construct_UClass_AAvatar_NoRegister()
	{
		return AAvatar::StaticClass();
	}
	struct Z_Construct_UClass_AAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAvatarBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGameFinal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAvatar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAvatar_Shoot, "Shoot" }, // 2105311009
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Avatar.h" },
		{ "ModuleRelativePath", "Public/Avatar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Public/Avatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_RunSpeed_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_RunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Public/Avatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, MovementState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_MovementState_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_MovementState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Public/Avatar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAvatar, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UClass_AAvatar_Statics::NewProp_WalkSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_RunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_MovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_WalkSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvatar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAvatar_Statics::ClassParams = {
		&AAvatar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAvatar()
	{
		if (!Z_Registration_Info_UClass_AAvatar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAvatar.OuterSingleton, Z_Construct_UClass_AAvatar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAvatar.OuterSingleton;
	}
	template<> ADVGAMEFINAL_API UClass* StaticClass<AAvatar>()
	{
		return AAvatar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvatar);
	AAvatar::~AAvatar() {}
	struct Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Avatar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Avatar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAvatar, AAvatar::StaticClass, TEXT("AAvatar"), &Z_Registration_Info_UClass_AAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAvatar), 3655805671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Avatar_h_449270150(TEXT("/Script/AdvGameFinal"),
		Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Avatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvGameFinal_Source_AdvGameFinal_Public_Avatar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
