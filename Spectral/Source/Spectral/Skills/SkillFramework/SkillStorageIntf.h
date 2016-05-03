// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SkillStorageIntf.generated.h"

/**
*
*/
UINTERFACE()
class SPECTRAL_API USkillStorageIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class ISkillStorageIntf {
    GENERATED_IINTERFACE_BODY()

public:

    /*
    * Returns an array of the SkillMods managed by the SkillStorage.
    */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillStorageIntf")
        TArray<TScriptInterface<ISkillIntf>> GetSkills() const;

    /*
    * Adds a new SkillMod to the array of skill effects.
    */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillStorageIntf")
        void AddSkill(const TScriptInterface<ISkillIntf>& Skill);

    /*
    * Removes the referenced SkillMod from the array of skill effects.
    */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillStorageIntf")
        void RemoveSkillByRef(const TScriptInterface<ISkillIntf>& Skill);

    /*
    * Removes the SkillMod at Index from the array of skill effects.
    */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillStorageIntf")
        void RemoveSkillByIndex(int32 Index);
};