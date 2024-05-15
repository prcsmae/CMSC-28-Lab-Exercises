#include <iostream>
#include <string>
using std::string;

class Grades{
    int grade;
    string subject;

public:
    Grades(){}

    void setGrade(int a){
        grade = a;
    }

    void setSubj(string subj){
        subject = subj;
    }

    void gradeStatus(){
        if (grade < 0 || grade > 100){
            cout << "Invalid grade.";
            return;
        }

        if (grade < 60){
            cout << "You have failed.\n";
        } else{
            cout << "You have passed.\n";
        }
        return;
    }

    int getGrade(){
        return grade;
    }

    string getSubj(){
        return subject;
    }
};
