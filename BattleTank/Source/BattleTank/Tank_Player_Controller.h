// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "Tank_Player_Controller.generated.h" // Must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATank_Player_Controller : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;
	
};
