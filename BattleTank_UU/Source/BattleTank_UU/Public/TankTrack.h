// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_UU_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);
	
	// Max force per track, Newtons
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingforce = 400000;
};