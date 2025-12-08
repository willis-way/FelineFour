// EMU Intro to UE5. Thomas

#include "Destination.h"

#include "QuestCharacter.h"
#include "QuestManager.h"
#include "Components/BoxComponent.h"

ADestination::ADestination()
{
	PrimaryActorTick.bCanEverTick = false;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SphereComponent"));
	RootComponent = BoxComponent;		
}

void ADestination::BeginPlay()
{
	Super::BeginPlay();
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ADestination::OnOverlapBegin); 
}

void ADestination::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (const auto Character = Cast<AQuestCharacter>(OtherActor))
		{
			if (const auto QuestManager = Character->GetComponentByClass<UQuestManager>())
			{
				QuestManager->UpdateQuestObjective(EObjectiveType::ReachLocation, ObjectiveID.ToString());
			}
		}
	}
}
