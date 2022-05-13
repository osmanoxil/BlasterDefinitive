// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* DisplayText;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* PlayerNameText;

	void SetDisplayText(FString TextToDisplay);
	void SetPlayerNameText(FString PlayerNameText);

	UFUNCTION(BlueprintCallable)
		void ShowPlayerNetRole(APawn* InPawn);
	UFUNCTION(BlueprintCallable)
		void ShowPlayerName(APawn* InPawn);

protected:
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) override;
};
