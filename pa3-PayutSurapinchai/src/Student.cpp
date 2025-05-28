// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream>

// This is the implementation file for defining all the classes and its methods
// Must use Student:: before the constructor or the method to access it and to define it

// Define the constructor with no parameters
Student::Student(){
    sid = 0;
    fName = "";
    lName = "";
    address = "";
    phoneNumber = 0;
    grades = "";
    classes = "";
    count = 0;
}

// Define the constructor with full parameters
Student::Student(int studID, std::string firstName, std::string lastName, std::string adrs, 
    long phnNum, std::string grds, std::string cls, int counter)
    {

    sid = studID;
    fName = firstName;
    lName = lastName;
    address = adrs;
    phoneNumber = phnNum;
    grades = grds;
    classes = cls;
    count = counter;

}

// Gets the student's ID
int Student::getSID()
{
    return sid;
}

// Gets the student's first name
std::string Student::getFName()
{
    return fName;
}

// Gets the student's last name
std::string Student::getLName()
{
    return lName;
}

// Gets the student's address
std::string Student::getAddress()
{
    return address;
}

// Gets the student's phone number
long Student::getPhone()
{
    return phoneNumber;
}

// Gets the count of the student's classes (how many classes the student has)
int Student::getCount()
{
    return count;
}

// Sets the student's ID
void Student::setSID(int studID)
{
    sid = studID;
}

// Sets the student's first name
void Student::setFName(std::string firstName)
{
    fName = firstName;
}

// Sets the student's last name
void Student::setLName(std::string lastName)
{
    lName = lastName;
}

// Sets the student's address
void Student::setAddress(std::string adrs)
{
    address = adrs;
}

// Sets the student's phone number
void Student::setPhone(long phnNum)
{
    phoneNumber = phnNum;
}

// Sets the counter to the number of grades (and classes) in the string
void Student::setCount()
{ 

    std::istringstream iss(grades);  // iss() is from <sstream>, this method treats the parameter as a stream
                                     // like how you read from a file or input (learned from ChatGPT)
    std::string value;  // Declare the value variable

    int counter = 0;  // Initiate the counter variable to count the classes
    while (iss >> value)  // The ">>" operator extracts space-seperated words into value, and while-
                          // that is possible, the counter will go up by 1.
    {
        counter++;
    }
    count = counter;  // When the while loop finishes, it will store the count in the count variable
}

// Sets each of the student's information by putting in the parameter (apart from the class count)
// Put "e" infront of some variables to differentiate them from the other variables
void Student::setStudent(int sID,std::string eFirstName, std::string eLastName, std::string eAdrs, 
    long ePhnNum, std::string eGrds, std::string eCls)
{
    sid = sID;
    fName = eFirstName;
    lName = eLastName;
    address = eAdrs;
    phoneNumber = ePhnNum;
    grades = eGrds;
    classes = eCls;
    setCount();  // sets the count whenever you execute the setStudent method

}

// Displays the student's information in a certain output format (apart from the count)           
void Student::displayStudent()
{
    // std::string(int, '') creates however many of that character on the right of the parameter in the output
    std::cout << std::string(34,'-') << std::endl;

    // std::setw(int) sets how many characters you want in that space
    // std::left, std::right, aligns the characters depends left or right accodingly
    std::cout << std::setw(15) << std::left << "Student ID" << "|" << std::setw(18) << std::right << sid << std::endl;
    std::cout << std::setw(15) << std::left << "First Name" << "|" << std::setw(18) << std::right << fName << std::endl;
    std::cout << std::setw(15) << std::left << "Last Name" << "|" << std::setw(18) << std::right << lName << std::endl;
    std::cout << std::setw(15) << std::left << "Address" << "|" << std::setw(18) << std::right << address << std::endl;
    std::cout << std::setw(15) << std::left << "Phone Number" << "|" << std::setw(18) << std::right << phoneNumber << std::endl;
    std::cout << std::string(34,'-') << std::endl;

}

// Gets the student's grade at the given location
int Student::getGrade(int location)
{
    // This part is the same as setCount()
    std::istringstream iss(grades);
    std::string value;
    int counter(0);
    while (iss >> value)
    {
        if (counter++ == location)  // this is the only diff part, this means when the counter++ is the
                                    // same as the input location then execute the return
        {
        return stoi(value);  // stoi(string) changes the data type from string to int
        }
    }
    return -1;  // returns -1 if this method failed
}

// Gets the student's class from the input index/location
std::string Student::getClass(int index)
{ 
    // This part is the same as setCount(), and getGrade(int)
    std::istringstream iss(classes);
    std::string value;
    int counter(0);
    while (iss >> value)
    {
        if (counter++ == index)
        {
        return value;  // Returns the value, no need to translate from string to integer because we want the class
        }
    }
    return "";  // Returns an empty string if failed
}

// Adds a class for the student
// Used "a", and "b" infront of variables to differentiate it from the input variable
void Student::addClass(std::string bClass, int grde)
{   // Initiate the variables for this method
    std::string aClass = bClass;
    int aGrde = grde;
    std::string newGrade = "";

    // if the input grade is between or equal 0 to 100, and the class is not an empty string,
    // execute the upcoming block of code
    if (aGrde >= 0 && aGrde <= 100 && aClass != "")
    {
        classes = classes + " " + aClass;  // Adds the class into the existing class
        newGrade = std::to_string(aGrde);  // Change the grade from int to string 
        grades = grades + " " + newGrade;  // Adds the new grade into the existing string
        count += 1;  // Adds the count by 1 because we just added a class
    }
}

// Convert the input grade(int) into a letter grade
std::string Student::convertLetterGrade(const int grds)
{
    // Initiate the variable
    int gradeInput = grds;

    // Use switch statement due to the assignment's requirement
    // switch(condition), each case will be equal to the condition, for example, "case 100:" means
    // if the input is equal to 100, return whatever is put at the end of all the cases
    switch (gradeInput)
    {
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
            return "A";
        case 93:
        case 92:
        case 91:
        case 90:
            return "A-";
        case 89:
        case 88:
        case 87:
            return "B+";
        case 86:
        case 85:
        case 84:
            return "B";
        case 83:
        case 82:
        case 81:
        case 80:
            return "B-";
        case 79:
        case 78:
        case 77:
            return "C+";
        case 76:
        case 75:
        case 74:
            return "C";
        case 73:
        case 72:
        case 71:
        case 70:
            return "C-";
        case 69:
        case 68:
        case 67:
            return "D+";
        case 66:
        case 65:
        case 64:
            return "D";
        case 63:
        case 62:
        case 61:    
        case 60:
            return "D-";
    }
    
    // Use gradeInput / 10 to avoid making all the cases from 50 to 0, instead just have to make cases for
    // 5,4,3,2,1,0, and returns F letter grade
    switch(gradeInput / 10)
    {
        case 5: 
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            return "F";
    }

}

// Lists the grade in a certain format
void Student::listGrades()
{
    // Initialize all the variables
    float average = 0.0;
    float sum = 0.0;
    float counter = 0.0;
    int grade = 0;
    int numClass = getCount();  // Gets the number of class from getCount() and store in numClass

    std::cout << std::string(15,'-') << std::endl;
    std::cout << std::setw(12) << std::left << "Class" << std::setw(3) << std::left << "GRD" << std::endl;
    std::cout << std::string(15,'-') << std::endl;

    // While the counter is less than the number of classes, execute the block of code inside the while loop
    while (counter < numClass)
    {
        // Output the class, and its grade in a certain format
        std::cout << std::setw(13) << std::left << getClass(counter) << std::setw(2) << std::left << convertLetterGrade(getGrade(counter)) << std::endl;
        grade = getGrade(counter);  // Store that subject's grade in grade
        sum += grade;  // Add the subject's grade in sum
        counter += 1;  // Up the counter by 1

    }
    
    average = sum / counter;  // Calculates the average by dividing sum by the number of classes
    std::cout << std::string(15,'-') << std::endl;
    std::cout << "Average: " << std::fixed << std::setprecision(2) << average << std::endl; // the std::fixed and std::setprecision(2)
                                                                                            // are used for outputting the average in 2 decimal places

}   



