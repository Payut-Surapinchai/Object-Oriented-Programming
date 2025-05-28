// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Files that I'll need for this implementation file.
#include "functions.h"
#include "CollegePerson.h" 

// Include the libraries that are allowed for this PA.
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <exception>

// This is an implementation file where I'll be defining the functions from functions.h file.

// Reasoning for using -> and not dot notation:
// In this file, I'll be working mostly with pointers in the vector, and since I have vectors in the pointers, everytime I want to use the methods on the vectors
// I have to use -> instead of dot notation to dereference the pointer and use its method.

// Defining the greeting method.
void greeting()
{
    // Just have to show the message "Press Enter to Continue"
    std::cout << "Press Enter to Continue";
}

// Defining the recordCount method.
// This will count how many records there are in the file.
int recordCount()
{   
    // This creates an input file stream variable called file.
    std::ifstream file;

    // Opens the file at the directory in the parantheses. (Change your directory here.)
    file.open("./data/data.txt");

    // Check if file is open, if it's not open, then give out an error about opening the file.
    if (!file.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        return 0;
    }

    // Instantiate a string variable called line, and this should not be empty, so I can start the while loop.
    std::string line = "Hi";

    // Instantiate a counter variable to count how many records there are.
    int counter = 0;
    
    // This while loop will run as long as line is not empty.
    while (!line.empty())
    {
        // Get the line from the file stream.
        std::getline(file, line);

        // If the line is empty, then add 1 to the counter because each records are separated by a blank line.
        // Therefore, every time I get a blank line, just add 1 to the counter to signify that I've found 1 record.
        if (line.empty())
        {
            counter += 1;

            // Read a new line from file stream for the while loop and if line is not empty then
            // the while loop will continue until the end of file where every line is empty after the last
            // data in data.txt.
            std::getline(file, line);

            // Return to the while loop.
            continue;
        }
    }

    // Close the file.
    file.close();

    // Return the counter variable.
    return counter;
}

// Defining the getInput method. 
// This will read the input from a file and store it in the cp vector.
void getInput(std::vector<CollegePerson*> cp)
{
    // This block of code until next comment, is the same code as above. It is there just to make sure
    // the file is opened.
    std::ifstream file;
    file.open("./data/data.txt");  // Change to your directory here.
    if (!file.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    // Initiate line to store a string from a file stream.
    std::string line = "";

    // Initiate tmp to store a string later in the for loop (will explain later in the for loop).
    std::string tmp = "";


    // This for loop will run until it iterated through every records.
    for (int i = 0;i < recordCount();i++)
    {
        // Initiate these two float variables to store the sum for calculating the sum of all their 
        // earned points and the total points that can be earned from each record.
        float sumEarned = 0.0;
        float total = 0.0;
    
        // Store a line from the file stream in line.
        std::getline(file, line);

        // Create a new CollegePerson pointer object to add a new object into the vector cp.
        CollegePerson* p = new CollegePerson();
        cp.push_back(p);

        // Convert the line variable into a stringstream variable named "ss".
        std::stringstream ss(line);
        
        // Read the stringstream until comma and store it in tmp.
        std::getline(ss, tmp, ',');

        // Since the first data that's before the comma is a person's name, then I just use a 
        // setter to set a person name to tmp.
        cp[i]->setPersonName(tmp);

        // These are the same procedures as I explained above.
        std::getline(ss, tmp, ',');

        // std::stoi just converts string to an int because the setPersonAge takes an int as its parameter.
        cp[i]->setPersonAge(std::stoi(tmp));

        // These are the same procedures as I explained above.
        std::getline(ss, tmp, ',');
        cp[i]->setUniversityName(tmp);

        // These are the same procedures as I explained above.
        std::getline(ss, tmp, ',');
        cp[i]->setCollegeName(tmp);

        // This one reads the string stream until a newline character and store it in tmp.
        std::getline(ss, tmp);
        cp[i]->setIDNumber(std::stoi(tmp));

        // Get a new line and store it in file.
        std::getline(file, line);

        // If the line is not empty then run this while loop.
        while (!line.empty())
        {
            // Convert the line to a string stream every time the while loop starts.
            std::stringstream ss(line);

            // Create a new variable to store the data (string).
            std::string tmp1 = "";

            // Read the stringstream until the comma and store it in tmp1. However, we will ignore this value
            // because we don't need this value in any of our processes.
            std::getline(ss, tmp1, ',');

            // Read the stringstream until the backslash and store the value in tmp1.
            std::getline(ss, tmp1, '/');

            // Convert the tmp1 into a float using std::stof, and add it to sumEarned so we can total up the
            // amount of points that this person earned in all his subjects and homework.
            sumEarned += std::stof(tmp1);

            // Read the stringstream until the newline character and store the value in tmp1.
            std::getline(ss, tmp1);

            // Convert the tmp1 to a float using std::stof and add up to total so we can sum up the total points
            // that this person could've earned. (adding the max points in every assignments)
            total += std::stof(tmp1);

            // Finally read a new line from file and store it in line, and if this is ever empty then-
            // this while loop will stop.
            std::getline(file, line);
        }
        
        // After reaching the end of the first record (blank line), set the total earned points using
        // setEarned() and set the summation of all total points in setTotal().
        cp[i]->setEarned(sumEarned);
        cp[i]->setTotal(total);
    }
}   

// Defining calcGrades method.
// This will calculate the grades, the letter grade, and the gpa of the people in the file.
void calcGrades(std::vector<CollegePerson*> cp)
{
    // This for loop will iterate through all the pointers in the cp vector.
    for (int i = 0; i < cp.size();i++)
    {
        // Instantiate the earned variable and store the earned points from the current person that is being iterated
        // and instantiate the total variable and store the total points from the same person as well.
        float earned = cp[i]->getEarned();
        float total = cp[i]->getTotal();

        // Calculate the grade using the formula specified in the PA.
        float grade = (earned / total) * 100;

        // Set the grade for that person using setGrade()
        cp[i]-> setGrade(grade);

        // All these if, else-if, and else statements is for catching the score in each score range and setting- 
        // the letter grade and gpa as specified in the PA. The score that will be checked if its in-
        // the score range is calculated from the formula in the PA and stored in grade.

        // For example, this is the score range from 94 (exclusive) to 100 (inclusive).
        // And any person that has the grade in this range will get a letter grade A+ and the gpa of 4.5.
        if (grade > 94 && grade <= 100)
        {
            cp[i]->setLetterGrade("A+");
            cp[i]->setgpa(4.5);
        }
        else if (grade > 89 && grade <= 94)
        {
            cp[i]->setLetterGrade("A");
            cp[i]->setgpa(4.0);
        }
        else if (grade > 84 && grade <= 89)
        {
            cp[i]->setLetterGrade("B+");
            cp[i]->setgpa(3.5);
        }
        else if (grade > 79 && grade <= 84)
        {
            cp[i]->setLetterGrade("B");
            cp[i]->setgpa(3.0);
        }
        else if (grade > 74 && grade <= 79)
        {
            cp[i]->setLetterGrade("C+");
            cp[i]->setgpa(2.5);
        }
        else if (grade > 69 && grade <= 74)
        {
            cp[i]->setLetterGrade("C");
            cp[i]->setgpa(2.0);
        }
        else if (grade > 64 && grade <= 69)
        {
            cp[i]->setLetterGrade("D+");
            cp[i]->setgpa(1.5);
        }
        else if (grade > 60 && grade <= 64)
        {
            cp[i]->setLetterGrade("D");
            cp[i]->setgpa(1.0);
        }
        else
        {
            cp[i]->setLetterGrade("F");
            cp[i]->setgpa(0);
        }
    }
}
    
// Defining the display function. 
// This function will display the person's name, age, ID number, college, gpa, and grade. The people will also
// be grouped in their respective universities (UCD and Metro State).
void display(std::vector<CollegePerson*> cp)
{
    // I separated 2 for loops in this function because I want to group up all the UCD people together, and the
    // Metro State people together.

    // Print the header for UCD as specified in the PA format.
    std::cout << "UCD" << std::endl;

    // This line prints 90 hyphens using the std::string() method.
    std::cout << std::string(90, '-') << std::endl;

    // std::setw() sets the width/space of the area and std::left is to align the word to the left.
    std::cout << std::setw(15) << std::left << "Name" << std::setw(15) << std::left << "Age" <<
    std::setw(15) << std::left << "ID" << std::setw(15) << std::left << "College" << 
    std::setw(15) << std::left << "GPA" << std::setw(15) << std::left << "Grade" << std::endl;

    // This for loop will iterate through the cp vector.
    for(int i = 0;i < cp.size();i++)
    {
        // This checks for people who are in UCD, if they are just print out their name, age, ID number, 
        // college, gpa, and grade in the format specified in the PA.
        if (cp[i]->getUniversityName() == "UCD")
        {
            std::cout << std::setw(15) << std::left << cp[i]->getPersonName() << std::setw(15) << 
            std::left << cp[i]->getPersonAge() << std::setw(15) << std::left << cp[i]->getIDNumber() << 
            std::setw(15) <<  std::left << cp[i]->getCollegeName() << std::setw(15) << 
            std::left << cp[i]->getgpa() << std::setw(15) << std::left << cp[i]->getLetterGrade() << std::endl;
        }
    }

    // Add a new line to separate between the people in UCD and people in Metro State.
    std::cout << "\n";

    // Print out the header for Metro State as specified in the PA. (Same format as above)
    std::cout << "Metro State" << std::endl;
    std::cout << std::string(90, '-') << std::endl;
    std::cout << std::setw(15) << std::left << "Name" << std::setw(15) << std::left << "Age" <<
    std::setw(15) << std::left << "ID" << std::setw(15) << std::left << "College" << 
    std::setw(15) << std::left << "GPA" << std::setw(15) << std::left << "Grade" << std::endl;

    // This for loop iterates through all elements in vector cp.
    for(int i = 0;i < cp.size();i++)
    {
        // If that person is in Metro State then print in the following format. (Same format as above)
        if (cp[i]->getUniversityName() == "Metro State")
        {
            std::cout << std::setw(15) << std::left << cp[i]->getPersonName() << std::setw(15) << 
            std::left << cp[i]->getPersonAge() << std::setw(15) << std::left << cp[i]->getIDNumber() << 
            std::setw(15) <<  std::left << cp[i]->getCollegeName() << std::setw(15) << 
            std::left << cp[i]->getgpa() << std::setw(15) << std::left << cp[i]->getLetterGrade() << std::endl;
        }
    } 
}