//
//  main.cpp
//  Compare Integers using if statements
//
//  Created by Zhaoyu Lai on 2019/2/22.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

// function main begins program execution
int main(){
    int number1{0}, number2{0}; // integers to compare, initialized to 0
    
    cout << "Enter two intergers to compare: "; // prompt user for data
    cin >> number1 >> number2; // read two integers from user
    
    if (number1 == number2){
        cout << number1 << " == " << number2 << endl;
    }
    
    if (number1 != number2){
        cout << number1 << " != " << number2 << endl;
    }
    
    if (number1 > number2){
        cout << number1 << " > " << number2 << endl;
    }
    
    if (number1 < number2){
        cout << number1 << " < " << number2 << endl;
    }
    
    if (number1 >= number2){
        cout << number1 << " >= " << number2 << endl;
    }
    
    if (number1 <= number2){
        cout << number1 << " <= " << number2 << endl;
    }
}
