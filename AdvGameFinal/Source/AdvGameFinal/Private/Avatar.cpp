// Fill out your copyright notice in the Description page of Project Settings.


#include "Avatar.h"
#include "GameFramework/CharacterMovementComponent.h"


AAvatar::AAvatar()
{
	Arm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	Arm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(Arm, USpringArmComponent::SocketName);
}

void AAvatar::BeginPlay()
{
	Super::BeginPlay();

	WalkSpeed = GetCharacterMovement()->MaxWalkSpeed;

	Camera->bUsePawnControlRotation = false;
	Arm->bUsePawnControlRotation = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
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
	const USkeletalMeshSocket* FireLocRef = GetMesh()->GetSocketByName("Muzzle");

}
