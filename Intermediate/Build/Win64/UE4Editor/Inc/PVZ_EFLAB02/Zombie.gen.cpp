// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_EFLAB02/Zombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie() {}
// Cross Module References
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombie();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_EFLAB02();
// End Cross Module References
	void AZombie::StaticRegisterNativesAZombie()
	{
	}
	UClass* Z_Construct_UClass_AZombie_NoRegister()
	{
		return AZombie::StaticClass();
	}
	struct Z_Construct_UClass_AZombie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_EFLAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class IStateInterface;\n" },
		{ "IncludePath", "Zombie.h" },
		{ "ModuleRelativePath", "Zombie.h" },
		{ "ToolTip", "class IStateInterface;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombie_Statics::ClassParams = {
		&AZombie::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombie, 2509161193);
	template<> PVZ_EFLAB02_API UClass* StaticClass<AZombie>()
	{
		return AZombie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombie(Z_Construct_UClass_AZombie, &AZombie::StaticClass, TEXT("/Script/PVZ_EFLAB02"), TEXT("AZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
