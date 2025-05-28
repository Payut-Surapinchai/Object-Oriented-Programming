// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include all the necessary libraries for this file.
#include "AmortizedLoan.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

// This is an implementation file for Amortized Loan class where I'll be defining the constructors, 
// and the methods for the Amortized Loan class.

// Defining the default AmortizedLoan constructor.
AmortizedLoan::AmortizedLoan() : Loan()
{
    principal = 0.0;
    interestRate = 0.0;
    loanLength = 0;
    loanType = "";
}

// Defining the parameterized AmortizedLoan constructor.
AmortizedLoan::AmortizedLoan(float prcp, float intRate, int loanLen)
: Loan(prcp, intRate, loanLen, "Amortized Loan")
{
    principal = prcp;
    interestRate = intRate;
    loanLength = loanLen;
    loanType = "Amortized Loan";

}

// Defining the Amortized Loan monthly payment method.
// When amortized loan object is using monthlyPayment() method, this code will run.
// (Formula from PA7 assignment)
float AmortizedLoan::monthlyPayment()
{
    // Convert the interest rate from going from 0 - 100 to 0 - 1 (divide by 100), 
    // and from yearly to monthly (divide by 12).
    float monthlyRate = (interestRate / 100) / 12;

    // Convert the loan length to months (because currently loan length is in years).
    // Convert by multiplying the loan length by 12.
    float months = loanLength * 12;

    // Calculate the numerator from the formula. 
    // pow(base, exponent) basically takes the base, and raise it to the "exponent" power.
    float numerator = principal * ((monthlyRate * (pow(1 + monthlyRate, months))));

    // Calculate the denominator from the formula.
    float denominator = (pow(1 + monthlyRate, months)) - 1;

    // Divide the numerator by the denominator.
    float result = numerator / denominator;

    // Return the result
    return result;
}
