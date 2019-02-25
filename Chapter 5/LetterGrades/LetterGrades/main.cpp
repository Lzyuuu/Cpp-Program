//
//  main.cpp
//  LetterGrades
//
//  Created by Zhaoyu Lai on 2019/2/23.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total{0}; // sum of grades
    unsigned int gradeCounter{0}; // number of grades enter
    unsigned int aCount{0}; // count of A grades
    unsigned int bCount{0}; // count of B grades
    unsigned int cCount{0}; // count of C grades
    unsigned int dCount{0}; // count of D grades
    unsigned int fCount{0}; // count of F grades
    
    cout << "Enter the integer grades in the range 0-100.\n"
    << "Type the end-of-file indicator to terminate input:\n"
    << "   On UNIX/Linux/Mac OS X type <Ctrl> d then press Enter\n"
    << "   On Windows type <Ctrl> z then press Enter\n";
    
    int grade;
    
    // Loop until user enter end-of-file
    while (cin >> grade) {
        total += grade; // add grade to total
        gradeCounter = gradeCounter + 1;
        
        switch (grade / 10) {
            case 9:
            case 10: // grade between 90 to 100
                ++aCount;
                break;
                
            case 8: // grade between 80 to 90
                ++bCount;
                break;
                
            case 7: // grade between 70 to 80
                ++cCount;
                break;
                
            case 6: // grade between 60 to 70
                ++dCount;
                break;
                
            default: // under 60
                ++fCount;
                break;
        }
    }
    
    cout << setprecision(2) << fixed;
    cout << "\nGrade report:\n";
    
    if (gradeCounter != 0) {
        double average = static_cast<double>(total) / gradeCounter;
        
        // output
        cout << "Total of the " << gradeCounter << " grades entered is "
        << total << "\nClass average is " << average
        << "\nNumber of students who received each grade:"
        << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
        << "\nD: " << dCount << "\nf: " << fCount << endl;
    }
    else {
        cout << "No grades were entered" << endl;
    }
}

