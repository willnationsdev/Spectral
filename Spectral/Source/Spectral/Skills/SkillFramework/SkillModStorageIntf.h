// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SkillModStorageIntf.generated.h"

/**
*
*/
UINTERFACE()
class SPECTRAL_API USkillModStorageIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class ISkillModStorageIntf {
    GENERATED_IINTERFACE_BODY()

public:

    /*
     * Returns an array of the SkillMods managed by the SkillModStorage.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillModStorageIntf")
    TArray<TScriptInterface<ISkillModIntf>> GetSkillMods() const;

    /*
     * Adds a new SkillMod to the array of skill effects.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillModStorageIntf")
    void AddSkillMod(const TScriptInterface<ISkillModIntf>& SkillMod);

    /*
     * Removes the referenced SkillMod from the array of skill effects.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillModStorageIntf")
    void RemoveSkillModByRef(const TScriptInterface<ISkillModIntf>& SkillMod);

    /*
     * Removes the SkillMod at Index from the array of skill effects.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillModStorageIntf")
    void RemoveSkillModByIndex(int32 Index);
};