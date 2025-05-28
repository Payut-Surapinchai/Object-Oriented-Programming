// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef PERSON_H
#define PERSON_H
#include <string>

// This is a header file for the Person class where I will declare the constructors, its variables, \
// and its methods.

// Create a class called Person.
class Person 
{

// Instantiate the private variables.
private:

    std::string personName;
    int personAge;

// Instantiate the public constructors, getters, and setters.
public:

    // Declare the default contructor.
    Person();

    // Declare the parameterized constructor.
    Person(std::string pName, int pAge);

    // Declare the getters.
    std::string getPersonName();
    int getPersonAge();

    // Declare the setters.
    void setPersonName(std::string pName);
    void setPersonAge(int pAge);
};

#endif