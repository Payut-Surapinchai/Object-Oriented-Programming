// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include the libraries necessary for the main implementation file
#include "arrayTools.h"
#include "vectorTools.h"
#include <iostream>
#include <string>
#include <exception>
#include <vector>

// This is the main implementation file where I will be testing my functions and see if they work properly.
// On the parts where I used try and catch, I asked ChatGPT about how to catch the throw exception, and ChatGPT
// gave me this way of "try and catch" and it works. (I just wanted to let you know)

int main()
{
    // This section below is for testing the arrayTools function.

    // Create an empty array to test generateArray. (MAX_SIZE is already declared in the arrayTools header file)
    std::array<int, MAX_SIZE> test1;

    // Create a size variable to use for testing the function.
    int size1 = 15;

    // Test out the generateArray function.
    generateArray(test1, size1, 5, 35);

    // Create a for loop to check if each element in the array was generated properly.
    for (int i = 0;i < size1;i++)
    {
        std::cout << "The array value at index " << i << " is " << test1[i] << std::endl;
    }

    // This is for trying to see if the "throw" exception worked properly or not

    // Try: used for running the code that you want to catch the exception from.
    try 
    {
        generateArray(test1, -1, 5, 4);
    }

    // Since the "throw" exception's type is a const char*, you have to catch using a const char* as well.
    // And catch the exception and store it in the variable "except", and print it.
    catch(const char* except)
    {
        std::cout << except << std::endl;
    }

    // Just creating a new line for readability, to separate each part to make it look cleaner.
    std::cout << "\n";



    // Create a new array to test the other functions.
    std::array<int, MAX_SIZE> test2 = {1,2,3,4,5,6,7};

    // Create a variable which is the size of the test2 array.
    int size2 = 7;

    reverseArray(test2, size2);

    // Use a for loop to print and check if the array was successfully reversed.
    for (int i = 0;i < size2;i++)
    {
        std::cout << "The array value at index " << i << " is " << test2[i] << std::endl;
    }

    std::cout << "\n";



    // Test the rotateArray function with the test2 array.
    rotateArray(test2, size2, 4);

    // Use a for loop to print and check if the array was successfully rotated(to the right).
    for (int i = 0;i < size2;i++)
    {
        std::cout << "The array value at index " << i << " is " << test2[i] << std::endl;
    }

    std::cout << "\n";



    // Store the return value from findElement() function in findIndexTest.
    int findIndexTest = findElement(test2, size2, 5);

    // Print the findIndexTest's value to see if the function worked.
    // Disclaimer: the index of value 5 would be at 6 because I just rotated the test2 array.
    std::cout << "The value 5 is at the index of " << findIndexTest << " in the array." << std::endl;

    // This block of code (try and catch) is to test the "throw" exception statement in findElement() function.
    try
    {
        int findIndex = findElement(test2, size2, 10);
    }

    // Catch the exception and print it.
    catch(const char* e)
    {
        std::cout << e << std::endl;
    }

    std::cout << "\n";



    // Since the values in the test2 array is still rotated, I will be using the sortArray() function
    // to test if the array will be sorted in an ascending order.
    sortArray(test2, size2);

    // Use a for loop to print and check if the sortArray() function worked properly.
    for (int i = 0;i < size2;i++)
    {
        std::cout << "The array value at index " << i << " is " << test2[i] << std::endl;
    }

    // Add 2 newlines because I will be testing the functions in vectorTools now.
    std::cout << "\n" << std::endl;




    // This section below is for testing vectorTools functions.




    // Create an empty vector to test the addElements() function.
    std::vector<int> vec1;

    // Create a C style array to test the addElements() function.
    int arr1[5] = {1,2,3,4,5};

    // Create a variable and store the size of arr1's array.
    int arrSize1= 5;

    // Test out the addElements() function.
    addElements(vec1, arr1, arrSize1);

    // Use a for loop to print and check if the addElements() function worked properly.
    for (int i = 0;i < arrSize1;i++)
    {
        std::cout << "The vector value at index " << i << " is " << vec1[i] << std::endl;
    }

    try
    {
        // Test the "throw" statement by running the function with an empty array. (Size is 0)
        addElements(vec1, arr1, 0);
    }

    // Catch the exception and print it.
    catch(const char* e)
    {
        std::cout << e << std::endl;
    }
    std::cout << "\n";



    // Create a new vector to test out the filterElements() function.
    std::vector<int> vec2 = {3,5,7,234,9,10};

    // Test out the filterElements() function, and store the result in vec3.
    std::vector<int> vec3 = filterElements(vec2, 9);

    // Use a for loop to print and check if the filterElements() function worked properly.
    for (int i = 0;i < vec3.size();i++)
    {
        std::cout << "The vector value at index " << i << " is " << vec3[i] << std::endl;
    }

    std::cout << "\n";



    // Create a new vector to test the printElements(), and scaleElements() functions.
    std::vector<int> vec4 = {1,2,3,4,5,6,7,8,9,10};

    // Test out the printElements() function.
    printElements(vec4, 3);

    // Use "try and catch" to test if the "throw" exception worked.
    try
    {
        std::vector<int> emptyVec;
        printElements(emptyVec, 3);
    }

    // Catch the exception and print it.
    catch(const char* e)
    {
        std::cout << e << std::endl;
    }

    std::cout << "\n";



    // Create an vector to store the result from scaleElements(), to test if the scaleElements() function worked.
    std::vector<float> vec5 = scaleElements(vec4);

    // Use a for loop to print and check if the scaleElements() function worked properly.
    for (int i = 0;i < vec5.size();i++)
    {
        std::cout << "The vector value at index " << i << " is " << vec5[i] << std::endl;
    }

    // Use "try and catch" to test if the "throw" exception worked.
    try
    {
        std::vector<int> emptyVec;
        scaleElements(emptyVec);
    }

    // Catch the exception and print it.
    catch(const char* e)
    {
        std::cout << e << std::endl;
    }

    std::cout << "\n";



    // Create a string to test the splitString() function.
    std::string stringTest = "Hi how are you today";

    // Create a char variable that contains the delimiter(how each words in the string is separated).
    char delimiter = ' ';

    // Test out the splitString() function and store it in stringVec.
    std::vector<std::string> stringVec = splitString(stringTest, delimiter);

    // Use a for loop to print and check if the splitString() function worked properly.
    for (int i = 0;i < stringVec.size();i++)
    {
        std::cout << "The vector value at index " << i << " is " << stringVec[i] << std::endl;
    }

}