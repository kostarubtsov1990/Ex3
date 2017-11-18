/*
 * Name: Alon Barkan
 * Id: 200958296
 */

#include "ReversiGame.h"

ReversiGame::~ReversiGame() {
//    cout << "In ReversiGame D'tor" << endl;
    delete board;
    delete logic;
}

ReversiGame::ReversiGame(GameLogic* logic): Game::Game(logic),
                                                  xCounter(INITIAL_X_AND_O_COUNTER),
                                                  yCounter(INITIAL_X_AND_O_COUNTER) {}

GameLogic* ReversiGame::getGameLogic() const {
    return this->getGameLogic();
}

int ReversiGame::GetXcounter() const {
    return this->xCounter;
}

int ReversiGame::GetYcounter() const {
    return this->yCounter;
}

