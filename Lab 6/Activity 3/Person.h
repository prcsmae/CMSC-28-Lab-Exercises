#include <iostream>
#include <string>
#include <list>

using std::string;
using std::list;

/**
 * @class Person
 * @brief Represents a person with first name, last name, and gender.
 */
class Person{
    string fname; /**< The first name of the person. */
    string lname; /**< The last name of the person. */
    string gender; /**< The gender of the person. */

public:
    /**
     * @brief Default constructor for the Person class.
     */
    Person(){}

    /**
     * @brief Sets the first name of the person.
     * @param fn The first name to set.
     */
    void setFName(const string& fn){
        fname = fn;
    }

    /**
     * @brief Sets the last name of the person.
     * @param ln The last name to set.
     */
    void setLName(const string& ln){
        lname = ln;
    }

    /**
     * @brief Sets the gender of the person.
     * @param g The gender to set.
     */
    void setGender(const string& g){
        gender = g;
    }

    /**
     * @brief Gets the first name of the person.
     * @return The first name of the person.
     */
    const string& getFName() const{
        return fname;
    }

    /**
     * @brief Gets the last name of the person.
     * @return The last name of the person.
     */
    const string getLName() const{
        return lname;
    }

    /**
     * @brief Gets the full name of the person.
     * @return The full name of the person.
     */
    string getName(){
        return (fname + " " + lname);
    }

    /**
     * @brief Gets the gender of the person.
     * @return The gender of the person.
     */
    const string& getGender() const{
        return gender;
    }
};
