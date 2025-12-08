// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestGiver.h"

#ifdef QUESTSYSTEM_QuestGiver_generated_h
#error "QuestGiver.generated.h already included, missing '#pragma once' in QuestGiver.h"
#endif
#define QUESTSYSTEM_QuestGiver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AQuestCharacter;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AQuestGiver **************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_CALLBACK_WRAPPERS
QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestGiver_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestGiver(); \
	friend struct Z_Construct_UClass_AQuestGiver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestGiver_NoRegister(); \
public: \
	DECLARE_CLASS2(AQuestGiver, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_AQuestGiver_NoRegister) \
	DECLARE_SERIALIZER(AQuestGiver) \
	virtual UObject* _getUObject() const override { return const_cast<AQuestGiver*>(this); }


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AQuestGiver(AQuestGiver&&) = delete; \
	AQuestGiver(const AQuestGiver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestGiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestGiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestGiver) \
	NO_API virtual ~AQuestGiver();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_13_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AQuestGiver;

// ********** End Class AQuestGiver ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestGiver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
