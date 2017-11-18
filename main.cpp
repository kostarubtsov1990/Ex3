/*
 * Name: Alon Barkan
 * Id: 200958296
 */

#include "MultiPlayerFlow.h"
#include "GameMenu.h"
#include "ReversiGameMenu.h"

int main() {
    //create the default logic and reversi game with the default logic

    GameMenu* menu = new ReversiGameMenu ();
    menu->Start();
    GameFlow* flow = menu->GetGameFlow();
    /*GameLogic* logic = new DefaultLogic();
    Game* game = new ReversiGame(logic);

    Board* board = new Board();
    game->SetBoard(board);

    GameFlow* flow = new MultiPlayerFlow(game);*/
    //start game
    flow->Run();

//    cout << "In main, before first delete" << endl;
    /*delete logic;
    delete game;*/
    delete menu;

    return 0;
}

