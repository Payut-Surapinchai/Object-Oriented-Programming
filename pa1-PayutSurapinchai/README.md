[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=17747957)
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css">

# Programming Assignment 1

This homework assignment will let you practice with some of the arithmetic functions and control structures you've seen in class. You will also get some exposure to .h header and .cpp implementation files.

## Overview

The objectives of this assignment are as follows:
1. Test your ability to design software to meet desired needs.
2. Test your ability to identify, formulate, and solve computer science and engineering problems.


<div
    style="background-color: #FFFBEB; border-left: 6px solid #F97316; color: #813F0B; padding: 10px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-triangle-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Naming Conventions:</b>
    <p><ul>
<li>While implementation details are still up to you, make sure you use the coding style discussed in class regarding functions, name, classes, and indentations unless a specific name is given to you throughout this assignment.</li>
<li>If a specific name for something like a <code>variable</code>, <code>class</code>, or <code>function</code> is given to you, you <em>MUST</em> use it exactly or the autograder won&#39;t be able to find it and the tests will fail.<ul>
<li>Points will <em><em>not</em></em> be given for tests that fail due to incorrect naming.</li>
</ul>
</li>
<li>Variables should be localized with the correct scope, datatype (based on the data needed to be stored), and their names must be pnemonic. I.e., avoid variables like a, b, i, j, k, x, y, z, etc. </li>
<li>Coding style will be reviewed and your assessment grade may be impacted due to that as described in our syllabus.</li>
<li>Remember that homework must be completed <strong>individually</strong> without help (human or AI).</li>
</ul></p>
</div>


## Tasks & TODOs

You will write a set of functions to help with budgeting. There are 4 things you want to achieve:
- Input the amount you spend monthly
- Calculate how much money you will save for a month given your income and the amount you spent. If you spent less than your income, you will put **half** of what remains into savings. If you spent more than your income, however, the amount you calculate will be the amount you must withdraw from savings (kept as a negative number)
- Determine if you are overbudget
- Calculate the number of months it will take you to save to a given amount. Keep in mind this must be a whole number. If you are overbudget for a given month, your function will return -1.

### Functions

This task should be split amongst four functions. Their prototypes are given to you (this won't be the case for future assignments).
- `float monthlySpending(int count)`: this function, given a number of items (`count`), will take terminal input for the cost of each item.
- `float calculateSavings(float monthlyIncome, float monthlySpent)`: this function will determine how much you have saved in a given month, given an income and the spending for a month. If you make more than you have spent, you will put 50% of your remaining income into savings. However, if you have overspent, you must withdraw that amount of money from savings. Keep this value as a negative value.
- `bool isOverBudget(float monthlySavings)`: this will return true if you are overbudget, false if you are not
- `int calculateMonthsToSave(float montlySavings, float targetCost)`: this function will calculate the number of months it will take to save for an item. If you are overbudget, this function will return -1. Keep in mind that you cannot have a partial number of months.

<div
    style="background-color: #ECFDF5; border-left: 6px solid #10B981; color: #064E3B; padding: 16px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-lightbulb" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Tip!</b> 
    <p>Unlike python, C++ has <b>explicitly defined</b> data types. You can use this to your advantage in certian cases. For example:</p>
    <p><code>float x = 10.333;</code>. We all agree that <code>x = 10.333</code> in this context. Now take: </p>
    <p><code>int y = x;</code>. What will <code>y</code> be?</p>
    <p>Because <code>y</code> is the <b>integer</b> data type, <code>y</code> will have it's decimal place cut off, therefore: <code>y = 10</code></p>
</div>

## Grading

Your code will run against unit tests on an Autograder. You can run the tests in a Codespace or on Linux using the provided `g++` instructions but remember tests must pass on the Autograder to receieve points.

<div
    style="background-color: #ECFDF5; border-left: 6px solid #10B981; color: #064E3B; padding: 16px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-lightbulb" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Tip!</b> 
    <p>These functions do not depend on each for their test cases to run. This means if you get stuck on one, you can still get the points for implementing the others. </p>
</div>

### Compiling

It is expected that you are able to compile and run your own code without relying solely on other tools. Here is the general format for g++ (you leave out the `[]` characters when actually writing the commands ):

```bash
g++ [relevant setting and flags. These usually start with a '-'] [list of files to link together separated by a space : .cpp, .o, .a etc] -lpthread -o [name of the output file you wish to use]
```

The `g++` build command does use a couple extra settings when compiling with the unit tests. The additional options and what they signify are explained here:

- `-lpthread`: Links the pthread library to the resulting executable. In essence, it ensures that threading functions are available in the resulting binary. The unit tests use multithreading which is why we are including it.


- `[.cpp files, .o files, and .a files]` : Now, list off any .cpp source files, .o object files, and .a static library files that need to be included in the build. For all of these, you must include the relative file path for any files that aren't in your current working directory.
    - You will first list off any `.cpp` files needed by your program to run. In general, if your code uses an `#include "*.h"` statement, you will put the corresponding `.cpp` file here.
    - Then, add the object file for the test(s) you wish to run. Remember you must also include the relative file path if you are in a different working directory from the .o file (for example, `../tests/` if you are in the `src` folder or just `tests/` if you at the root of the repo).
    - Lastly, include the file `gtest_main.a`. This file contains the `main` program needed to launch the unit tests against your code.
        - Remember: A build must include **_exactly one (1)_** main function so you can't include your own main when running the unit tests.

- `-o` : This option lets you specify the name of the file you want `g++` to output the executable code. If a file with that name already exists, *it will be overwritten*. The default output file is `a.out` if you don't include this option.

Here is an example of a build command that could be used for this assignment. In this example, the working directory is `root` or top level of the repository:

```bash
g++ src/functions.cpp tests/gtest_main.a tests/montlySpending_test.o -lpthread -o montlySpending_test.exe
```

Modify it as needed to run the tests as you wish. The autograder will also still run on each push to your repo if you prefer to test that way. 

<div
    style="background-color: #FFFBEB; border-left: 6px solid #F97316; color: #813F0B; padding: 16px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-triangle-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Caution</b>
    <p>Do <b>not</b> attempt to reverse engineering the unit tests and attempt to force them to pass by hardcoding in reponses to expected values. Attempts to bypass the Autograder are considered academic misconduct and may result in a 0 for the whole assignment.</p>
</div>

## Rubric

Below are the tests the Autograder will run. Remember a test might have multiple criteria needed for it to pass. You must pass all criteria for a given test to receive points for it.

| Test Name        | Description                                                          | Marks |
| ---------------- | -------------------------------------------------------------------- | ----: |
| monthlySpending_test | Checks if monthlySpending returns the sum of values entered by keyboard |     20 |
| calculateSavingsInBudget_test | Checks if calculateSavings works while monthlyIncome >= monthlySpent |     10 |
| calculateSavingsOverBudget_test | Checks if calculateSavings works while monthlyIncome < monthlySpent |     10 |
| isOverBudget_test | Checks if isOverBudget returns the correct boolean values for the condition |     20 |
| calculateMonthsToSaveInt_test | Checks if calculateMonthsToSave calculates the correct number of months for a clean division |     10 |
| calculateMonthsToSaveFloat_test | Checks if calculateMonthsToSave calculates the correct number of months for an unclean (with decimal places) division |     10 |




<div
    style="background-color: #E5F6FF; border-left: 6px solid #2CA5E0; color: #091E42; padding: 10px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-circle-info"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Style Points</b>
    <p>There will also be another 20 points that are dependent on your code style and following the guidelines shown in the Modules on Canvas.</p>
    <p>This grading will be done manually by the TAs after the deadline.</p>
</div>
