#include "functions.h"
#include <iostream>
#include <cmath>  // to use the "tools" for math

using namespace std;

int main(){
    // initialize all the variables I will be using in this program, assign them to something so it's not assigned to garbage values
    // at first I didn't initialize because I thought it was fine, but chatGPT recommended me to initialize for safety
    int numItems = 0;
    float monthlySpent = 0.0f;
    float remainingMoney = 0.0f;
    float monthlyIncome = 0.0f;
    bool determineOB = false;  // OB is the short abbreviation for overbudget
    float saveAmount = 0.0f;
    int months = 0;
   
    // get user input for number of items and print out the monthly spending
    cout << "Enter the number of items: ";
    cin >> numItems;
    monthlySpent = monthlySpending(numItems);
    cout << "Your monthly spending is " << monthlySpent << "." << endl;
    
    // get user input for their monthly income for an argument for the calculateSavings function
    cout << "Enter your monthly income: ";
    cin >> monthlyIncome;
    remainingMoney = calculateSavings(monthlyIncome,monthlySpent);

    determineOB = isOverBudget(remainingMoney);

    // get user input for the target amount the user wants to save
    cout << "Enter the amount you want to save: ";
    cin >> saveAmount;
    months = calculateMonthsToSave(remainingMoney,saveAmount);

    // print out the months it will take to save to the user's target amount
    cout << "It will take you " << months << " months to save to " << saveAmount << "." << endl;

    // if the int main functions works properly, it will return 0
    return 0;
}
