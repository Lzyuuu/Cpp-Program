//
//  main.cpp
//  ClassAverage
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // initialized total and grade
    int total{0};
    unsigned int gradeCounter{1};
    
    // while loop
    while (gradeCounter <= 10) {
        cout << "Enter grade: "; // prompt
        int grade;
        cin >> grade; // input grade
        total = total + grade; // add grade to total
        gradeCounter = gradeCounter + 1; // increment counter by 1
    }
    
    // termination phase
    int average{total / 10};
    
    // display
    cout << "\nTotal of all 10 grade is: " << total;
    cout << "\nClass average is: " << average << endl;
}
