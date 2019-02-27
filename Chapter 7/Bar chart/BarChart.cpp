#include <iomanip>
#include <iostream>
#include <array>
using namespace std;

int main() {
    const size_t arraySize{11}; // array size is 11: 0-10
    array<unsigned int, arraySize> n{0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};
    // amount in every grade
    cout << "Grade distribution" << endl;

    // print the bar chart
    for (size_t i{0}; i < n.size(); ++i) {
        // draw labels
        if (i == 0) { // 0 - 9 need to specify
            cout << "  0 - 9: ";
        }
        else if (i == 10) {
            cout << "    100: ";
        }
        else {
            cout << i * 10 << " - " << i * 10 + 9 << ": ";
        }

        // draw bar
        for (unsigned int stars{0}; stars < n[i]; ++stars) {
            cout << "*";
        }
        cout << endl;
    }

}