#include "RotatingActor.h"
#include "Components/StaticMeshComponent.h"

ARotatingActor::ARotatingActor()
{
    PrimaryActorTick.bCanEverTick = true;

    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

    RootComponent = StaticMesh;
}

void ARotatingActor::BeginPlay()
{
    Super::BeginPlay();
}

void ARotatingActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FRotator Rotation(0.0f, RotationSpeed * DeltaTime, 0.0f);

    AddActorLocalRotation(Rotation);
}