// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include all the libraries that are available for this PA, and the Address header file.
#include "Address.h"  // So I can access the constructor, the member variables, and the methods from the Address class.
#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <ctime>
#include <array>
#include <vector>
#include <cstddef>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <algorithm>  // For transform function only.

// This is an implementation file where I define the constructors, member variables, 
// and the methods of the Address class.

// Define the method for converting the given input string to all upper case.
std::string Address::capitalize(std::string input)
{
    // Initiate a string variable to store the result.
    std::string result = "";
    for (int i = 0;i < input.size();i++)
    {
        // std::toupper only converts to upper case one character at a time, so I'm iterating through the string-
        // and converting the character to an upper case, and store it in the variable "result".
        result += std::toupper(input[i]);

    }

    // Return result (the input string but now all upper case).
    return result;
}

// Defining the default constructor.
Address::Address()
{
    // Initialize all the member variables.
    street = "";
    city = "";
    state = "";
    zipCode = 0;
}

// Defining the fully parameterized constructor.
Address::Address(const std::string& street1, const std::string& city1, const std::string& state1, const size_t& zipCode1)
{
    // Initialize all the member variables to the parameters, and make sure that the variables
    // are storing the upper-cased version of the parameters (for the string variables).
    street = capitalize(street1);
    city = capitalize(city1);
    state = capitalize(state1);
    zipCode = zipCode1;

}

// From below till the next comment, I'm just defining the getters.
std::string Address::getStreetName()
{
    return street;
}

std::string Address::getCityName()
{
    return city;
}

std::string Address::getStateName()
{
    return state;
}

size_t Address::getZipCode()
{
    return zipCode;
}

// From below until the next comment, I'm just defining the setters. I also made sure that the variables
// in the setters are storing the upper-cased version of the input (for the string variables).
void Address::setStreetName(const std::string& street1)
{
    street = capitalize(street1);
}

void Address::setCityName(const std::string& city1)
{
    city = capitalize(city1);
}

void Address::setStateName(const std::string& state1)
{
    state = capitalize(state1);
}

void Address::setZipCode(const size_t& zipCode1)
{
    zipCode = zipCode1;
}

// Defining the operator<< overload function, this function will return an output stream.
std::ostream& operator<<(std::ostream& output, Address& address)
{
    // This is what will be output when doing std::cout << address; (outputting all member variables).
    // This will only run when the format is [output] << (the operator I overloaded) [Address object].
    // The std::setw(14) means to make 14 spaces for this part, std::left means make the text aligns left
    // and std::right means make the text aligns right.
    output << std::setw(14) << std::left << "STREET" << ":" << std::setw(20) << std::right << address.street << std::endl;
    output << std::setw(14) << std::left << "CITY" << ":" << std::setw(20) << std::right << address.city << std::endl;
    output << std::setw(14) << std::left << "STATE" << ":" << std::setw(20) << std::right << address.state << std::endl;
    output << std::setw(14) << std::left << "ZIP CODE" << ":" << std::setw(20) << std::right << address.zipCode << std::endl;

    // Return the output stream, whenever I specifically run a line of code with this specific format:
    // std::cout (some type of output stream) << (the operator I overloaded) address (Address class's object).
    return output;
}

// Defining the operator>> overload functionm this function will return an input stream.
std::istream& operator>>(std::istream& input, Address& address)
{
    // This is used for receiving the input for each member variables.

    // Output a message asking for user input.
    std::cout << "Enter the street name: ";

    // Storing the user input into the respective member variables, and repeat this until
    // the user stores their input in all the member variables.
    std::getline(input, address.street);  // std::getline() will take all the user input, until the user enters a newline.
    std::cout << "Enter the city name: ";
    std::getline(input, address.city);
    std::cout << "Enter the state name: ";
    std::getline(input, address.state);
    std::cout << "Enter the zip code: ";
    input >> address.zipCode;

    // This ignores a newline when the user input for the variable.
    input.ignore();

    // Make sure the string member variables are all converted to uppercase.
    address.street = address.capitalize(address.street);
    address.city = address.capitalize(address.city);
    address.state = address.capitalize(address.state);

    // Return the input stream wherever I specifically run a line of code in this specific format:
    // std::cin (input stream) >> (operator I overloaded) address (Address class's object).
    return input;
}



