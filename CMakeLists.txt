cmake_minimum_required(VERSION 3.8)
project(Ex3)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp src/Board.cpp include/Board.h src/ReversiGame.cpp include/ReversiGame.h src/Game.cpp include/Game.h src/GameLogic.cpp include/GameLogic.h src/Cell.cpp include/Cell.h src/GameFlow.cpp include/GameFlow.h src/MultiPlayerFlow.cpp include/MultiPlayerFlow.h src/DefaultLogic.cpp include/DefaultLogic.h src/SinglePlayerFlow.cpp include/SinglePlayerFlow.h src/GameMenu.cpp include/GameMenu.h src/ReversiGameMenu.cpp include/ReversiGameMenu.h test/test_DefaultLogic.cpp test/gtest_main.cpp)
add_executable(Ex3 ${SOURCE_FILES})


