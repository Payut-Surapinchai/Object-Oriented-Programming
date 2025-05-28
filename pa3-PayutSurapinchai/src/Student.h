// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <iomanip>  // Library for manipulating input/output
#include <ios>      // Another library for manipulating input/output
#include <sstream>  // Makes it possible to treat string as streams like an input/output

// This is a header file for declaring the class, its member variables, and its methods
class Student
{
    // Declare the member variables
    int sid;
    std::string fName;
    std::string lName;
    std::string address;
    long phoneNumber;
    std::string grades;
    std::string classes;
    int count;

public:
    // Declare the two constructors; one with no parameters and one with full parameters
    Student();

    // Explaining the variables that I used for the constructor with full parameters
    // adrs = address, phnNum = phoneNumber, grds = grades, cls = classes
    Student(int studID,std::string firstName, std::string lastName, std::string adrs, 
            long phnNum, std::string grds, std::string cls, int counter);
    
    // Declare the getters
    int getSID();
    std::string getFName();
    std::string getLName();
    std::string getAddress();
    long getPhone();
    int getCount();

    // Declare the setters
    void setSID(int studID);
    void setFName(std::string firstName);
    void setLName(std::string lastName);
    void setAddress(std::string adrs);
    void setPhone(long phnNum);
    void setCount();
  
    // Declare other methods (getGrade(int), and getClass(int) are special getters, 
    // therefore, that's why they are in this section)
    void setStudent(int sID,std::string eFirstName, std::string eLastName, std::string eAdrs, 
    long ePhnNum, std::string eGrds, std::string eCls);
    void displayStudent();
    int getGrade(int location);
    std::string getClass(int index);
    void addClass(std::string bClass, int grde);
    std::string convertLetterGrade(const int grds);
    void listGrades();

};

#endif