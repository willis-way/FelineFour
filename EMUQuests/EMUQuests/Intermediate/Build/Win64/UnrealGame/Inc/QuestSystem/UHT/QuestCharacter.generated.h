// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestCharacter.h"

#ifdef QUESTSYSTEM_QuestCharacter_generated_h
#error "QuestCharacter.generated.h already included, missing '#pragma once' in QuestCharacter.h"
#endif
#define QUESTSYSTEM_QuestCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AQuestCharacter **********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestCharacter_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestCharacter(); \
	friend struct Z_Construct_UClass_AQuestCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AQuestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_AQuestCharacter_NoRegister) \
	DECLARE_SERIALIZER(AQuestCharacter)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestCharacter_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AQuestCharacter(AQuestCharacter&&) = delete; \
	AQuestCharacter(const AQuestCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestCharacter) \
	NO_API virtual ~AQuestCharacter();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestCharacter_h_19_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AQuestCharacter;

// ********** End Class AQuestCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_QuestSystem_Source_QuestSystem_Public_QuestCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
