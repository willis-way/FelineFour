// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestTypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EObjectiveType();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestType();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestObjective();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestReward();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EQuestStatus **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestStatus;
static UEnum* EQuestStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestSystem_EQuestStatus, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("EQuestStatus"));
	}
	return Z_Registration_Info_UEnum_EQuestStatus.OuterSingleton;
}
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestStatus>()
{
	return EQuestStatus_StaticEnum();
}
struct Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "EQuestStatus::Completed" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EQuestStatus::Failed" },
		{ "InProgress.DisplayName", "In Progress" },
		{ "InProgress.Name", "EQuestStatus::InProgress" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
		{ "NotStarted.DisplayName", "Not Started" },
		{ "NotStarted.Name", "EQuestStatus::NotStarted" },
		{ "TurnedIn.DisplayName", "Turned In" },
		{ "TurnedIn.Name", "EQuestStatus::TurnedIn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestStatus::NotStarted", (int64)EQuestStatus::NotStarted },
		{ "EQuestStatus::InProgress", (int64)EQuestStatus::InProgress },
		{ "EQuestStatus::Completed", (int64)EQuestStatus::Completed },
		{ "EQuestStatus::Failed", (int64)EQuestStatus::Failed },
		{ "EQuestStatus::TurnedIn", (int64)EQuestStatus::TurnedIn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	"EQuestStatus",
	"EQuestStatus",
	Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus()
{
	if (!Z_Registration_Info_UEnum_EQuestStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestStatus.InnerSingleton, Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestStatus.InnerSingleton;
}
// ********** End Enum EQuestStatus ****************************************************************

// ********** Begin Enum EQuestType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestType;
static UEnum* EQuestType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestSystem_EQuestType, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("EQuestType"));
	}
	return Z_Registration_Info_UEnum_EQuestType.OuterSingleton;
}
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestType>()
{
	return EQuestType_StaticEnum();
}
struct Z_Construct_UEnum_QuestSystem_EQuestType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DailyQuest.DisplayName", "Daily Quest" },
		{ "DailyQuest.Name", "EQuestType::DailyQuest" },
		{ "MainQuest.DisplayName", "Main Quest" },
		{ "MainQuest.Name", "EQuestType::MainQuest" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
		{ "RepeatingQuest.DisplayName", "Repeating Quest" },
		{ "RepeatingQuest.Name", "EQuestType::RepeatingQuest" },
		{ "SideQuest.DisplayName", "Side Quest" },
		{ "SideQuest.Name", "EQuestType::SideQuest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestType::MainQuest", (int64)EQuestType::MainQuest },
		{ "EQuestType::SideQuest", (int64)EQuestType::SideQuest },
		{ "EQuestType::DailyQuest", (int64)EQuestType::DailyQuest },
		{ "EQuestType::RepeatingQuest", (int64)EQuestType::RepeatingQuest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestSystem_EQuestType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	"EQuestType",
	"EQuestType",
	Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_QuestSystem_EQuestType()
{
	if (!Z_Registration_Info_UEnum_EQuestType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestType.InnerSingleton, Z_Construct_UEnum_QuestSystem_EQuestType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestType.InnerSingleton;
}
// ********** End Enum EQuestType ******************************************************************

// ********** Begin Enum EObjectiveType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectiveType;
static UEnum* EObjectiveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectiveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectiveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestSystem_EObjectiveType, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("EObjectiveType"));
	}
	return Z_Registration_Info_UEnum_EObjectiveType.OuterSingleton;
}
template<> QUESTSYSTEM_API UEnum* StaticEnum<EObjectiveType>()
{
	return EObjectiveType_StaticEnum();
}
struct Z_Construct_UEnum_QuestSystem_EObjectiveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CollectItem.DisplayName", "Collect Item" },
		{ "CollectItem.Name", "EObjectiveType::CollectItem" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EObjectiveType::Custom" },
		{ "KillTarget.DisplayName", "Kill Target" },
		{ "KillTarget.Name", "EObjectiveType::KillTarget" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
		{ "ReachLocation.DisplayName", "Reach Location" },
		{ "ReachLocation.Name", "EObjectiveType::ReachLocation" },
		{ "TalkToNPC.DisplayName", "Talk to NPC" },
		{ "TalkToNPC.Name", "EObjectiveType::TalkToNPC" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectiveType::KillTarget", (int64)EObjectiveType::KillTarget },
		{ "EObjectiveType::CollectItem", (int64)EObjectiveType::CollectItem },
		{ "EObjectiveType::ReachLocation", (int64)EObjectiveType::ReachLocation },
		{ "EObjectiveType::TalkToNPC", (int64)EObjectiveType::TalkToNPC },
		{ "EObjectiveType::Custom", (int64)EObjectiveType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestSystem_EObjectiveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	"EObjectiveType",
	"EObjectiveType",
	Z_Construct_UEnum_QuestSystem_EObjectiveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EObjectiveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EObjectiveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_QuestSystem_EObjectiveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_QuestSystem_EObjectiveType()
{
	if (!Z_Registration_Info_UEnum_EObjectiveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectiveType.InnerSingleton, Z_Construct_UEnum_QuestSystem_EObjectiveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectiveType.InnerSingleton;
}
// ********** End Enum EObjectiveType **************************************************************

// ********** Begin ScriptStruct FQuestObjective ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestObjective;
class UScriptStruct* FQuestObjective::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestObjective.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestObjective.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestObjective, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestObjective"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestObjective.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestObjective_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveDescription_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveType_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetID_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredCount_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCount_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompleted_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectiveDescription;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectiveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectiveType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
	static void NewProp_bCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestObjective>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_ObjectiveDescription = { "ObjectiveDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjective, ObjectiveDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveDescription_MetaData), NewProp_ObjectiveDescription_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_ObjectiveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_ObjectiveType = { "ObjectiveType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjective, ObjectiveType), Z_Construct_UEnum_QuestSystem_EObjectiveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveType_MetaData), NewProp_ObjectiveType_MetaData) }; // 2068346062
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjective, TargetID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetID_MetaData), NewProp_TargetID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_RequiredCount = { "RequiredCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjective, RequiredCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredCount_MetaData), NewProp_RequiredCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjective, CurrentCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCount_MetaData), NewProp_CurrentCount_MetaData) };
void Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_bCompleted_SetBit(void* Obj)
{
	((FQuestObjective*)Obj)->bCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestObjective), &Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompleted_MetaData), NewProp_bCompleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_ObjectiveDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_ObjectiveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_ObjectiveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_TargetID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_RequiredCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_CurrentCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjective_Statics::NewProp_bCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestObjective_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	&NewStructOps,
	"QuestObjective",
	Z_Construct_UScriptStruct_FQuestObjective_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjective_Statics::PropPointers),
	sizeof(FQuestObjective),
	alignof(FQuestObjective),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjective_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestObjective_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestObjective()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestObjective.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestObjective.InnerSingleton, Z_Construct_UScriptStruct_FQuestObjective_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestObjective.InnerSingleton;
}
// ********** End ScriptStruct FQuestObjective *****************************************************

// ********** Begin ScriptStruct FQuestReward ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestReward;
class UScriptStruct* FQuestReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestReward, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestReward"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestReward.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestReward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperiencePoints_MetaData[] = {
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[] = {
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIDs_MetaData[] = {
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExperiencePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestReward>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_ExperiencePoints = { "ExperiencePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestReward, ExperiencePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperiencePoints_MetaData), NewProp_ExperiencePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestReward, Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gold_MetaData), NewProp_Gold_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_ItemIDs_Inner = { "ItemIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_ItemIDs = { "ItemIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestReward, ItemIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIDs_MetaData), NewProp_ItemIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_ExperiencePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_ItemIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestReward_Statics::NewProp_ItemIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestReward_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	&NewStructOps,
	"QuestReward",
	Z_Construct_UScriptStruct_FQuestReward_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestReward_Statics::PropPointers),
	sizeof(FQuestReward),
	alignof(FQuestReward),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestReward_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestReward()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestReward.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestReward.InnerSingleton, Z_Construct_UScriptStruct_FQuestReward_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestReward.InnerSingleton;
}
// ********** End ScriptStruct FQuestReward ********************************************************

// ********** Begin ScriptStruct FQuestData ********************************************************
static_assert(std::is_polymorphic<FQuestData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestData;
class UScriptStruct* FQuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestData, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestData"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestType_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredLevel_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteQuests_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoComplete_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestGiverID_MetaData[] = {
		{ "Category", "QuestData" },
		{ "ModuleRelativePath", "Public/QuestTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestDescription;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuestType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrerequisiteQuests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrerequisiteQuests;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objectives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objectives;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reward;
	static void NewProp_bAutoComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoComplete;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestGiverID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescription_MetaData), NewProp_QuestDescription_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestType = { "QuestType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestType), Z_Construct_UEnum_QuestSystem_EQuestType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestType_MetaData), NewProp_QuestType_MetaData) }; // 3949749144
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_RequiredLevel = { "RequiredLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, RequiredLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredLevel_MetaData), NewProp_RequiredLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_PrerequisiteQuests_Inner = { "PrerequisiteQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_PrerequisiteQuests = { "PrerequisiteQuests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, PrerequisiteQuests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerequisiteQuests_MetaData), NewProp_PrerequisiteQuests_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestObjective, METADATA_PARAMS(0, nullptr) }; // 4217273309
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objectives_MetaData), NewProp_Objectives_MetaData) }; // 4217273309
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, Reward), Z_Construct_UScriptStruct_FQuestReward, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reward_MetaData), NewProp_Reward_MetaData) }; // 1886593046
void Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bAutoComplete_SetBit(void* Obj)
{
	((FQuestData*)Obj)->bAutoComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bAutoComplete = { "bAutoComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestData), &Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bAutoComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoComplete_MetaData), NewProp_bAutoComplete_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestGiverID = { "QuestGiverID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestData, QuestGiverID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestGiverID_MetaData), NewProp_QuestGiverID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_RequiredLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_PrerequisiteQuests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_PrerequisiteQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Objectives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_Reward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_bAutoComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestData_Statics::NewProp_QuestGiverID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"QuestData",
	Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::PropPointers),
	sizeof(FQuestData),
	alignof(FQuestData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestData()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton, Z_Construct_UScriptStruct_FQuestData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestData.InnerSingleton;
}
// ********** End ScriptStruct FQuestData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h__Script_QuestSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuestStatus_StaticEnum, TEXT("EQuestStatus"), &Z_Registration_Info_UEnum_EQuestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4081245521U) },
		{ EQuestType_StaticEnum, TEXT("EQuestType"), &Z_Registration_Info_UEnum_EQuestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3949749144U) },
		{ EObjectiveType_StaticEnum, TEXT("EObjectiveType"), &Z_Registration_Info_UEnum_EObjectiveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2068346062U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestObjective::StaticStruct, Z_Construct_UScriptStruct_FQuestObjective_Statics::NewStructOps, TEXT("QuestObjective"), &Z_Registration_Info_UScriptStruct_FQuestObjective, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestObjective), 4217273309U) },
		{ FQuestReward::StaticStruct, Z_Construct_UScriptStruct_FQuestReward_Statics::NewStructOps, TEXT("QuestReward"), &Z_Registration_Info_UScriptStruct_FQuestReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestReward), 1886593046U) },
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_FQuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 2465569357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h__Script_QuestSystem_55981508(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h__Script_QuestSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h__Script_QuestSystem_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h__Script_QuestSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTypes_h__Script_QuestSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
