#pragma once

#include "CoreMinimal.h"
#include "AvatarBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Avatar.generated.h"

/**
 *
 */
UCLASS()
class AAvatar : public AAvatarBase
{
	GENERATED_BODY()

public:
	AAvatar();


	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* Arm;

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void MoveForward(float Scale);
	void MoveRight(float Scale);

public:

	UPROPERTY(EditAnywhere)
	float RunSpeed = 1.5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementState = 1.0f;

	UPROPERTY(EditAnywhere)
	float WalkSpeed;

public:
	//combat

	UFUNCTION(BlueprintCallable)
	void Shoot();



};