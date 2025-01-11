// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "EnemyController.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	ChasePlayer();
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyBase::ChasePlayer()
{
    if (!PlayerRef)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerRef is null!"));
        return;
    }

    AEnemyController* AIController = Cast<AEnemyController>(GetController());
    if (!AIController)
    {
        UE_LOG(LogTemp, Warning, TEXT("AIController is null!"));
        return;
    }

    FVector EnemyLocation = GetActorLocation();
    FVector PlayerLocation = PlayerRef->GetActorLocation();

    float DistanceToPlayer = FVector::Dist(EnemyLocation, PlayerLocation);

    if (DistanceToPlayer <= 5.0f)
    {
        UE_LOG(LogTemp, Log, TEXT("Enemy is already close to the player."));
        AIController->StopMovement(); 
        return;
    }

    AIController->MoveToActor(PlayerRef, 5.0f); 
    UE_LOG(LogTemp, Log, TEXT("Enemy is chasing the player."));
}

