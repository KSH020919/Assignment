#include "MyPlayerPawn.h"

#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputMappingContext.h"

AMyPlayerPawn::AMyPlayerPawn()
{
    PrimaryActorTick.bCanEverTick = true;

    CapsuleComponent =
        CreateDefaultSubobject<UCapsuleComponent>(
            TEXT("CapsuleComponent")
        );

    RootComponent = CapsuleComponent;

    SkeletalMeshComponent =
        CreateDefaultSubobject<USkeletalMeshComponent>(
            TEXT("SkeletalMeshComponent")
        );

    SkeletalMeshComponent->SetupAttachment(CapsuleComponent);
    SkeletalMeshComponent->SetSimulatePhysics(false);

    SpringArmComponent =
        CreateDefaultSubobject<USpringArmComponent>(
            TEXT("SpringArmComponent")
        );

    SpringArmComponent->SetupAttachment(CapsuleComponent);

    CameraComponent =
        CreateDefaultSubobject<UCameraComponent>(
            TEXT("CameraComponent")
        );

    CameraComponent->SetupAttachment(SpringArmComponent);
}

void AMyPlayerPawn::BeginPlay()
{
    Super::BeginPlay();

    APlayerController* PlayerController =
        Cast<APlayerController>(GetController());

    if (PlayerController)
    {
        UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<
            UEnhancedInputLocalPlayerSubsystem
            >(
                PlayerController->GetLocalPlayer()
            );

        if (Subsystem && MappingContext)
        {
            Subsystem->AddMappingContext(
                MappingContext,
                0
            );
        }
    }
}

void AMyPlayerPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyPlayerPawn::SetupPlayerInputComponent(
    UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(
        PlayerInputComponent
    );

    UEnhancedInputComponent* EnhancedInputComponent =
        Cast<UEnhancedInputComponent>(
            PlayerInputComponent
        );

    if (EnhancedInputComponent)
    {
        EnhancedInputComponent->BindAction(
            MoveAction,
            ETriggerEvent::Triggered,
            this,
            &AMyPlayerPawn::Move
        );

        EnhancedInputComponent->BindAction(
            LookAction,
            ETriggerEvent::Triggered,
            this,
            &AMyPlayerPawn::Look
        );
    }
}

void AMyPlayerPawn::Move(
    const FInputActionValue& Value)
{
    FVector2D MoveInput =
        Value.Get<FVector2D>();

    float DeltaTime =
        GetWorld()->GetDeltaSeconds();

    FVector Movement =
        FVector(
            MoveInput.Y,
            MoveInput.X,
            0.0f
        )
        * MoveSpeed
        * DeltaTime;

    AddActorLocalOffset(
        Movement,
        true
    );
}

void AMyPlayerPawn::Look(
    const FInputActionValue& Value)
{
    FVector2D LookInput =
        Value.Get<FVector2D>();

    float DeltaTime =
        GetWorld()->GetDeltaSeconds();

    float YawAmount =
        LookInput.X
        * LookSpeed
        * DeltaTime;

    float PitchAmount =
        LookInput.Y
        * LookSpeed
        * DeltaTime;

    AddActorLocalRotation(
        FRotator(
            0.0f,
            YawAmount,
            0.0f
        )
    );

    SpringArmComponent->AddLocalRotation(
        FRotator(
            PitchAmount,
            0.0f,
            0.0f
        )
    );
}