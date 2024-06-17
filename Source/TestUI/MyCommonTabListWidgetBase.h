// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonTabListWidgetBase.h"
#include "MyCommonTabListWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTUI_API UMyCommonTabListWidgetBase : public UCommonTabListWidgetBase
{
	GENERATED_BODY()

protected:
	FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);
	FReply NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent);
};
