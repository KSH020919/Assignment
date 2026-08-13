// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatformActor.generated.h"

UCLASS()
class PR_3_API AMovingPlatformActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatformActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;

    UPROPERTY(EditAnywhere)
    float MoveSpeed = 500.0f;

    UPROPERTY(EditAnywhere)
    float MaxRange = 500.0f;


    FVector StartLocation;
    FVector MoveDirection = FVector::ForwardVector;
};
