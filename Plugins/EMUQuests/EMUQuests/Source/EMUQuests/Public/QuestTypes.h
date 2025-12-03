// EMU Intro to UE5.Thomas

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestTypes.generated.h"

UENUM(BlueprintType)
enum class EQuestStatus : uint8
{
    NotStarted      UMETA(DisplayName = "Not Started"),
    InProgress      UMETA(DisplayName = "In Progress"),
    Completed       UMETA(DisplayName = "Completed"),
    Failed          UMETA(DisplayName = "Failed"),
    TurnedIn        UMETA(DisplayName = "Turned In")
};

UENUM(BlueprintType)
enum class EQuestType : uint8
{
    MainQuest       UMETA(DisplayName = "Main Quest"),
    SideQuest       UMETA(DisplayName = "Side Quest"),
    DailyQuest      UMETA(DisplayName = "Daily Quest"),
    RepeatingQuest  UMETA(DisplayName = "Repeating Quest")
};

UENUM(BlueprintType)
enum class EObjectiveType : uint8
{
    KillTarget      UMETA(DisplayName = "Kill Target"),
    CollectItem     UMETA(DisplayName = "Collect Item"),
    ReachLocation   UMETA(DisplayName = "Reach Location"),
    TalkToNPC       UMETA(DisplayName = "Talk to NPC"),
    Custom          UMETA(DisplayName = "Custom")
};

USTRUCT(BlueprintType)
struct FQuestObjective
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objective")
    FText ObjectiveDescription;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objective")
    EObjectiveType ObjectiveType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objective")
    FString TargetID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objective")
    int32 RequiredCount;

    UPROPERTY(BlueprintReadWrite, Category = "Objective")
    int32 CurrentCount;

    UPROPERTY(BlueprintReadWrite, Category = "Objective")
    bool bCompleted;

    FQuestObjective()
    {
        ObjectiveType = EObjectiveType::Custom;
        RequiredCount = 1;
        CurrentCount = 0;
        bCompleted = false;
    }
};

USTRUCT(BlueprintType)
struct FQuestReward
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward")
    int32 ExperiencePoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward")
    int32 Gold;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward")
    TArray<FString> ItemIDs;

    FQuestReward()
    {
        ExperiencePoints = 0;
        Gold = 0;
    }
};

USTRUCT(BlueprintType)
struct FQuestData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    FString QuestID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    FText QuestName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    FText QuestDescription;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    EQuestType QuestType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    int32 RequiredLevel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    TArray<FString> PrerequisiteQuests;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    TArray<FQuestObjective> Objectives;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    FQuestReward Reward;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    bool bAutoComplete;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
    FString QuestGiverID;

    FQuestData()
    {
        QuestType = EQuestType::SideQuest;
        RequiredLevel = 1;
        bAutoComplete = false;
    }
};