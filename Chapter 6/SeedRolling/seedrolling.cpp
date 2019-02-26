#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // prompt
    /*cout << "Enter seed: ";
    unsigned int seed{0};
    cin >> seed;
    srand(seed);*/
    srand(static_cast<unsigned int>(time(0)));

    cout << "Enter rolling times: ";
    unsigned int times{0};
    cin >> times;

    for (unsigned int roll{1}; roll <= times; ++roll) {
        int face{1 + rand() % 6};
        cout << setw(4) << face;
        
        if (roll % 5 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}