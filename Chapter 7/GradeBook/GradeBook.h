// GradeBook.h
// Headers
#include <iostream>
#include <iomanip>
#include <array>
#include <string>

// GradeBooks definition
// Public:
// 1. Initialization
// 2. Funtion :
//    ~ setCourseName
//    ~ getCourseName
//    ~ displayMessage
//    ~ progressGrades (max, min, avg, barChart)
//    ~ getMaximum
//    ~ getMinimum
//    ~ getAverage
//    ~ outputBarChart
//    ~ outputGrades
// Private:
// courseName, grades

class GradeBook {
public:
    // constant number of students who took the test
    static const size_t students{10};

    // initialization
    GradeBook(const std::string& name, const std::array<int, students>& gradeArray)
    : courseName{name}, grades{gradeArray} { }

    void setCourseName(const std::string& name) { // courseName is not const value
        courseName = name; // store course name
    }

    const std::string getCourseName() const{
        return courseName;
    }

    void displayMessage() const{
        std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl; 
    }

    void progressGrades() const{
        outputGrades(); // output the students grades

        // display average
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "\nClass average is " << getAverage() << std::endl;

        // call get Minimum function and getMaximum function
        std::cout << "Lowest grade is " << getMinimum() << std::endl;
        std::cout << "Highest grade is " << getMaximum() << std::endl;

        // display bar chart
        outputBarChart();
    }

    void outputGrades() const{
        std::cout << "\nThe grades are:" << std::endl;
        for (size_t i{1}; i <= students; ++i) {
            std::cout << "Student " << std::setw(2) << i << ": " << std::setw(3) << grades[i] << std::endl;
        }
    }

    // get average value
    double getAverage() const{
        int total{0};
        // calculate the total grade
        for (int grade : grades) {
            total += grade;
        }
        return static_cast<double>(total) / grades.size();
    }

    // get minimum value
    int getMinimum() const {
        int minGrade{0};
        for (int grade : grades) {
            if (grade < minGrade) {
                minGrade = grade;
            }
        }
        return minGrade;
    }

    // get maximum value
    int getMaximum() const {
        int maxGrade{100};
        for (int grade : grades) {
            if (grade > maxGrade) {
                maxGrade = grade;
            }
        }
        return maxGrade;
    }

    void outputBarChart() const{
        // calculate the frequency bar, 0-10
        const size_t frequencySize{11};
        std::array<unsigned int, frequencySize> frequency{};
        for (int grade : grades) {
            ++frequency[grade / 10];
        }

        // display bar chart
        std::cout << "\nGrade distribution:" << std::endl;
        for (size_t j{0}; j < frequencySize; ++j) {
            // display labels
            if (j == 0) {
                std::cout << "  0 - 9: ";
            }
            else if (j == 10) {
                std::cout << "    100: ";
            }
            else {
                std::cout << j * 10 << " - " << j * 10 + 9 << ": ";
            }

            // display star bar
            for(size_t starNum{0}; starNum < frequency[j]; ++starNum) {
                std::cout << "*";
            }
            std::cout << std::endl;
        } 
    }

private:
    std::string courseName; // 声明变量，courseName
    std::array<int, students> grades; // 声明变量，成绩数组
};