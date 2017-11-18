//
// Created by kostarubtsov1990 on 17/11/17.
//

#ifndef EX2_GAMEMENU_H
#define EX2_GAMEMENU_H

#include "GameFlow.h"

class GameMenu {
    public:
        virtual void Start() = 0;
        virtual GameFlow* GetGameFlow () = 0;
        virtual ~GameMenu();
};


#endif //EX2_GAMEMENU_H
