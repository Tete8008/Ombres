// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAIController.h"
#include "AIController.h"

AMyAIController::AMyAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	SetGenericTeamId(FGenericTeamId(1));
}