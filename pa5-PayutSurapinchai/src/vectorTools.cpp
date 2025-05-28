// Name: Payut Surapinchai (Toy)
// Student ID: 110849166

// Include all the libraries that are allowed in this PA.
#include "vectorTools.h"
#include <iostream>
#include <string>
#include <cmath>
#include <random>
#include <ctime>
#include <array>
#include <vector>
#include <cstddef>
#include <iomanip>
#include <exception>
#include <cstdlib>

// This function copies the values from the C style array into a vector.
void addElements(std::vector<int>& vec, int arr[], int size)
{
    // If the size is more than or equal to 1 then run the for loop, else throw an exception.
    if (size >= 1)
    {
        // This for loop iterates through each array element and add onto vector using-
        // .push_back(what you want to add into the vector).
        for(int i = 0; i < size;i++)
        {
            vec.push_back(arr[i]);
        }
    }
    else
    {
        throw "Array must have values";
    }
}

// This function filters the vector, keeping only the values that are below or equal to the given threshold.
std::vector<int> filterElements(std::vector<int>& vec, int threshold)
{
    // vec.empty() checks if the vector is empty and return TRUE/FALSE, if TRUE, then throw the exception
    // if FALSE then run the code that filters the element in the vector, and return the vector.
    if (vec.empty())
    {
        throw "Empty Vector Found. Use populated one";
     
    }
    else
    {
        // Create a new empty vector to store the results from filtering each elements.
        std::vector<int> vec2;

        // This for loop iterates through all the vector elements.
        // vec.size() gives me the size of the vector(the data type is int).
        for (int i = 0;i < vec.size();i++)
        {
            // Checks if the current vector element is less than or equal to the threshold,
            // if it is, then add that element onto the empty vector(vec2) using .push_back().
            if (vec[i] <= threshold)
            {
                vec2.push_back(vec[i]);

            }
        }
        
        // Returns the vector that has been filtered.
        return vec2;
    }
}

// This function prints each elements in the vector in a certain format where lineCount indicates-
// how many elements the user wants per line.
void printElements(std::vector<int>& vec, int lineCount)
{
    // Checks if the vector is empty, if it is then throw the exception, if it isn't then run the code in-
    // the "else" brackets.
    if (vec.empty())
    {
        throw "Empty Vector Found. Use populated one";

    }
    else
    {
        // Initiate a counter to count how many vectors I've printed.
        int counter = 0;

        // Use a for loop to iterate through all the vector elements
        for (int i = 0;i < vec.size();i++)
        {
            // Prints out the current vector element.
            std::cout << vec[i];
            
            // This checks if the counter is still less than the lineCount or how many elements the user wants-
            // per line.
            if (counter < lineCount)
            {
                // If the counter is less than lineCount - 1 (lineCount - 1 because counter starts at 0 where
                // lineCount starts at 1), then print out a new line and reset the counter.
                // Else, just print out space and add 1 to the counter signifying that we printed one value on
                // the current line already.
                // This "if" code is specifically for when lineCount is only one.
                if (counter == (lineCount - 1))
                {
                    std::cout << "\n";
                    counter = 0 ;
                }
                else
                {
                    std::cout << " ";
                    counter++;
                }
            }

            // When counter is more than the lineCount then print out a new line, and reset the counter to 0.
            else
            {
                std::cout << "\n";
                counter = 0;
            }
        }

        // This is for checking purposes, if the counter is still more than 0, then print out a new line.
        // Sometimes after running the code, I would still be missing a newline which means there are scenarios,
        // where my counter would still be more than 0, and is not printing the newline after finishing the for loop.
        // Therefore, I made this code just in case for that scenario.
        if (counter > 0)
        {
            std::cout << "\n";
        }
    }
}

// This function scales each elements in the vector to be between 0 and 1.
std::vector<float> scaleElements(std::vector<int>& vec)
{
    // Create a new empty vector to store the results.
    std::vector<float> newvec;

    // Checks if the vector is empty, if empty then throw an exception, if not then run the code in "else"
    // brackets.
    if (vec.empty())
    {
        throw "Empty Vector Found. Use populated one";

    }
    else
    {
        // Initiate variables to store for max, and min. In this case, I used the first element of the vector
        // so I can compare each element and keep updating the max, and min until I find the real max, and min.
        int max = vec[0];
        int min = vec[0];

        // This for loop basically finds the minimum value by iterating through the vector, and
        // if any vector element is less than the first element that I assigned on min, then assign min to that
        // new value.
        for (int i = 0;i < vec.size();i++)
        {
            if (vec[i] < min)
            {
                min = vec[i];
            }
            
        }

        // This for loop basically finds the maximum value by iterating through the vector, and
        // if any vector element is less than the first element that I assigned on max, then assign max to that
        // new value.
        for (int i = 0;i < vec.size();i++)
        {
            if (vec[i] > max)
            {
                max = vec[i];
            }
            
        }



        // After finding max, and min, this for loop iterates through each vector element, and scale each 
        // vector element to be between 0 and 1 using the formula given from the PA.
        for (int i = 0;i < vec.size();i++)
        {
            // static_cast<float> just converts the current data type to float.

            // Find the numerator and denominator for the formula.
            float numerator = static_cast<float>(vec[i] - min);

            // If max and min are the same which means every element in the vector is the same, then add 0 in every element.
            float denominator = static_cast<float>(max - min);

            // This if-else statement, is to make sure I don't divide by 0, if the denominator is 0, then just
            // add 0 into the vector.
            if (denominator != 0)
            {
                // Calculate the scaled value of the current vector element.
                float scaleConvert = static_cast<float>(numerator / denominator);

                // Add the scaled value to the vector.
                newvec.push_back(scaleConvert);

            }
            else
            {
                // Add 0 into the vector in case of dividing by 0, also used for adding 0 for every elements in the vector, when
                // every elements in the vector are the same.
                newvec.push_back(0);
            }
            
        }

        // Return the result vector.
        return newvec;
    }

}

// This functions splits a given string by the given delimiter (delimiter is what separated each words in that string).
std::vector<std::string> splitString(std::string& original, char delim)
{
    // Create a new empty vector.
    std::vector<std::string> stringVector;

    // Create a temporary variable for storing the current word before the delimiter
    std::string temp = "";

    // This for loop iterates through the string, and original.size() gives the size of the string.
    // (a string is iterable)
    for (int i = 0;i < original.size();i++)
    {
        // If the current character in the string is not the delimiter, then add it into the temporary variable.
        if (original[i] != delim)
        {
            temp += original[i];
        }

        // After the for loop finds the delimiter, then add the temporary variable(where we stored the characters that
        // were before the delimiter), onto the empty vector(stringVector), and reset the temporary variable to 
        // be able to store new characters.
        else
        {
            stringVector.push_back(temp);
            temp = "";

        }
    }

    // This line is for the case that the string does not end on the delimiter, which would not cause the
    // "else" statement in the for loop to run. Therefore, I manually added this line to make sure the 
    // remaining word in the temporary variable is also added.
    stringVector.push_back(temp);
    
    // Returns the result vector.
    return stringVector;
}