// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_Player_Controller.h"

void ATank_Player_Controller::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin Play\nPlayer Pawn is: %s"), *(GetControlledTank()->GetName()));
}

ATank* ATank_Player_Controller::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}