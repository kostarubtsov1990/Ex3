//
// Created by kostarubtsov1990 on 25/11/17.
//

#ifndef EX3_WINORLOSETEST_H
#define EX3_WINORLOSETEST_H

#include "gtest/gtest.h"
#include "../../include/Board.h"
#include <fstream>

class WinOrLoseTest: public testing::Test {
public:
    WinOrLoseTest();
    ~WinOrLoseTest();

private:
    Board* BoardFromFile (const char *fileName);
protected:
    Board* OwinsBoard;
    Board* XwinsBoard;
    Board* DrawGameBoard;
};


#endif //EX3_WINORLOSETEST_H
