// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "StorageComponentIntf.h"
#include "CompositeStorageIntf.generated.h"

UENUM(BlueprintType)
enum class EStorageName : uint8
{
	Skills 		UMETA(DisplayName = "Skills"),
	Timers 		UMETA(DisplayName = "Timers"),
	Conditions	UMETA(DisplayName = "Conditions")
};

UINTERFACE(NotBlueprintable)
class SPECTRAL_API UCompositeStorageIntf : public UStorageComponentIntf
{
	GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API ICompositeStorageIntf {

	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "CompositeStorageIntf")
	EStorageName GetName();
};
