// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SortArray.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTMRPROJECT_API USortArray : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	//function to sort an array of actors
	UFUNCTION(BlueprintCallable, Category = "Sort Array")
	static TArray<AActor*> SortCustomArray(TArray<AActor*> buttons);

	//function to get the day of the week
	UFUNCTION(BlueprintCallable, Category = "Dates")
	static int GetDayOfWeek(FDateTime date);
};
