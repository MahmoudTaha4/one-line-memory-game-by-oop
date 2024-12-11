#include <bits/stdc++.h>
using namespace std;

#include "GameManage.h"


void GameManage::run() {

    gameBoard.gameNumbers();
    gameBoard.clearBoard();

    string playerOneName, playerTwoName;
    cout << " please enter the player one name: ";
    cin >> playerOneName;
    cout << " please enter the player two name: ";
    cin >> playerTwoName;
    players = {Player(playerOneName, 0), Player(playerTwoName, 0)};


    int currPlayer = 0;
    int numberOfRevealed = 0;
    while(numberOfRevealed < 10){
        cout << players[0].getPlayerName() << " :" << players[0].getPlayerScore() << endl;
        cout << players[1].getPlayerName() << " :" << players[1].getPlayerScore() << endl;

        gameBoard.gameBoard();

        cout << players[currPlayer].getPlayerName() << "'s turn" << endl;

        int firstIndex, secondIndex;
        cout << "enter first number: ";
        cin >> firstIndex;
        cout << "enter second number: ";
        cin >> secondIndex;

        if(gameBoard.moveCheck(firstIndex, secondIndex)){
            cout << "Well Played!\n";
            players[currPlayer].increaseScore();
            gameBoard.updateBoard(firstIndex, secondIndex);
            numberOfRevealed++;
        }
        else {
            cout << "Wrong Move!\n";
        }

        gameBoard.gameBoardAndNumbers(firstIndex, secondIndex);

        gameBoard.clearBoard();

        currPlayer++;
        currPlayer %= 2;
    }

    if(players[0].getPlayerScore() > players[1].getPlayerScore()){
        cout << players[0].getPlayerName() << " win!";
    }
    else if (players[0].getPlayerScore() < players[1].getPlayerScore()){
        cout << players[1].getPlayerName() << " win!";
    }
    else{
        cout << "draw!";
    }
}
