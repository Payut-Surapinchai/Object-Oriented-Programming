// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#ifndef ARRAYTOOLS_H
#define ARRAYTOOLS_H
#include <array>
#include <cstddef>

// This is the arrayTools header file, used to declare the variable and the functions that will be used 
// in arrayTools.cpp.

// Define the MAX_SIZE in here, so I don't have to declare in arrayTools.cpp.
const int MAX_SIZE = 100;

// Below are all functions that will be defined later on in arrayTools.cpp.
// The "&" signs means the parameter is passed in by reference, which means it can manipulate the input
// variable directly.
void generateArray(std::array<int, MAX_SIZE>& arr, int size, int min, int max);

void reverseArray(std::array<int, MAX_SIZE>& arr, int size);

void rotateArray(std::array<int, MAX_SIZE>& arr, int size, int steps);

int findElement(std::array<int, MAX_SIZE>& arr, int size, int value);

void sortArray(std::array<int, MAX_SIZE>& arr, int size);

#endif