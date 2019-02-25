//
//  main.cpp
//  Interest
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // initialization
    double principle{1000.00};  // initial amount
    double rate{0.05}; // interest rate
    
    cout << setprecision(2) << fixed;
    cout << "Original amount invested: " << principle << endl;
    cout << "    Annual interest rate: " << rate << endl;
    
    // display headers
    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
    
    // calculate every year's amount
    for (unsigned int year{1}; year <= 10; year++) {
        // calculate
        double amount = principle * pow(1.0 + rate, year);
        // display
        cout << setw(4) << year << setw(20) << amount << endl;
    }
}
