// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <array>

// This is a header file for declaring the functions


int getInput(std::array<float, MAX_SIZE>& array1);

void randInput(std::array<float, MAX_SIZE>& array1, int& num);

float average(std::array<float, MAX_SIZE>& array1, int& num);

void maxAndMin(std::array<float, MAX_SIZE>& array1, int& num, float& max, float& min);

float standardDev(std::array<float, MAX_SIZE>& array1, int& num);

void display(std::array<float, MAX_SIZE>& array1, int& num);

#endif
