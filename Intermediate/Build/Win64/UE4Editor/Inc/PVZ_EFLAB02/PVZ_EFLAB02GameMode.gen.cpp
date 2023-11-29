// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_EFLAB02/PVZ_EFLAB02GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVZ_EFLAB02GameMode() {}
// Cross Module References
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_APVZ_EFLAB02GameMode_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_APVZ_EFLAB02GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PVZ_EFLAB02();
// End Cross Module References
	void APVZ_EFLAB02GameMode::StaticRegisterNativesAPVZ_EFLAB02GameMode()
	{
	}
	UClass* Z_Construct_UClass_APVZ_EFLAB02GameMode_NoRegister()
	{
		return APVZ_EFLAB02GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_EFLAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PVZ_EFLAB02GameMode.h" },
		{ "ModuleRelativePath", "PVZ_EFLAB02GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVZ_EFLAB02GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics::ClassParams = {
		&APVZ_EFLAB02GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVZ_EFLAB02GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVZ_EFLAB02GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVZ_EFLAB02GameMode, 3495599271);
	template<> PVZ_EFLAB02_API UClass* StaticClass<APVZ_EFLAB02GameMode>()
	{
		return APVZ_EFLAB02GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVZ_EFLAB02GameMode(Z_Construct_UClass_APVZ_EFLAB02GameMode, &APVZ_EFLAB02GameMode::StaticClass, TEXT("/Script/PVZ_EFLAB02"), TEXT("APVZ_EFLAB02GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVZ_EFLAB02GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
