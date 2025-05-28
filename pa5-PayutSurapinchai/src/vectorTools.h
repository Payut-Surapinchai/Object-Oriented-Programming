// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#ifndef VECTORTOOLS_H
#define VECTORTOOLS_H
#include <vector>
#include <string>

// This is the vectorTools header file, used to declare the variable and the functions that will be used 
// in vectorTools.cpp

// Below are all functions that will be defined later on in vectorTools.cpp.
// The "&" signs means the parameter is passed in by reference, which means it can manipulate the input
// variable directly.
void addElements(std::vector<int>& vec, int arr[], int size);

std::vector<int> filterElements(std::vector<int>& vec, int threshold);

void printElements(std::vector<int>& vec, int lineCount);

std::vector<float> scaleElements(std::vector<int>& vec);

std::vector<std::string> splitString(std::string& original, char delim);

#endif