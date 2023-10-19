// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterMovement/CharacterMovementGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementGameModeBase() {}
// Cross Module References
	CHARACTERMOVEMENT_API UClass* Z_Construct_UClass_ACharacterMovementGameModeBase_NoRegister();
	CHARACTERMOVEMENT_API UClass* Z_Construct_UClass_ACharacterMovementGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CharacterMovement();
// End Cross Module References
	void ACharacterMovementGameModeBase::StaticRegisterNativesACharacterMovementGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterMovementGameModeBase);
	UClass* Z_Construct_UClass_ACharacterMovementGameModeBase_NoRegister()
	{
		return ACharacterMovementGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterMovementGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterMovementGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CharacterMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterMovementGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CharacterMovementGameModeBase.h" },
		{ "ModuleRelativePath", "CharacterMovementGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterMovementGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterMovementGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterMovementGameModeBase_Statics::ClassParams = {
		&ACharacterMovementGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACharacterMovementGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterMovementGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterMovementGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACharacterMovementGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterMovementGameModeBase.OuterSingleton, Z_Construct_UClass_ACharacterMovementGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterMovementGameModeBase.OuterSingleton;
	}
	template<> CHARACTERMOVEMENT_API UClass* StaticClass<ACharacterMovementGameModeBase>()
	{
		return ACharacterMovementGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterMovementGameModeBase);
	struct Z_CompiledInDeferFile_FID_CharacterMovement_Source_CharacterMovement_CharacterMovementGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CharacterMovement_Source_CharacterMovement_CharacterMovementGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterMovementGameModeBase, ACharacterMovementGameModeBase::StaticClass, TEXT("ACharacterMovementGameModeBase"), &Z_Registration_Info_UClass_ACharacterMovementGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterMovementGameModeBase), 1712324234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CharacterMovement_Source_CharacterMovement_CharacterMovementGameModeBase_h_3423907713(TEXT("/Script/CharacterMovement"),
		Z_CompiledInDeferFile_FID_CharacterMovement_Source_CharacterMovement_CharacterMovementGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CharacterMovement_Source_CharacterMovement_CharacterMovementGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
