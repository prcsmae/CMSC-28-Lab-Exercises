#include <iostream>
#include "Person.h"
#include <string>

using std::string;

class Student : public Person
{
    string studentNum;

public:
    string course;
    string dept;
    string college;

    /**
     * @brief Default constructor for the Student class.
     */
    Student() {}

    /**
     * @brief Sets the student number.
     * @param num The student number to set.
     */
    void setStudentNum(const string &num)
    {
        studentNum = num;
    }

    /**
     * @brief Sets the course.
     * @param inputCourse The course to set.
     */
    void setCourse(const string &inputCourse)
    {
        course = inputCourse;
    }

    /**
     * @brief Sets the department.
     * @param inputDept The department to set.
     */
    void setDept(const string &inputDept)
    {
        dept = inputDept;
    }

    /**
     * @brief Sets the college.
     * @param col The college to set.
     */
    void setCollege(const string &col)
    {
        college = col;
    }

    /**
     * @brief Gets the student number.
     * @return The student number.
     */
    const string &getStudentNum() const
    {
        return studentNum;
    }

    /**
     * @brief Gets the course.
     * @return The course.
     */
    const string &getCourse() const
    {
        return course;
    }

    /**
     * @brief Gets the department.
     * @return The department.
     */
    const string &getDept() const
    {
        return dept;
    }

    /**
     * @brief Gets the college.
     * @return The college.
     */
    const string &getCollege() const
    {
        return college;
    }
};
