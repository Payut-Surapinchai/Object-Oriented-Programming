// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#ifndef PET_H
#define PET_H
#include <string>
#include <iostream>
#include "Date.h"

// This is a header file where I will declare the Pet class, its constructor, its member variables, 
// and its methods.

class Pet 
{
    // Private member variables.
    std::string name;
    Date DOB;  // Date type just means its from Date class, and DOB is an object instantiated from the Date class.
    std::string type;
    std::string breed;

public:

    // Default constructor and a fully parameterized constructor.
    Pet();
    Pet(const std::string& name1, const Date& DOB1, const int& typeNum1, const std::string& breed1);

    // Getters
    std::string getPetName();
    Date getPetDOB(); 
    std::string getPetType();
    std::string getPetBreed();

    // Setters
    void setPetName(const std::string& name1);
    void setPetDOB(const int& month, const int& day, const int& year);
    void setPetType(const int& typeNum1);
    void setPetBreed(const std::string& breed1);
    
    // Friend functions for operator overloading.
    friend std::ostream& operator<<(std::ostream& output, Pet& pet);
    friend std::istream& operator>>(std::istream& input, Pet& pet);

    // A function I made for converting the input string to upper case.
    std::string capitalize1(std::string input);

};

#endif