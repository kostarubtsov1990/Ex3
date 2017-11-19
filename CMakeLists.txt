cmake_minimum_required(VERSION 3.8)
project(Ex3)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Board.cpp Board.h ReversiGame.cpp ReversiGame.h Game.cpp Game.h GameLogic.cpp GameLogic.h Cell.cpp Cell.h GameFlow.cpp GameFlow.h MultiPlayerFlow.cpp MultiPlayerFlow.h DefaultLogic.cpp DefaultLogic.h SinglePlayerFlow.cpp SinglePlayerFlow.h GameMenu.cpp GameMenu.h ReversiGameMenu.cpp ReversiGameMenu.h)
add_executable(Ex3 ${SOURCE_FILES})