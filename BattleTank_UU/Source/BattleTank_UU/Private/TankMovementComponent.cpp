// Fill out your copyright notice in the Description page of Project Settings.

#include "TankMovementComponent.h"
#include "Engine/World.h"
#include "TankTrack.h"

void UTankMovementComponent::Initialise(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet)
{
	if (!LeftTrackToSet || !RightTrackToSet) { return; }
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;
}


void UTankMovementComponent::IntendMoveForward(float Throw)
{
	auto Time = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("%f: Intend Move Forward: %f "), Time, Throw);

	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
}


