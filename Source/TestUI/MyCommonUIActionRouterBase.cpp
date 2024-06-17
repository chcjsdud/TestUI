// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCommonUIActionRouterBase.h"

UMyCommonUIActionRouterBase::UMyCommonUIActionRouterBase()
{
}

void UMyCommonUIActionRouterBase::ApplyUIInputConfig(const FUIInputConfig& NewConfig, bool bForceRefresh)
{
	FUIInputConfig Config = FUIInputConfig(NewConfig.GetInputMode(), EMouseCaptureMode::NoCapture);
	Super::ApplyUIInputConfig(Config, bForceRefresh);
}