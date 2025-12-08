// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestManager.h"

#ifdef QUESTSYSTEM_QuestManager_generated_h
#error "QuestManager.generated.h already included, missing '#pragma once' in QuestManager.h"
#endif
#define QUESTSYSTEM_QuestManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UQuest;
enum class EObjectiveType : uint8;
enum class EQuestStatus : uint8;
struct FQuestObjective;
struct FQuestReward;

// ********** Begin Delegate FOnQuestAdded *********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_11_DELEGATE \
QUESTSYSTEM_API void FOnQuestAdded_DelegateWrapper(const FMulticastScriptDelegate& OnQuestAdded, UQuest* Quest);


// ********** End Delegate FOnQuestAdded ***********************************************************

// ********** Begin Delegate FOnQuestRemoved *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_12_DELEGATE \
QUESTSYSTEM_API void FOnQuestRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnQuestRemoved, UQuest* Quest);


// ********** End Delegate FOnQuestRemoved *********************************************************

// ********** Begin Delegate FOnQuestCompleted *****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_13_DELEGATE \
QUESTSYSTEM_API void FOnQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestCompleted, UQuest* Quest, FQuestReward const& Reward);


// ********** End Delegate FOnQuestCompleted *******************************************************

// ********** Begin Class UQuestManager ************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnObjectiveUpdated); \
	DECLARE_FUNCTION(execOnQuestStatusChanged); \
	DECLARE_FUNCTION(execCanStartQuest); \
	DECLARE_FUNCTION(execGetCompletedQuests); \
	DECLARE_FUNCTION(execGetActiveQuests); \
	DECLARE_FUNCTION(execGetQuest); \
	DECLARE_FUNCTION(execUpdateQuestObjective); \
	DECLARE_FUNCTION(execTurnInQuest); \
	DECLARE_FUNCTION(execFailQuest); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execStartQuest);


QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManager(); \
	friend struct Z_Construct_UClass_UQuestManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestManager_NoRegister) \
	DECLARE_SERIALIZER(UQuestManager)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestManager(UQuestManager&&) = delete; \
	UQuestManager(const UQuestManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestManager) \
	NO_API virtual ~UQuestManager();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_15_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestManager;

// ********** End Class UQuestManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
