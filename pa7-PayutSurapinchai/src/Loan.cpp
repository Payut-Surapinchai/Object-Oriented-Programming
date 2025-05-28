// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include all the allowed libraries from PA7. (<string> already included in the header file)
#include "Loan.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

// This is an implementation file for Loan class where I'll be defining the constructors, and the methods
// for the Loan class.

// Defining the default Loan constructor.
Loan::Loan()
{
    principal = 0.0;
    interestRate = 0.0;
    loanLength = 0;
    loanType = "";

}

// Defining the fully parameterized Loan constructor.
Loan::Loan(float prcp, float intRate, int loanLen, std::string loanTyp)
{
    principal = prcp;
    interestRate = intRate;
    loanLength = loanLen;
    loanType = loanTyp;
}

// From below until the next comment, I'm just defining the getters.
float Loan::getPrincipal()
{
    return principal;
}

float Loan::getInterestRate()
{
    return interestRate;
}

int Loan::getLoanLength()
{
    return loanLength;
}

std::string Loan::getLoanType()
{
    return loanType;
}

// From below until the next comment, I'm just defining the setters.
void Loan::setPrincipal(float prcp)
{
    principal = prcp;
}

void Loan::setInterestRate(float intRate)
{
    interestRate = intRate;
}

void Loan::setLoanLength(int loanLen)
{
    loanLength = loanLen;
}

void Loan::setLoanType(std::string loanTyp)
{
    loanType = loanTyp;
}

// Defining the monthlyPayment() (Returns 0 because this is just the loan class, there is no loan type yet
// I will override this method in the child classes.)
float Loan::monthlyPayment()
{
    return 0.0;
}

// Defining the displayLoan()
// This will just display the loan type, principal, interest rate, loan length (in years), and monthly payment
// (depending on the loan type).
void Loan::displayLoan()
{
    std::cout << "Loan Overview" << std::endl;

    // std::string(34, '-') will print the hyphen character 34 times.
    std::cout << std::string(34, '-') << std::endl;

    // std::setw() sets the width, std::left/std::right is setting the align type of the next word where 
    // std::left aligns left, and std::right aligns right.
    std::cout << std::setw(18) << std::left << "Loan Type:" << std::setw(15) << std::right 
              << loanType << "|" << std::endl;

    std::cout << std::setw(18) << std::left << "Principal:" << std::setw(15) << std::right 
              << principal << "|" << std::endl;
    
    // std::fixed << std::setprecision(2) is used to achieve 2 decimal places in the output.
    std::cout << std::setw(18) << std::left << "Interest Rate:" << std::setw(14) << std::right 
              << std::fixed << std::setprecision(2) << interestRate << "%|" << std::endl;
    
    std::cout << std::setw(18) << std::left << "Length in Years:" << std::setw(15) << std::right 
              << loanLength << "|" << std::endl;

    // use monthlyPayment() to return the monthly payment value.
    std::cout << std::setw(18) << std::left << "Monthly Payment:" << std::setw(15) << std::right 
              << std::fixed << std::setprecision(2) << monthlyPayment() << "|" << std::endl;

}

// Defining the saveLoan() method
// ChatGPT helped me on the syntax of how to open the file, write, and close the file.
// As well as gave me some hints on how to get the root directory for the autograder.
void Loan::saveLoan()
{
    // Create a variable output file stream with the name file.
    std::ofstream file;

    // Open the file at the directory. (Directory can change depending on your directory of where you store the loans.txt file or any text files.)
    file.open("./data/loans.txt");

    // Check if the file is open or not, if it is not opened, then show this error.
    if (!file.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    // This line shows what I will write to the file.
    file << principal << " " << interestRate << " " << loanLength << "\n";

    // This line closes the file because we are done with the file.
    file.close();
}