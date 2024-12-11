#include <bits/stdc++.h>
using namespace std;
#include <unistd.h>

#include "GameBoard.h"

GameBoard::GameBoard() {
    numbers.resize(20);
    board.resize(20, '*');

    char currNum = 'a';
    for(int i = 0; i < 20; i++){
        numbers[i] = currNum;
        currNum++;
        if(currNum == 'a' + 9){
            currNum = 'a';
        }
    }

    random_shuffle(numbers.begin(), numbers.end());
}

void GameBoard::gameNumbers() {
    cout << "**** Welcome to one line memory game ****" << endl;
    for(int i = 0; i < 20; i++){
        cout << i << ' ';
    }
    cout << endl;
    for(int i = 0; i < 20; i++){
        if(i > 10){
            cout << ' ';
        }
        cout << numbers[i] << ' ';
    }
    cout << endl;
}

void GameBoard::gameBoard(){
    for(int i = 0; i < 20; i++){
        cout << i << ' ';
    }
    cout << '\n';
    for(int i = 0; i < 20; i++){
        if(i > 10){
            cout << ' ';
        }
        cout << board[i] << ' ';
    }
    cout << '\n';
}

bool GameBoard::moveCheck(int firstIndex, int secondIndex) {
    if(firstIndex >= 0 && secondIndex >= 0 && firstIndex < 20 && secondIndex < 20 &&
       board[firstIndex] == '*' && board[secondIndex] == '*'
       && numbers[firstIndex] == numbers[secondIndex]){
        return true;
    }
    else {
        return false;
    }
}

void GameBoard::updateBoard(int firstIndex, int secondIndex) {
    board[firstIndex] = numbers[firstIndex];
    board[secondIndex] = numbers[secondIndex];
}

void GameBoard::gameBoardAndNumbers(int firstIndex, int secondIndex) {
    for(int i = 0; i < 20; i++){
        if(i == firstIndex || i == secondIndex){
            cout << numbers[i] << ' ';
        }
        else{
            cout << board[i] << ' ';
        }
    }
    cout << '\n';
}

void GameBoard::clearBoard() {
    sleep(2);
    system("cls");
}

