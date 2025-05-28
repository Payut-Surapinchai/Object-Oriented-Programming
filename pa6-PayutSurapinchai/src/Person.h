// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <cstddef>
#include "Address.h"  // So I can access the constructor, the member variables, and the methods from the Address class.
#include "Pet.h"  // So I can access the constructor, the member variables, and the methods from the Pet class.
#include <vector>

// This is a header file where I will declare the Person class, its constructor, its member variables, 
// and its methods.

class Person 
{
    // Private member variables
    std::string fName;
    std::string lName;
    Address address;  // an Address object.
    std::vector<Pet*> pets;  // A vector that stores the pointer to each Pet class's object in the vector.

public:

    // A default constructor, a constructor with first name, last name, and address object,
    // and a constructor with first name and last name.
    Person();
    Person(const string& firstName, const string& lastName, const Address& adrs);
    Person(const string& firstName, const string& lastName);

    // Getters
    std::string getFirstName();
    std::string getLastName();
    Address& getAddress();
    std::vector<Pet*>& getPets();

    // Setters
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setAddress(const Address& adrs);
    void setStreetName(const std::string& street1);
    void setCityName(const std::string& city1);
    void setStateName(const std::string& state1);
    void setZipCode(const size_t& zipCode1);

    // All the friend functions for operator overloading.
    friend void operator+(std::vector<Pet*>& pets, Pet* pet);
    friend void operator-(std::vector<Pet*>& pets, const std::string& petName);
    friend std::ostream& operator<<(std::ostream& output, Person& person);
    friend std::istream& operator>>(std::istream& input, Person& person);

    // Extra methods for this class.
    bool searchPet(const std::string& petName);
    void addPet();
    void deletePet();

    // For converting the given input to upper case letters.
    std::string capitalize2(std::string input);

};

#endif