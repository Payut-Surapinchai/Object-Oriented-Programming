// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include all the libraries that are allowed for this PA, and also the Pet and Address header files.
#include "Pet.h"  // So I can access the constructor, the member variables, and the methods from the Pet class.
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

// This is an implementation file where I define the constructors, member variables, and the methods of the Pet class.

// Defining the method for converting the input string to all upper case.
// (This is the same as in Address.cpp, so I will omit the explanation. You can read the explanation
// at the Address.cpp file.)
std::string Pet::capitalize1(std::string input)
{
    std::string result = "";
    for (int i = 0;i < input.size();i++)
    {
        result += std::toupper(input[i]);

    }
    return result;
}

// Defining the default constructor.
Pet::Pet()
{
    // Initiating the member variables.
    name = "";
    DOB;
    type = "";
    breed = "";

}

// Defining the fully parameterized constructor.
Pet::Pet(const std::string& name1, const Date& DOB1, const int& typeNum1, const std::string& breed1)
{
    // Initiating the member variables by storing the values from the parameter in the member variables.
    // Make sure the string variables are all upper case using the capitalize1() function.
    name = capitalize1(name1);
    DOB = DOB1;
    setPetType(typeNum1);  // Utilize setPetType to set the type from the given input number.
                           // More info will be provided at the setPetType function.
    breed = capitalize1(breed1);
}

// From below until the next comment, I'm just defining the getters.
std::string Pet::getPetName()
{
    return capitalize1(name);  // I made sure this is capitalized because it will be used in the Person class.
}

Date Pet::getPetDOB()
{
    return DOB;
}

std::string Pet::getPetType()
{
    return type;
}

std::string Pet::getPetBreed()
{
    return breed;
}

// From below until the next comment, I will be defining the setters.
// Also I made sure to convert the string member variables to upper case in the setters.
void Pet::setPetName(const std::string& name1)
{
    name = capitalize1(name1);
}

void Pet::setPetDOB(const int& month, const int& day, const int& year)
{
    // Initiate a Date class object using the fully parameterized constructor.
    Date DOB1(month, day, year);

    // Set the current Date class object, to the one I just initiated.
    DOB = DOB1;
}

// Defining the setter for the pet's type.
// This function takes an integer and if the integer is 1 to 4, it will assign the type correspondingly.
// If the integer is not 1 to 4, it will ask the user for an input for a customized pet type.
void Pet::setPetType(const int& typeNum1)
{
    // Use switch-case to set the type for each integer from 1 to 4.
    // After each condition, there should be a break; or else it will run through all the conditions.
    switch(typeNum1)
    {
        // For example, if the input is 1, then the type is DOG.
        case 1:
            type = "DOG";
            break;

        case 2:
            type = "CAT";
            break;

        case 3:
            type = "BIRD";
            break;

        case 4:
            type = "SNAKE";
            break;

        // This default code block will run when the input is not 1 to 4.
        default:

            // Asks the user for pet's type.
            std::cout << "Enter the pet's type: ";

            // Use std::getline to receive the type (takes the whole input until the user enters a new line).
            std::getline(std::cin, type);

            // Made sure to convert the user input's type to upper case letters.
            type = capitalize1(type);
            break;
    }
}

// Set the breed member variable to the given input, also made sure to convert the input to upper case letters-
// before storing it in the member variable.
void Pet::setPetBreed(const std::string& breed1)
{
    breed = capitalize1(breed1);
}
    
// This is for defining the operator<< overload which takes an output, and a Pet class's object, 
// and returns an ouput stream.
// (I already explained this in Address.cpp, so I will omit the explanations except for the special parts.)
// (This works the same as in Address.cpp file,  but I use the Pet class's object 
// instead of the Address class's object.)
std::ostream& operator<<(std::ostream& output, Pet& pet)
{
    // This is what will be outputted.
    std::cout << std::setw(14) << std::left << "NAME" << ":" << std::setw(20) << std::right << pet.name << std::endl;
    // pet.DOB.dateString() accesses the DOB's dateString() method, and DOB is a Date class's object
    std::cout << std::setw(14) << std::left << "DOB" << ":" << std::setw(20) << std::right << pet.DOB.dateString() << std::endl;
    std::cout << std::setw(14) << std::left << "TYPE" << ":" << std::setw(20) << std::right << pet.type << std::endl;
    std::cout << std::setw(14) << std::left << "BREED" << ":" << std::setw(20) << std::right << pet.breed << std::endl;

    // Return the output.
    return output;
}

// This is for defining the operator>> overload where it takes the input stream, and a Pet class object, 
// and returns an input stream.
// (I already explained this in Address.cpp, so I will omit the explanations except for the special parts.)
// (This works the same as in the Address.cpp file, but I use the Pet class's object 
// instead of the Address class's object.)
std::istream& operator>>(std::istream& input, Pet& pet)
{
    // Initialize some variables that I will need for the DOB, and the pet type.
    int month = 0;
    int day = 0;
    int year = 0;
    int typeNum = 0;

    // Get user input and store it in their respective variables.
    std::cout << "Enter the pet name: ";
    std::getline(input, pet.name);
    std::cout << "Enter the pet's birth month: ";
    input >> month;
    std::cout << "Enter the pet's birth day: ";
    input >> day;
    std::cout << "Enter the pet's birth year: ";
    input >> year;
    input.ignore();
    
    // Store the user's input for month, day, and year in the DOB member variable by using the setter.
    pet.setPetDOB(month, day, year);

    std::cout << "Enter the pet's type (1-4, if the pet's type not in 1-4 enter any positive number): ";
    input >> typeNum;
    input.ignore();

    // Use the pet type's setter to set the type member variables from the given inpput integer.
    pet.setPetType(typeNum);

    std::cout << "Enter the pet's breed: ";
    std::getline(input, pet.breed);

    // Made sure the string variables are all converted to upper case letters.
    pet.type = pet.capitalize1(pet.type);
    pet.name = pet.capitalize1(pet.name);
    pet.breed = pet.capitalize1(pet.breed);

    // Return an input stream.
    return input;
}