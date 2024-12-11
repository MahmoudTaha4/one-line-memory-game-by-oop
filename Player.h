#include <bits/stdc++.h>
using namespace std;

#ifndef ONE_LINE_MEMORY_GAME_PLAYER_H
#define ONE_LINE_MEMORY_GAME_PLAYER_H


class Player {
    string playerName;
    int playerScore;
public:
    Player (string name, int score):playerName(name), playerScore(score){}
    string getPlayerName();
    int getPlayerScore();
    void increaseScore();
};


#endif //ONE_LINE_MEMORY_GAME_PLAYER_H
