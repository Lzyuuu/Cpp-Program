#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    const size_t arraySize{7};
    array<string, arraySize> colors{
        "red", "orange", "yellow", "green", "blue", "indigo", "violet"
    };

    // display unsorted array
    cout << "\nUnsorted array: " << endl;
    for (string color : colors) {
        cout << color << " ";
    }

    // sort array
    sort(colors.begin(), colors.end());
    cout << "\nSorted array: " << endl;
    for (string item : colors) {
        cout << item << " ";
    }

    // search for "indigo" in array
    bool found{binary_search(colors.begin(), colors.end(), "indigo")};
    cout << "\n\n\"indigo\" " << (found ? "was " : "was not ") << "found in colors" << endl;

    found = binary_search(colors.begin(), colors.end(), "cyan");
    cout << "\"cyan\" " << (found ? "was " : "was not ") << "found in colors" << endl;
}