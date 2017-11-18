/*
 * Name: Alon Barkan
 * Id: 200958296
 */

#include "GameFlow.h"

GameFlow::~GameFlow() {}

GameFlow::GameFlow(Game* game): game(game){}

Game* GameFlow::GetGame() {
    return this->game;
}

