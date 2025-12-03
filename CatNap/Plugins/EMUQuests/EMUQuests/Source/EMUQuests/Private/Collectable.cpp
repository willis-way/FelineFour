// EMU Intro to UE5. Thomas

#include "Collectable.h"

#include "QuestCharacter.h"
#include "QuestManager.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

ACollectable::ACollectable()
{
	PrimaryActorTick.bCanEverTick = false;

	PrimaryActorTick.bCanEverTick = false;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
		
	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	WidgetComponent->SetupAttachment(RootComponent);
}

void ACollectable::InteractWith(const AQuestCharacter* Character)
{
	if (auto QuestManager = Character->GetComponentByClass<UQuestManager>())
	{
		QuestManager->UpdateQuestObjective(EObjectiveType::CollectItem, ObjectiveID.ToString());
		Destroy();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("QuestManager not found on character"));
	}
}

void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	WidgetComponent->SetVisibility(false);

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollectable::OnOverlapBegin); 
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &ACollectable::OnOverlapEnd); 
}

void ACollectable::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (const auto Character = Cast<AQuestCharacter>(OtherActor))
		{
			WidgetComponent->SetVisibility(true);
			Character->SetOverlappedActor(this);
		}
	}
}

void ACollectable::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		if (const auto Character = Cast<AQuestCharacter>(OtherActor))
		{
			WidgetComponent->SetVisibility(false);
			Character->SetOverlappedActor(nullptr);
		}
	}
}
