//
//  main.cpp
//  WhileCounter
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    unsigned int counter{1};
    
    while (counter <= 10) {
        cout << counter << " ";
        counter = counter + 1;
    }
    cout << endl;
}
