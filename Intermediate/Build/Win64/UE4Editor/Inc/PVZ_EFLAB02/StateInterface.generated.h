// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_EFLAB02_StateInterface_generated_h
#error "StateInterface.generated.h already included, missing '#pragma once' in StateInterface.h"
#endif
#define PVZ_EFLAB02_StateInterface_generated_h

#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_SPARSE_DATA
#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_RPC_WRAPPERS
#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PVZ_EFLAB02_API UStateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PVZ_EFLAB02_API, UStateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PVZ_EFLAB02_API UStateInterface(UStateInterface&&); \
	PVZ_EFLAB02_API UStateInterface(const UStateInterface&); \
public:


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PVZ_EFLAB02_API UStateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PVZ_EFLAB02_API UStateInterface(UStateInterface&&); \
	PVZ_EFLAB02_API UStateInterface(const UStateInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PVZ_EFLAB02_API, UStateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateInterface)


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStateInterface(); \
	friend struct Z_Construct_UClass_UStateInterface_Statics; \
public: \
	DECLARE_CLASS(UStateInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PVZ_EFLAB02"), PVZ_EFLAB02_API) \
	DECLARE_SERIALIZER(UStateInterface)


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_GENERATED_UINTERFACE_BODY() \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_GENERATED_UINTERFACE_BODY() \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStateInterface() {} \
public: \
	typedef UStateInterface UClassType; \
	typedef IStateInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IStateInterface() {} \
public: \
	typedef UStateInterface UClassType; \
	typedef IStateInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_10_PROLOG
#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_SPARSE_DATA \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_RPC_WRAPPERS \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_SPARSE_DATA \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_EFLAB02_API UClass* StaticClass<class UStateInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_EFLAB02_Source_PVZ_EFLAB02_StateInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
