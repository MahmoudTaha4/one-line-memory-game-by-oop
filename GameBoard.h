#include <bits/stdc++.h>
using namespace std;

#ifndef ONE_LINE_MEMORY_GAME_GAMEBOARD_H
#define ONE_LINE_MEMORY_GAME_GAMEBOARD_H


class GameBoard {
    vector <char> numbers;
    vector <char> board;
public:
    GameBoard();
    void gameNumbers();
    void gameBoard();
    bool moveCheck(int firstIndex, int secondIndex);
    void updateBoard(int firstIndex, int secondIndex);
    void gameBoardAndNumbers(int firstIndex, int secondIndex);
    void clearBoard();
};


#endif //ONE_LINE_MEMORY_GAME_GAMEBOARD_H
