// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AEnemySpawner::EnemySpawn()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this; 
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AEnemyBase* SpawnedEnemy  = GetWorld()->SpawnActor<AEnemyBase>(EnemyClass, GetActorLocation(), GetActorRotation(), SpawnParams);

	if (!SpawnedEnemy)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to spawn enemy."));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Enemy spawned successfully at location: %s"), *GetActorLocation().ToString());
	}
}
	
