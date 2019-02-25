//
//  main.cpp
//  Analysis
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//
//

#include <iostream>
using namespace std;

int main() {
    // initialization
    unsigned int pass{0};
    unsigned int fail{0};
    unsigned int studentCounter{1};
    
    // loop until counter equal to 10
    while (studentCounter <= 10) {
        // prompt
        cout << "Enter result (1 = pass, 2 = fail): ";
        int result;
        cin >> result;
        
        // pass or fail
        if (result == 1) {
            pass = pass + 1;
        } else {
            fail = fail + 1;
        }
        
        // increment counter
        studentCounter = studentCounter + 1;
    }
    
    // termination phase
    cout << "Pass: " << pass << "\nFail: " << fail << endl;
    
    // determine whether more than 8 students passed
    if (pass > 8) {
        cout << "Bonus to instructor!" << endl;
    }
}
