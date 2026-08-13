// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pr_3/MovingPlatformActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatformActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PR_3_API UClass* Z_Construct_UClass_AMovingPlatformActor();
PR_3_API UClass* Z_Construct_UClass_AMovingPlatformActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pr_3();
// End Cross Module References

// Begin Class AMovingPlatformActor
void AMovingPlatformActor::StaticRegisterNativesAMovingPlatformActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatformActor);
UClass* Z_Construct_UClass_AMovingPlatformActor_NoRegister()
{
	return AMovingPlatformActor::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatformActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatformActor.h" },
		{ "ModuleRelativePath", "MovingPlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "MovingPlatformActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingPlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MovingPlatformActor" },
		{ "ModuleRelativePath", "MovingPlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "MovingPlatformActor" },
		{ "ModuleRelativePath", "MovingPlatformActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatformActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatformActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatformActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatformActor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatformActor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatformActor_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatformActor, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatformActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatformActor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatformActor_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatformActor_Statics::NewProp_MaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatformActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pr_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatformActor_Statics::ClassParams = {
	&AMovingPlatformActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingPlatformActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatformActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatformActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatformActor()
{
	if (!Z_Registration_Info_UClass_AMovingPlatformActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatformActor.OuterSingleton, Z_Construct_UClass_AMovingPlatformActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatformActor.OuterSingleton;
}
template<> PR_3_API UClass* StaticClass<AMovingPlatformActor>()
{
	return AMovingPlatformActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatformActor);
AMovingPlatformActor::~AMovingPlatformActor() {}
// End Class AMovingPlatformActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pr_3_Source_Pr_3_MovingPlatformActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatformActor, AMovingPlatformActor::StaticClass, TEXT("AMovingPlatformActor"), &Z_Registration_Info_UClass_AMovingPlatformActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatformActor), 2441259970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pr_3_Source_Pr_3_MovingPlatformActor_h_1733976963(TEXT("/Script/Pr_3"),
	Z_CompiledInDeferFile_FID_Pr_3_Source_Pr_3_MovingPlatformActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pr_3_Source_Pr_3_MovingPlatformActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
