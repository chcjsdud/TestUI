// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCommonGameViewportClient.h"

UMyCommonGameViewportClient::UMyCommonGameViewportClient()
{
	int a = 0;
}

bool UMyCommonGameViewportClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
	if (EventArgs.Event == EInputEvent::IE_Pressed)
	{
		int a = 0;
	}
	

	bool Check = Super::InputKey(EventArgs);
	int a = 0;
	return Check;
}
bool UMyCommonGameViewportClient::InputAxis(FViewport* InViewport, FInputDeviceId InputDevice, FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad)
{
	bool Check = Super::InputAxis(InViewport, InputDevice, Key, Delta, DeltaTime, NumSamples, bGamepad);

	int a = 0;
	return Check;
}

bool UMyCommonGameViewportClient::InputTouch(FViewport* InViewport, int32 ControllerId, uint32 Handle, ETouchType::Type Type, const FVector2D& TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex)
{
	bool Check = Super::InputTouch(InViewport, ControllerId, Handle, Type, TouchLocation, Force, DeviceTimestamp, TouchpadIndex);


	int a = 0;

	return Check;
}

