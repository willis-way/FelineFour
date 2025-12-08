// EMU Intro to UE5. Thomas

#include "QuestManager.h"
#include "Engine/DataTable.h"

UQuestManager::UQuestManager()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UQuestManager::BeginPlay()
{
    Super::BeginPlay();
}

bool UQuestManager::StartQuest(const FString& QuestID)
{
    if (ActiveQuests.Contains(QuestID) || CompletedQuests.Contains(QuestID))
    {
        return false;
    }

    if (!QuestDataTable)
    {
        UE_LOG(LogTemp, Warning, TEXT("Quest Data Table is null"));
        return false;
    }

    FQuestData* QuestData = QuestDataTable->FindRow<FQuestData>(*QuestID, TEXT(""));
    if (!QuestData)
    {
        UE_LOG(LogTemp, Warning, TEXT("Quest with ID %s not found"), *QuestID);
        return false;
    }

    if (!CheckPrerequisites(*QuestData))
    {
        UE_LOG(LogTemp, Warning, TEXT("Prerequisites not met for quest %s"), *QuestID);
        return false;
    }

    UQuest* NewQuest = NewObject<UQuest>(this);
    NewQuest->InitializeQuest(*QuestData);

	NewQuest->OnQuestStatusChanged.AddDynamic(this, &UQuestManager::OnQuestStatusChanged);
	NewQuest->OnObjectiveUpdated.AddDynamic(this, &UQuestManager::OnObjectiveUpdated);
    NewQuest->StartQuest();

    ActiveQuests.Add(QuestID, NewQuest);

	// UI Updates
    OnQuestAdded.Broadcast(NewQuest);

    return true;
}

bool UQuestManager::CompleteQuest(const FString& QuestID)
{
    UQuest** QuestPtr = ActiveQuests.Find(QuestID);
    if (QuestPtr && *QuestPtr)
    {
        (*QuestPtr)->CompleteQuest();
        return true;
    }
    return false;
}

bool UQuestManager::FailQuest(const FString& QuestID)
{
    UQuest** QuestPtr = ActiveQuests.Find(QuestID);
    if (QuestPtr && *QuestPtr)
    {
        (*QuestPtr)->FailQuest();
        return true;
    }
    return false;
}

bool UQuestManager::TurnInQuest(const FString& QuestID)
{
    UQuest** QuestPtr = ActiveQuests.Find(QuestID);
    if (QuestPtr && *QuestPtr && (*QuestPtr)->GetQuestStatus() == EQuestStatus::TurnedIn)
    {
        UQuest* Quest = *QuestPtr;
        const FQuestReward& Reward = Quest->GetQuestData().Reward;
        
        Quest->TurnInQuest();
        
        // Move quest from active to completed
        ActiveQuests.Remove(QuestID);
        CompletedQuests.Add(QuestID, Quest);
        TurnedInQuests.Add(QuestID);
        
        GiveQuestReward(Reward);
        OnQuestCompleted.Broadcast(Quest, Reward);
        OnQuestRemoved.Broadcast(Quest);
        
        return true;
    }
    return false;
}

void UQuestManager::UpdateQuestObjective(EObjectiveType ObjectiveType, const FString& ObjectiveID, int32 Amount)
{
    for (auto& QuestPair : ActiveQuests)
    {
        if (QuestPair.Value && QuestPair.Value->GetQuestStatus() == EQuestStatus::InProgress)
        {
            QuestPair.Value->UpdateObjectiveByType(ObjectiveType, ObjectiveID, Amount);
        }
    }
}

UQuest* UQuestManager::GetQuest(const FString& QuestID)
{
    UQuest** ActiveQuestPtr = ActiveQuests.Find(QuestID);
    if (ActiveQuestPtr)
    {
        return *ActiveQuestPtr;
    }

    UQuest** CompletedQuestPtr = CompletedQuests.Find(QuestID);
    if (CompletedQuestPtr)
    {
        return *CompletedQuestPtr;
    }

    return nullptr;
}

TArray<UQuest*> UQuestManager::GetActiveQuests() const
{
    TArray<UQuest*> Result;
    ActiveQuests.GenerateValueArray(Result);
    return Result;
}

TArray<UQuest*> UQuestManager::GetCompletedQuests() const
{
    TArray<UQuest*> Result;
    CompletedQuests.GenerateValueArray(Result);
    return Result;
}

bool UQuestManager::CanStartQuest(const FString& QuestID, int32 PlayerLevel) const
{
    if (ActiveQuests.Contains(QuestID) || TurnedInQuests.Contains(QuestID))
    {
        return false;
    }

    if (!QuestDataTable)
    {
        return false;
    }

    FQuestData* QuestData = QuestDataTable->FindRow<FQuestData>(*QuestID, TEXT(""));
    if (!QuestData)
    {
        return false;
    }

    if (PlayerLevel < QuestData->RequiredLevel)
    {
        return false;
    }

    return CheckPrerequisites(*QuestData);
}

void UQuestManager::OnQuestStatusChanged(const FString& QuestID, EQuestStatus NewStatus)
{
	if (NewStatus == EQuestStatus::TurnedIn)
	{
		TurnInQuest(QuestID);
	}
}

void UQuestManager::OnObjectiveUpdated(int32 ObjectiveIndex, const FQuestObjective& Objective)
{
}

bool UQuestManager::CheckPrerequisites(const FQuestData& QuestData) const
{
    for (const FString& PrereqQuestID : QuestData.PrerequisiteQuests)
    {
        if (!TurnedInQuests.Contains(PrereqQuestID))
        {
            return false;
        }
    }
    return true;
}

void UQuestManager::GiveQuestReward(const FQuestReward& Reward)
{
    UE_LOG(LogTemp, Log, TEXT("Quest reward given: %d XP, %d Gold"), 
           Reward.ExperiencePoints, Reward.Gold);
}