// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SkillUserIntf.generated.h"

UINTERFACE()
class SPECTRAL_API USkillUserIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};
    
class SPECTRAL_API ISkillUserIntf {
    GENERATED_IINTERFACE_BODY()

public:	
    
    /*
     * Returns an array of Skills associated with the SkillUser. 
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillUserIntf")
    TArray<TScriptInterface<class ISkillIntf>> GetSkills();

    /*
     * Executes the skill in GetSkills().Get(Index). The Skill is fed targeting information
     * specified by TargetingMethod.
     *
     * - If TargetingMethod can be cast to TArray<ISkillUserIntf>, then it is assumed that
     *   the supplied list of SkillUsers are to be the sole targets of the executed skill.
     *
     * - Else if TargetingMethod can be cast to TArray<TargetingVolumeIntf>, then the target is
     *   assumed to be all entities within the supplied sequence of volumes.
     *
     * - Else if TargetingMethod can be cast to TArray<TargetingAreaIntf>, then the target is
     *   assumed to be all entities within the supplied sequence of areas.
     *
     * Subclasses of AActor were selected because it would ensure that the object...
     * - can be replicated.
     * - has a transform.
     * - can be rendered.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillUserIntf")
    void ExecuteSkill(const TArray<AActor*>& TargetingMethod, int32 Index);

    /*
     * Returns the location of the SkillUser as a 3-dimensional vector.
     * Assumed to only reference the X,Y axes in 2D considerations.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillUserIntf")
    FVector GetSkillUserLocation();
};
