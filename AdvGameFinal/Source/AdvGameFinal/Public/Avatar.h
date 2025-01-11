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

	


	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void MoveForward(float Scale);
	void MoveRight(float Scale);

	UFUNCTION(BlueprintCallable)
	void Dash();



public:

	UPROPERTY(EditAnywhere)
	float RunSpeed = 1.5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementState = 1.0f;

	UPROPERTY(EditAnywhere)
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanDash = true;


public:
	//combat

	UFUNCTION(BlueprintCallable)
	void Shoot();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Health = 100.0f;




};