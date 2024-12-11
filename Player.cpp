#include <bits/stdc++.h>
using namespace std;

#include "Player.h"



string Player::getPlayerName() {
    return playerName;
}

int Player::getPlayerScore() {
    return playerScore;
}

void Player::increaseScore() {
    playerScore++;
}
