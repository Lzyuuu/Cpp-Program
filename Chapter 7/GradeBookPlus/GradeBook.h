//
//  GradeBook.h
//  GradeBookPlus
//
//  Created by Zhaoyu Lai on 2019/2/27.
//  Copyright © 2019 Zhaoyu Lai. All rights reserved.
//

// Function:
//  ~ setCourseName
//  ~ getCourseName
//  ~ displayMessage >> CourseName
//  ~ processGrade >> outputGrades, getMinimum, getMaximum, outputBarChart
//  ~ getMinimum / getMaximum
//  ~ getAverage
//  ~ outputGrades
//  ~ outputBarChart

// Headers
#include <array>
#include <iostream>
#include <string>
#include <iomanip>

// GradeBook class definition
class GradeBook {
public:
    static const size_t studentsNum{10}; // 10 students totally
    static const size_t testsNum{3}; // 3 test totally
    
    // constructor (name和gradeArray是外部传入的参量， courseName和grades是类声明变量)
    GradeBook(const std::string& name, std::array<std::array<int, testsNum>, studentsNum>& gradeArray) 
    : courseName(name), grades(gradeArray) {
    }
    
    // set courseName as name
    void setCourseName(const std::string& name) {
        courseName = name;
    }

    // get course name from courseName
    const std::string& getCourseName() const{
        return courseName;
    }

    // display welcome message and course name
    void displayMessage() const{
        std::cout << "Welcome to the grade book for\n" << getCourseName() 
        << "!" << std::endl;
    }

    // process the grade function
    void processGrade() const{
        // display all students' grades
        outputGrades();

        // display the Highest and Lowest grade in gradebook
        std::cout << "\nLowest grade in the grade book is " << getMinimum() << std::endl;
        std::cout << "Highest grade in the grade book is " << getMaximum() << std::endl;

        // display the bar chart
        outputBarChart();
    }

    // calculate the minimum grade
    int getMinimum() const{
        int lowGrade{100};
        for (auto const& student : grades) {
            for (auto const& grade : student) {
                if (grade < lowGrade) {
                    lowGrade = grade;
                }
            }
        }
        return lowGrade;
    }

    // calculate the maximum grade
    int getMaximum() const{
        int highGrade{0};
        for (auto const& student : grades) {
            for (auto const& grade : student) {
                if (grade > highGrade) {
                    highGrade = grade;
                }
            }
        }
        return highGrade;
    }

    // calculate the average grade of each student
    double getAverage(const std::array<int, testsNum>& setOfGrades) const{
        int total{0};
        for (int grade : setOfGrades) {
            total += grade;
        }
        return static_cast<double>(total) / setOfGrades.size();
    }

    // output the bar chart
    void outputBarChart() const{
        // calculate the frequency
        const size_t frequencySize{11};
        std::array<int, frequencySize> frequency{};
        for (auto const& student : grades) {
            for (auto const& test : student) {
                ++frequency[test / 10];
            }
        }

        // display bar chart
        std::cout << "\nOverall grade distribution:" << std::endl;
        for (unsigned int i{0}; i < frequencySize; ++i) {
            // display the labels
            if (i == 0) {
                std::cout << "  0 - 9: ";
            }
            else if (i == 10) {
                std::cout << "    100: ";
            }
            else {
                std::cout << i * 10 << " - " << i * 10 + 9 << ": ";
            }

            // display the star bar
            for (unsigned int starNum{0}; starNum < frequency[i]; ++starNum) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    // output the student grade array
    void outputGrades() const{
        // display the title
        std::cout << "\nThe grades are:" << std::endl;

        // display the column labels
        std::cout << "\n            ";
        for (size_t test{0}; test < testsNum; ++test) {
            std::cout << "Test " << test + 1 << "  ";
        }
        std::cout << "Average" << std::endl;

        // display each student's grade
        for (size_t student{0}; student < studentsNum; ++student) {
            // display the student ID
            std::cout << "Student" << std::setw(2) << student + 1;

            // display the grade
            for (size_t test{0}; test < testsNum; ++test) {
                std::cout << std::setw(8) << grades[student][test];
            }

            // display the average
            double average{getAverage(grades[student])};
            std::cout << std::setw(8) << std::setprecision(2) << std::fixed << average << std::endl;
        }
    }
    
private:
    std::string courseName;
    std::array<std::array<int, testsNum>, studentsNum> grades;
};
