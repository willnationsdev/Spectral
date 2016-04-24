// Fill out your copyright notice in the Description page of Project Settings.

#include "Spectral.h"
#include "SkillIntf.h"


// Sets default values
USkillIntf::USkillIntf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

TScriptInterface<ISkillIntf> ISkillIntf::GetProjectedSkill()
{
    return TScriptInterface<ISkillIntf>();
}