//
// Created by kostarubtsov1990 on 24/11/17.
//

#include "UpdateBoardTest.h"

UpdateBoardTest::UpdateBoardTest() {
    //Two Blocks reverse.
    beforeTwoBlocksForOBoard = BoardFromFile("beforeTwoBlocksForO.txt");
    afterTwoBlocksForOBoard = BoardFromFile("afterTwoBlocksForO.txt");
    //Three Blocks reverse.
    beforeThreeBlocksForXBoard = BoardFromFile("beforeThreeBlocksForX.txt");
    afterThreeBlocksForXBoard = BoardFromFile("afterThreeBlocksForX.txt");

    beforeRightBlockForXBoard = BoardFromFile("beforeRightBlockForX.txt");
    afterRightBlockForXBoard = BoardFromFile("afterRightBlockForX.txt");

    beforeLeftBlockForXBoard = BoardFromFile("beforeLeftBlockForX.txt");
    afterLeftBlockForXBoard = BoardFromFile("afterLeftBlockForX.txt");

    beforeUpBlockForXBoard = BoardFromFile("beforeUpBlockForX.txt");
    afterUpBlockForXBoard = BoardFromFile("afterUpBlockForX.txt");

    beforeDownBlockForXBoard = BoardFromFile("beforeDownBlockForX.txt");
    afterDownBlockForXBoard = BoardFromFile("afterDownBlockForX.txt");

    beforeRightUpBlockForXBoard = BoardFromFile("beforeRightUpBlockForX.txt");
    afterRightUpBlockForXBoard = BoardFromFile("afterRightUpBlockForX.txt");

    beforeRightDownBlockForOBoard = BoardFromFile("beforeRightDownBlockForO.txt");
    afterRightDownBlockForOBoard = BoardFromFile("afterRightDownBlockForO.txt");

    beforeLeftDownBlockForXBoard = BoardFromFile("beforeLeftDownBlockForX.txt");
    afterLeftDownBlockForXBoard = BoardFromFile("afterLeftDownBlockForX.txt");

    beforeUpLeftBlockForOBoard = BoardFromFile("beforeUpLeftBlockForO.txt");
    afterUpLeftBlockForOBoard = BoardFromFile("afterUpLeftBlockForO.txt");

}

UpdateBoardTest::~UpdateBoardTest() {
    /*delete beforeTwoBlocksForOBoard;
    delete afterTwoBlocksForOBoard;*/
}

Board* UpdateBoardTest::BoardFromFile(const char *fileName) {
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
