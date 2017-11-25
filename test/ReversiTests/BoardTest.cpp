//
// Created by kostarubtsov1990 on 24/11/17.
//

#include "BoardTest.h"


BoardTest::BoardTest() {
    eightPossMovesForOBoard = BoardFromFile("eightPossMovesForO.txt");
    noPossMovesForOBoard = BoardFromFile("noPossibleMovesForO.txt");
    noPossMovesForXBoard = BoardFromFile("noPossibleMovesForX.txt");
}


BoardTest::~BoardTest() {
    delete eightPossMovesForOBoard;
    delete noPossMovesForOBoard;
    delete noPossMovesForXBoard;
}


Board* BoardTest::BoardFromFile(const char *fileName) {
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



