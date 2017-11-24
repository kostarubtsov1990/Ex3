//
// Created by alon on 20/11/17.
//


/*
#include "../gtest_src/gtest/gtest.h"
#include "../include/DefaultLogic.h"
*/

#include "gtest/gtest.h"
#include "../../include/DefaultLogic.h"
#include <fstream>
#include "BoardTest.h"



const Board createBoardFromFile(const char* fileName) {

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


    Board b = Board(boardStr);
    return b;
}


TEST_F(BoardTest, CheckMovesVecDataMember) {

    DefaultLogic dl = DefaultLogic();

    Board b = Board();

    dl.CheckPossibleMoves(&b,xplayer);
    EXPECT_EQ(dl.GetMoves().size(),4);

    dl.CheckPossibleMoves(&b,yplayer);
    EXPECT_EQ(dl.GetMoves().size(),4);


    //Board b1 = createBoardFromFile("noPossibleMovesForX.txt");
    dl.CheckPossibleMoves(noPossMovesForX, xplayer);
    EXPECT_EQ(dl.GetMoves().size(), 0);


    //Board b2 = createBoardFromFile("eightPossMovesForO.txt");
    dl.CheckPossibleMoves(eightPossMovesForO, yplayer);
    EXPECT_EQ(dl.GetMoves().size(), 8);


    //Board b3 = createBoardFromFile("noPossibleMovesForO.txt");
    dl.CheckPossibleMoves(noPossMovesForO, yplayer);
    EXPECT_EQ(dl.GetMoves().size(), 0);


}

TEST_F (BoardTest, CheckIfGameIsOver) {

    DefaultLogic dl = DefaultLogic();
    Board b = Board();

    for (int i = 0; i < NUM_OF_ROWS; i++) {
        for (int j = 0; j < NUM_OF_COLS; j++) {
            b.getBoardContent()[i][j] = X;
        }
    }
    EXPECT_TRUE(dl.IsGameOver(&b));

    for (int i = 0; i < NUM_OF_ROWS; i++) {
        for (int j = 0; j < NUM_OF_COLS; j++) {
            b.getBoardContent()[i][j] = O;
        }
    }

    EXPECT_TRUE(dl.IsGameOver(&b));

    //Board b1 = createBoardFromFile("noPossibleMovesForX.txt");
    EXPECT_FALSE(dl.IsGameOver(noPossMovesForX));

   // Board b2 = createBoardFromFile("noPossibleMovesForO.txt");
    EXPECT_FALSE(dl.IsGameOver(noPossMovesForO));


    //add test to case where board isnt full, and both players have no possible moves


 //   dl.CheckPossibleMoves(&b1, xplayer);

 //   EXPECT_EQ(dl.GetMoves().size(), 0);


    //   EXPECT_TRUE();


}

/*
 * check case where location doesnt appear in moves vector.
 * check case where format of location isnt of the form (row,col)
 * check case where location is valid
 */
TEST (IsLocationValid, CheckIfChosenLocationIsValid) {

}


TEST (CheckPossibleMovesMethod, CheckMovesVecDataMember) {

    DefaultLogic dl = DefaultLogic();
    Board *b = new Board();



//    Cell c(0,0);
//    b->getBoardContent()[0][0] = O;

//    EXPECT_EQ((dl.possibleLocAroundSpecificCell(b,c)).size(),3);

}


/*

TEST(UpdateMovesVector, ) {

}
*/

