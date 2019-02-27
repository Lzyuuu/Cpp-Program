//
//  main.cpp
//  GradeBookXcode
//
//  Created by Zhaoyu Lai on 2019/2/27.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

#include <iostream>
#include <array>
#include "GradeBook.h"
using namespace std;

int main() {
    array<array<int, GradeBook::testsNum>, GradeBook::studentsNum> grades{
        88, 96, 70,
        68, 87, 90,
        94, 100, 90,
        100, 81, 82,
        83, 65, 85,
        78, 87, 65,
        85, 75, 83,
        91, 94, 100,
        76, 72, 84,
        87, 93, 73
    };
    
    GradeBook myGradeBook("CS101 Introduction to C++ Programming", grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrade();
}
