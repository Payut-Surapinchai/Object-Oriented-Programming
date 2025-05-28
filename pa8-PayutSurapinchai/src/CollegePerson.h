// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef COLLEGEPERSON_H
#define COLLEGEPERSON_H
#include <string>
#include "Person.h"  // So I can derive from the Person class.

// This is a header file for the CollegePerson class where I will Declare the constructors, 
// its variables, and its methods.

// Create a CollegePerson class that derives from the Person class.
class CollegePerson : public Person
{

// Instantiate the private member variables.
private: 

    std::string universityName;
    std::string collegeName;
    int idNumber;
    float earned;
    float total;
    float grade;
    float gpa;
    std::string letterGrade;

// Instantiate the public constructors, getters, and setters.
public:

    // Declare the default constructor.
    CollegePerson();

    // Declare the parameterized constructor.
    CollegePerson(std::string pName, int pAge, std::string uName, std::string cName, int idNum);

    // Declare the getters.
    std::string getUniversityName();
    std::string getCollegeName();
    int getIDNumber();
    float getEarned();
    float getTotal();
    float getGrade();
    float getgpa();
    std::string getLetterGrade();

    // Declare the setters.
    void setUniversityName(std::string uName);
    void setCollegeName(std::string cName);
    void setIDNumber(int idNum);
    void setEarned(float earn);
    void setTotal(float tot);
    void setGrade(float grd);
    void setgpa(float gpa1);
    void setLetterGrade(std::string letGrade);
};

#endif