// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include all the necessary libraries for this file.
#include "SimpleLoan.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

// This is an implementation file for Simple Loan class where I'll be defining the constructors, and the methods
// for the Simple Loan class.

// Defining the default SimpleLoan constructor.
// Use : Loan() because I'm deriving the variables, and the methods from the Parent class, Loan.
SimpleLoan::SimpleLoan() : Loan()
{
    principal = 0.0;
    interestRate = 0.0;
    loanLength = 0;
    loanType = "";

}

// Defining the parameterized SimpleLoan constructor.
SimpleLoan::SimpleLoan(float prcp1, float intRate1, int loanLen1)
: Loan(prcp1, intRate1, loanLen1, "Simple Loan")
{
    principal = prcp1;
    interestRate = intRate1;
    loanLength = loanLen1;
    loanType = "Simple Loan";

}

// Defining the SimpleLoan's monthlyPayment method (this will override the normal monthlyPayment in Loan class
// when ran using the SimpleLoan's object).
// Calculate the monthly payment from PA7's formula.
float SimpleLoan::monthlyPayment()
{
    // Convert the interest rate from going from 0 - 100 to 0 - 1 (divide by 100), 
    // and from yearly to monthly (divide by 12).
    float monthlyRate = (interestRate / 100) / 12;

    // Convert the loan length to months (because currently loan length is in years).
    // Convert by multiplying the loan length by 12.
    float months = loanLength * 12;

    // Calculate the numerator.
    float numerator = principal * ((monthlyRate * months) + 1);

    // Calculate the result by dividing the numerator by months.
    float result = numerator / months;

    // Return the result.
    return result;
}