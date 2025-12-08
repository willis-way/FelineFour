// EMU Intro to UE5 Thomas

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Quest.h"
#include "QuestTypes.h"
#include "QuestManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestAdded, UQuest*, Quest);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestRemoved, UQuest*, Quest);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestCompleted, UQuest*, Quest, const FQuestReward&, Reward);

UCLASS(ClassGroup=(Custom), BlueprintType, Blueprintable, meta=(BlueprintSpawnableComponent))
class QUESTSYSTEM_API UQuestManager : public UActorComponent
{
    GENERATED_BODY()

public:
    UQuestManager();

protected:
    virtual void BeginPlay() override;

public:
	///////////////////////////////////////////////////////
    UFUNCTION(BlueprintCallable, Category = "Quest Manager")
    bool StartQuest(const FString& QuestID);

    UFUNCTION(BlueprintCallable, Category = "Quest Manager")
    bool CompleteQuest(const FString& QuestID);

    UFUNCTION(BlueprintCallable, Category = "Quest Manager")
    bool FailQuest(const FString& QuestID);

    UFUNCTION(BlueprintCallable, Category = "Quest Manager")
    bool TurnInQuest(const FString& QuestID);

    UFUNCTION(BlueprintCallable, Category = "Quest Manager")
    void UpdateQuestObjective(EObjectiveType ObjectiveType, const FString& ObjectiveID, int32 Amount = 1);

    UFUNCTION(BlueprintCallable, Category = "Quest Manager")
    UQuest* GetQuest(const FString& QuestID);

    UFUNCTION(BlueprintPure, Category = "Quest Manager")
    TArray<UQuest*> GetActiveQuests() const;

    UFUNCTION(BlueprintPure, Category = "Quest Manager")
    TArray<UQuest*> GetCompletedQuests() const;

    UFUNCTION(BlueprintPure, Category = "Quest Manager")
    bool CanStartQuest(const FString& QuestID, int32 PlayerLevel) const;

    // Delegates
    UPROPERTY(BlueprintAssignable)
    FOnQuestAdded OnQuestAdded;

    UPROPERTY(BlueprintAssignable)
    FOnQuestRemoved OnQuestRemoved;

    UPROPERTY(BlueprintAssignable)
    FOnQuestCompleted OnQuestCompleted;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Manager")
    class UDataTable* QuestDataTable;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Quest Manager")
    TMap<FString, UQuest*> ActiveQuests;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Quest Manager")
	TMap<FString, UQuest*> TrackedQuests;
	
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Quest Manager")
    TMap<FString, UQuest*> CompletedQuests;

    UPROPERTY()
    TSet<FString> TurnedInQuests;

private:
    UFUNCTION()
    void OnQuestStatusChanged(const FString& QuestID, EQuestStatus NewStatus);

	UFUNCTION()
	void OnObjectiveUpdated(int32 ObjectiveIndex, const FQuestObjective& Objective);
	
    bool CheckPrerequisites(const FQuestData& QuestData) const;
    void GiveQuestReward(const FQuestReward& Reward);
};
