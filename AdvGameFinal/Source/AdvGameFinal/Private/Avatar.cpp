// Fill out your copyright notice in the Description page of Project Settings.


#include "Avatar.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
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

void AAvatar::Shoot()
{
 
	

    FVector Start = GetActorLocation();
    FVector End(Start + GetActorForwardVector() * 1000);

    FHitResult HitResult;
    GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility);

    if (HitResult.bBlockingHit)
    {
        DrawDebugLine(GetWorld(), Start, HitResult.Location, FColor::Red, false, 2);
        DrawDebugSphere(GetWorld(), HitResult.Location, 10, 10, FColor::Blue, false, 2);
        UE_LOG(LogTemp, Log, TEXT("Hit at location: %s"), *HitResult.Location.ToString());
		if (true)
		{

		}
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("No hit detected."));
    }
}
