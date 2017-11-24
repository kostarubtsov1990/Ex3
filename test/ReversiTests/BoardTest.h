//
// Created by kostarubtsov1990 on 24/11/17.
//

#ifndef EX3_BOARDTEST_H
#define EX3_BOARDTEST_H

#include "gtest/gtest.h"
#include "../../include/Board.h"
#include <fstream>

class BoardTest : public testing::Test {
public:
    BoardTest() {
        eightPossMovesForO = BoardFromFile("eightPossMovesForO.txt");
        noPossMovesForO = BoardFromFile("noPossibleMovesForO.txt");
        noPossMovesForX = BoardFromFile("noPossibleMovesForX.txt");
    }

     Board* BoardFromFile (const char *fileName) {
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

    ~BoardTest() {
        delete eightPossMovesForO;
        delete noPossMovesForO;
        delete noPossMovesForX;
    }

protected:
    Board* eightPossMovesForO;
    Board* noPossMovesForO;
    Board* noPossMovesForX;
};

#endif //EX3_BOARDTEST_H
