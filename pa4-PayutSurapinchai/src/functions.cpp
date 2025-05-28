// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Define MAX_SIZE for the MAX_SIZE in the array.
const int MAX_SIZE = 50;  // Use const to make sure the variable does not change after it is initialized.

#include "functions.h"
#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>

// This is the function implementation file, in this file I will define all the functions that will be used.

// Define the getInput function.
int getInput(std::array<float, MAX_SIZE>& array1)
{
    // Initialize int i, and string getInput.
    int i = 0;
    std::string getInput = "";

    // Use a while loop to check while getInput is not -1, and the number in the array is still less than 50.
    while (getInput != "-1" && i < 50)
    {
        // Get the user input to put into an array.
        std::cout << "Enter a number for the array (-1 to stop): ";

        // Store the user input into getInput.
        std::cin >> getInput;

        // If getInput is -1 then stop the program.
        if (getInput == "-1")
            break;
        
        else
        {
            array1[i] = stoi(getInput);  // Convert string to integer and store it into the array at position i.
            i++;  // Increment i by 1.
        }         
    }
    return i;  // Return i, or the number of how many elements are in the array.
               // or can also do array1.size() to return the size of the array
}

// Generates random number to put into the array, num is how many numbers you want to generate.
void randInput(std::array<float, MAX_SIZE>& array1, int& num)
{
    
    // Use srand(std::time(0)), to set the seed for the random number generator.
    srand(std::time(0));

    // Check if the numbers are between 1 and 50.
    if (num > 1 && num < 50)
    {
        // Use a for loop to generate number at each array at position i.
        for (int i=0;i < num;i++)
        {
            // Generate a random number using rand() % 100(generate number from 0 to 99)
            // therefore I added one so it generates number from 1 to 100
            // and store the number in the array at position i.
            array1[i] = (rand() % 100) + 1; 
        }
    }
}

float average(std::array<float, MAX_SIZE>& array1, int& num)
{
    // Initiate the sum, and result variable.
    float sum = 0.0;
    float result = 0.0;

    // Use a for loop to sum up each elements and store into sum variable.
    for (int i = 0;i < num;i++)
    {
        sum += array1[i];
    }

    // Calculate the average by dividing sum by the number of integers (how many integers there are).
    result = sum / num;

    return result;

}

// Finds the max and the min of the array given in the parameter.
void maxAndMin(std::array<float, MAX_SIZE>& array1, int& num, float& max, float& min)
{
    // Assign the max and min variable as the first element of the array.
    max = array1[0];
    min = array1[0];

    // Use a for loop to iterate through every number and find the max number.
    for (int i = 0;i < num;i++)
    {
        // If the current number in the array at position i is bigger than array at position 0, then 
        // assign max as the array at position i.
        if (array1[i] > max)
        {
            max = array1[i];
        }

    }

    // Use a for loop to do the same thing as the loop above, but this time we find the minimum instead of max.
    for (int i = 0;i < num;i++)
    {
        // The different part is to use < instead of > because we are finding the minimum.
        if (array1[i] < min)
        {
            min = array1[i];
        }
    }
}

// Calculates the standard deviation from the input array.
float standardDev(std::array<float, MAX_SIZE>& array1, int& num)
{
    // Initialize the variables to use in this function.
    float sum = 0.0;
    float numerator = 0.0;
    float inside = 0.0;
    float result = 0.0;
    float subtraction = 0.0;
    float avg = average(array1, num);  // Use the average() function that we define earlier to calculate the average.

    // Use a for loop to iterate the numerator part where it requires the summation.
    for (int i = 0;i < num;i++)
    {
        // These 3 lines basically calculates the numerator part of the standard deviation.
        subtraction = array1[i] - avg;
        numerator = pow(subtraction,2);
        sum += numerator;
    }

    // Calculate the inside of the square root.
    inside = sum / (num - 1);

    // Take the square root of the inside and store into result.
    result = sqrt(inside);
    
    return result;
}

// Display the array in a certain format.
void display(std::array<float, MAX_SIZE>& array1, int& num)
{
    // Initialize the max and min variable with float type.
    float max,min;

    // Initialize the maxAndMin method to find max and min in the array.
    maxAndMin(array1,num,max,min);
    std::cout << num << " values were entered" << std::endl;
    std::cout << "The values are : " << std::endl;

    // Use a for loop to print out each element in the array.
    for (int i = 0;i < num;i++)
    {
        // Initialize a variable with type int.
        int check = 0;

        // Find i mod 5, and store in each check.
        check = i % 5;

        // Print out the first variable in the array.
        if (i == 0)
        {
            std::cout << array1[0] << " ";
            continue;  // After printing the array, go back to the start of the loop and run again.
        }

        // If the result of the check is not 0 then print the array at the i position, but if the check is 0
        // then start a new line and print the elements in the array at the i position.
        if (check != 0)
        {
            std::cout << array1[i] << " ";
        }
        else
        {
            std::cout << "\n";
            std::cout << array1[i] << " ";
        }
    }

    // If the number of elements in the array is 5 then add 2 endlines, if not then just add one endline
    // (this is for the print format).
    if (num == 5)
    {
        std::cout << "\n" << std::endl;
    }
    else
    {
        std::cout << "\n";
    }
    
    // Print out the each statistics in a certain format.
    std::cout << "The average of the " << num << " numbers is : " << average(array1,num) << std::endl;
    std::cout << "The minimum number is : " << min << std::endl;
    std::cout << "The maximum number is : " << max << std::endl;
    std::cout << "The standard deviation is : " << standardDev(array1,num) << std::endl;
}