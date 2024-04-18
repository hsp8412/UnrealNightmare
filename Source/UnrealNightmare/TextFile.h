// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFile.generated.h"

/**
 * 
 */
UCLASS()
class UNREALNIGHTMARE_API URWTxtFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "LoadTxt"))
			static bool LoadTxt(FString FileNameA, FString& SaveTextA);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
			static bool SaveTxt(FString SaveTextB, FString FileNameB);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveContTxt"))
			static bool SaveContTxt(FString SaveTextB, FString FileNameB);
};
