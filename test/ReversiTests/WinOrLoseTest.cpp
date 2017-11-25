//
// Created by kostarubtsov1990 on 25/11/17.
//

#include "WinOrLoseTest.h"


WinOrLoseTest::WinOrLoseTest() {
    OwinsBoard = BoardFromFile("Owins.txt");
    XwinsBoard = BoardFromFile("Xwins.txt");
    DrawGameBoard = BoardFromFile("DrawGame.txt");
}

WinOrLoseTest::~WinOrLoseTest() {
    delete OwinsBoard;
    delete XwinsBoard;
    delete DrawGameBoard;
}

Board* WinOrLoseTest::BoardFromFile(const char *fileName) {
    string line;
    string boardStr;
    ifstream myfile(fileName);

    if (myfile.is_open()) {
        for (int i = 0; i < NUM_OF_ROWS; i++) {
            getline(myfile, line);
            boardStr += line;
            boardStr += "\n";
        }
    }
    myfile.close();


    Board *b = new Board(boardStr);
    return b;
}