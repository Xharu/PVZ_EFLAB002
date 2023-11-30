// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_EFLAB02/ZombieVolador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieVolador() {}
// Cross Module References
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombieVolador_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombieVolador();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_AZombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_EFLAB02();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_ACorrienteAerea_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_USuscriptor_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_ULevitar_NoRegister();
// End Cross Module References
	void AZombieVolador::StaticRegisterNativesAZombieVolador()
	{
	}
	UClass* Z_Construct_UClass_AZombieVolador_NoRegister()
	{
		return AZombieVolador::StaticClass();
	}
	struct Z_Construct_UClass_AZombieVolador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CorrienteAerea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CorrienteAerea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieVolador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_EFLAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieVolador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieVolador.h" },
		{ "ModuleRelativePath", "ZombieVolador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieVolador_Statics::NewProp_CorrienteAerea_MetaData[] = {
		{ "Comment", "//El zombie de este suscriptor\n" },
		{ "ModuleRelativePath", "ZombieVolador.h" },
		{ "ToolTip", "El zombie de este suscriptor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieVolador_Statics::NewProp_CorrienteAerea = { "CorrienteAerea", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieVolador, CorrienteAerea), Z_Construct_UClass_ACorrienteAerea_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieVolador_Statics::NewProp_CorrienteAerea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieVolador_Statics::NewProp_CorrienteAerea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieVolador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieVolador_Statics::NewProp_CorrienteAerea,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieVolador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USuscriptor_NoRegister, (int32)VTABLE_OFFSET(AZombieVolador, ISuscriptor), false },
			{ Z_Construct_UClass_ULevitar_NoRegister, (int32)VTABLE_OFFSET(AZombieVolador, ILevitar), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieVolador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieVolador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieVolador_Statics::ClassParams = {
		&AZombieVolador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieVolador_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieVolador_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieVolador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieVolador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieVolador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieVolador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieVolador, 1854971996);
	template<> PVZ_EFLAB02_API UClass* StaticClass<AZombieVolador>()
	{
		return AZombieVolador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieVolador(Z_Construct_UClass_AZombieVolador, &AZombieVolador::StaticClass, TEXT("/Script/PVZ_EFLAB02"), TEXT("AZombieVolador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieVolador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
