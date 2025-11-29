// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestManager.h"
#include "QuestTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuest_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EObjectiveType();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestObjective();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestReward();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnQuestAdded *********************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnQuestAdded_Parms
	{
		UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestAdded_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestAdded__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestAdded_DelegateWrapper(const FMulticastScriptDelegate& OnQuestAdded, UQuest* Quest)
{
	struct _Script_QuestSystem_eventOnQuestAdded_Parms
	{
		UQuest* Quest;
	};
	_Script_QuestSystem_eventOnQuestAdded_Parms Parms;
	Parms.Quest=Quest;
	OnQuestAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnQuestAdded ***********************************************************

// ********** Begin Delegate FOnQuestRemoved *******************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnQuestRemoved_Parms
	{
		UQuest* Quest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestRemoved_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::NewProp_Quest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestRemoved__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnQuestRemoved, UQuest* Quest)
{
	struct _Script_QuestSystem_eventOnQuestRemoved_Parms
	{
		UQuest* Quest;
	};
	_Script_QuestSystem_eventOnQuestRemoved_Parms Parms;
	Parms.Quest=Quest;
	OnQuestRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnQuestRemoved *********************************************************

// ********** Begin Delegate FOnQuestCompleted *****************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnQuestCompleted_Parms
	{
		UQuest* Quest;
		FQuestReward Reward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestCompleted_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestCompleted_Parms, Reward), Z_Construct_UScriptStruct_FQuestReward, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reward_MetaData), NewProp_Reward_MetaData) }; // 1886593046
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::NewProp_Quest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::NewProp_Reward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestCompleted__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestCompleted, UQuest* Quest, FQuestReward const& Reward)
{
	struct _Script_QuestSystem_eventOnQuestCompleted_Parms
	{
		UQuest* Quest;
		FQuestReward Reward;
	};
	_Script_QuestSystem_eventOnQuestCompleted_Parms Parms;
	Parms.Quest=Quest;
	Parms.Reward=Reward;
	OnQuestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnQuestCompleted *******************************************************

// ********** Begin Class UQuestManager Function CanStartQuest *************************************
struct Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics
{
	struct QuestManager_eventCanStartQuest_Parms
	{
		FString QuestID;
		int32 PlayerLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventCanStartQuest_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventCanStartQuest_Parms, PlayerLevel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventCanStartQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventCanStartQuest_Parms), &Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_PlayerLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "CanStartQuest", Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::QuestManager_eventCanStartQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::QuestManager_eventCanStartQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_CanStartQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_CanStartQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execCanStartQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestID);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStartQuest(Z_Param_QuestID,Z_Param_PlayerLevel);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function CanStartQuest ***************************************

// ********** Begin Class UQuestManager Function CompleteQuest *************************************
struct Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics
{
	struct QuestManager_eventCompleteQuest_Parms
	{
		FString QuestID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventCompleteQuest_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
void Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventCompleteQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventCompleteQuest_Parms), &Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "CompleteQuest", Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::QuestManager_eventCompleteQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::QuestManager_eventCompleteQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_CompleteQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execCompleteQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CompleteQuest(Z_Param_QuestID);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function CompleteQuest ***************************************

// ********** Begin Class UQuestManager Function FailQuest *****************************************
struct Z_Construct_UFunction_UQuestManager_FailQuest_Statics
{
	struct QuestManager_eventFailQuest_Parms
	{
		FString QuestID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_FailQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventFailQuest_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
void Z_Construct_UFunction_UQuestManager_FailQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventFailQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_FailQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventFailQuest_Parms), &Z_Construct_UFunction_UQuestManager_FailQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_FailQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_FailQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_FailQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_FailQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_FailQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "FailQuest", Z_Construct_UFunction_UQuestManager_FailQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_FailQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_FailQuest_Statics::QuestManager_eventFailQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_FailQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_FailQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_FailQuest_Statics::QuestManager_eventFailQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_FailQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_FailQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execFailQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FailQuest(Z_Param_QuestID);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function FailQuest *******************************************

// ********** Begin Class UQuestManager Function GetActiveQuests ***********************************
struct Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics
{
	struct QuestManager_eventGetActiveQuests_Parms
	{
		TArray<UQuest*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetActiveQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "GetActiveQuests", Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::QuestManager_eventGetActiveQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::QuestManager_eventGetActiveQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_GetActiveQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_GetActiveQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execGetActiveQuests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetActiveQuests();
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function GetActiveQuests *************************************

// ********** Begin Class UQuestManager Function GetCompletedQuests ********************************
struct Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics
{
	struct QuestManager_eventGetCompletedQuests_Parms
	{
		TArray<UQuest*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetCompletedQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "GetCompletedQuests", Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::QuestManager_eventGetCompletedQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::QuestManager_eventGetCompletedQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_GetCompletedQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_GetCompletedQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execGetCompletedQuests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UQuest*>*)Z_Param__Result=P_THIS->GetCompletedQuests();
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function GetCompletedQuests **********************************

// ********** Begin Class UQuestManager Function GetQuest ******************************************
struct Z_Construct_UFunction_UQuestManager_GetQuest_Statics
{
	struct QuestManager_eventGetQuest_Parms
	{
		FString QuestID;
		UQuest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetQuest_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventGetQuest_Parms, ReturnValue), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_GetQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_GetQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "GetQuest", Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::QuestManager_eventGetQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_GetQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_GetQuest_Statics::QuestManager_eventGetQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_GetQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_GetQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execGetQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuest**)Z_Param__Result=P_THIS->GetQuest(Z_Param_QuestID);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function GetQuest ********************************************

// ********** Begin Class UQuestManager Function OnObjectiveUpdated ********************************
struct Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics
{
	struct QuestManager_eventOnObjectiveUpdated_Parms
	{
		int32 ObjectiveIndex;
		FQuestObjective Objective;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectiveIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objective;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::NewProp_ObjectiveIndex = { "ObjectiveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventOnObjectiveUpdated_Parms, ObjectiveIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventOnObjectiveUpdated_Parms, Objective), Z_Construct_UScriptStruct_FQuestObjective, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objective_MetaData), NewProp_Objective_MetaData) }; // 4217273309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::NewProp_ObjectiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::NewProp_Objective,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "OnObjectiveUpdated", Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::QuestManager_eventOnObjectiveUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::QuestManager_eventOnObjectiveUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execOnObjectiveUpdated)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ObjectiveIndex);
	P_GET_STRUCT_REF(FQuestObjective,Z_Param_Out_Objective);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnObjectiveUpdated(Z_Param_ObjectiveIndex,Z_Param_Out_Objective);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function OnObjectiveUpdated **********************************

// ********** Begin Class UQuestManager Function OnQuestStatusChanged ******************************
struct Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics
{
	struct QuestManager_eventOnQuestStatusChanged_Parms
	{
		FString QuestID;
		EQuestStatus NewStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventOnQuestStatusChanged_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventOnQuestStatusChanged_Parms, NewStatus), Z_Construct_UEnum_QuestSystem_EQuestStatus, METADATA_PARAMS(0, nullptr) }; // 4081245521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::NewProp_NewStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::NewProp_NewStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "OnQuestStatusChanged", Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::QuestManager_eventOnQuestStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::QuestManager_eventOnQuestStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execOnQuestStatusChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestID);
	P_GET_ENUM(EQuestStatus,Z_Param_NewStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuestStatusChanged(Z_Param_QuestID,EQuestStatus(Z_Param_NewStatus));
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function OnQuestStatusChanged ********************************

// ********** Begin Class UQuestManager Function StartQuest ****************************************
struct Z_Construct_UFunction_UQuestManager_StartQuest_Statics
{
	struct QuestManager_eventStartQuest_Parms
	{
		FString QuestID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "Comment", "///////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_StartQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventStartQuest_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
void Z_Construct_UFunction_UQuestManager_StartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventStartQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_StartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventStartQuest_Parms), &Z_Construct_UFunction_UQuestManager_StartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_StartQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_StartQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_StartQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_StartQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_StartQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "StartQuest", Z_Construct_UFunction_UQuestManager_StartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_StartQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_StartQuest_Statics::QuestManager_eventStartQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_StartQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_StartQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_StartQuest_Statics::QuestManager_eventStartQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_StartQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_StartQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execStartQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartQuest(Z_Param_QuestID);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function StartQuest ******************************************

// ********** Begin Class UQuestManager Function TurnInQuest ***************************************
struct Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics
{
	struct QuestManager_eventTurnInQuest_Parms
	{
		FString QuestID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventTurnInQuest_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
void Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((QuestManager_eventTurnInQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(QuestManager_eventTurnInQuest_Parms), &Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "TurnInQuest", Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::QuestManager_eventTurnInQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::QuestManager_eventTurnInQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_TurnInQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_TurnInQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execTurnInQuest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_QuestID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TurnInQuest(Z_Param_QuestID);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function TurnInQuest *****************************************

// ********** Begin Class UQuestManager Function UpdateQuestObjective ******************************
struct Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics
{
	struct QuestManager_eventUpdateQuestObjective_Parms
	{
		EObjectiveType ObjectiveType;
		FString ObjectiveID;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest Manager" },
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectiveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectiveType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectiveID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_ObjectiveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_ObjectiveType = { "ObjectiveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventUpdateQuestObjective_Parms, ObjectiveType), Z_Construct_UEnum_QuestSystem_EObjectiveType, METADATA_PARAMS(0, nullptr) }; // 2068346062
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_ObjectiveID = { "ObjectiveID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventUpdateQuestObjective_Parms, ObjectiveID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveID_MetaData), NewProp_ObjectiveID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventUpdateQuestObjective_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_ObjectiveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_ObjectiveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_ObjectiveID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "UpdateQuestObjective", Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::QuestManager_eventUpdateQuestObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::QuestManager_eventUpdateQuestObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestManager_UpdateQuestObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_UpdateQuestObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestManager::execUpdateQuestObjective)
{
	P_GET_ENUM(EObjectiveType,Z_Param_ObjectiveType);
	P_GET_PROPERTY(FStrProperty,Z_Param_ObjectiveID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateQuestObjective(EObjectiveType(Z_Param_ObjectiveType),Z_Param_ObjectiveID,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UQuestManager Function UpdateQuestObjective ********************************

// ********** Begin Class UQuestManager ************************************************************
void UQuestManager::StaticRegisterNativesUQuestManager()
{
	UClass* Class = UQuestManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanStartQuest", &UQuestManager::execCanStartQuest },
		{ "CompleteQuest", &UQuestManager::execCompleteQuest },
		{ "FailQuest", &UQuestManager::execFailQuest },
		{ "GetActiveQuests", &UQuestManager::execGetActiveQuests },
		{ "GetCompletedQuests", &UQuestManager::execGetCompletedQuests },
		{ "GetQuest", &UQuestManager::execGetQuest },
		{ "OnObjectiveUpdated", &UQuestManager::execOnObjectiveUpdated },
		{ "OnQuestStatusChanged", &UQuestManager::execOnQuestStatusChanged },
		{ "StartQuest", &UQuestManager::execStartQuest },
		{ "TurnInQuest", &UQuestManager::execTurnInQuest },
		{ "UpdateQuestObjective", &UQuestManager::execUpdateQuestObjective },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestManager;
UClass* UQuestManager::GetPrivateStaticClass()
{
	using TClass = UQuestManager;
	if (!Z_Registration_Info_UClass_UQuestManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestManager"),
			Z_Registration_Info_UClass_UQuestManager.InnerSingleton,
			StaticRegisterNativesUQuestManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UQuestManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestManager_NoRegister()
{
	return UQuestManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestAdded_MetaData[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
		{ "ToolTip", "Delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataTable_MetaData[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQuests_MetaData[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedQuests_MetaData[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedQuests_MetaData[] = {
		{ "Category", "Quest Manager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnedInQuests_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveQuests_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveQuests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveQuests;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedQuests_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackedQuests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TrackedQuests;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompletedQuests_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CompletedQuests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CompletedQuests;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TurnedInQuests_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TurnedInQuests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestManager_CanStartQuest, "CanStartQuest" }, // 1100618750
		{ &Z_Construct_UFunction_UQuestManager_CompleteQuest, "CompleteQuest" }, // 45242670
		{ &Z_Construct_UFunction_UQuestManager_FailQuest, "FailQuest" }, // 2845479958
		{ &Z_Construct_UFunction_UQuestManager_GetActiveQuests, "GetActiveQuests" }, // 3326091847
		{ &Z_Construct_UFunction_UQuestManager_GetCompletedQuests, "GetCompletedQuests" }, // 604056080
		{ &Z_Construct_UFunction_UQuestManager_GetQuest, "GetQuest" }, // 1453113972
		{ &Z_Construct_UFunction_UQuestManager_OnObjectiveUpdated, "OnObjectiveUpdated" }, // 210468690
		{ &Z_Construct_UFunction_UQuestManager_OnQuestStatusChanged, "OnQuestStatusChanged" }, // 952897682
		{ &Z_Construct_UFunction_UQuestManager_StartQuest, "StartQuest" }, // 1200269988
		{ &Z_Construct_UFunction_UQuestManager_TurnInQuest, "TurnInQuest" }, // 2810016125
		{ &Z_Construct_UFunction_UQuestManager_UpdateQuestObjective, "UpdateQuestObjective" }, // 1085713773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestAdded = { "OnQuestAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, OnQuestAdded), Z_Construct_UDelegateFunction_QuestSystem_OnQuestAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestAdded_MetaData), NewProp_OnQuestAdded_MetaData) }; // 1129012115
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestRemoved = { "OnQuestRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, OnQuestRemoved), Z_Construct_UDelegateFunction_QuestSystem_OnQuestRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestRemoved_MetaData), NewProp_OnQuestRemoved_MetaData) }; // 4165252212
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestCompleted = { "OnQuestCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, OnQuestCompleted), Z_Construct_UDelegateFunction_QuestSystem_OnQuestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestCompleted_MetaData), NewProp_OnQuestCompleted_MetaData) }; // 2218230276
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestDataTable = { "QuestDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, QuestDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDataTable_MetaData), NewProp_QuestDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_ValueProp = { "ActiveQuests", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_Key_KeyProp = { "ActiveQuests_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests = { "ActiveQuests", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, ActiveQuests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveQuests_MetaData), NewProp_ActiveQuests_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuests_ValueProp = { "TrackedQuests", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuests_Key_KeyProp = { "TrackedQuests_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuests = { "TrackedQuests", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, TrackedQuests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedQuests_MetaData), NewProp_TrackedQuests_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests_ValueProp = { "CompletedQuests", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests_Key_KeyProp = { "CompletedQuests_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests = { "CompletedQuests", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, CompletedQuests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedQuests_MetaData), NewProp_CompletedQuests_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_TurnedInQuests_ElementProp = { "TurnedInQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_TurnedInQuests = { "TurnedInQuests", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestManager, TurnedInQuests), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnedInQuests_MetaData), NewProp_TurnedInQuests_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_TrackedQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_CompletedQuests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_TurnedInQuests_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_TurnedInQuests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestManager_Statics::ClassParams = {
	&UQuestManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestManager()
{
	if (!Z_Registration_Info_UClass_UQuestManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestManager.OuterSingleton, Z_Construct_UClass_UQuestManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManager);
UQuestManager::~UQuestManager() {}
// ********** End Class UQuestManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestManager, UQuestManager::StaticClass, TEXT("UQuestManager"), &Z_Registration_Info_UClass_UQuestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManager), 2564575854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_11077162(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestManager_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
