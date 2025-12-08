// EMU Intro to UE5 Thomas

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameFramework/Character.h"
#include "QuestGiver.generated.h"

class UWidgetComponent;
class USphereComponent;

UCLASS()
class QUESTSYSTEM_API AQuestGiver : public ACharacter, public IInteractable
{
	GENERATED_BODY()

public:
	AQuestGiver();

	virtual void InteractWith(const class AQuestCharacter* Character) override;
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintImplementableEvent)
	void OpenQuestDialog(const class AQuestCharacter* Character);
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest Giver", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest Giver", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UWidgetComponent> WidgetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest Giver", meta = (AllowPrivateAccess = "true"))
	FName QuestID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Giver", meta = (AllowPrivateAccess = "true"))
	bool bQuestTaken = false;
};
