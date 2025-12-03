// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quest.h"
#include "QuestTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuest() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuest();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuest_NoRegister();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EObjectiveType();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature();
QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestObjective();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnQuestStatusChanged *************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnQuestStatusChanged_Parms
	{
		FString QuestID;
		EQuestStatus NewStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestStatusChanged_Parms, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestStatusChanged_Parms, NewStatus), Z_Construct_UEnum_QuestSystem_EQuestStatus, METADATA_PARAMS(0, nullptr) }; // 4081245521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::NewProp_NewStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::NewProp_NewStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestStatusChanged__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnQuestStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnQuestStatusChanged, const FString& QuestID, EQuestStatus NewStatus)
{
	struct _Script_QuestSystem_eventOnQuestStatusChanged_Parms
	{
		FString QuestID;
		EQuestStatus NewStatus;
	};
	_Script_QuestSystem_eventOnQuestStatusChanged_Parms Parms;
	Parms.QuestID=QuestID;
	Parms.NewStatus=NewStatus;
	OnQuestStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnQuestStatusChanged ***************************************************

// ********** Begin Delegate FOnObjectiveUpdated ***************************************************
struct Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics
{
	struct _Script_QuestSystem_eventOnObjectiveUpdated_Parms
	{
		int32 ObjectiveIndex;
		FQuestObjective Objective;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objective_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectiveIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objective;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::NewProp_ObjectiveIndex = { "ObjectiveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnObjectiveUpdated_Parms, ObjectiveIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnObjectiveUpdated_Parms, Objective), Z_Construct_UScriptStruct_FQuestObjective, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objective_MetaData), NewProp_Objective_MetaData) }; // 4217273309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::NewProp_ObjectiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::NewProp_Objective,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnObjectiveUpdated__DelegateSignature", Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::_Script_QuestSystem_eventOnObjectiveUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::_Script_QuestSystem_eventOnObjectiveUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnObjectiveUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnObjectiveUpdated, int32 ObjectiveIndex, FQuestObjective const& Objective)
{
	struct _Script_QuestSystem_eventOnObjectiveUpdated_Parms
	{
		int32 ObjectiveIndex;
		FQuestObjective Objective;
	};
	_Script_QuestSystem_eventOnObjectiveUpdated_Parms Parms;
	Parms.ObjectiveIndex=ObjectiveIndex;
	Parms.Objective=Objective;
	OnObjectiveUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnObjectiveUpdated *****************************************************

// ********** Begin Class UQuest Function AreAllObjectivesCompleted ********************************
struct Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics
{
	struct Quest_eventAreAllObjectivesCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Quest_eventAreAllObjectivesCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Quest_eventAreAllObjectivesCompleted_Parms), &Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "AreAllObjectivesCompleted", Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::Quest_eventAreAllObjectivesCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::Quest_eventAreAllObjectivesCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execAreAllObjectivesCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreAllObjectivesCompleted();
	P_NATIVE_END;
}
// ********** End Class UQuest Function AreAllObjectivesCompleted **********************************

// ********** Begin Class UQuest Function CompleteQuest ********************************************
struct Z_Construct_UFunction_UQuest_CompleteQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_CompleteQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "CompleteQuest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_CompleteQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_CompleteQuest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuest_CompleteQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_CompleteQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execCompleteQuest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteQuest();
	P_NATIVE_END;
}
// ********** End Class UQuest Function CompleteQuest **********************************************

// ********** Begin Class UQuest Function FailQuest ************************************************
struct Z_Construct_UFunction_UQuest_FailQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_FailQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "FailQuest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FailQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_FailQuest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuest_FailQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_FailQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execFailQuest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FailQuest();
	P_NATIVE_END;
}
// ********** End Class UQuest Function FailQuest **************************************************

// ********** Begin Class UQuest Function GetCompletionPercentage **********************************
struct Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics
{
	struct Quest_eventGetCompletionPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetCompletionPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetCompletionPercentage", Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::Quest_eventGetCompletionPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::Quest_eventGetCompletionPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetCompletionPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetCompletionPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetCompletionPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCompletionPercentage();
	P_NATIVE_END;
}
// ********** End Class UQuest Function GetCompletionPercentage ************************************

// ********** Begin Class UQuest Function GetObjectives ********************************************
struct Z_Construct_UFunction_UQuest_GetObjectives_Statics
{
	struct Quest_eventGetObjectives_Parms
	{
		TArray<FQuestObjective> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_GetObjectives_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestObjective, METADATA_PARAMS(0, nullptr) }; // 4217273309
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuest_GetObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetObjectives_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4217273309
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetObjectives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetObjectives_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetObjectives_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetObjectives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetObjectives_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetObjectives", Z_Construct_UFunction_UQuest_GetObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetObjectives_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetObjectives_Statics::Quest_eventGetObjectives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetObjectives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetObjectives_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetObjectives_Statics::Quest_eventGetObjectives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetObjectives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetObjectives_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetObjectives)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FQuestObjective>*)Z_Param__Result=P_THIS->GetObjectives();
	P_NATIVE_END;
}
// ********** End Class UQuest Function GetObjectives **********************************************

// ********** Begin Class UQuest Function GetQuestData *********************************************
struct Z_Construct_UFunction_UQuest_GetQuestData_Statics
{
	struct Quest_eventGetQuestData_Parms
	{
		FQuestData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Getters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_GetQuestData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestData_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2465569357
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestData", Z_Construct_UFunction_UQuest_GetQuestData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestData_Statics::Quest_eventGetQuestData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestData_Statics::Quest_eventGetQuestData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetQuestData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetQuestData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuestData*)Z_Param__Result=P_THIS->GetQuestData();
	P_NATIVE_END;
}
// ********** End Class UQuest Function GetQuestData ***********************************************

// ********** Begin Class UQuest Function GetQuestStatus *******************************************
struct Z_Construct_UFunction_UQuest_GetQuestStatus_Statics
{
	struct Quest_eventGetQuestStatus_Parms
	{
		EQuestStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventGetQuestStatus_Parms, ReturnValue), Z_Construct_UEnum_QuestSystem_EQuestStatus, METADATA_PARAMS(0, nullptr) }; // 4081245521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "GetQuestStatus", Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::Quest_eventGetQuestStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::Quest_eventGetQuestStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_GetQuestStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_GetQuestStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execGetQuestStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EQuestStatus*)Z_Param__Result=P_THIS->GetQuestStatus();
	P_NATIVE_END;
}
// ********** End Class UQuest Function GetQuestStatus *********************************************

// ********** Begin Class UQuest Function InitializeQuest ******************************************
struct Z_Construct_UFunction_UQuest_InitializeQuest_Statics
{
	struct Quest_eventInitializeQuest_Parms
	{
		FQuestData QuestData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuest_InitializeQuest_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventInitializeQuest_Parms, QuestData), Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestData_MetaData), NewProp_QuestData_MetaData) }; // 2465569357
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_InitializeQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_InitializeQuest_Statics::NewProp_QuestData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_InitializeQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_InitializeQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "InitializeQuest", Z_Construct_UFunction_UQuest_InitializeQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_InitializeQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_InitializeQuest_Statics::Quest_eventInitializeQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_InitializeQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_InitializeQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_InitializeQuest_Statics::Quest_eventInitializeQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_InitializeQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_InitializeQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execInitializeQuest)
{
	P_GET_STRUCT_REF(FQuestData,Z_Param_Out_QuestData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeQuest(Z_Param_Out_QuestData);
	P_NATIVE_END;
}
// ********** End Class UQuest Function InitializeQuest ********************************************

// ********** Begin Class UQuest Function IsObjectiveCompleted *************************************
struct Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics
{
	struct Quest_eventIsObjectiveCompleted_Parms
	{
		int32 ObjectiveIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectiveIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::NewProp_ObjectiveIndex = { "ObjectiveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventIsObjectiveCompleted_Parms, ObjectiveIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Quest_eventIsObjectiveCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Quest_eventIsObjectiveCompleted_Parms), &Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::NewProp_ObjectiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "IsObjectiveCompleted", Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::Quest_eventIsObjectiveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::Quest_eventIsObjectiveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_IsObjectiveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_IsObjectiveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execIsObjectiveCompleted)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ObjectiveIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsObjectiveCompleted(Z_Param_ObjectiveIndex);
	P_NATIVE_END;
}
// ********** End Class UQuest Function IsObjectiveCompleted ***************************************

// ********** Begin Class UQuest Function StartQuest ***********************************************
struct Z_Construct_UFunction_UQuest_StartQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_StartQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "StartQuest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_StartQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_StartQuest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuest_StartQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_StartQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execStartQuest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartQuest();
	P_NATIVE_END;
}
// ********** End Class UQuest Function StartQuest *************************************************

// ********** Begin Class UQuest Function TurnInQuest **********************************************
struct Z_Construct_UFunction_UQuest_TurnInQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_TurnInQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "TurnInQuest", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_TurnInQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_TurnInQuest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuest_TurnInQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_TurnInQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execTurnInQuest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnInQuest();
	P_NATIVE_END;
}
// ********** End Class UQuest Function TurnInQuest ************************************************

// ********** Begin Class UQuest Function UpdateObjectiveByType ************************************
struct Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics
{
	struct Quest_eventUpdateObjectiveByType_Parms
	{
		EObjectiveType ObjectiveType;
		FString TargetID;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectiveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectiveType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_ObjectiveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_ObjectiveType = { "ObjectiveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventUpdateObjectiveByType_Parms, ObjectiveType), Z_Construct_UEnum_QuestSystem_EObjectiveType, METADATA_PARAMS(0, nullptr) }; // 2068346062
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventUpdateObjectiveByType_Parms, TargetID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetID_MetaData), NewProp_TargetID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventUpdateObjectiveByType_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_ObjectiveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_ObjectiveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_TargetID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "UpdateObjectiveByType", Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::Quest_eventUpdateObjectiveByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::Quest_eventUpdateObjectiveByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_UpdateObjectiveByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_UpdateObjectiveByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execUpdateObjectiveByType)
{
	P_GET_ENUM(EObjectiveType,Z_Param_ObjectiveType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateObjectiveByType(EObjectiveType(Z_Param_ObjectiveType),Z_Param_TargetID,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UQuest Function UpdateObjectiveByType **************************************

// ********** Begin Class UQuest Function UpdateObjectiveProgress **********************************
struct Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics
{
	struct Quest_eventUpdateObjectiveProgress_Parms
	{
		int32 ObjectiveIndex;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectiveIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::NewProp_ObjectiveIndex = { "ObjectiveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventUpdateObjectiveProgress_Parms, ObjectiveIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Quest_eventUpdateObjectiveProgress_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::NewProp_ObjectiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "UpdateObjectiveProgress", Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::Quest_eventUpdateObjectiveProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::Quest_eventUpdateObjectiveProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuest_UpdateObjectiveProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuest_UpdateObjectiveProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuest::execUpdateObjectiveProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ObjectiveIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateObjectiveProgress(Z_Param_ObjectiveIndex,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UQuest Function UpdateObjectiveProgress ************************************

// ********** Begin Class UQuest *******************************************************************
void UQuest::StaticRegisterNativesUQuest()
{
	UClass* Class = UQuest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreAllObjectivesCompleted", &UQuest::execAreAllObjectivesCompleted },
		{ "CompleteQuest", &UQuest::execCompleteQuest },
		{ "FailQuest", &UQuest::execFailQuest },
		{ "GetCompletionPercentage", &UQuest::execGetCompletionPercentage },
		{ "GetObjectives", &UQuest::execGetObjectives },
		{ "GetQuestData", &UQuest::execGetQuestData },
		{ "GetQuestStatus", &UQuest::execGetQuestStatus },
		{ "InitializeQuest", &UQuest::execInitializeQuest },
		{ "IsObjectiveCompleted", &UQuest::execIsObjectiveCompleted },
		{ "StartQuest", &UQuest::execStartQuest },
		{ "TurnInQuest", &UQuest::execTurnInQuest },
		{ "UpdateObjectiveByType", &UQuest::execUpdateObjectiveByType },
		{ "UpdateObjectiveProgress", &UQuest::execUpdateObjectiveProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuest;
UClass* UQuest::GetPrivateStaticClass()
{
	using TClass = UQuest;
	if (!Z_Registration_Info_UClass_UQuest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Quest"),
			Z_Registration_Info_UClass_UQuest.InnerSingleton,
			StaticRegisterNativesUQuest,
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
	return Z_Registration_Info_UClass_UQuest.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuest_NoRegister()
{
	return UQuest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Quest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestStatusChanged_MetaData[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/Quest.h" },
		{ "ToolTip", "Delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestStatusChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveUpdated;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuestStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuest_AreAllObjectivesCompleted, "AreAllObjectivesCompleted" }, // 2499004752
		{ &Z_Construct_UFunction_UQuest_CompleteQuest, "CompleteQuest" }, // 3856365782
		{ &Z_Construct_UFunction_UQuest_FailQuest, "FailQuest" }, // 3788857581
		{ &Z_Construct_UFunction_UQuest_GetCompletionPercentage, "GetCompletionPercentage" }, // 330538397
		{ &Z_Construct_UFunction_UQuest_GetObjectives, "GetObjectives" }, // 1708038219
		{ &Z_Construct_UFunction_UQuest_GetQuestData, "GetQuestData" }, // 776594740
		{ &Z_Construct_UFunction_UQuest_GetQuestStatus, "GetQuestStatus" }, // 417504607
		{ &Z_Construct_UFunction_UQuest_InitializeQuest, "InitializeQuest" }, // 3972482384
		{ &Z_Construct_UFunction_UQuest_IsObjectiveCompleted, "IsObjectiveCompleted" }, // 1816702562
		{ &Z_Construct_UFunction_UQuest_StartQuest, "StartQuest" }, // 2053486180
		{ &Z_Construct_UFunction_UQuest_TurnInQuest, "TurnInQuest" }, // 773196725
		{ &Z_Construct_UFunction_UQuest_UpdateObjectiveByType, "UpdateObjectiveByType" }, // 2683439126
		{ &Z_Construct_UFunction_UQuest_UpdateObjectiveProgress, "UpdateObjectiveProgress" }, // 177807529
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OnQuestStatusChanged = { "OnQuestStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OnQuestStatusChanged), Z_Construct_UDelegateFunction_QuestSystem_OnQuestStatusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestStatusChanged_MetaData), NewProp_OnQuestStatusChanged_MetaData) }; // 256566318
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_OnObjectiveUpdated = { "OnObjectiveUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, OnObjectiveUpdated), Z_Construct_UDelegateFunction_QuestSystem_OnObjectiveUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObjectiveUpdated_MetaData), NewProp_OnObjectiveUpdated_MetaData) }; // 2590518191
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestData = { "QuestData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestData), Z_Construct_UScriptStruct_FQuestData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestData_MetaData), NewProp_QuestData_MetaData) }; // 2465569357
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStatus = { "QuestStatus", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuest, QuestStatus), Z_Construct_UEnum_QuestSystem_EQuestStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestStatus_MetaData), NewProp_QuestStatus_MetaData) }; // 4081245521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OnQuestStatusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_OnObjectiveUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuest_Statics::ClassParams = {
	&UQuest::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuest()
{
	if (!Z_Registration_Info_UClass_UQuest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuest.OuterSingleton, Z_Construct_UClass_UQuest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuest.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
UQuest::~UQuest() {}
// ********** End Class UQuest *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuest, UQuest::StaticClass, TEXT("UQuest"), &Z_Registration_Info_UClass_UQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuest), 1048603812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h__Script_QuestSystem_3488487460(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
