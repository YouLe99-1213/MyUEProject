// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AboutUE/AboutUEGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAboutUEGameMode() {}
// Cross Module References
	ABOUTUE_API UClass* Z_Construct_UClass_AAboutUEGameMode_NoRegister();
	ABOUTUE_API UClass* Z_Construct_UClass_AAboutUEGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AboutUE();
// End Cross Module References
	void AAboutUEGameMode::StaticRegisterNativesAAboutUEGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAboutUEGameMode_NoRegister()
	{
		return AAboutUEGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAboutUEGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAboutUEGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AboutUE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAboutUEGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AboutUEGameMode.h" },
		{ "ModuleRelativePath", "AboutUEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAboutUEGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAboutUEGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAboutUEGameMode_Statics::ClassParams = {
		&AAboutUEGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAboutUEGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAboutUEGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAboutUEGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAboutUEGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAboutUEGameMode, 4168982959);
	template<> ABOUTUE_API UClass* StaticClass<AAboutUEGameMode>()
	{
		return AAboutUEGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAboutUEGameMode(Z_Construct_UClass_AAboutUEGameMode, &AAboutUEGameMode::StaticClass, TEXT("/Script/AboutUE"), TEXT("AAboutUEGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAboutUEGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
