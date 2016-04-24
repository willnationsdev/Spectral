// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SkillExecutorIntf.h"
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
    TArray<TScriptInterface<ISkillIntf>> GetSkills();

    /*
     * A Factory Method intended to generate the appropriate SkillExecutor based on
     * the contents of the TargetingMethod array.
     * 
     * - If targetingMethod can be cast to TArray<TScriptInterface<ISkillUserIntf>>,
     *   then the targets are assumed to be each of the provided references.
     *
     * - Else if TargetingMethod can be cast to TArray<TScriptInterface<TargetingVolumeIntf>>, 
     *   then the targets are assumed to be all entities within the supplied sequence of volumes.
     *
     * - Else if TargetingMethod can be cast to TArray<TScriptInterface<TargetingAreaIntf>>, 
     *   then the targets are assumed to be all entities within the supplied sequence of areas.
     *
     * - Else if TargetingMethod can be cast to TArray<TScriptInterface<TargetingArcIntf>>, 
     *   then the targets are assumed to be all entities within arcs of a variable width, depth,
     *   and orientation from each of a set of points (analogous to "directed lines", but abstracted,
     *   i.e. an extremely deep, yet thin arc could be considered a line, for all intents and purposes).
     *
     * Subclasses of AActor were selected because it would ensure that the object...
     * - can be replicated.
     * - has a transform.
     * - can be rendered.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillUserIntf")
    TScriptInterface<ISkillExecutorIntf> GenerateSkillExecutor(const TArray<AActor*>& TargetingMethod, int32 SkillIndex);

    /*
     * Returns the location of the SkillUser as a 3-dimensional vector.
     * Assumed to only reference the X,Y axes in 2D considerations.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SkillUserIntf")
    FVector GetSkillUserLocation();
};
