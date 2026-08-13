// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PR_3_MyPlayerPawn_generated_h
#error "MyPlayerPawn.generated.h already included, missing '#pragma once' in MyPlayerPawn.h"
#endif
#define PR_3_MyPlayerPawn_generated_h

#define FID_Pr_3_Source_Pr_3_MyPlayerPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerPawn(); \
	friend struct Z_Construct_UClass_AMyPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pr_3"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerPawn)


#define FID_Pr_3_Source_Pr_3_MyPlayerPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayerPawn(AMyPlayerPawn&&); \
	AMyPlayerPawn(const AMyPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerPawn) \
	NO_API virtual ~AMyPlayerPawn();


#define FID_Pr_3_Source_Pr_3_MyPlayerPawn_h_15_PROLOG
#define FID_Pr_3_Source_Pr_3_MyPlayerPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pr_3_Source_Pr_3_MyPlayerPawn_h_18_INCLASS_NO_PURE_DECLS \
	FID_Pr_3_Source_Pr_3_MyPlayerPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PR_3_API UClass* StaticClass<class AMyPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pr_3_Source_Pr_3_MyPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
