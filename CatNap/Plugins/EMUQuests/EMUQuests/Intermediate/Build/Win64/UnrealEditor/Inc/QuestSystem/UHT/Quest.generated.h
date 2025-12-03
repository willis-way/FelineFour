// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Quest.h"

#ifdef QUESTSYSTEM_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define QUESTSYSTEM_Quest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EObjectiveType : uint8;
enum class EQuestStatus : uint8;
struct FQuestData;
struct FQuestObjective;

// ********** Begin Delegate FOnQuestStatusChanged *************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_9_DELEGATE \
QUESTSYSTEM_API void FOnQuestStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStatusChanged, const FString& QuestID, EQuestStatus NewStatus);


// ********** End Delegate FOnQuestStatusChanged ***************************************************

// ********** Begin Delegate FOnObjectiveUpdated ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_10_DELEGATE \
QUESTSYSTEM_API void FOnObjectiveUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnObjectiveUpdated, int32 ObjectiveIndex, FQuestObjective const& Objective);


// ********** End Delegate FOnObjectiveUpdated *****************************************************

// ********** Begin Class UQuest *******************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetObjectives); \
	DECLARE_FUNCTION(execGetQuestStatus); \
	DECLARE_FUNCTION(execGetQuestData); \
	DECLARE_FUNCTION(execGetCompletionPercentage); \
	DECLARE_FUNCTION(execAreAllObjectivesCompleted); \
	DECLARE_FUNCTION(execIsObjectiveCompleted); \
	DECLARE_FUNCTION(execUpdateObjectiveByType); \
	DECLARE_FUNCTION(execUpdateObjectiveProgress); \
	DECLARE_FUNCTION(execTurnInQuest); \
	DECLARE_FUNCTION(execFailQuest); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execStartQuest); \
	DECLARE_FUNCTION(execInitializeQuest);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuest_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuest_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuest_NoRegister) \
	DECLARE_SERIALIZER(UQuest)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuest(UQuest&&) = delete; \
	UQuest(const UQuest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuest) \
	NO_API virtual ~UQuest();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuest;

// ********** End Class UQuest *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
