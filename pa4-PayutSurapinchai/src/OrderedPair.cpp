// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

#include "OrderedPair.h"
#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <random>
#include <cstddef>
#include <ctime>
#include <iomanip>

// This is the class implementation file for defining the OrderedPair class and its methods.

// Constructor without parameters.
OrderedPair::OrderedPair()
{
    xVal = 0.0;
    yVal = 0.0;

}

// Constructor with full parameters.
OrderedPair::OrderedPair(double aXVal, double aYVal)
{
    xVal = aXVal;
    yVal = aYVal;

}

// Gets the x value.
double OrderedPair::getXVal()
{
    return xVal;
}

// Gets the y value.
double OrderedPair::getYVal()
{
    return yVal;
}

// Sets the x value to the parameter's value.
void OrderedPair::setXVal(double xValue)
{
    xVal = xValue;
}

// Sets the y value to the parameter's value.
void OrderedPair::setYVal(double yValue)
{
    yVal = yValue;
}

// Sets the x value and y value to the parameters.
void OrderedPair::setPairVal(double& xValue, double& yValue)
{
    xVal = xValue;
    yVal = yValue;
}

// Add within the pair, (x + y).
double OrderedPair::addPair()
{
    // Initiate sum, and return x + y.
    double sum = 0.0;
    sum = xVal + yVal;

    return sum;

}

// Add within the 2 pairs, (x1+x2, y1+y2).
void OrderedPair::addPair(OrderedPair& pair1, OrderedPair& pair2)
{
    // Store result in xVal, yVal.
    xVal = pair1.xVal + pair2.xVal;
    yVal = pair1.yVal + pair2.yVal;
}

// Subtracts within the pair, (x-y).
double OrderedPair::subtractPair()
{
    // Initiate result, and return result.
    double result = 0.0;
    result = xVal - yVal;

    return result;
}

// Subtracts within the 2 pairs, (x1-x2, y1-y2).
void OrderedPair::subtractPair(OrderedPair& pair1, OrderedPair& pair2)
{
    // Store result in xVal, yVal.
    xVal = pair1.xVal - pair2.xVal;
    yVal = pair1.yVal - pair2.yVal;

}

// Multiply within the pair (x*y).
double OrderedPair::multiplyPair()
{
    // Initiate product, and return product.
    double product = 0.0;
    product = xVal * yVal;

    return product;

}

// Multiply within the 2 pairs (x1*x2, y1*y2).
void OrderedPair::multiplyPair(OrderedPair& pair1, OrderedPair& pair2)
{
    // Store result in xVal, and yVal.
    xVal = pair1.xVal * pair2.xVal;
    yVal = pair1.yVal * pair2.yVal;

}

// Divide within the pair (x/y), and y can't be 0.
double OrderedPair::dividePair()
{
    // Initiate the variable result to store the result, and return.
    double result = 0.0;

    // Check if y is 0, if it is print out yVal==0, if it isn't just calculate x/y, and return result.
    if (yVal == 0.0)
    {
        std::cout << "yVal==0";
        return 0.0;
    }
    else
    {
        result = xVal / yVal;

        return result;
    }

}

// Divide within the 2 pairs (x1/x2, y1/y2), and y1,y2 can't be 0.
void OrderedPair::dividePair(OrderedPair& pair1, OrderedPair& pair2)
{
    // Checks if x2,y2 are 0, if they are then print "DIVIDE BY ZERO", if no then calculate (x1/x2, y1/y2)
    // and store result in xVal, yVal.
    if (pair2.xVal == 0.0 && pair2.yVal == 0.0)
    {
        std::cout << "DIVIDE BY ZERO";
    }
    else
    {
        xVal = pair1.xVal / pair2.xVal;
        yVal = pair1.yVal / pair2.yVal;
    }

}

// Raises the x value to the power of y value (x^y).
double OrderedPair::powerPair()
{
    // Initiate the result, and return the result.
    double result = 0.0;

    // Use pow(base,power) to calculate x to the power of y.
    result = pow(xVal,yVal);
    
    return result;
}

// Displays the pair in a "(x,y)"" format.
void OrderedPair::displayPair()
{

    // Print out (x,y) and use std::to_string to convert the x value to a string, and have 6 decimal places.
    std::cout << "(" << std::to_string(xVal) << ", " << std::to_string(yVal) << ")" << std::endl;

}
