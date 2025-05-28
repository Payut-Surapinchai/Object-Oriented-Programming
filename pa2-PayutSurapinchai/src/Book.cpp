// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#include "Book.h"  // Import the Book header file to be able to access the class and its methods.
#include <iostream>
#include <string>

// To access each class's constructor and its methods, you must put Book:: infront of the constructor or method
// For example, Book::Book(), Book::setTitle(), Book::getAuthor(), etc.

// Defining the Book constructor with no parameters
Book::Book()
{
    title = "";
    author = "";
    format = "";
    pubYear = 0;
    numOfPages = 0;

}

// Defining the Book constructor with 2 parameters
Book::Book(std::string nTitle, std::string nAuthor)
{
    title = nTitle;
    author = nAuthor;
    format = "";
    pubYear = 0;
    numOfPages = 0;

}

// Defining the Book constructor with all 5 parameters
Book::Book(std::string eTitle, std::string eAuthor, int eFormat, int ePubYear, int eNumOfPages)
{

    title = eTitle;
    author = eAuthor;
    setFormat(eFormat);  // Since our input is int, we should use setFormat(int) to translate the int to the format.
    pubYear = ePubYear;
    numOfPages = eNumOfPages;

}

// std::string, int, or float that is infront of Book::Methods() are types that the method will return,
// and void just means the method won't return anything.
// In this section, we are defining all the getters in this class.

// Gets the book's title
std::string Book::getTitle()
{
    return title;
}

// Gets the book's author
std::string Book::getAuthor()
{
    return author;
}

// Gets the book's format
std::string Book::getFormat()
{
    return format;  // This will make sense in the setFormat() method because we assign "format" in setFormat()
                    // Therefore, when user use getFormat(), we should return "format".
}

// Get the book's publication year
int Book::getPubYear()
{
    return pubYear;
}

// Get the book's number of pages
int Book::getNumOfPages()
{
    return numOfPages;
}

// This section is where we define the setter methods.
// Sets the book's title
void Book::setTitle(std::string newTitle)
{
    title = newTitle;
}

// Sets the book's Author
void Book::setAuthor(std::string newAuthor)
{
    author = newAuthor;
}

// Sets the book's format depending on the format input.
// As you can see we are assigning "format" for each's book formats.
// That's why in getFormat(), we must return the "format" variable.
void Book::setFormat(int bookFormat)
{

    if (bookFormat == 1)  // if format input is 1
    {
        format = "Hardcover";

    } 
    else if (bookFormat == 2)  // if format input is 2
    {
        format = "Paperback";

    } 
    else if (bookFormat == 3)  // if format input is 3
    {
        format = "Audiobook";

    } 
    else if (bookFormat == 4)  // if format input is 4
    {
        format = "EBook";

    } 
    else  // if an unknown format input was given
    {
        format = "unknown";

    }

}

// Sets the book's publication year
void Book::setPubYear(int newPubYear)
{
    pubYear = newPubYear;
}

// Sets the book's number of pages
void Book::setNumOfPages(int pageCount)
{
    numOfPages = pageCount;
}

// This section is for the other methods that are not getters and setters.
// This method sets the book's title, author, format, publication year, and number of pages.
// Instead of using each setter methods, you could use this to set each book's variables.
void Book::setBook(std::string bTitle, std::string bAuthor, int bFormat, int bPubYear, int bNumOfPages)
{
    title = bTitle;
    author = bAuthor;
    setFormat(bFormat);
    pubYear = bPubYear;
    numOfPages = bNumOfPages;

}

// This method is to display the variables in the book in a certain output format.
void Book::displayBook()
{
    std::cout << "Title : " << title << " by Author : " << author << std::endl;
    std::cout << "Format : " << format << std::endl;
    std::cout << "Publication Year : " << pubYear << std::endl;
    std::cout << "Number of Pages : " << numOfPages << std::endl;

}

// This method is to calculate the estimated book weight where each paper is 0.171 ounces,
// the hardcover is 1.9 ounces, and paperback cover is 0.3 ounces.
float Book::estimatedBookWeight()
{   // Declare a float variable to store the result.
    float weight = 0.0;  

    // Find the number of papers given by the number of pages, by dividing the pages by 2 because
    // there are 2 sides to 1 paper, and the (numOfPages % 2) is basically for checking odd number of pages
    // For example if there were 5 pages, dividing by 2 would give ue 2 pages since the variable is an int,
    // therefore, I use the modulo to find if there was a remainder, and if there was then add to the number
    // of pages.
    int paperCount = numOfPages / 2 + (numOfPages % 2); 

    if (format == "Hardcover")  // if the format was a hardcover
    {
        weight = (paperCount * 0.171) + 1.9;
        return weight; 

    }
    if (format == "Paperback")  // if the format was a paperback cover
    {
        weight = (paperCount * 0.171) + 0.3;
        return weight;

    }
    
    return weight;  // Returns the weight as 0.0 if the input wasn't paperback, or hardcover.
}

// This method finds the estimated reading time given the reading speed as an input,
// and the reading speed is in pages per minute.
float Book::estimatedReadingTime(float readingSpeed)
{
    // Declare a float variable to store the result.
    float readingTime = 0.0;
    
    // Find reading time by dividing number of pages by reading speed.
    readingTime = numOfPages / readingSpeed;  
    return readingTime;

}