/*
    C++ implementation of HashMap
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    // Define the HashMap and fill it with pre-filled student names and grades
    unordered_map<string, double> student_grades = {
        {"Quincy Wraight", 65.4},
        {"Derek Tickle", 70.2},
        {"Emma Dobin", 98.5},
        {"Julia Warren", 92.5}};

    // Prompt the user to enter the name and new grade of the student
    string name;
    double new_grade;
    cout << "This program will allow you to change a student's grade." << endl;
    cout << "Enter the student's name:" << endl;
    cin >> name;
    cout << "And new grade: " << endl;
    cin >> new_grade;
    cout << endl;

    // Get the original grade of the student from the HashMap
    double original_grade = student_grades[name];

    // Output the original grade and the new grade of the student
    cout << "------------------------------------------" << endl;
    cout << name << "'s original grade: " << original_grade << endl;
    cout << name << "'s new grade: " << new_grade << endl;
    cout << "------------------------------------------" << endl;

    // Update the grade of the student in the HashMap
    student_grades[name] = new_grade;

    return 0;
}