// Fill out your copyright notice in the Description page of Project Settings.


#include "KR_GameMode.h"
#include "KR_GameState.h"
#include "KR_PlayerController.h"
#include "KR_PlayerState.h"
#include "KR_Character.h"
#include "UObject/ConstructorHelpers.h"

AKR_GameMode::AKR_GameMode() {
	GameStateClass = AKR_GameState::StaticClass();
	PlayerStateClass = AKR_PlayerState::StaticClass();
	PlayerControllerClass = AKR_PlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<APawn>
	PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_Character"));
	if (PlayerPawnBPClass.Class != nullptr) {
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}