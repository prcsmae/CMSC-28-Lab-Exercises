// File: Personobject.cpp
#include <iostream>
#include "Person.h" // add Person.h as a library to this program
#include "Grades.h" // add Grades.h as a library to this program
using namespace std;

int main(){
    int a;
    char g;

    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;

    cout << "\nInput age: ";
    cin >> a;
    p.setage(a);

    cout << "Input gender: ";
    cin >> g;
    p.setgender(g);
    
    cout << "Age = " << p.getage() << endl;
    cout << "Gender = " << p.getgender() << endl;

    cout << "\nThis is an example of method overloading: \n";
    cout << "Using view 1: \n";
    p.view();

    cout << "\n==========================" << endl;
    cout << "Creating grades object." << endl;

    // Using new header line
    Grades x;

    int y;
    string s;

    cout << "Input grade: ";
    cin >> y;
    x.setGrade(y);
    x.gradeStatus();
    cout << "Input subject: ";
    cin >> s;
    x.setSubj(s);
   
    return 0;
}