//
//  main.cpp
//  CrapStimulation
//
//  Created by Zhaoyu Lai on 2019/2/26.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// function declare
unsigned int rollDice();

// program begins
int main() {
    // declare 3 status
    enum class Status {CONTINUE, WON, LOST};
    
    // random due to the current time
    srand(static_cast<unsigned int>(time(0)));
    
    unsigned int myPoint{0}; // initiallize gamePoint
    Status gameStatus; // initialize game status
    unsigned int sumOfDice{rollDice()};
    
    // judge game status
    switch (sumOfDice) {
        case 7:
        case 11: // 7, 11 will win
            gameStatus = Status::WON;
            break;
        case 2:
        case 3:
        case 12: // 2, 3, 12 will lost
            gameStatus = Status::LOST;
            break;
        default: // otherwise, the game will continue
            gameStatus = Status::CONTINUE;
            myPoint = sumOfDice;
            cout << "Your point is " << myPoint << endl;
            break;
    }
    
    while (gameStatus == Status::CONTINUE) {
        sumOfDice = rollDice();
        // if roll to my point, win
        if (sumOfDice == myPoint) {
            gameStatus = Status::WON;
        }
        // if roll to 7 , lost
        if (sumOfDice == 7) {
            gameStatus = Status::LOST;
        }
    }
    
    if (gameStatus == Status::WON) {
        cout << "Player Won" << endl;
    }
    else {
        cout << "Player Lost" << endl;
    }
}

unsigned int rollDice() {
    int dice1{1 + rand() % 6};
    int dice2{1 + rand() % 6};
    int sum{dice1 + dice2};
    // display result
    cout << "Player rolled " << dice1 << " + " << dice2 << " = " << sum << endl;
    return sum;
}
