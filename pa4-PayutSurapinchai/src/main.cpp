// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Define MAX_SIZE for the MAX_SIZE in the array.
const int MAX_SIZE = 50;

#include "OrderedPair.h"
#include "functions.h"
#include <iostream>
#include <string>
#include <array>



int main()
{
    // Initiate the class objects with no parameters.
    OrderedPair orderedPair1;
    OrderedPair orderedPair2;

    // Use the setters for both pairs.
    orderedPair1.setXVal(5.4);
    orderedPair1.setYVal(7.3);

    orderedPair2.setXVal(3.2);
    orderedPair2.setYVal(2.1);


    // Test out the getters by printing it out.
    std::cout << "These are from constructors without parameters.\n" << std::endl;

    std::cout << "The first ordered pair x value is " << orderedPair1.getXVal() << 
                 " and its y value is " << orderedPair1.getYVal() << "." << std::endl;
    std::cout << "The second ordered pair x value is " << orderedPair2.getXVal() << 
                 " and its y value is " << orderedPair2.getYVal() << "." << std::endl;

    // Define the variables so we can use for the parameters that requires reference, or the modification of
    // the original variable.
    double pair1X = 9.5;
    double pair1Y = 5.6;
    double pair2X = 5.3;
    double pair2Y = 8.6;

    // Test out the setPairVal with reference parameters.
    orderedPair1.setPairVal(pair1X, pair1Y);
    orderedPair2.setPairVal(pair2X, pair2Y);

    // Check if the setPairVal() worked by using the getters.
    std::cout << "After the setPairVal method, the first ordered pair x value is " << orderedPair1.getXVal() << 
                 " and its y value is " << orderedPair1.getYVal() << "." << std::endl;
    std::cout << "After the setPairVal method, the second ordered pair x value is " << orderedPair2.getXVal() << 
                 " and its y value is " << orderedPair2.getYVal() << ".\n" << std::endl;

    // Test out all the mathematical operations methods that operates within the one ordered pair.
    double addition = orderedPair1.addPair();
    double subtraction = orderedPair1.subtractPair();
    double multiplication = orderedPair1.multiplyPair();
    double division = orderedPair1.dividePair();
    double powered = orderedPair1.powerPair();

    // Check if the mathematical operations worked.
    std::cout << "The following are values from operations within the orderedPair1 (x,y): " << std::endl;
    std::cout << "Addition(x+y): " << addition << std::endl;
    std::cout << "Subtraction(x-y): " << subtraction << std::endl;
    std::cout << "Multiplication(x*y): " << multiplication << std::endl;
    std::cout << "Division(x/y): " << division << std::endl;
    std::cout << "Powered(x^y): " << powered << std::endl;

    std::cout << "\n";

    // Instantiate a new object to store the results from mathematical operations between two ordered pairs.
    OrderedPair sum1;

    // Method for adding the two pairs together where x = x1 + x2, and y = y1 + y2.
    sum1.addPair(orderedPair1,orderedPair2);

    // Check the result using getters.
    std::cout << "The addition of first pair, and second pair(x1+x2,y1+y2): " << std::endl;
    std::cout << "x value: " << sum1.getXVal() << std::endl;
    std::cout << "y value: " << sum1.getYVal() << std::endl;

    // Instantiate a new object to store the results from mathematical operations between two ordered pairs.
    OrderedPair subtract1;

    // Method for subtracting the two pairs together where x = x1 - x2, and y = y1 - y2.
    subtract1.subtractPair(orderedPair1,orderedPair2);

    // Check the result using getters
    std::cout << "The subtraction of first pair, and second pair (x1-x2,y1-y2): " << std::endl;
    std::cout << "x value: " << subtract1.getXVal() << std::endl;
    std::cout << "y value: " << subtract1.getYVal() << std::endl;

    // Instantiate a new object to store the results from mathematical operations between two ordered pairs.
    OrderedPair product1;

    // Method for multiplying the two pairs together where x = x1 * x2, and y = y1 * y2.
    product1.multiplyPair(orderedPair1,orderedPair2);

    // Check the result using getters
    std::cout << "The subtraction of first pair, and second pair (x1*x2,y1*y2): " << std::endl;
    std::cout << "x value: " << product1.getXVal() << std::endl;
    std::cout << "y value: " << product1.getYVal() << std::endl;

    // Instantiate a new object to store the results from mathematical operations between two ordered pairs.
    OrderedPair divide1;

    // Method for dividing the two pairs together where x = x1 / x2, and y = y1 / y2.
    divide1.dividePair(orderedPair1,orderedPair2);

    // Check the result using getters.
    std::cout << "The subtraction of first pair, and second pair (x1/x2,y1/y2): " << std::endl;
    std::cout << "x value: " << divide1.getXVal() << std::endl;
    std::cout << "y value: " << divide1.getYVal() << "\n" << std::endl;

    // Testing out the displayPair() methods.
    std::cout << "Display the first ordered pair, and the second ordered pair: " << std::endl;

    orderedPair1.displayPair();
    orderedPair2.displayPair();

    std::cout << "\n" << std::endl;


    // From this section below, I am testing the same things as above, but this time the constructors
    // have parameters.
    OrderedPair orderedPair3(10.4,5.8);
    OrderedPair orderedPair4(1.2,3.4);

    std::cout << "These are from constructors with parameters.\n" << std::endl;

    std::cout << "The first ordered pair x value is " << orderedPair3.getXVal() << 
                 " and its y value is " << orderedPair3.getYVal() << "." << std::endl;
    std::cout << "The second ordered pair x value is " << orderedPair4.getXVal() << 
                 " and its y value is " << orderedPair4.getYVal() << ".\n" << std::endl;

    orderedPair3.setXVal(5.4);
    orderedPair3.setYVal(7.3);

    orderedPair4.setXVal(3.2);
    orderedPair4.setYVal(2.1);

    std::cout << "After using setters, the first ordered pair x value is " << orderedPair3.getXVal() << 
                 " and its y value is " << orderedPair3.getYVal() << "." << std::endl;
    std::cout << "After using setters, the second ordered pair x value is " << orderedPair4.getXVal() << 
                 " and its y value is " << orderedPair4.getYVal() << ".\n" << std::endl;


    double pair3X = 7.3;
    double pair3Y = 4.5;
    double pair4X = 3.9;
    double pair4Y = 8.5;

    orderedPair1.setPairVal(pair3X, pair3Y);
    orderedPair2.setPairVal(pair4X, pair4Y);

    std::cout << "After the setPairVal method, the first ordered pair x value is " << orderedPair3.getXVal() << 
                 " and its y value is " << orderedPair3.getYVal() << "." << std::endl;
    std::cout << "After the setPairVal method, the second ordered pair x value is " << orderedPair4.getXVal() << 
                 " and its y value is " << orderedPair4.getYVal() << ".\n" << std::endl;

    double addition2 = orderedPair3.addPair();
    double subtraction2 = orderedPair3.subtractPair();
    double multiplication2 = orderedPair3.multiplyPair();
    double division2 = orderedPair3.dividePair();
    double powered2 = orderedPair3.powerPair();

    std::cout << "The following are values from operations within the orderedPair3 (x,y): " << std::endl;
    std::cout << "Addition(x+y): " << addition2 << std::endl;
    std::cout << "Subtraction(x-y): " << subtraction2 << std::endl;
    std::cout << "Multiplication(x*y): " << multiplication2 << std::endl;
    std::cout << "Division(x/y): " << division2 << std::endl;
    std::cout << "Powered(x^y): " << powered2 << std::endl;

    std::cout << "\n";

    OrderedPair sum2;
    sum2.addPair(orderedPair3,orderedPair4);
    std::cout << "The addition of first pair, and second pair(x1+x2,y1+y2): " << std::endl;
    std::cout << "x value: " << sum2.getXVal() << std::endl;
    std::cout << "y value: " << sum2.getYVal() << std::endl;

    OrderedPair subtract2;
    subtract2.subtractPair(orderedPair1,orderedPair2);
    std::cout << "The subtraction of first pair, and second pair (x1-x2,y1-y2): " << std::endl;
    std::cout << "x value: " << subtract2.getXVal() << std::endl;
    std::cout << "y value: " << subtract2.getYVal() << std::endl;

    OrderedPair product2;
    product2.multiplyPair(orderedPair1,orderedPair2);
    std::cout << "The subtraction of first pair, and second pair (x1*x2,y1*y2): " << std::endl;
    std::cout << "x value: " << product2.getXVal() << std::endl;
    std::cout << "y value: " << product2.getYVal() << std::endl;

    OrderedPair divide2;
    divide2.dividePair(orderedPair1,orderedPair2);
    std::cout << "The subtraction of first pair, and second pair (x1/x2,y1/y2): " << std::endl;
    std::cout << "x value: " << divide2.getXVal() << std::endl;
    std::cout << "y value: " << divide2.getYVal() << "\n" << std::endl;

    std::cout << "Display the first ordered pair, and the second ordered pair: " << std::endl;

    orderedPair3.displayPair();
    orderedPair4.displayPair();

    std::cout << "\n" << std::endl;


    // From this section below, I am testing the functions from Part 2.

    std::cout << "From this section, I will be testing the functions from Part 2 (arrays).\n" << std::endl;

    // Test the functions with the getInput() method first.
    std::cout << "Using getInput() method: " << std::endl;

    // Create an empty array.
    std::array<float, MAX_SIZE> array2 = {};

    // Put the numbers into the array, and return the numbers of elements in the array.
    int number = getInput(array2);

    // Calculate the average from all the elements in the array.
    float avg = average(array2, number);

    // Instantiate max, and min with float type.
    float max, min;

    // Use maxAndMin function to get the max and the min of the array and store in max, and min variables.
    maxAndMin(array2, number, max, min);

    // Calculate the standard deviation and store in the std variable.
    float std = standardDev(array2, number);

    std::cout << "\n";

    // Display the results from each calculation.
    std::cout << "The average is : " << avg << std::endl;
    std::cout << "The maximum is : " << max << std::endl;
    std::cout << "The minimum is : " << min << std::endl;
    std::cout << "The standard deviation is : " << std << std::endl;

    std::cout << "\n";
    std::cout << "Below is from using the display() method: " << std::endl;

    // Test out the display method.
    display(array2, number);

    std::cout << "\n" << std::endl;


    // From this section below, I am doing the same exact test as above, but instead of using getInput(),
    // I am using randInput() to generate random numbers and put in the array instead.
    std::cout << "Using randInput() method: " << std::endl;
    std::array<float, MAX_SIZE> array3 = {};

    int number1 = 17;
    randInput(array3, number1);

    float avg1 = average(array3, number1);

    float max1, min1;
    maxAndMin(array3, number1, max1, min1);
    float std1 = standardDev(array3, number1);

    std::cout << "\n";

    std::cout << "The average is : " << avg1 << std::endl;
    std::cout << "The maximum is : " << max1 << std::endl;
    std::cout << "The minimum is : " << min1 << std::endl;
    std::cout << "The standard deviation is : " << std1 << std::endl;

    std::cout << "\n";
    std::cout << "Below is from using the display() method: " << std::endl;

    display(array3, number1);

}