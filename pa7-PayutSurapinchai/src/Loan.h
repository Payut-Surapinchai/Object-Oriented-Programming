// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef LOAN_H
#define LOAN_H
#include <string>

// This is a header file for Loan class where I'll be declaring the protected variables,
// the constructors, and the methods of Loan class.
class Loan 
{

// Declaring the protected variables. 
// (Similar to private variables, but can be used by within the class, and the child classes derived from
// this base class.)
protected:

    float principal;
    float interestRate;
    int loanLength;
    std::string loanType;

// Declaring the public constructors and its methods.
public:

    // Default Loan constructor
    Loan();

    // Fully parameterized Loan constructor
    Loan(float prcp, float intRate, int loanLen, std::string loanTyp);

    // Getters
    float getPrincipal();
    float getInterestRate();
    int getLoanLength();
    std::string getLoanType();

    // Setters
    void setPrincipal(float prcp);
    void setInterestRate(float intRate);
    void setLoanLength(int loanLen);
    void setLoanType(std::string loanTyp);

    // Extra methods
    virtual float monthlyPayment();  // virtual means the method can be overriden in the child classes methods.
    void displayLoan();
    void saveLoan();
    
};

#endif