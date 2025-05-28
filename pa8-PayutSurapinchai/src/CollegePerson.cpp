// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#include "CollegePerson.h"

// This is an implementation file where I will define each constructors, getters, and setters in the 
// CollegePerson class.

// Defining the default constructor.
CollegePerson::CollegePerson() : Person()  // The : Person() is to also call the default constructor 
{                                          // from the parent class as well.
    universityName = "";
    collegeName = "";
    idNumber = 0;
    earned = 0.0;
    total = 0.0;
    grade = 0.0;
    gpa = 0.0;
    letterGrade = "";
}

// Defining the parameterized constructor.
CollegePerson::CollegePerson(std::string pName, int pAge, std::string uName, std::string cName, int idNum)
: Person(pName, pAge)  // The : Person(pName, pAge) is to also call the parameterized constructor 
{                      // from the parent class as well.
    setPersonName(pName);
    setPersonAge(pAge);

    universityName = uName;
    collegeName = cName;
    idNumber = idNum;
}

// From here until the next comment below, I will be defining the getters.
std::string CollegePerson::getUniversityName()
{
    return universityName;
}

std::string CollegePerson::getCollegeName()
{
    return collegeName;
}

int CollegePerson::getIDNumber()
{
    return idNumber;
}

float CollegePerson::getEarned()
{
    return earned;
}

float CollegePerson::getTotal()
{
    return total;
}

float CollegePerson::getGrade()
{
    return grade;
}

float CollegePerson::getgpa()
{
    return gpa;
}

std::string CollegePerson::getLetterGrade()
{
    return letterGrade;
}

// From here until the end of this file, I will be defining the setters.
void CollegePerson::setUniversityName(std::string uName)
{
    universityName = uName;
}

void CollegePerson::setCollegeName(std::string cName)
{
    collegeName = cName;
}

void CollegePerson::setIDNumber(int idNum)
{
    idNumber = idNum;
}

void CollegePerson::setEarned(float earn)
{
    earned = earn;
}

void CollegePerson::setTotal(float tot)
{
    total = tot;
}

void CollegePerson::setGrade(float grd)
{
    grade = grd;
}

void CollegePerson::setgpa(float gpa1)
{
    gpa = gpa1;
}

void CollegePerson::setLetterGrade(std::string letGrade)
{
    letterGrade = letGrade;
}