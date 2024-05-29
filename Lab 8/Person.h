#include <iostream>
#include <string>
#include <list>

using std::list;
using std::string;

/**
 * @class Person
 * @brief Represents a person with basic information such as name, gender, email address, and contact number.
 */

class Person
{
protected:
    string fname; 
    string lname;  
    char gender; 

public:
    string emailAdd;
    string cpNumber;

    /**
     * @brief Default constructor for the Person class.
     */
    Person() {}

    /**
     * @brief Sets the email address of the person.
     * @param email The email address to set.
     */
    void setEmailAdd(const string &email)
    {
        emailAdd = email;
    }

    /**
     * @brief Sets the contact number of the person.
     * @param num The contact number to set.
     */
    void setCPNum(const string &num)
    {
        cpNumber = num;
    }

    /**
     * @brief Sets the first name of the person.
     * @param fn The first name to set.
     */
    void setFName(const string &fn)
    {
        fname = fn;
    }

    /**
     * @brief Sets the last name of the person.
     * @param ln The last name to set.
     */
    void setLName(const string &ln)
    {
        lname = ln;
    }

    /**
     * @brief Sets the gender of the person.
     * @param g The gender to set.
     */
    void setGender(char g)
    {
        gender = g;
    }

    /**
     * @brief Gets the email address of the person.
     * @return The email address of the person.
     */
    const string &getEmailAdd() const
    {
        return emailAdd;
    }

    /**
     * @brief Gets the contact number of the person.
     * @return The contact number of the person.
     */
    const string &getCPNum() const
    {
        return cpNumber;
    }

    /**
     * @brief Gets the first name of the person.
     * @return The first name of the person.
     */
    const string &getFName() const
    {
        return fname;
    }

    /**
     * @brief Gets the last name of the person.
     * @return The last name of the person.
     */
    const string &getLName() const
    {
        return lname;
    }

    /**
     * @brief Gets the gender of the person.
     * @return The gender of the person.
     */
    char getGender()
    {
        return gender;
    }
};
