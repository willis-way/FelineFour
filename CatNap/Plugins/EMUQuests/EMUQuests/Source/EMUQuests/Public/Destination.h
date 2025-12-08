// EMU Intro to UE5 Thomas

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Destination.generated.h"

class UBoxComponent;

UCLASS()
class QUESTSYSTEM_API ADestination : public AActor
{
	GENERATED_BODY()

public:
	ADestination();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> BoxComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	FName DestinationName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destination", meta = (AllowPrivateAccess = "true"))
	FName ObjectiveID;
};
