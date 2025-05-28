/**
 * @file functions.h
 * @author Kyle Rohn (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-11
 * 
 * @copyright Copyright (c) 2024 University of Colorado Denver - Department of Computer Science
 * 
 */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

float monthlySpending(int items);

float calculateSavings(float monthlyIncome, float monthlySpent); 

bool isOverBudget(float monthlySavings);

int calculateMonthsToSave(float monthlySavings, float targetCost); 


#endif
