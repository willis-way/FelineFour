// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collectable.h"

#ifdef QUESTSYSTEM_Collectable_generated_h
#error "Collectable.generated.h already included, missing '#pragma once' in Collectable.h"
#endif
#define QUESTSYSTEM_Collectable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AQuestCharacter;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACollectable *************************************************************
#define FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execInteractWith);


QUESTSYSTEM_API UClass* Z_Construct_UClass_ACollectable_NoRegister();

#define FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_ACollectable_NoRegister(); \
public: \
	DECLARE_CLASS2(ACollectable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_ACollectable_NoRegister) \
	DECLARE_SERIALIZER(ACollectable) \
	virtual UObject* _getUObject() const override { return const_cast<ACollectable*>(this); }


#define FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACollectable(ACollectable&&) = delete; \
	ACollectable(const ACollectable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectable) \
	NO_API virtual ~ACollectable();


#define FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_14_PROLOG
#define FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACollectable;

// ********** End Class ACollectable ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rgowell_Documents_Unreal_Projects_FelineFour_CatNap_Plugins_EMUQuests_EMUQuests_Source_EMUQuests_Public_Collectable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
