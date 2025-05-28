// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#ifndef BOOK_H  // if BOOK_H is not defined,
#define BOOK_H  // then define BOOK_H
#include <iostream>  
#include <string>

// This is a header file where we declare the class, the methods in the class, and the variables
// that will be used in this class.
class Book
{
    // When we don't declare "public:"" it will automatically be private, this part does not need to be public
    // for us to be able to run the code. Because they are just variables, these can be private.
    std::string title;
    std::string author;
    std::string format;
    int pubYear;
    int numOfPages;


    // This part needs to be public because we want to be able to access the constructors and functions
    // from the outside as well.
    public:
    // Constructor with no parameters
    Book();  
    // Constructor with 2 parameters
    Book(std::string nTitle, std::string nAuthor);
    // Constructor with 5 parameters  
    Book(std::string eTitle, std::string eAuthor, int eFormat, int ePubYear, int eNumOfPages);


    // All the getters that we will be using in the class
    std::string getTitle();
    std::string getAuthor();
    std::string getFormat();
    int getPubYear();
    int getNumOfPages();


    // All the setters that we will be using in this class
    void setTitle(std::string);
    void setAuthor(std::string);
    void setFormat(int);
    void setPubYear(int);
    void setNumOfPages(int);
    
    
    // Other methods that we will also be using in this class
    void setBook(std::string, std::string, int, int, int);
    void displayBook();
    float estimatedBookWeight();
    float estimatedReadingTime(float);

};

#endif