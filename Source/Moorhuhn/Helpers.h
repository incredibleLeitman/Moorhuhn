// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Helpers.generated.h"

/**
 * 
 */
UCLASS()
class MOORHUHN_API UHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="Helpers")
	//static void SortTopScores(TMap<FString, int32> *scores, int32 amount); // Error: Inappropriate '*' on variable of type 'TMap', cannot have an exposed pointer to this type.
	//static void SortTopScores(TMap<FString, int32> &scores, int32 amount);
	static TMap<FString, int32> SortTopScores(TMap<FString, int32> scores, int32 amount);
};
