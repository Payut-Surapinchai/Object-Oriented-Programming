// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <vector>
#include "CollegePerson.h"

// This is a header file where I will declare the functions that will be used along with the CollegePerson 
// and Person class.

// Declare the functions that I will be using in functions.cpp.
void greeting();

int recordCount();

void getInput(std::vector<CollegePerson*> cp);

void calcGrades(std::vector<CollegePerson*> cp);

void display(std::vector<CollegePerson*> cp);

#endif