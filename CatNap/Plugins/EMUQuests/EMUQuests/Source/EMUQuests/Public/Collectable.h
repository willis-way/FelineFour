// EMU Intro to UE5 Thomas

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "Collectable.generated.h"

class AQuestCharacter;
class UWidgetComponent;
class USphereComponent;

UCLASS()
class QUESTSYSTEM_API ACollectable : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	ACollectable();

	UFUNCTION(BlueprintCallable , Category = "Collectable")
	virtual void InteractWith(const AQuestCharacter* Character) override;
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UWidgetComponent> WidgetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	FName CollectibleName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	FName ObjectiveID;
};
