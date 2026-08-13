#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingActor.generated.h"

UCLASS()
class PR_3_API ARotatingActor : public AActor
{
    GENERATED_BODY()

public:
    ARotatingActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;

    UPROPERTY(EditAnywhere)
    float RotationSpeed = 90.0f;
};