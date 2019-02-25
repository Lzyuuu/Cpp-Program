//
//  main.cpp
//  Maximum
//
//  Created by Zhaoyu Lai on 2019/2/25.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;
// Declare function
int maximum(int x, int y, int z);

int main() {
    cout << "Enter three integers values: "; // prompt
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3; // input 3 integers
    
    // calculate maximum and print
    cout << "The maximum integer value in " << int1 << ", " << int2 << ", " << int3
    << " is: " << maximum(int1, int2, int3) << endl;
}

int maximum(int x, int y, int z) {
    int maximumValue{x}; // assume maximum value is x
    if (y > maximumValue) {
        maximumValue = y;
    } // compare y and maximum value, remain the greater one in maximumvalue
    if (z > maximumValue) {
        maximumValue = z;
    } // compare z and maximum value, remain the greater one in maximumvalue
    return maximumValue;
}
