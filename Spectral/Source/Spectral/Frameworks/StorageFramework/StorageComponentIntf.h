// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Spectral.h"
#include "StorageComponentIntf.generated.h"

UINTERFACE(NotBlueprintable)
class SPECTRAL_API UStorageComponentIntf : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class SPECTRAL_API IStorageComponentIntf {

	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "StorageComponentIntf")
	void OnAdd();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "StorageComponentIntf")
	void OnRemove();

};
