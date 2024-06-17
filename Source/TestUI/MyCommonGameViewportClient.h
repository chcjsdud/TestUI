// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "MyCommonGameViewportClient.generated.h"

/**
 * 
 */
UCLASS()
class TESTUI_API UMyCommonGameViewportClient : public UCommonGameViewportClient
{
	GENERATED_BODY()

	UMyCommonGameViewportClient();

public:
	bool InputKey(const FInputKeyEventArgs& EventArgs) override;
	bool InputAxis(FViewport* InViewport, FInputDeviceId InputDevice, FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad) override;
	bool InputTouch(FViewport* InViewport, int32 ControllerId, uint32 Handle, ETouchType::Type Type, const FVector2D& TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex) override;
};
