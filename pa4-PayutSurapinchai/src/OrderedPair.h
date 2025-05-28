// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#ifndef ORDEREDPAIR_H
#define ORDEREDPAIR_H

// Header file for declaring the OrderedPair class and its methods.

// Declare OrderedPair class.
class OrderedPair {

    // Private member variables.
    double xVal;
    double yVal;

    // Public constructors and methods.
    public:

    // Declare constructors with and without the parameters.
    OrderedPair();
    OrderedPair(double aXVal, double aYVal);

    // Getters
    double getXVal();
    double getYVal();
    
    // Setters
    void setXVal(double xValue);
    void setYVal(double yValue);


    // Other methods
    void setPairVal(double& xValue, double& yValue);

    // Addition
    double addPair();
    void addPair(OrderedPair& pair1, OrderedPair& pair2);
    
    // Subtraction
    double subtractPair();
    void subtractPair(OrderedPair& pair1, OrderedPair& pair2);

    // Multiplication
    double multiplyPair();
    void multiplyPair(OrderedPair& pair1, OrderedPair& pair2);

    // Division
    double dividePair();
    void dividePair(OrderedPair& pair1, OrderedPair& pair2);

    // Power
    double powerPair();

    // Display the pairs
    void displayPair();

};

#endif