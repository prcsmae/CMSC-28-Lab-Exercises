#include <iostream>
#include <string>
#include "Person.h"

using std::string;

/**
 * @class Employee
 * @brief Represents an employee in a company.
 *
 * The Employee class is a base class that provides common attributes and methods for all employees.
 * It contains information such as employee number, position, office, and salary.
 */
class Employee : public Person
{
    string empNum;

public:
    string position;
    string office;
    float salary;

    /**
     * @brief Sets the employee number.
     * @param employeeNum The employee number to set.
     */
    void setEmpNum(const string &employeeNum)
    {
        empNum = employeeNum;
    }

    /**
     * @brief Sets the position of the employee.
     * @param pos The position to set.
     */
    void setPos(const string &pos)
    {
        position = pos;
    }

    /**
     * @brief Sets the office of the employee.
     * @param inputOffice The office to set.
     */
    void setOffice(const string &inputOffice)
    {
        office = inputOffice;
    }

    /**
     * @brief Sets the salary of the employee.
     * @param inputSalary The salary to set.
     */
    void setSalary(float inputSalary)
    {
        salary = inputSalary;
    }

    /**
     * @brief Gets the employee number.
     * @return The employee number.
     */
    const string &getEmpNum() const
    {
        return empNum;
    }

    /**
     * @brief Gets the position of the employee.
     * @return The position.
     */
    const string &getPos() const
    {
        return position;
    }

    /**
     * @brief Gets the office of the employee.
     * @return The office.
     */
    const string &getOffice() const
    {
        return office;
    }

    /**
     * @brief Gets the salary of the employee.
     * @return The salary.
     */
    float getSalary()
    {
        return salary;
    }
};