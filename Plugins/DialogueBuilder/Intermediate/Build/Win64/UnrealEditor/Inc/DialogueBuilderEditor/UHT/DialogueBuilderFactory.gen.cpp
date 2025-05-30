// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/DialogueBuilderFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderFactory() {}

// Begin Cross Module References
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderFactory();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References

// Begin Class UDialogueBuilderFactory
void UDialogueBuilderFactory::StaticRegisterNativesUDialogueBuilderFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderFactory);
UClass* Z_Construct_UClass_UDialogueBuilderFactory_NoRegister()
{
	return UDialogueBuilderFactory::StaticClass();
}
struct Z_Construct_UClass_UDialogueBuilderFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueBuilderFactory.h" },
		{ "ModuleRelativePath", "Public/DialogueBuilderFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBuilderFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueBuilderFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderFactory_Statics::ClassParams = {
	&UDialogueBuilderFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBuilderFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBuilderFactory()
{
	if (!Z_Registration_Info_UClass_UDialogueBuilderFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderFactory.OuterSingleton, Z_Construct_UClass_UDialogueBuilderFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBuilderFactory.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UDialogueBuilderFactory>()
{
	return UDialogueBuilderFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderFactory);
UDialogueBuilderFactory::~UDialogueBuilderFactory() {}
// End Class UDialogueBuilderFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_DialogueBuilderFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderFactory, UDialogueBuilderFactory::StaticClass, TEXT("UDialogueBuilderFactory"), &Z_Registration_Info_UClass_UDialogueBuilderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderFactory), 1496646690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_DialogueBuilderFactory_h_232067202(TEXT("/Script/DialogueBuilderEditor"),
	Z_CompiledInDeferFile_FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_DialogueBuilderFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_DialogueBuilderFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
