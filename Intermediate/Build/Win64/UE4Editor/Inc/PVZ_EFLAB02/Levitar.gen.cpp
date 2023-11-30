// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_EFLAB02/Levitar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevitar() {}
// Cross Module References
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_ULevitar_NoRegister();
	PVZ_EFLAB02_API UClass* Z_Construct_UClass_ULevitar();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_EFLAB02();
// End Cross Module References
	void ULevitar::StaticRegisterNativesULevitar()
	{
	}
	UClass* Z_Construct_UClass_ULevitar_NoRegister()
	{
		return ULevitar::StaticClass();
	}
	struct Z_Construct_UClass_ULevitar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevitar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_EFLAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevitar_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Levitar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevitar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILevitar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevitar_Statics::ClassParams = {
		&ULevitar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULevitar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevitar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevitar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevitar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevitar, 2523499458);
	template<> PVZ_EFLAB02_API UClass* StaticClass<ULevitar>()
	{
		return ULevitar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevitar(Z_Construct_UClass_ULevitar, &ULevitar::StaticClass, TEXT("/Script/PVZ_EFLAB02"), TEXT("ULevitar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevitar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
