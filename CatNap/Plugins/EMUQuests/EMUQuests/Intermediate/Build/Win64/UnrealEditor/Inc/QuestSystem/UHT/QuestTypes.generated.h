// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestTypes.h"

#ifdef QUESTSYSTEM_QuestTypes_generated_h
#error "QuestTypes.generated.h already included, missing '#pragma once' in QuestTypes.h"
#endif
#define QUESTSYSTEM_QuestTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FQuestObjective ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestObjective_Statics; \
	QUESTSYSTEM_API static class UScriptStruct* StaticStruct();


struct FQuestObjective;
// ********** End ScriptStruct FQuestObjective *****************************************************

// ********** Begin ScriptStruct FQuestReward ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestReward_Statics; \
	QUESTSYSTEM_API static class UScriptStruct* StaticStruct();


struct FQuestReward;
// ********** End ScriptStruct FQuestReward ********************************************************

// ********** Begin ScriptStruct FQuestData ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestData_Statics; \
	QUESTSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FQuestData;
// ********** End ScriptStruct FQuestData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h

// ********** Begin Enum EQuestStatus **************************************************************
#define FOREACH_ENUM_EQUESTSTATUS(op) \
	op(EQuestStatus::NotStarted) \
	op(EQuestStatus::InProgress) \
	op(EQuestStatus::Completed) \
	op(EQuestStatus::Failed) \
	op(EQuestStatus::TurnedIn) 

enum class EQuestStatus : uint8;
template<> struct TIsUEnumClass<EQuestStatus> { enum { Value = true }; };
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestStatus>();
// ********** End Enum EQuestStatus ****************************************************************

// ********** Begin Enum EQuestType ****************************************************************
#define FOREACH_ENUM_EQUESTTYPE(op) \
	op(EQuestType::MainQuest) \
	op(EQuestType::SideQuest) \
	op(EQuestType::DailyQuest) \
	op(EQuestType::RepeatingQuest) 

enum class EQuestType : uint8;
template<> struct TIsUEnumClass<EQuestType> { enum { Value = true }; };
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestType>();
// ********** End Enum EQuestType ******************************************************************

// ********** Begin Enum EObjectiveType ************************************************************
#define FOREACH_ENUM_EOBJECTIVETYPE(op) \
	op(EObjectiveType::KillTarget) \
	op(EObjectiveType::CollectItem) \
	op(EObjectiveType::ReachLocation) \
	op(EObjectiveType::TalkToNPC) \
	op(EObjectiveType::Custom) 

enum class EObjectiveType : uint8;
template<> struct TIsUEnumClass<EObjectiveType> { enum { Value = true }; };
template<> QUESTSYSTEM_API UEnum* StaticEnum<EObjectiveType>();
// ********** End Enum EObjectiveType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
