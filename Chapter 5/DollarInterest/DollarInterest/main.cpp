//
//  main.cpp
//  DollarInterest
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "DollarAmount.h"

using namespace std;

int main() {
    DollarAmount d1{12345};
    DollarAmount d2{1576};
    
    cout << "After adding d2 (" << d2.toString() << ") into d1 (" << d1.toString() << "), d1 = ";
    d1.add(d2); // add d2 to d1
    cout << d1.toString() << endl;
    
    cout << "After subtracting d2 (" << d2.toString() << ") from d1 (" << d1.toString() << "), d1 = ";
    d1.subtract(d2); // subtract d2 from d1
    cout << d1.toString() << endl;
    
    cout << "After subtracting d1 (" << d1.toString() << ") from d2 (" << d2.toString() << "), d2 = ";
    d2.subtract(d1); // subtract d1 from d2
    cout << d2.toString() << endl;
    cout << "\n";
    
    cout << "Enter integer interest rate and divisor. For example:\n"
    << "for     2%, enter:    2 100\n"
    << "for   2.3%, enter:   23 1000\n"
    << "for  2.37%, enter:  237 10000\n"
    << "for 2.375%, enter: 2375 100000\n> ";
    
    // initialize rate and divisor
    int rate;
    int divisor;
    cin >> rate >> divisor;
    
    DollarAmount balance{100000}; // initial principal amount in pennies
    cout << "\nInitial balance: " << balance.toString() << endl;
    
    // display headers
    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
    
    // calculate amount on deposit for each of ten years
    for (unsigned int year{1}; year <= 10; year++) {
        // increase balance by rate
        balance.addInterest(rate, divisor);
        
        // display the year and the amout
        cout << setw(4) << year << setw(20) << balance.toString() << endl;
    }
}
