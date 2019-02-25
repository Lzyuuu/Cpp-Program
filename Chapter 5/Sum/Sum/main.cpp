//
//  main.cpp
//  Sum
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    unsigned int total{0};
    
    // total even integers from 2 to 20
    for (unsigned int num{2}; num <= 20; num += 2) {
        total += num;
    }
    
    // display result
    cout << "Sum is " << total << endl;
}
