//
//  main.cpp
//  Adding Intergers
//  Addition program that displays the sum of two intergers
//
//  Created by Zhaoyu Lai on 2019/2/22.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>

// funtion main begins
int main() {
    // declaring and initializing variables
    int number1{0}, number2{0};// two integer, initialized to 0
    int sum{0}; // sum of number1 and number2, initialized to 0
    
    std::cout << "Enter first integer: "; // prompt user for data
    std::cin >> number1; // read first data
    
    std::cout << "Enter second integer: "; // prompt user for data
    std::cin >> number2; // read second data
    
    sum = number1 + number2; // add the number and store in sum
    
    std::cout << "Sum is " << sum << std::endl; // display sum, end line
}
