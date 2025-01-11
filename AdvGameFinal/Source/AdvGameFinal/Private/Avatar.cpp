// Fill out your copyright notice in the Description page of Project Settings.


#include "Avatar.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "EnemyBase.h"
#include "DrawDebugHelpers.h"


AAvatar::AAvatar()
{

}

void AAvatar::BeginPlay()
{
	Super::BeginPlay();

	WalkSpeed = GetCharacterMovement()->MaxWalkSpeed;

}

void AAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &ACharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &AAvatar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAvatar::MoveRight);

}

void AAvatar::MoveForward(float Scale)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0, Rotation.Yaw, 0);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, Scale * MovementState);
}

void AAvatar::MoveRight(float Scale)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0, Rotation.Yaw, 0);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(ForwardDirection, Scale * MovementState);
}

void AAvatar::Dash()
{
    if (bCanDash)
    {
        FVector Velocity = GetVelocity() * 5;
        FVector DashDirection(Velocity.X, Velocity.Y, 0);
        LaunchCharacter(DashDirection, false, false);
    }

}

void AAvatar::Shoot()
{
    FVector Start = GetActorLocation();
    FVector End = Start + GetActorForwardVector() * 100000;

    FHitResult HitResult;
    if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility))
    {
        DrawDebugLine(GetWorld(), Start, HitResult.Location, FColor::Red, false, 2.0f);
        DrawDebugSphere(GetWorld(), HitResult.Location, 10.0f, 10, FColor::Blue, false, 2.0f);

        UE_LOG(LogTemp, Log, TEXT("Hit at location: %s"), *HitResult.Location.ToString());

        if (AActor* ActorRef = HitResult.GetActor())
        {
            UE_LOG(LogTemp, Log, TEXT("Hit Actor: %s"), *ActorRef->GetName());

            // Check if it is an enemy
            if (AEnemyBase* Enemy = Cast<AEnemyBase>(ActorRef))
            {
                UE_LOG(LogTemp, Log, TEXT("Enemy hit, destroying: %s"), *Enemy->GetName());
                Enemy->Destroy();
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Hit Actor is not an enemy."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("No valid actor hit."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No hit detected."));
    }
}
