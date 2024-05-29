#include <iostream>
#include <string>
#include "Employee.h"
#include <iomanip>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
    cout << "This program will generate a welcome message based on user input.\n\n"
            "Programmed by: Precious Mae E. Jomuad\nDate: 29/05/2024\n";

    string empNum, office, college, fname, lname, emailAdd, cpNum, position;
    char gender;
    float salary;

    Employee employee1;

    cout << "\nEmployee First Name: ";
    getline(cin, fname);
    employee1.setFName(fname);

    cout << "\nEmployee Last Name: ";
    getline(cin, lname);
    employee1.setLName(lname);

    cout << "\nEmployee Gender: ";
    cin >> gender;
    employee1.setGender(gender);

    cout << "\nEmployee Email Address: ";
    cin.ignore();
    getline(cin, emailAdd);
    employee1.setEmailAdd(emailAdd);

    cout << "\nEmployee Phone Number: ";
    getline(cin, cpNum);
    employee1.setCPNum(cpNum);

    cout << "\nEmployee Position: ";
    getline(cin, position);
    employee1.setPos(position);

    cout << "\nOffice: ";
    getline(cin, office);
    employee1.setOffice(office);

    cout << "\nEmployee Salary: ";
    cin >> salary;
    employee1.setSalary(salary);

    cout << "Hi " << employee1.getFName() << " " << employee1.getLName() << "! ";
    cout << "\nWelcome to our UP Mindanao and congratulations on your new position as " << employee1.getPos() << ".";
    cout << "\nYour email address is: " << employee1.getEmailAdd();
    cout << "\nYour phone number is: " << employee1.getCPNum();
    cout << "\nYou are part of the " << employee1.getOffice() << " office.";
    cout << "\nYour salary is: " << std::fixed << std::setprecision(2) << employee1.getSalary();
    cout << "\n\nWe are pleased to have you with us. Welcome aboard!";
}