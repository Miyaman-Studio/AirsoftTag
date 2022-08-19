// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AirsoftTag/AirsoftTagGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirsoftTagGameModeBase() {}
// Cross Module References
	AIRSOFTTAG_API UClass* Z_Construct_UClass_AAirsoftTagGameModeBase_NoRegister();
	AIRSOFTTAG_API UClass* Z_Construct_UClass_AAirsoftTagGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AirsoftTag();
// End Cross Module References
	void AAirsoftTagGameModeBase::StaticRegisterNativesAAirsoftTagGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAirsoftTagGameModeBase);
	UClass* Z_Construct_UClass_AAirsoftTagGameModeBase_NoRegister()
	{
		return AAirsoftTagGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAirsoftTagGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirsoftTagGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AirsoftTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirsoftTagGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AirsoftTagGameModeBase.h" },
		{ "ModuleRelativePath", "AirsoftTagGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirsoftTagGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirsoftTagGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAirsoftTagGameModeBase_Statics::ClassParams = {
		&AAirsoftTagGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAirsoftTagGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirsoftTagGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirsoftTagGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAirsoftTagGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAirsoftTagGameModeBase.OuterSingleton, Z_Construct_UClass_AAirsoftTagGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAirsoftTagGameModeBase.OuterSingleton;
	}
	template<> AIRSOFTTAG_API UClass* StaticClass<AAirsoftTagGameModeBase>()
	{
		return AAirsoftTagGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirsoftTagGameModeBase);
	struct Z_CompiledInDeferFile_FID_AirsoftTag_Source_AirsoftTag_AirsoftTagGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AirsoftTag_Source_AirsoftTag_AirsoftTagGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAirsoftTagGameModeBase, AAirsoftTagGameModeBase::StaticClass, TEXT("AAirsoftTagGameModeBase"), &Z_Registration_Info_UClass_AAirsoftTagGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAirsoftTagGameModeBase), 2639565068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AirsoftTag_Source_AirsoftTag_AirsoftTagGameModeBase_h_1770583559(TEXT("/Script/AirsoftTag"),
		Z_CompiledInDeferFile_FID_AirsoftTag_Source_AirsoftTag_AirsoftTagGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AirsoftTag_Source_AirsoftTag_AirsoftTagGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
