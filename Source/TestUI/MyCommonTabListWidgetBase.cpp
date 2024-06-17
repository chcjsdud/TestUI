// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCommonTabListWidgetBase.h"


FReply UMyCommonTabListWidgetBase::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FReply Re = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	return Re;
}
FReply UMyCommonTabListWidgetBase::NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FReply Re = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	return Re;
}
