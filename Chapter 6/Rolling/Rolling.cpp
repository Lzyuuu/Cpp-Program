#include <iostream>
#include <iomanip>
#include <cstdlib> // include function for rand
using namespace std;

int main() {
    // initialize six face frequency
    unsigned int frequency1{0};
    unsigned int frequency2{0};
    unsigned int frequency3{0};
    unsigned int frequency4{0};
    unsigned int frequency5{0};
    unsigned int frequency6{0};
    int face{0};
    
    for (unsigned int roll{1}; roll <= 60'000'000; ++roll) {
        face = 1 + rand() % 6;

        switch (face) {
            case 1: {
                ++frequency1;
                break;
            }
            case 2: {
                ++frequency2;
                break;
            }
            case 3: {
                ++frequency3;
                break;
            }
            case 4: {
                ++frequency4;
                break;
            }
            case 5: {
                ++frequency5;
                break;
            }
            case 6: {
                ++frequency6;
                break;
            }
        }

    }
    
    // display
    cout << setw(4) << "Face" << setw(20) << "Frequency" << endl;
    cout << setw(4) << "1" << setw(20) << frequency1 << endl;
    cout << setw(4) << "2" << setw(20) << frequency2 << endl;
    cout << setw(4) << "3" << setw(20) << frequency3 << endl;
    cout << setw(4) << "4" << setw(20) << frequency4 << endl;
    cout << setw(4) << "5" << setw(20) << frequency5 << endl;
    cout << setw(4) << "6" << setw(20) << frequency6 << endl;
}