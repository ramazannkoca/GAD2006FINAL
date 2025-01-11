// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMEFINAL_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define ADVGAMEFINAL_EnemyBase_generated_h

#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_SPARSE_DATA
#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChasePlayer);


#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_ACCESSORS
#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvGameFinal"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase) \
	NO_API virtual ~AEnemyBase();


#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_11_PROLOG
#define FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_SPARSE_DATA \
	FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_ACCESSORS \
	FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVGAMEFINAL_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AdvGameFinal_Source_AdvGameFinal_Public_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
