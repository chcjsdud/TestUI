// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Input/CommonUIActionRouterBase.h"
#include "MyCommonUIActionRouterBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTUI_API UMyCommonUIActionRouterBase : public UCommonUIActionRouterBase
{
	GENERATED_BODY()
	
public:
	UMyCommonUIActionRouterBase();

	virtual void ApplyUIInputConfig(const FUIInputConfig& NewConfig, bool bForceRefresh) override;

};
