// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"
#include <cmath>


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...

	AActor* actor = GetOwner();

	FQuat rotQuat = actor->GetTransform().GetRotation();

	FVector newAxis(0, 0, 1);
	FQuat newRotation(newAxis, PI / 3.f);

	// Alternative 
	FRotator rotator = FRotator(0.f, 60.f, 0.f);

	//actor->GetTransform().SetRotation(newRotation);
	actor->SetActorRotation(newRotation);

	UE_LOG(LogTemp, Warning, TEXT("Setting the actor's rotation "));
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

