// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#include "Loan.h"
#include "SimpleLoan.h"
#include "AmortizedLoan.h"
#include <iostream>

// This is a main implementation file to check if my classes and its methods work.
// For testing the saveLoan() method, I'm using the directory below because thats where I stored the loans.txt file.
// (Use your directory that stores the loans.txt file or any text files)
// Configure the directory of the saveLoan() method in Loan.cpp file.
// I don't have to check getters and setters due to the PA7 requirements.

int main()
{
    // Instantiating a default loan (loan) object.
    Loan loan;

    // Checking the default loan's monthlyPayment() method.
    std::cout << "The default loan object's monthly payment is " << loan.monthlyPayment() << std::endl;

    // Checking the default loan's displayLoan() method.
    loan.displayLoan();

    // Checking the default loan's saveLoan() method.
    loan.saveLoan();

    // This line is just to separate the tests, so I can test the other class objects. This is also for the 
    // readability for testing the classes and its methods.
    std::cout << "\n" << std::endl;


    // Instantiating a fully parameterized loan (loan1) object.
    Loan loan1(3000, 8, 2, "Mortgages");

    // Checking the fully parameterized loan object's monthlyPayment() method.
    std::cout << "The fully parameterized loan object's monthly payment is " << loan1.monthlyPayment() << std::endl;

    // Checking the fully parameterized loan object's displayLoan() method.
    loan1.displayLoan();

    // Checking the fully parameterized loan object's saveLoan() method.
    loan1.saveLoan();


    std::cout << "\n" << std::endl;


    // Instantiating a default simple loan (sLoan) object.
    SimpleLoan sLoan;

    // Checking the default simple loan object's monthlyPayment() method.
    std::cout << "The default simple loan object's monthly payment is " << sLoan.monthlyPayment() << std::endl;

    // Checking the default simple loan object's displayLoan() method.
    sLoan.displayLoan();

    // Checking the parameterized simple loan object's saveLoan() method.
    sLoan.saveLoan();


    std::cout << "\n" << std::endl;


    // Instantiating a parameterized simple loan (sLoan1) object.
    SimpleLoan sLoan1(5000, 10, 3);

    // Checking the parameterized simple loan object's monthlyPayment() method.
    std::cout << "The parameterized simple loan object's monthly payment is " << sLoan1.monthlyPayment() << std::endl;

    // Checking the parameterized simple loan object's displayLoan() method.
    sLoan1.displayLoan();

    // Checking the parameterized simple loan object's saveLoan() method.
    sLoan1.saveLoan();


    std::cout << "\n" << std::endl;


    // Instantiating a default amortized loan (aloan) object.
    AmortizedLoan aLoan;

    // Checking the default amortized loan object's monthlyPayment() method.
    std::cout << "The default amortized loan object's monthly payment is " << aLoan.monthlyPayment() << std::endl;

    // Checking the default amortized loan object's displayLoan() method.
    aLoan.displayLoan();

    // Checking the parameterized amortized loan object's saveLoan() method.
    aLoan.saveLoan();


    std::cout << "\n" << std::endl;


    // Instantiating a parameterized amortized loan (aLoan1) object.
    AmortizedLoan aLoan1(6000, 12, 5);

    // Checking the parameterized amortized loan object's monthlyPayment() method.
    std::cout << "The parameterized amortized loan object's monthly payment is " << aLoan1.monthlyPayment() << std::endl;

    // Checking the parameterized amortized loan object's displayLoan() method.
    aLoan1.displayLoan();

    // Checking the parameterized amortized loan object's saveLoan() method.
    aLoan1.saveLoan();

    return 0;

}