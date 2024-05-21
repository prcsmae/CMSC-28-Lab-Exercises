#include "Person.h"

Person::Person() {}

void Person::setFName(const string &fn) { fname = fn; }

void Person::setLName(const string &ln) { lname = ln; }

void Person::setGender(const string &g) { gender = g; }

const string &Person::getFName() const { return fname; }

const string Person::getLName() const { return lname; }

const string Person::getName() { return (fname + " " + lname); }

const string &Person::getGender() const { return gender; }
