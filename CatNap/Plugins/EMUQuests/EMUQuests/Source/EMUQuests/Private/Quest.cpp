// EMU Intro to UE5. Thomas

#include "Quest.h"

UQuest::UQuest()
{
    QuestStatus = EQuestStatus::NotStarted;
}

void UQuest::InitializeQuest(const FQuestData& InQuestData)
{
    QuestData = InQuestData;
    
    // Reset objective progress
    for (FQuestObjective& Objective : QuestData.Objectives)
    {
        Objective.CurrentCount = 0;
        Objective.bCompleted = false;
    }
}

void UQuest::StartQuest()
{
    if (QuestStatus == EQuestStatus::NotStarted)
    {
        SetQuestStatus(EQuestStatus::InProgress);
    }
}

void UQuest::CompleteQuest()
{
    if (QuestStatus == EQuestStatus::InProgress)
    {
        SetQuestStatus(EQuestStatus::Completed);
        
        if (QuestData.bAutoComplete)
        {
            TurnInQuest();
        }
    }
}

void UQuest::FailQuest()
{
    if (QuestStatus == EQuestStatus::InProgress)
    {
        SetQuestStatus(EQuestStatus::Failed);
    }
}

void UQuest::TurnInQuest()
{
    if (QuestStatus == EQuestStatus::Completed)
    {
        SetQuestStatus(EQuestStatus::TurnedIn);
    }
}

void UQuest::UpdateObjectiveProgress(int32 ObjectiveIndex, int32 Amount)
{
    if (QuestStatus != EQuestStatus::InProgress || !QuestData.Objectives.IsValidIndex(ObjectiveIndex))
    {
        return;
    }

    FQuestObjective& Objective = QuestData.Objectives[ObjectiveIndex];
    
    if (!Objective.bCompleted)
    {
        Objective.CurrentCount = FMath::Min(Objective.CurrentCount + Amount, Objective.RequiredCount);
        
        if (Objective.CurrentCount >= Objective.RequiredCount)
        {
            Objective.bCompleted = true;
        }

    	// UI Updates
        OnObjectiveUpdated.Broadcast(ObjectiveIndex, Objective);

    	CheckQuestCompletion();
    }
}

void UQuest::UpdateObjectiveByType(EObjectiveType ObjectiveType, const FString& TargetID, int32 Amount)
{
    for (int32 i = 0; i < QuestData.Objectives.Num(); ++i)
    {
        const FQuestObjective& Objective = QuestData.Objectives[i];
        
        if (Objective.ObjectiveType == ObjectiveType && Objective.TargetID == TargetID)
        {
            UpdateObjectiveProgress(i, Amount);
        }
    }
}

bool UQuest::IsObjectiveCompleted(int32 ObjectiveIndex) const
{
    if (QuestData.Objectives.IsValidIndex(ObjectiveIndex))
    {
        return QuestData.Objectives[ObjectiveIndex].bCompleted;
    }
    return false;
}

bool UQuest::AreAllObjectivesCompleted() const
{
    for (const FQuestObjective& Objective : QuestData.Objectives)
    {
        if (!Objective.bCompleted)
        {
            return false;
        }
    }
    return true;
}

float UQuest::GetCompletionPercentage() const
{
    if (QuestData.Objectives.Num() == 0)
    {
        return 0.0f;
    }

    int32 CompletedObjectives = 0;
    for (const FQuestObjective& Objective : QuestData.Objectives)
    {
        if (Objective.bCompleted)
        {
            CompletedObjectives++;
        }
    }

    return static_cast<float>(CompletedObjectives) / static_cast<float>(QuestData.Objectives.Num());
}

void UQuest::CheckQuestCompletion()
{
    if (AreAllObjectivesCompleted())
    {
        CompleteQuest();
    }
}

void UQuest::SetQuestStatus(EQuestStatus NewStatus)
{
    if (QuestStatus != NewStatus)
    {
        QuestStatus = NewStatus;
        OnQuestStatusChanged.Broadcast(QuestData.QuestID, QuestStatus);
    }
}