/*
    Functions in C++
    In C++, a function is a block of code that performs a specific task.
    Functions are used to break down a program into smaller, manageable pieces, making it easier to read and maintain.
    A function can take parameters, perform operations, and return a value.

    Syntax of a function:
    return_type function_name(parameter_list)
    {
        // function body
    }

    Functions can be categorized into two types:
    1. Built-in functions: These are functions that are provided by the C++ standard library, such as `std::cout`, `std::cin`, `std::sqrt()`, etc.
    2. User-defined functions: These are functions that are defined by the programmer to perform specific tasks.

    Example of a user-defined function:
        3 Major components of a function:
            1. Function prototype (declaration): This is where you declare the function's name, return type, and parameters (if any). It tells the compiler about the function's existence and how to call it.
            2. Function definition: This is where you provide the actual implementation of the function.
            3. Function call: This is where you invoke the function to execute its code.
*/

#include <iostream>

using namespace std;

// Function prototype (declaration)
int add(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    int result = add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b; // Return the sum of a and b
}
