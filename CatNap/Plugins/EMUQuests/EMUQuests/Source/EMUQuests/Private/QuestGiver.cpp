// EMU Intro to UE5. Thomas

#include "QuestGiver.h"

#include "QuestCharacter.h"
#include "QuestManager.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"

AQuestGiver::AQuestGiver()
{
	PrimaryActorTick.bCanEverTick = false;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
		
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	WidgetComponent->SetupAttachment(RootComponent);
}

void AQuestGiver::BeginPlay()
{
	Super::BeginPlay();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AQuestGiver::OnOverlapBegin); 
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AQuestGiver::OnOverlapEnd);

	WidgetComponent->SetVisibility(false);
}

void AQuestGiver::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (const auto Character = Cast<AQuestCharacter>(OtherActor))
		{
			Character->SetOverlappedActor(this);
			WidgetComponent->SetVisibility(true);
		}
	}
}

void AQuestGiver::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (const auto Character = Cast<AQuestCharacter>(OtherActor))
		{
			Character->SetOverlappedActor(nullptr);
			WidgetComponent->SetVisibility(false);			
		}
	}	
}

//////////////////////////////////////////////////////////
void AQuestGiver::InteractWith(const class AQuestCharacter* Character)
{
	OpenQuestDialog(Character);
}