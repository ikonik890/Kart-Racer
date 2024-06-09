// Fill out your copyright notice in the Description page of Project Settings.


#include "KR_Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AKR_Character::AKR_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(RootComponent);
	//CameraBoom->TargetArmLength = 800.0f;
	//CameraBoom->bUsePawnControlRotation = true;

	//FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	//FollowCamera->bUsePawnControlRotation = false;

	//bUseControllerRotationPitch = false;
	//bUseControllerRotationRoll = false;
	//bUseControllerRotationYaw = false;
	//
	//GetCapsuleComponent()->InitCapsuleSize(60.f, 96.f);

	//GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -91.f));
	//static ConstructorHelpers::FObjectFinder<USkeletalMesh>
	//	SkeletalMeshAsset(TEXT("/Game/Vehicles/Thunderstruck_Frame"));
	//if (SkeletalMeshAsset.Succeeded()) {
	//	GetMesh()->SetSkeletalMesh(SkeletalMeshAsset.Object);
	//}
}

// Called when the game starts or when spawned
void AKR_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKR_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AKR_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

