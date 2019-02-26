#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

unsigned long fractorial(unsigned long); // function prototype

int main() {
    for (unsigned int times{0}; times <= 10; ++times) {
        cout << setw(3) << times << "!" << " = " << fractorial(times) << endl;
    }
}

unsigned long fractorial(unsigned long number) {
    if (number <= 1) { // 0!=1, 1!=1
        return 1;
    }
    else {
        return number * fractorial(number - 1);
    }
}