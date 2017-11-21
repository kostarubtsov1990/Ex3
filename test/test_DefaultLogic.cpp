//
// Created by alon on 20/11/17.
//


/*
#include "../gtest_src/gtest/gtest.h"
#include "../include/DefaultLogic.h"
*/

#include "../gtest_src/gtest/gtest.h"
#include "../include/DefaultLogic.h"



TEST(CheckPossibleMovesMeothd, CheckMovesVecDataMember) {

    DefaultLogic dl = DefaultLogic();
    Board* b = new Board();

    dl.CheckPossibleMoves(b,xplayer);
    EXPECT_EQ(dl.GetMoves().size(),4);

    dl.CheckPossibleMoves(b,yplayer);
    EXPECT_EQ(dl.GetMoves().size(),4);

 //   while ()



}

TEST (IsGameOverMethod, CheckIfGameIsOver) {

    DefaultLogic dl = DefaultLogic();
    Board* b = new Board();

    for (int i = 0; i < NUM_OF_ROWS; i++) {
        for (int j = 0; j < NUM_OF_COLS; j++) {
            b->getBoardContent()[i][j] = X;
        }
    }
    EXPECT_TRUE(dl.IsGameOver(b));

    for (int i = 0; i < NUM_OF_ROWS; i++) {
        for (int j = 0; j < NUM_OF_COLS; j++) {
            b->getBoardContent()[i][j] = O;
        }
    }
    EXPECT_TRUE(dl.IsGameOver(b));
}

/*
 * check case where location doesnt appear in moves vector.
 * check case where format of location isnt of the form (row,col)
 * check case where location is valid
 */
TEST (IsLocationValid, CheckIfChosenLocationIsValid) {

}

/*
TEST (CheckPossibleMovesMethod, CheckMovesVecDataMember) {

    DefaultLogic dl = DefaultLogic();
    Board *b = new Board();



//    Cell c(0,0);
//    b->getBoardContent()[0][0] = O;

//    EXPECT_EQ((dl.possibleLocAroundSpecificCell(b,c)).size(),3);

}
 */

/*

TEST(UpdateMovesVector, ) {

}
*/

