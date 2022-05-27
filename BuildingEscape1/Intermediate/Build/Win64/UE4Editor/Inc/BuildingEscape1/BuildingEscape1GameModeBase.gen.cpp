// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape1/BuildingEscape1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingEscape1GameModeBase() {}
// Cross Module References
	BUILDINGESCAPE1_API UClass* Z_Construct_UClass_ABuildingEscape1GameModeBase_NoRegister();
	BUILDINGESCAPE1_API UClass* Z_Construct_UClass_ABuildingEscape1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape1();
// End Cross Module References
	void ABuildingEscape1GameModeBase::StaticRegisterNativesABuildingEscape1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscape1GameModeBase_NoRegister()
	{
		return ABuildingEscape1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BuildingEscape1GameModeBase.h" },
		{ "ModuleRelativePath", "BuildingEscape1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingEscape1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics::ClassParams = {
		&ABuildingEscape1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingEscape1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingEscape1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscape1GameModeBase, 867147103);
	template<> BUILDINGESCAPE1_API UClass* StaticClass<ABuildingEscape1GameModeBase>()
	{
		return ABuildingEscape1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscape1GameModeBase(Z_Construct_UClass_ABuildingEscape1GameModeBase, &ABuildingEscape1GameModeBase::StaticClass, TEXT("/Script/BuildingEscape1"), TEXT("ABuildingEscape1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscape1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
