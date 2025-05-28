[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/F5l2ATnc)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=18475670)
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css">

# Programming Assignment #5 (PA5)

## Overview 

In this assignment, we take a look at the array and vector data structures.

<div
    style="background-color: #FFFBEB; border-left: 6px solid #F97316; color: #813F0B; padding: 10px; border-radius: 5px;">
    <i class="fa-solid fa-triangle-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Naming Conventions:</b>
    <p><ul>
<li>While implementation details are still up to you, make sure you use the coding style discussed in class regarding functions, name, classes, and indentations unless a specific name is given to you throughout this assignment.</li>
<li>If a specific name for something like a <code>variable</code>, <code>class</code>, or <code>function</code> is given to you, you <em>MUST</em> use it exactly or the autograder won&#39;t be able to find it and the tests will fail.<ul>
<li>This applies to function prototypes/signatures/definitions as well. The <code>inputs</code> and <code>outputs</code> of the functions you implement must also match the ones specified.</li>
<li>Points will <em><em>not</em></em> be given for tests that fail due to incorrect naming or signature mismatch.</li>
</ul>
</li>
<li>Variables should be localized with the correct scope, datatype (based on the data needed to be stored), and their names must be pneumonic. I.e., avoid variables like a, b, i, j, k, x, y, z, etc. </li>
<li>Coding style will be reviewed and your assessment grade may be impacted due to that as described in our syllabus.</li>
<li>Remember that homework must be completed <strong>individually</strong> without help (human or AI).</li>
</ul></p>
</div>

<br>

<!-- Restrictions on what libraries are/aren't allowed to be used -->
<div
    style="background-color: #FEF2F2; border-left: 6px solid #EF4444; color: #991B1B; padding: 16px; border-radius: 5px;">
    <i class="fa-solid fa-fire-flame-curved" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Restrictions:</b>
    <p><ul>
<li>Only the libraries discussed in class can be used in homework:<ul>
<li><code>iostream</code></li>
<li><code>string</code></li>
<li><code>cmath</code></li>
<li><code>random</code></li>
<li><code>ctime</code></li>
<li><code>array</code></li>
<li><code>vector</code></li>
<li><code>cstddef</code></li>
<li><code>iomanip</code></li>
<li><code>exception</code></li>
<li><code>cstdlib</code></li>
</ul>
</li>
<li>The <code>using namespace</code> statement such as <code>using namespace std;</code> is <strong>not allowed</strong> in this homework. The <code>using</code> keyword is otherwise allowed, e.g., <code>using std::cout;</code>.</li>
<li>You can assume certain frequently used keywords, like string, array, and vector are being accessed this way if you don't see the <code>std::</code> in front of it.</li>
</ul></p>
<p>You may lose a significant number of points for not following these restrictions!</p>
</div>

## Tasks & TODOs

<!-- Note (Blue) -->
<div
    style="background-color: #E5F6FF; border-left: 6px solid #2CA5E0; color: #091E42; padding: 16px; border-radius: 5px; font-family: Arial, sans-serif; font-size: 14px;">
    <i class="fa-solid fa-circle-info"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Note:</b>
    <p>There are no TODO comments for this assignment as you are creating your own files. You can use the TODOs from prior PAs as a rough guide to the pieces you need. You should also refer to your class notes and textbook for guidance as necessary.</p>
</div>

<br>

---

## Part 1: Array Functions

You will create a series of functions to perform operations on a **C++ style array**. For a C++ style array, you will need to include the `array` library, and define the array in the form `array<<dtype>, <size>>` 

All of the exceptions you will throw in this assigment will be of type `const char *`, meaning you just throw the exception as a string.  
**For example:** `throw "I am the exception";` 

**DO NOT SEED RANDOM IN ANY OF THE FUNCTIONS IN THIS ASSIGNMENT.**

1. In the `src` directory, create `arrayTools.cpp` and `arrayTools.h` files
  - the `.h` file must contain only the declarations (prototypes).
  - the `.cpp` file must contain the implementation of the functions.
  - **This will not be in a Class**
  - Don't forget everything in C++ is case-sensitive. This includes file names.
  - Create a constant value or macro to define `MAX_SIZE` as 100. Use this instead of a literal value for your array size
2. Functions in `arrayTools`
  - `void generateArray(array<int, MAX_SIZE>& arr, int size, int min, int max)`
    - **Do not use srand() in your functions. You may use srand() for your own personal testing in main().**
    - Populates an array with random values. The number of values is determined by the `size` parameter
    - Throw an exception of type const char * if the value of `size` is less than 1 or greater than 100 using the following text: `The size of the array must be between 0 and 100`
    - If the exception is not thrown, populate the array with `size` **random** values, where the minimum value is `min` and the maximum value is `max`.
  - `void reverseArray(array<int, MAX_SIZE>& arr, int size)`
    - Recieves an array of values passed by reference, and an integer `size` for the number of populated values in the array
    - This function will reverse the order of values in the array. For example, if the array contains `1, 2, 3, 4, 5`, it will become `5, 4, 3, 2, 1`.
  - `void rotateArray(array<int, MAX_SIZE>& arr, int size, int steps)`
    - Recieves an array of values passed by reference, and an integer `size` for the number of populated values in the array, and `steps` for the number of steps the array will be rotated **right**
    - This function will rotate the contents the array **right** by the specified number of `steps`, to the right. For example, if the array contains `1, 2, 3, 4, 5` and `steps = 3`, the array will become `3, 4, 5, 1, 2`.
    - You must handle the case where `steps` is bigger than `size`. For example, if `steps = 8`, the array `1, 2, 3, 4, 5` will become `3, 4, 5, 1, 2`.  Chang
  - `int findElement(array<int, MAX_SIZE>& arr, int size, int value)`
    - Recieves an array of values passed by reference, and an integer `size` for the number of populated values in the array, and `value`, the value that is being searched for.
    - This function will return the index of the value if it is found.
    - If the value is not found, an exception of type const char * will be thrown with the text `The value could not be found`
  - `void sortArray(array<int, MAX_SIZE>& arr, int size)`
    - Recieves an array of values passed by reference, and an integer `size` for the number of populated values in the array 
    - This function will arrange the elements of the array in ascending order. This function will not return anything
    - For example, if the array contains `3, 2, 1, 4, 6, 9`, the array will become `1, 2, 3, 4, 6, 9`

<br>

## Part 2: Vector Functions

You will create a series of functions to utilize the `vector` data type in various ways.

All of the exceptions you will throw in this assigment will be of type `const char *`, meaning you just throw the exception as a string.  
**For example:** `throw "I am the exception";` 


1. In the `src` directory, create `vectorTools.h` and `vectorTools.cpp` files
  - the `.h` file must contain only the function declarations (prototypes).
  - the `.cpp` file must contain the implementation of the functions.
  - **This will not be in a class**
  - Don't forget everything in C++ is case-sensitive. This includes file names.
2. Functions in `vectorTools`
  - `void addElements(vector<int>& vec, int arr[], int size)`
    - This function takes a vector of integers, a **C Style array**, and the size of the array as input parameters.
    - If size is less than 1, throw an exception of type const char * with the message `Array must have values`
    - Otherwise, copy the values from the array into the vector, in the order they are in the array
    
    C style array example:
    ```
    int arr[5] = {1, 2, 3, 4, 5};
    ```
    In the function prototype above, the empty brackets in the parameter (`[]`) denote it can take an array of any size. 

  - `vector<int> filterElements(vector<int>& vec, int threshold)`
    - This function takes a vector passed by reference, and an integer `threshold` value.
    - If the input vector is empty, an exception of const char * will be thrown with the text `Empty Vector Found. Use populated one`
    - Otherwise, return a vector with values in the original vector that are **less than or equal to** the `threshold` value
  - `void printElements(vector<int>& vec, int lineCount)`
    - This function takes a vector passed by reference, and an integer `lineCount`.
    - If the input vector is empty, an exception of const char * will be thrown with the text `Empty Vector Found. Use populated one`
    - Otherwise, output the elements with `lineCount` elements per line with a space between them. 
    - Trailing spaces are okay unless it is the last element on the line.
    - End with exactly one newline  

    Example:
    `vector = {1, 2, 3, 4, 5}; lineCount = 3;`  
    Output:
    ```
    1 2 3
    4 5 
    ```

  - `vector<float> scaleElements(vector<int>& vec)`
    - This function takes a vector passed by reference
    - If the input vector is empty, an exception of const char * will be thrown with the text `Empty Vector Found. Use populated one`
    - Otherwise, scale each value between 0 and 1, and insert it into a vector of floats. Return this vector.
    -If the original vector has all the same value, return a vector of all **zeros** that is the same length as the original. For example, if the vector contains `5, 5, 5`, the new vector will be `0, 0, 0`
    - The formula for scaling between 0 and 1 is **`(val - min) / (max - min)`**. You may need to use static_cast.

  - `vector<string> splitString(string& original, char delim)`
    - This function takes a string passed by reference, and a character `delimeter`. It will split the input string by the given delimeter, and insert each part into a vector of strings. This vector will be returned
    - For example, given the string `i!am!an!important!string`, with the delimeter being `!`, the output vector will contain `{"i", "am", "an", "important", "string"}`. Keep in mind, the delimeter could be any character.
  
    
<br>


3. Create a `main.cpp` file with an `int main()`and use it to test your functions. To test the functions, create an empty array of the correct length in main to pass as an argument. `main.cpp` must demonstrate testing of all functions.

<!-- Important (Yellow) -->
<div
    style="background-color: #FEF9C3; border-left: 6px solid #F59E0B; color: #854D0E; padding: 16px;  border-radius: 5px;">
    <i class="fa-solid fa-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Important!</b>
    <p>Failure to complete this step may result in a loss of points!</p>
</div>


## Testing 

Your code will run against unit tests on an Autograder. The Autograder runs on Ubuntu Linux so the unit tests are configured for that OS only. You can run the tests in a Codespace (which uses Ubuntu as well) or on your own Ubuntu environment (if you have one) using the provided `g++` instructions. Remember tests must pass on the Autograder to receive points.

### Compiling

It is expected that you are able to compile and run your own code without relying solely on other tools. This includes the VS Code Debugger's "Play/Run" Button. You should not be using that at all for this assignment. Here is the general format for g++ (you leave out the `[]` characters when actually writing the commands ):

```bash
g++ [relevant setting and flags. These usually start with a '-'] [list of files to link together separated by a space : .cpp, .o, .a etc] -lpthread -o [name of the output file you wish to use]
```

The `g++` build command does use a couple extra settings when compiling with the unit tests. The additional options and what they signify are explained here:


- `[.cpp files, .o files, and .a files]` : Now, list off any .cpp source files, .o object files, and .a static library files that need to be included in the build. For all of these, you must include the relative file path for any files that aren't in your current working directory.
    - You will first list off any `.cpp` files needed by your program to run. In general, if your code uses an `#include "*.h"` statement, you will put the corresponding `.cpp` file here.
    - Then, add the object file for the test(s) you wish to run. Remember you must also include the relative file path if you are in a different working directory from the .o file (for example, `../tests/` if you are in the `src` folder or just `tests/` if you at the root of the repo).
    - Lastly, include the file `gtest_main.a`. This file contains the `main` program needed to launch the unit tests against your code.
        - Remember: A build must include **_exactly one (1)_** main function so you can't include your own main when running the unit tests.

- `-lpthread`: Links the pthread library to the resulting executable. In essence, it ensures that threading functions are available in the resulting binary. The unit tests use multithreading which is why we are including it.

- `-o` : This option lets you specify the name of the file you want `g++` to output the executable code. If a file with that name already exists, *it will be overwritten*. The default output file is `a.out` if you don't include this option.

Here is an example of a build command that could be used for this assignment. In this example, the working directory is `repository root` or top level of the repository:

```bash
g++ src/arrayTools.cpp tests/gtest_main.a tests/generateArray_test.o -lpthread -o generateArray_test.exe
```

Modify it as needed to run the tests as you wish. The autograder will also still run on each push to your repo if you prefer to test that way. 

<div
    style="background-color: #FFFBEB; border-left: 6px solid #F97316; color: #813F0B; padding: 16px; border-radius: 5px;">
    <i class="fa-solid fa-triangle-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Caution</b>
    <p>Do <b>not</b> attempt to force the unit tests to pass by hardcoding in responses to expected values. Attempts to bypass or "trick" the Autograder are considered academic misconduct and may result in a 0 for the whole assignment.</p>
</div>


## Rubric & Grading

Here is the breakdown of the tests, what they test, and how many points they are worth.

### arrayTools

| Test Name                  | Description                                       | points |
| -------------------------- | ------------------------------------------------- | ----: |
| generateArray_test         | Verifies if `generateArray` performs as described |    10 |
| reverseArray_test             | Verifies if `reverseArray` performs as described     |     8 |
| rotateArray_test            | Verifies if `rotateArray` performs as described    |     8 |
| findElement_test             | Verifies  if `findElement` performs as described    |     8 |
| sortArray_test             | Verifies if `sortArray` performs as described     |     6 |

### vectorTools

| Test Name                  | Description                                       | points |
| -------------------------- | ------------------------------------------------- | ----: |
| addElements_test       | Verifies if `addElements` performs as described |     6 |
| filterElements_test         | Verifies if `filterElements` performs as described |     8 |
| printElements_test       | Verifies if `printElements` performs as described|    8 |
| scaleElements_test           | Verifies if `scaleElements` performs as described|     8 |
| splitString_test            | Verifies if `splitString` performs as described |     10 |


<div
    style="background-color: #E5F6FF; border-left: 6px solid #2CA5E0; color: #091E42; padding: 10px; border-radius: 5px;">
    <i class="fa-solid fa-circle-info"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Grading Breakdown & Style Points</b>
    <p>Assignments on Canvas will be recorded out of 100 points.</p>
    <p>The grading of homework is a combination of completeness and correctness of the outputs and programming style. 
Completeness and correctness (80 points) will be assessed automatically through testing on GitHub Classroom, 
while instructors and TAs will assess the programming style after the deadline (20 points).</p>
    <p>Code style will be evaluated using the guidelines shown in the Modules on Canvas.</p>
    <p>This grading will be done manually by the TAs after the deadline.</p>
</div>
<br>
<!-- Important (Yellow) -->
<div
    style="background-color: #FEF9C3; border-left: 6px solid #F59E0B; color: #854D0E; padding: 16px;  border-radius: 5px;">
    <i class="fa-solid fa-exclamation" style="margin-right: 10px;"></i>
    <b style="display: inline; margin-bottom: 8px; font-size: 16px;">Important Note Regarding the Rubric</b>
    <p>This Rubric is a breakdown of the test cases and their points only!</p>
    <p>You must also review the Rubric on the Canvas Assignment for the rest of the grading criteria.</p>
</div>
