//
// Created by kostarubtsov1990 on 24/11/17.
//

#ifndef EX3_BOARDTEST_H
#define EX3_BOARDTEST_H

#include "gtest/gtest.h"
#include "../../include/Board.h"
#include <fstream>

class BoardTest: public testing::Test {
public:
    BoardTest();
    ~BoardTest();
private:
    Board* BoardFromFile (const char *fileName);
protected:
    Board* eightPossMovesForOBoard;
    Board* noPossMovesForOBoard;
    Board* noPossMovesForXBoard;
};

#endif //EX3_BOARDTEST_H
