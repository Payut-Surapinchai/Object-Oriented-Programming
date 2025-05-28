// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef SIMPLELOAN_H
#define SIMPLELOAN_H

// This is a header file where I'll be declaring the constructors, 
// and the method for the child class, Simple Loan.

// This lines shows that the SimpleLoan class is a child class from the Loan class.
class SimpleLoan : public Loan
{
public:

    // Declaring the default SimpleLoan constructor.
    SimpleLoan();

    // Declaring the parameterized SimpleLoan constructor.
    SimpleLoan(float prcp1, float intRate1, int loanLen1);

    // Declaring the method where I'll override the contents of the method (how it will return when
    // Simple Loan's object is being used for monthlyPayment method).
    float monthlyPayment() override;

};

#endif