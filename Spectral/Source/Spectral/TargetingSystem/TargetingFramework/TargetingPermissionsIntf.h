// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TargetingPermissionsIntf.generated.h"

UINTERFACE()
class SPECTRAL_API UTargetingPermissionsIntf : public UInterface
{
    GENERATED_UINTERFACE_BODY()
};

class ITargetingPermissionsIntf {
    GENERATED_IINTERFACE_BODY()

public:

    bool isPermittedTarget(TScriptInterface<ITargetingPermissionsIntf> otherPermissions);
};
