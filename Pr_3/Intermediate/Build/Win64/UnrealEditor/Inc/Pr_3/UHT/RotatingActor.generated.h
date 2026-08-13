// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RotatingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PR_3_RotatingActor_generated_h
#error "RotatingActor.generated.h already included, missing '#pragma once' in RotatingActor.h"
#endif
#define PR_3_RotatingActor_generated_h

#define FID_Pr_3_Source_Pr_3_RotatingActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotatingActor(); \
	friend struct Z_Construct_UClass_ARotatingActor_Statics; \
public: \
	DECLARE_CLASS(ARotatingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pr_3"), NO_API) \
	DECLARE_SERIALIZER(ARotatingActor)


#define FID_Pr_3_Source_Pr_3_RotatingActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARotatingActor(ARotatingActor&&); \
	ARotatingActor(const ARotatingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotatingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotatingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotatingActor) \
	NO_API virtual ~ARotatingActor();


#define FID_Pr_3_Source_Pr_3_RotatingActor_h_7_PROLOG
#define FID_Pr_3_Source_Pr_3_RotatingActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pr_3_Source_Pr_3_RotatingActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_Pr_3_Source_Pr_3_RotatingActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PR_3_API UClass* StaticClass<class ARotatingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pr_3_Source_Pr_3_RotatingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
