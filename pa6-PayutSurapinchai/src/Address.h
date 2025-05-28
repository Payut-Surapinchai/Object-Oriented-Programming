// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#ifndef ADDRESS_H 
#define ADDRESS_H
#include <string>
#include <cstddef>
#include <iostream>

// This is a header file where I declare the Address class, its constructor, its member variables, 
// and its methods.

class Address 
{
    // Private member variables
    std::string street;
    std::string city;
    std::string state;
    size_t zipCode;

public:

    // Default constructor and a fully parameterized constructor.
    Address();
    Address(const std::string& street1, const std::string& city1, const std::string& state1, const size_t& zipCode1);

    // Getters
    std::string getStreetName();
    std::string getCityName();
    std::string getStateName();
    size_t getZipCode();

    // Setters
    void setStreetName(const std::string& street1);
    void setCityName(const std::string& city1);
    void setStateName(const std::string& state1);
    void setZipCode(const size_t& zipCode1);

    // friend functions for the operator<<, and operator>> overload.
    friend std::ostream& operator<<(std::ostream& output, Address& address);
    friend std::istream& operator>>(std::istream& input, Address& address);

    // A function I made for converting the characters in the input string to an upper case.
    std::string capitalize(std::string input);
};

#endif