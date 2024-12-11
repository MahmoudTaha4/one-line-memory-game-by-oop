#include <bits/stdc++.h>
using namespace std;

#ifndef ONE_LINE_MEMORY_GAME_GAMEMANAGE_H
#define ONE_LINE_MEMORY_GAME_GAMEMANAGE_H

#include "Player.h"
#include "GameBoard.h"

class GameManage {
    vector <Player> players;
    GameBoard gameBoard;
public:
    GameManage(){}
    void run();
};


#endif //ONE_LINE_MEMORY_GAME_GAMEMANAGE_H
