// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef AMORTIZEDLOAN_H
#define AMORTIZEDLOAN_H

// This is a header file where I'll be declaring the constructors, 
// and the method for the child class, Amortized Loan.

// Declaring the AmortizedLoan class, deriving from the Loan class.
class AmortizedLoan : public Loan
{
public:

    // Declaring the default AmortizedLoan constructor.
    AmortizedLoan();

    // Declaring the parameterized AmortizedLoan constructor.
    AmortizedLoan(float prcp, float intRate, int loanLen);

    // Declaring the monthlyPayment() method where I'll be overriding it.
    float monthlyPayment() override;

};

#endif