// EMU Intro to UE5. Thomas

#pragma once

#include "CoreMinimal.h"
#include "QuestTypes.h"
#include "Quest.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestStatusChanged, const FString&, QuestID, EQuestStatus, NewStatus);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectiveUpdated, int32, ObjectiveIndex, const FQuestObjective&, Objective);

UCLASS(BlueprintType, Blueprintable)
class QUESTSYSTEM_API UQuest : public UObject
{
    GENERATED_BODY()

public:
    UQuest();

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void InitializeQuest(const FQuestData& QuestData);

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void StartQuest();

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void CompleteQuest();

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void FailQuest();

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void TurnInQuest();

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void UpdateObjectiveProgress(int32 ObjectiveIndex, int32 Amount = 1);

    UFUNCTION(BlueprintCallable, Category = "Quest")
    void UpdateObjectiveByType(EObjectiveType ObjectiveType, const FString& TargetID, int32 Amount = 1);

    UFUNCTION(BlueprintPure, Category = "Quest")
    bool IsObjectiveCompleted(int32 ObjectiveIndex) const;

    UFUNCTION(BlueprintPure, Category = "Quest")
    bool AreAllObjectivesCompleted() const;

    UFUNCTION(BlueprintPure, Category = "Quest")
    float GetCompletionPercentage() const;

    // Getters
    UFUNCTION(BlueprintPure, Category = "Quest")
    const FQuestData& GetQuestData() const { return QuestData; }

    UFUNCTION(BlueprintPure, Category = "Quest")
    EQuestStatus GetQuestStatus() const { return QuestStatus; }

    UFUNCTION(BlueprintPure, Category = "Quest")
    const TArray<FQuestObjective>& GetObjectives() const { return QuestData.Objectives; }

    // Delegates
    UPROPERTY(BlueprintAssignable)
    FOnQuestStatusChanged OnQuestStatusChanged;

    UPROPERTY(BlueprintAssignable)
    FOnObjectiveUpdated OnObjectiveUpdated;

private:
    UPROPERTY()
    FQuestData QuestData;

    UPROPERTY()
    EQuestStatus QuestStatus;

    void CheckQuestCompletion();
    void SetQuestStatus(EQuestStatus NewStatus);
};