// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream>

// This is the main implementation file, used for testing my class and its methods
int main() 
{
    // Create the student object
    Student studentObj1;

    // Check all the member variables of the default constructor by using displayStudent()
    studentObj1.displayStudent();

    // Use all the setters, and addClass method because the default constructor doesn't have a class yet
    studentObj1.setSID(3920);
    studentObj1.setFName("Payut");
    studentObj1.setLName("Surapinchai");
    studentObj1.setAddress("2918 S.Last Hope");
    studentObj1.setPhone(2102934837);
    studentObj1.addClass("Biology", 86);
    studentObj1.setCount();

    // Print out all the student information to test the getters
    std::cout << "The student ID is " << studentObj1.getSID() << "." << std::endl;
    std::cout << "The student's first name is " << studentObj1.getFName() << "." << std::endl;
    std::cout << "The student's last name is " << studentObj1.getLName() << "." << std::endl;
    std::cout << "The student's address is " << studentObj1.getAddress() << "." << std::endl;
    std::cout << "The student's phone number is " << studentObj1.getPhone() << "." << std::endl;
    
    // Get the student's first class and grade (first because the input is 0), and print it out
    std::cout << "The student's first class is " << studentObj1.getClass(0) << "." << std::endl;
    std::cout << "The student's grade in that class is " << studentObj1.getGrade(0) << "." << std::endl;

    // Get the number of classes the student has, and print it out
    std::cout << "This student has " << studentObj1.getCount() << " class/classes." << std::endl;

    // Get the student's letter grade and print it out
    std::cout << "The student's letter grade in that class is " << studentObj1.convertLetterGrade(studentObj1.getGrade(0)) << ".\n" << std::endl;

    // Sets the student information except the count
    studentObj1.setStudent(3293,"Pommel","Kromner","9483 S.Newhope",1174832938,"70 80 97",
                           "Mathematics English Science");

    // Test out the listGrades() method to see if its printing properly, and finally use displayStudent()
    // to verify if the setStudent() method worked properly
    studentObj1.listGrades();
    studentObj1.displayStudent();

    // Test the constructor with full parameters, and use same methods of testing as when I was testing
    // for the constructor with no parameters
    Student studentObj2(2090, "Kurander","Phureni","2837 Junker Boulevard", 1003992837, "76 89 95",
                        "Physics Music Chemistry",3);
    
    studentObj2.displayStudent();

    studentObj2.setSID(7364);
    studentObj2.setFName("Schromonger");
    studentObj2.setLName("Farmallad");
    studentObj2.setAddress("38472 S. Krover");
    studentObj2.setPhone(1090903847);
    studentObj2.addClass("PE", 96);
    studentObj2.setCount();

    std::cout << "The student ID is " << studentObj2.getSID() << "." << std::endl;
    std::cout << "The student's first name is " << studentObj2.getFName() << "." << std::endl;
    std::cout << "The student's last name is " << studentObj2.getLName() << "." << std::endl;
    std::cout << "The student's address is " << studentObj2.getAddress() << "." << std::endl;
    std::cout << "The student's phone number is " << studentObj2.getPhone() << "." << std::endl;
    std::cout << "The student's last class is " << studentObj2.getClass(3) << "." << std::endl;
    std::cout << "The student's grade in that class is " << studentObj2.getGrade(3) << "." << std::endl;
    std::cout << "This student has " << studentObj2.getCount() << " class/classes." << std::endl;
    std::cout << "The student's letter grade in that class is " << studentObj2.convertLetterGrade(studentObj2.getGrade(3)) << ".\n" << std::endl;

    studentObj2.setStudent(8374,"Kranos","Harbinger","3827 Belobog boulevard",1023943748,"80 95 100",
                           "Art History Computer");
    studentObj2.listGrades();
    studentObj2.displayStudent();


    return 0;
    
}