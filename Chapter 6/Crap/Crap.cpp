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

    unsigned int gamePoint{0}; // initiallize gamePoint
    Status gameStatus; // initialize game status
    unsigned int sumOfDice{rollDice()};

    switch(sumOfDice) {
        case 7:
        case 11: {
            
        }
    }
}