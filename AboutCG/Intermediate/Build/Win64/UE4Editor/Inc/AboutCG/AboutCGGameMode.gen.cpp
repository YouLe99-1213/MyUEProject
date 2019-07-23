// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AboutCG/AboutCGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAboutCGGameMode() {}
// Cross Module References
	ABOUTCG_API UClass* Z_Construct_UClass_AAboutCGGameMode_NoRegister();
	ABOUTCG_API UClass* Z_Construct_UClass_AAboutCGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AboutCG();
// End Cross Module References
	void AAboutCGGameMode::StaticRegisterNativesAAboutCGGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAboutCGGameMode_NoRegister()
	{
		return AAboutCGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAboutCGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAboutCGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AboutCG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAboutCGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AboutCGGameMode.h" },
		{ "ModuleRelativePath", "AboutCGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAboutCGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAboutCGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAboutCGGameMode_Statics::ClassParams = {
		&AAboutCGGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AAboutCGGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAboutCGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAboutCGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAboutCGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAboutCGGameMode, 2473667648);
	template<> ABOUTCG_API UClass* StaticClass<AAboutCGGameMode>()
	{
		return AAboutCGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAboutCGGameMode(Z_Construct_UClass_AAboutCGGameMode, &AAboutCGGameMode::StaticClass, TEXT("/Script/AboutCG"), TEXT("AAboutCGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAboutCGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif