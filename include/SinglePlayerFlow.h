//
// Created by kostarubtsov1990 on 17/11/17.
//

#ifndef EX2_SINGLEPLAYERFLOW_H
#define EX2_SINGLEPLAYERFLOW_H

#include "GameFlow.h"
#include "ReversiGame.h"

class SinglePlayerFlow : public GameFlow{
public:
//    MultiPlayerFlow();
    SinglePlayerFlow(Game* game);
    virtual void Run();
    ~SinglePlayerFlow();
private:
    void RunHumanPlayerGame(playerIdentifier id, boardContent symbol);
    void RunAIPlayerGame(playerIdentifier id, boardContent symbol);
    void PrintHandler(playerIdentifier id, const vector<Cell>& possibleLocations) const;
    Cell InputHandler() const;
    int GetScore (Board* board);
    playerIdentifier player;
    playerIdentifier computer;

};


#endif //EX2_SINGLEPLAYERFLOW_H
