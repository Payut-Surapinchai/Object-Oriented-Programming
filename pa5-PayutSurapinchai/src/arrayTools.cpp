// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include all the libraries that are allowed in this PA
#include "arrayTools.h"
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

// This is arrayTools.cpp file where I will define the functions that were declared in arrayTools.h.

// Some of these functions, I've asked ChatGPT for help, but I only asked for hints and did not explicitly,
// copied down the whole code block from ChatGPT.

// This function will generate an array where size is how many elements, and the elements are between min and max.
void generateArray(std::array<int, MAX_SIZE>& arr, int size, int min, int max)
{
    // Check for inappropriate size value
    if (size > 1 && size < 100)
    {
        for (int i = 0;i < size;++i)
        {
            // rand () % (max - min + 1) means it goes from 0 to max - min + 1 (make sure it doesn't go past max), 
            // and to make sure I get the minimum value when rand is 0, 
            // I added + min after the random number generator ends.
            arr[i] = (rand() % (max - min + 1)) + min;
        }
    }
    else
    {
        // If the size was inappropriate, throw this error, (have to catch in int main()).
        throw "The size of the array must be between 0 and 100";
    }
}

// This function reverses the input array
void reverseArray(std::array<int, MAX_SIZE>& arr, int size)
{
    // Created newIndex to index the array from behind
    int newIndex = size - 1;

    // This line is to copy from arr to array1, so I can reverse the array without replacing the values in arr.
    std::array<int, MAX_SIZE> array1 = arr;

    for (int i = 0;i < size;++i)
    {
        // Replaces the value at the front of arr, with the end of array1 and kee iterating this until the 
        // array reaches its size.
        arr[i] = array1[newIndex];

        // This line is to negate newIndex to iterate the value before the end, and put in the front 
        // to reverse the array.
        newIndex -= 1;

    }
}

// This functions rotate the array to the right i.e. {1,2,3,4,5}, steps = 3 -> {3,4,5,1,2}.
// Steps = how many positions to rotate to the right
void rotateArray(std::array<int, MAX_SIZE>& arr, int size, int steps)
{
    // The newSteps definition is to make sure the steps does not go over the size by using modulo operator.
    // i.e. 3 % 5 = 3, 8 % 5 = 3.
    int newSteps = steps % size;

    // If the steps and size are not the same, then execute the following code.
    // If the steps and size are the same, the array would be the same.
    if (newSteps != 0)
    {
        // Create an empty array to hold the rotated array.
        std::array<int, MAX_SIZE> array1;

        // This first for loop is to copy the elements from the rotating position, 
        // and onwards till the end of the array (from arr), and copy to the start of the array1.
        for (int i = 0;i < newSteps; i++)
        {
            array1[i] = arr[size - newSteps + i];
        }

        // This second for loop is to copy the remaining elements to the remaining positions left in the array to array1.
        for (int i = 0;i < size - newSteps;i++)
        {
            array1[newSteps + i] = arr[i];
        }
        
        // Last for loop is to copy all the elements in array1 to arr.
        for (int i = 0;i < size; i++)
        {
            arr[i] = array1[i];
        }

    }
}

// This function finds the index of the element from a given value.
int findElement(std::array<int, MAX_SIZE>& arr, int size, int value)
{
    // This for loop iterates until it finds the value in the array, and when found, return the index.
    for (int i = 0;i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    // If after the for loop ran and value can't be found, throw this error.
    throw "The value could not be found";
}

// This function will sort the given array in an ascending order.
void sortArray(std::array<int, MAX_SIZE>& arr, int size)
{
    // Use two for loops to iterate through the whole array, comparing the values that are close to each other.
    for (int i = 0;i < size;i++) 
    { 
        // Only go from j to size - 1 because I'm checking the values from j and j+1 which means at the end,
        // I don't have to check the last value, or else it may go over the array size and cause an error.
        for (int j = 0;j < size - 1;j++) 
        { 
            // If the value at position j is more than the value at position j+1, then swap them.
            if (arr[j] > arr[j + 1]) 
            {
                // This tempStorage is to store the value that I'm about to swap, which protects from the value
                // being overwritten.
                int tempStorage = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempStorage;
            }
        }
    }
}