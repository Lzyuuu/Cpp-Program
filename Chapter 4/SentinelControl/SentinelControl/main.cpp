//
//  main.cpp
//  SentinelControl
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // initialization
    int total{0}; // initialize sum of grade
    unsigned int gradeCounter{0}; // initialize grades enter so far
    
    cout << "Enter grade or -1 to quit: "; // prompt
    int grade;
    cin >> grade; // user input
    
    // loop until sentinel
    while (grade != -1) {
        total = total + grade; // add grade to total
        gradeCounter = gradeCounter + 1; // increment counter
        
        // prompt for new input
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
    
    // termination phase
    if (gradeCounter != 0) {
        double average{static_cast<double>(total) / gradeCounter};
        // display
        cout << "\nTotal of the " << gradeCounter << " grades entered is " << total;
        cout << "\nClass average is " << setprecision(2) << fixed << average << endl;
    }
    else {
        cout << "No grades were entered." << endl;
    }
}
