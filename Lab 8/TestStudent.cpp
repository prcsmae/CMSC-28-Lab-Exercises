#include <iostream>
#include "Student.h"
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
        cout << "This program will generate a welcome message based on user input.\n\n"
                "Programmed by: Precious Mae E. Jomuad\nDate: 29/05/2024\n";

        string studentNum, course, dept, college, fname, lname, emailAdd, cpNum;
        char gender;
        Student student1;

        cout << "\nStudent First Name: ";
        getline(cin, fname);
        student1.setFName(fname);

        cout << "\nStudent Last Name: ";
        getline(cin, lname);
        student1.setLName(lname);

        cout << "\nStudent Gender: ";
        cin >> gender;
        student1.setGender(gender);

        cout << "\nStudent Email Address: ";
        cin.ignore();
        getline(cin, emailAdd);
            student1.setEmailAdd(emailAdd);

        cout << "\nStudent Phone Number: ";
        getline(cin, cpNum);
            student1.setCPNum(cpNum);

        cout << "\nStudent Number: ";
        getline(cin, studentNum);
        student1.setStudentNum(studentNum);

        cout << "\nCourse: ";
        getline(cin, course);
        student1.setCourse(course);

        cout << "\nDepartment: ";
        getline(cin, dept);
        student1.setDept(dept);

        cout << "\nCollege: ";
        getline(cin, college);
        student1.setCollege(college);

        cout << "\nHi " << student1.getFName() << " " << student1.getLName() << "! ";
        cout << "\nWelcome to UP Mindanao and congratulations on your admission!";
        cout << "\nYour student number is: " << student1.getStudentNum();
        cout << "\nYou are enrolled in the " << student1.getCourse() << " course.";
        cout << "\nYou are part of the " << student1.getDept() << " department.";
        cout << "\nYou are in the " << student1.getCollege();
        cout << "\nYour email address is: " << student1.getEmailAdd();
        cout << "\nYour phone number is: " << student1.getCPNum();
        cout << "\n\nWe are pleased to have you with us. Welcome aboard!";
}