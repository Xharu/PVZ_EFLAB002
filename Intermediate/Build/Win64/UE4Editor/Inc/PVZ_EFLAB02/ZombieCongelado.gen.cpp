// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_EFLAB02/ZombieCongelado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieCongelado() {}
// Cross Module References
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombieCongelado_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombieCongelado();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_EFLAB02();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_UStateInterface_NoRegister();
// End Cross Module References
	void AZombieCongelado::StaticRegisterNativesAZombieCongelado()
	{
	}
	UClass* Z_Construct_UClass_AZombieCongelado_NoRegister()
	{
		return AZombieCongelado::StaticClass();
	}
	struct Z_Construct_UClass_AZombieCongelado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieCongelado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_EFLAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCongelado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieCongelado.h" },
		{ "ModuleRelativePath", "ZombieCongelado.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieCongelado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStateInterface_NoRegister, (int32)VTABLE_OFFSET(AZombieCongelado, IStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieCongelado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieCongelado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieCongelado_Statics::ClassParams = {
		&AZombieCongelado::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieCongelado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCongelado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieCongelado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieCongelado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieCongelado, 1463633393);
	template<> PVZ_EFLAB02_API UClass* StaticClass<AZombieCongelado>()
	{
		return AZombieCongelado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieCongelado(Z_Construct_UClass_AZombieCongelado, &AZombieCongelado::StaticClass, TEXT("/Script/PVZ_EFLAB02"), TEXT("AZombieCongelado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieCongelado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
