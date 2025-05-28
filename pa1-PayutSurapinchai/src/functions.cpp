// Name: Payut Surapinchai (Toy)
// Student ID: 110849166
// This file is for implementing main function, I had to put an output for monthlySpending
// to ask for each item's price, as well as having outputs asking for user inputs in the main function

#include "functions.h"
#include <iostream>
#include <cmath>  // to use the "tools" for math

using namespace std;

// This function's solution was provided by Professor David Ogle in class
// This function takes in count of items in int and asks for each item's price and add the price everytime-
// the for loop iterates, storing it in total. Once the for loop is done, the total is returned.
float monthlySpending(int items){
    float total = 0;
    float itemPrice = 0;
    for (int i = 0;i < items;i++){
        std::cout << "Enter the item's price: ";  // everytime the for loop iterates, it asks for the item's price
        std::cin >> itemPrice;  // takes item price as input
        total += itemPrice;
    }
    return total;
}

// Calculates the savings by calculating the difference between monthly income and monthly spent
// if the difference is more than or equal to 0, the savings is half of that difference
// if the difference is negative, then just keep that value.
float calculateSavings(float monthlyIncome, float monthlySpent){
    float difference = 0;
    float remainingMoney = 0;

    difference = monthlyIncome - monthlySpent;  // calculates the difference
    if (difference >= 0){  
        remainingMoney = difference / 2; 

    } else {
        remainingMoney = difference; 
    }

    return remainingMoney;
}

// This function checks if the monthly savings positive or negative, negative means your over budget
// and positive means you are under budget. Negative value returns true, positive value returns false
bool isOverBudget(float monthlySavings){
    if (monthlySavings >= 0){
        return false;
    } else {
        return true;
    }

}

// This function calculates the months needed to save for the target money. If the months calculated,-
// is a float value, then it will always round up.
int calculateMonthsToSave(float monthlySavings, float targetCost){
    float monthsNeeded = 0;
    if (monthlySavings > 0){
        monthsNeeded = targetCost / monthlySavings;
        monthsNeeded = ceil(monthsNeeded);  // use ceil to round up the value (got from <cmath>)
                                            // my friend helped me by recommending using ceil().

        return monthsNeeded;
    } else{
        return -1;  // return -1 when fails
    }
   
}

