// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#include "Person.h"

// This is an implementation file where I will define each constructors, getters, and setters in the 
// Person class.

// Define the default constructor.
Person::Person()
{
    personName = "";
    personAge = 0;
}

// Define the parameterized constructor.
Person::Person(std::string pName, int pAge)
{
    personName = pName;
    personAge = pAge;
}

// From here until the next comment below, I will be defining the getters.
std::string Person::getPersonName()
{
    return personName;
}

int Person::getPersonAge()
{
    return personAge;
}

// From here until the end of this file, I will be defining the setters.
void Person::setPersonName(std::string pName)
{
    personName = pName;
}

void Person::setPersonAge(int pAge)
{
    personAge = pAge;
}