// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graphs/Nodes/StateNodeDB.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUEBUILDEREDITOR_StateNodeDB_generated_h
#error "StateNodeDB.generated.h already included, missing '#pragma once' in StateNodeDB.h"
#endif
#define DIALOGUEBUILDEREDITOR_StateNodeDB_generated_h

#define FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDialoguePlay);


#define FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateNodeDB(); \
	friend struct Z_Construct_UClass_UStateNodeDB_Statics; \
public: \
	DECLARE_CLASS(UStateNodeDB, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogueBuilderEditor"), DIALOGUEBUILDEREDITOR_API) \
	DECLARE_SERIALIZER(UStateNodeDB)


#define FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DIALOGUEBUILDEREDITOR_API UStateNodeDB(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStateNodeDB(UStateNodeDB&&); \
	UStateNodeDB(const UStateNodeDB&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DIALOGUEBUILDEREDITOR_API, UStateNodeDB); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateNodeDB); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateNodeDB) \
	DIALOGUEBUILDEREDITOR_API virtual ~UStateNodeDB();


#define FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_13_PROLOG
#define FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_16_INCLASS_NO_PURE_DECLS \
	FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<class UStateNodeDB>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C540_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
