// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
#include "Book.h"
#include <iostream>
#include <string>

// This is the main file where I'll be testing the class's constructors and its methods to see if it works 
// properly.

int main()
{
    // Testing for the constructor that does not have any parameters
    Book bookObj1;

    // Run this to check all the member variables before trying the setters/getters
    // and to see if displayBook() works
    bookObj1.displayBook();  
    std::cout << "\n" << std::endl;
    
    // Test all the setters while using the constructor with no parameters
    bookObj1.setTitle("Birds Without Shackles");
    bookObj1.setAuthor("Payut Surapinchai");
    bookObj1.setFormat(2);
    bookObj1.setPubYear(2010);
    bookObj1.setNumOfPages(300);

    // Test all the getters while using the constructor with no parameters (should output whatever we put in the setters)
    std::cout << "The title of this book is " << bookObj1.getTitle() << "." << std::endl;
    std::cout << "The author of this book is " << bookObj1.getAuthor() << "." << std::endl;
    std::cout << "The format of this book is " << bookObj1.getFormat() << "." << std::endl;
    std::cout << "The publication year of this book is " << bookObj1.getPubYear() << "." << std::endl;
    std::cout << "The number of pages in the book are " << bookObj1.getNumOfPages() << ".\n" << std::endl;
    
    // Test the estimatedBookWeight(), and estimatedReadingTime() methods 
    std::cout << "This book weighs around " << bookObj1.estimatedBookWeight() << " ounces." << std::endl;
    std::cout << "The estimated time needed to read this book is " << bookObj1.estimatedReadingTime(2.5) << " minutes.\n" << std::endl;

    // Test the setBook() method, and finally display the book again to see if setBook() worked
    bookObj1.setBook("Newly made Title", "New Author", 3,2900,2398);
    bookObj1.displayBook();
    std::cout<< "\n" << std::endl;

    
    // Testing for the constructor that has 2 parameters
    Book bookObj2("Tears down the window","Nong Punch");

    // Run this to check all the member variables before trying the setters/getters
    // and to see if displayBook() works.
    bookObj2.displayBook();  
    std::cout << "\n" << std::endl;
    
    // Test all the setters while the constructor has 2 parameters
    bookObj2.setTitle("Mud with Sorrow");
    bookObj2.setAuthor("Arthur");
    bookObj2.setFormat(1);
    bookObj2.setPubYear(2005);
    bookObj2.setNumOfPages(450);

    // Test all the getters while the constructor has 2 parameters (should output whatever we put in the setters)
    std::cout << "The title of this book is " << bookObj2.getTitle() << "." << std::endl;
    std::cout << "The author of this book is " << bookObj2.getAuthor() << "." << std::endl;
    std::cout << "The format of this book is " << bookObj2.getFormat() << "." << std::endl;
    std::cout << "The publication year of this book is " << bookObj2.getPubYear() << "." << std::endl;
    std::cout << "The number of pages in the book are " << bookObj2.getNumOfPages() << ".\n" << std::endl;
    
    // Test the estimatedBookWeight() and estimatedReadingTime() methods
    std::cout << "This book weighs around " << bookObj2.estimatedBookWeight() << " ounces." << std::endl;
    std::cout << "The estimated time needed to read this book is " << bookObj2.estimatedReadingTime(1.5) << " minutes.\n" << std::endl;

    // Test the setBook() method, and finally use displayBook() method to see if setBook() worked
    bookObj2.setBook("Fresh Title", "Fresh Author", 3,2000,3029);
    bookObj2.displayBook();
    std::cout<< "\n" << std::endl;

    // Testing for the constructor that has all 5 parameters
    Book bookObj3("The Last Trip","Dr. Shirley",4,2009,600);

    // Run this to check all the member variables before trying the setters/getters
    // and to see if displayBook() works.
    bookObj3.displayBook();  
    std::cout << "\n" << std::endl;
    
    // Test all the setters while the constructor has 5 parameters
    bookObj3.setTitle("When will we meet?");
    bookObj3.setAuthor("Cupid Klausir");
    bookObj3.setFormat(1);
    bookObj3.setPubYear(2008);
    bookObj3.setNumOfPages(505);

    // Test all the getters while the constructor has 5 parameters (should output whatever we put in the setter)
    std::cout << "The title of this book is " << bookObj3.getTitle() << "." << std::endl;
    std::cout << "The author of this book is " << bookObj3.getAuthor() << "." << std::endl;
    std::cout << "The format of this book is " << bookObj3.getFormat() << "." << std::endl;
    std::cout << "The publication year of this book is " << bookObj3.getPubYear() << "." << std::endl;
    std::cout << "The number of pages in the book are " << bookObj3.getNumOfPages() << ".\n" << std::endl;
    
    // Test the estimatedBookWeight() and estimatedReadingTime() methods
    std::cout << "This book weighs around " << bookObj3.estimatedBookWeight() << " ounces." << std::endl;
    std::cout << "The estimated time needed to read this book is " << bookObj3.estimatedReadingTime(4) << " minutes.\n" << std::endl;

    // Test the setBook() method and use displayBook() method to check if the setBook() worked
    bookObj3.setBook("Last Title", "Last Author", 2,2002,759);
    bookObj3.displayBook();
    std::cout<< "\n" << std::endl;

    // returns 0 if int main() worked properly
    return 0;

}