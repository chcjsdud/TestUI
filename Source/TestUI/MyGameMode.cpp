// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Input/CommonUIActionRouterBase.h"


void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

	UGameViewportClient* ViewPort = GetWorld()->GetGameViewport();

	// ViewPort->InputKey();
}