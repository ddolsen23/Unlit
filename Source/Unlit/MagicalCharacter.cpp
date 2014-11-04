// Fill out your copyright notice in the Description page of Project Settings.

#include "Unlit.h"
#include "MagicalCharacter.h"


AMagicalCharacter::AMagicalCharacter(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP) {
	//static FName CollisionProfileName(TEXT("Pawn"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/Meshes/UFO.UFO"));
	//// Create the mesh component
	//ShipMeshComponent = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("ShipMesh"));
	//RootComponent = ShipMeshComponent;
	//ShipMeshComponent->SetCollisionProfileName(CollisionProfileName);
	//ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	//// Cache our sound effect
	//static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/Audio/TemplateTSS_WeaponFire.TemplateTSS_WeaponFire"));
	//FireSound = FireAudio.Object;

	//// Create a spring arm component
	//CameraBoom = PCIP.CreateDefaultSubobject<USpringArmComponent>(this, TEXT("SpringArm0"));
	//CameraBoom->AttachTo(RootComponent);
	//CameraBoom->TargetArmLength = 160.0f; // The camera follows at this distance behind the character	
	//CameraBoom->SocketOffset = FVector(0.f, 0.f, 60.f);
	//CameraBoom->bEnableCameraLag = false;
	//CameraBoom->CameraLagSpeed = 15.f;

	//// Create camera component 
	//CameraComponent = PCIP.CreateDefaultSubobject<UCameraComponent>(this, TEXT("Camera0"));
	//CameraComponent->AttachTo(CameraBoom, USpringArmComponent::SocketName);
	//CameraComponent->bUsePawnControlRotation = false; // Don't rotate camera with controller

	//// Weapon
	//FireRate = 0.1f;
	//bCanFire = true;

	//// Movement
	//Acceleration = 1100.f;
	//TurnSpeedX = 88.f;
	//TurnSpeedY = 56.f;
	//MaxSpeed = 4100.f;
	//MinSpeed = 420.f;
	//CurrentForwardSpeed = 950.f;


}
