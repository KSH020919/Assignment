// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatformActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMovingPlatformActor::AMovingPlatformActor()
{
    PrimaryActorTick.bCanEverTick = true;

    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

    RootComponent = StaticMesh;
}

// Called when the game starts or when spawned
void AMovingPlatformActor::BeginPlay()
{
    Super::BeginPlay();

    StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatformActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector CurrentLocation = GetActorLocation();

    float CurrentDistance = CurrentLocation.X - StartLocation.X;

    if (CurrentDistance >= MaxRange)
    {
        MoveDirection = FVector::BackwardVector;
    }
    else if (CurrentDistance <= 0.0f)
    {
        MoveDirection = FVector::ForwardVector;
    }

    FVector Movement = MoveDirection * MoveSpeed * DeltaTime;

    AddActorWorldOffset(Movement);
}