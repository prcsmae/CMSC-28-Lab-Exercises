#ifndef PERSON
#define PERSON

#include <list>
#include <string>

using std::list;
using std::string;

/**
 * @class Person
 * @brief Represents a person with first name, last name, and gender.
 */
class Person {
protected:
  string fname, lname, gender;

public:
  /**
   * @brief Default constructor for the Person class.
   */
  Person();

  /**
   * @brief Sets the first name of the person.
   * @param fn The first name to set.
   */
  void setFName(const string &fn);

  /**
   * @brief Sets the last name of the person.
   * @param ln The last name to set.
   */
  void setLName(const string &ln);

  /**
   * @brief Sets the gender of the person.
   * @param g The gender to set.
   */
  void setGender(const string &g);

  /**
   * @brief Gets the first name of the person.
   * @return The first name of the person.
   */
  const string &getFName() const;

  /**
   * @brief Gets the last name of the person.
   * @return The last name of the person.
   */
  const string getLName() const;

  /**
   * @brief Gets the full name of the person.
   * @return The full name of the person.
   */
  const string getName();

  /**
   * @brief Gets the gender of the person.
   * @return The gender of the person.
   */
  const string &getGender() const;
};

#endif
