// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// / Include all the libraries that are allowed for this PA, and also the Pet and Address header files
#include "Person.h"  // So I can access the constructor, the member variables, and the methods from the Person class.
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
// and the methods of the Person class.

// Defining the method for converting the input string to all upper case.
// (This is the same as in Address.cpp, so I will omit the explanation. You can read the explanation
// at the Address.cpp file.)
std::string Person::capitalize2(std::string input)
{
    std::string result = "";
    for (int i = 0;i < input.size();i++)
    {
        result += std::toupper(input[i]);

    }
    return result;
}

// Defining the default constructor.
Person::Person()
{
    // Initiate all the private member variables.
    fName = "";
    lName = "";
    address;
    pets;
}

// Defining the constructor with first name, last name, and an Address class's object as the parameters.
Person::Person(const std::string& firstName, const std::string& lastName, const Address& adrs)
{
    // Made sure the string variables are being stored as upper case letters.
    fName = capitalize2(firstName);
    lName = capitalize2(lastName);
    address = adrs;
    pets;
}

// Defining the constructor with first name, and last name as the parameters.
Person::Person(const std::string& firstName, const std::string& lastName)
{
    // Made sure the string variables are being stored as upper case letters.
    fName = capitalize2(firstName);
    lName = capitalize2(lastName);
    address;
    pets;
}

// From below until the next comment, I will be defining the getters.
std::string Person::getFirstName()
{
    return fName;
}

std::string Person::getLastName()
{
    return lName;
}

Address& Person::getAddress()
{
    return address;
}

std::vector<Pet*>& Person::getPets()
{
    return pets;
}

// From below until the next comment, I will be defining the setters.
// Also made sure to convert the string variables to upper case.
void Person::setFirstName(const std::string& firstName)
{
    fName = capitalize2(firstName);
}

void Person::setLastName(const std::string& lastName)
{
    lName = capitalize2(lastName);
}

void Person::setAddress(const Address& adrs)
{
    address = adrs;
}

// From below until the next comment, these are setters, but they are for setting the Address class's object.
// Therefore, I will be using the Address class's setters for the Address class's object member variable, 
// that is in this Person class.
void Person::setStreetName(const std::string& street1)
{
    address.setStreetName(street1);
}

void Person::setCityName(const std::string& city1)
{
    address.setCityName(city1);
}

void Person::setStateName(const std::string& state1)
{
    address.setStateName(state1);
}

void Person::setZipCode(const size_t& zipCode1)
{
    address.setZipCode(zipCode1);
}

// This is for defining the operator overload for the operator "+".
// This function will add a class pointer "pet" to the class pointer vector "pets".
// Anytime when there's "std::vector<Pet*> var + Pet* var1" format, this operator overload will be called,
// and this operator+ function will run.
void operator+(std::vector<Pet*>& pets, Pet* pet)
{
    // push_back just adds the pet object into the pets vector.
    pets.push_back(pet);
}

// This is for defining the operator overload for the operator "-".
// This function will remove a pet from the vector "pets" from the given pet name.
// Anytime when there's "std::vector<Pet*> var - Pet* var1" format, this operator overload will be called,
// and this operator- function will run.
// (This code will only run when I'm sure there's a pet name that exists in the pets vector.)
void operator-(std::vector<Pet*>& pets, const std::string& petName)
{
    // Initialize a counter to count for the current index in the for loop.
    int counter = 0;

    // Iterate through the pets vector.
    for (int i = 0; i < pets.size();i++)
    {
        // If the pets vector at element "i" has the name equal to the given pet name, then assign the counter
        // to the current "i", and break out of the loop.
        // (I use -> for the elements in vector pets because the elements are pointers, and to access 
        // member function for the pointers, I use -> to dereference, and getPetName() to use the getPetName()
        // member function of the current element in the pets vector.)
        if (pets[i]->getPetName() == petName)
        {
            counter = i;        
            break;
        }

    }

    // This is to remove the pet in the pets vector, by using .erase() method for vectors.
    // .erase() accepts an iterator, so I use pets.begin() that points the iterator to the start, and
    // I tell the iterator to go to the index at counter by adding counter to the iterator, and erase
    // that element in the pets vector.
    pets.erase(pets.begin() + counter);
}

// This is for defining the operator<< overload which takes an output, and a Person class's object, 
// and returns an ouput stream.
// (I already explained this in Address.cpp, so I will omit the explanations except for the special parts.)
// (This works the same as in Address.cpp file,  but I use the Person class's object 
// instead of the Address class's object.)
std::ostream& operator<<(std::ostream& output, Person& person)
{
    // This outputs each member variable in this specific format.
    output << std::setw(14) << std::left << "FIRST NAME" << ":" << std::setw(20) << std::right << person.fName << std::endl;
    output << std::setw(14) << std::left << "LAST NAME" << ":" << std::setw(20) << std::right << person.lName << "\n" << std::endl;
    output << std::setw(14) << std::left << "ADDRESS" << std::endl;
    output << person.address << std::endl;  // This works because I defined an operator<< overload in the 
                                            // Address class already, it will output whatever was in the operator<< 
                                            // method in the Address class.
    output << std::setw(14) << std::left << "PETS LIST" << std::endl;
    
    // Check if the pets vector is empty or not
    if (person.pets.empty())
    {
        // If the vector is empty print "NONE".
        output << "NONE" << std::endl;
    }
    else
    {
        // If the vector isnt empty, then iterate through the vector, and print out each element.
        // person.pets.size() returns the size of the pets vector.
        for (int i = 0;i < person.pets.size();i++)
        {
            // Use *(person.pets[i]) because each element in the vector is a pointer, and to dereference it
            // you use *.
            output << *(person.pets[i]) << std::endl;

        }
    }

    // Return an output stream.
    return output;

}

// This is for defining the operator>> overload where it takes the input stream, and a Person class object, 
// and returns an input stream.
// (I already explained this in Address.cpp, so I will omit the explanations except for the special parts.)
// (This works the same as in the Address.cpp file, but I use the Person class's object 
// instead of the Address class's object.)
std::istream& operator>>(std::istream& input, Person& person)
{
    // Initialize the variables needed to take the input.
    std::string street1 = "";
    std::string city1 = "";
    std::string state1 = "";
    int zipCode1 = 0;

    // Get the user's input needed for the member variables.
    std::cout << "Enter your first name: ";
    std::getline(input, person.fName);
    std::cout << "Enter your last name: ";
    std::getline(input, person.lName);
    std::cout << "Enter your street address: ";
    std::getline(input, street1);
    std::cout << "Enter your city address: ";
    std::getline(input, city1);
    std::cout << "Enter your state address: ";
    std::getline(input, state1);
    std::cout << "Enter your zip code: ";
    input >> zipCode1;
    input.ignore();

    // Use the setters to set the variables that are the Address's class object member variables.
    // (Because I can't directly access it from this class due to the variables being private, therefore
    // you have to utilize the setters and getters to access the member variables of another class.)
    person.setStreetName(street1);
    person.setCityName(city1);
    person.setStateName(state1);
    person.setZipCode(zipCode1);

    // Made sure to convert the string variables to upper case letters.
    person.fName = person.capitalize2(person.fName);
    person.lName = person.capitalize2(person.lName);
    
    // Return the input stream.
    return input;
}

// Defining the searchPet() function.
// This function searches for the pet in pets vector using the given pet name.
bool Person::searchPet(const std::string& petName)
{   
    // Iterate through the pets vector.
    for (int i = 0; i < pets.size();i++)
    {
        // Store the current "i"th element of the pets vector in the variable "name".
        std::string name = pets[i]->getPetName();

        // If the name is equal to the given petName, then return true because it found the pet in the pets vector.
        if (name == capitalize2(petName))
        {
            return true;
        }

    }

    // If it never returned true which means it couldn't find the pet, then return false.
    return false;

}

// Defining the addPet() function to add a pet into the pets vector.
void Person::addPet()
{
    
    // Create a dynamic Pet class object and store it in "pet".
    Pet* pet = new Pet();

    // Currently, pet is a pointer, and if I want to use the operator>> method of Pet class, then
    // I have to dereference the pointer so it's a pet class object rather than it being
    // a pet class pointer. Therefore, I use * to dereference the current pointer, so it fits the format
    // for the operator>> overload in the Pet class.
    std::cin >> *pet;
    
    // Initialize variable size to the vector pets's size.
    int size = pets.size();

    // Get the name from the pet I just added from std::cin >> *pet;, and use -> because pet is a pointer,
    // and I want to access the member function of the pointer.
    std::string name = pet->getPetName();

    // Iterate through the for loop to check if it has the pet in the pets vector already. 
    // (If the size is 0, then this for loop won't run, and it will skip to the pets + pet; which adds
    // the pet pointer to the vector pets.)
    for (int i = 0;i < size;i++)
    {
        // Store the current "i"th pet name of the pets vector into name1.
        std::string name1 = pets[i]->getPetName();

        // And if the name already exists in the pets vector, then throw an exception that the pet with same-
        // name already exists.
        if (name == name1)
        {
            throw "Pet with same name already exists.";
        }
        
    }
    
    // This utilizes the operator+ overload in this class where it will add the class object pointer (pet) into 
    // the vector pets where it stores the pointers to each class objects.
    pets + pet;

}

// Defining deletePet() method where it deletes the pet according to the user input, and only deletes if
// the pet exists in the pets vector.
void Person::deletePet()
{
    // Initialize a string variable to store the user input.
    std::string deleteName = "";

    // Asks the user for the pet name that the user wants to delete.
    std::cout << "Enter the pet name you want to delete: ";

    // Store that name in deleteName.
    std::getline(std::cin, deleteName);

    // Make sure deleteName is all upper case letters.
    std::string capName = capitalize2(deleteName);

    // Search for the pet's name that the user wants to delete in the pets vector.
    bool findPet = searchPet(capName);

    // If the search returned true, then delete the pet.
    if(findPet)
    {
        // This utilizes the operator- overload that I defined in this class, where it will delete the 
        // pet from the pets vector, given the pet name. In this situation, it will delete the pet that has
        // the same name as in capName.
        pets - capName;
    }

    // If the search returned False, then throw an exception.
    else
    {
        // Throw an exception that Pet not found.
        throw "Pet not found.";
    }

}
