// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_EFLAB02/ZombieRealentizado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieRealentizado() {}
// Cross Module References
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombieRealentizado_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombieRealentizado();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_EFLAB02();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_UStateInterface_NoRegister();
// End Cross Module References
	void AZombieRealentizado::StaticRegisterNativesAZombieRealentizado()
	{
	}
	UClass* Z_Construct_UClass_AZombieRealentizado_NoRegister()
	{
		return AZombieRealentizado::StaticClass();
	}
	struct Z_Construct_UClass_AZombieRealentizado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieRealentizado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_EFLAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieRealentizado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieRealentizado.h" },
		{ "ModuleRelativePath", "ZombieRealentizado.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieRealentizado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStateInterface_NoRegister, (int32)VTABLE_OFFSET(AZombieRealentizado, IStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieRealentizado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieRealentizado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieRealentizado_Statics::ClassParams = {
		&AZombieRealentizado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieRealentizado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieRealentizado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieRealentizado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieRealentizado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieRealentizado, 4074810275);
	template<> PVZ_EFLAB02_API UClass* StaticClass<AZombieRealentizado>()
	{
		return AZombieRealentizado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieRealentizado(Z_Construct_UClass_AZombieRealentizado, &AZombieRealentizado::StaticClass, TEXT("/Script/PVZ_EFLAB02"), TEXT("AZombieRealentizado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieRealentizado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
