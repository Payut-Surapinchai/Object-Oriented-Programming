// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include the necessary libraries for testing my functions.
#include "CollegePerson.h"
#include "functions.h"
#include <vector>
#include <string>
#include <iostream>

// This is a main implementation file where I'll be testing the functions that I've implemented.

// Usually I'd include all constructors, getters, and setters tests in each class. However, in this assignment
// I feel like the main part is the functions.cpp file. Therefore, I will omit testing all constructors,
// setters, and getters in each classes and focus on testing the functions in functions.cpp instead.

// Also to test the methods, I had to change the directories which is different from the autograder.
// (Use your directory of where you store the text file that you want to write in.)
// Change your directories in functions.cpp file

// Another adjustment I had to make to test the code easier was to change the parameters that takes the
// college person pointer vector to be passed by reference instead of passed by value. After doing that,
// this main function code works perfectly fine.

int main()
{
    // Instantiate a vector containing CollegePerson class pointers called people which will be used
    // to test the methods in functions.cpp later.
    std::vector<CollegePerson*> people;

    std::string temp = "";
    // Test the greeting function.
    greeting();
    std::cin >> temp;

    std::cout << "\n";

    // Check if the record count is correct.
    std::cout << "There are " << recordCount() << " records in this file." << std::endl;

    // Test the getInput function to get the input from the file.
    getInput(people);

    // Test the grades calculation function.
    calcGrades(people);

    // Check if my getInput and calcGrades worked using the display function.
    display(people);

    return 0;

}