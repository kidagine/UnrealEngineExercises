// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "BatteryPickup.h"
#include "Classes/Components/StaticMeshComponent.h"

ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);
}