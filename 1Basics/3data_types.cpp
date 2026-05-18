#include <iostream>

using namespace std;

int main()
{
    int a;          // Integer
    unsigned int b; // Unsigned integers only store positive numbers. As a result
    char c;         // Character
    short d;        // Short integer
    long e;         // Long integer
    float f;        // Floating point integer
    double g;       // Double-precision floating point integer
    bool h;         // Boolean TRUE or FALSE
    auto k = 1;     // Automatically infer type. Not a type in itself.
    return 0;
}

/*
    About Type Casting:
    Type casting is the process of converting a variable from one data type to another.

    There are two types of type casting in C++:
    1. Implicit Type Casting: This is done automatically by the compiler when it encounters
         an expression that involves different data types. The compiler will convert the smaller
         data type to the larger data type to prevent data loss.

    2. Explicit Type Casting: This is done manually by the programmer using a cast operator. The
         syntax for explicit type casting is: (data_type) variable_name. This is used when the programmer
         wants to convert a variable to a specific data type, even if it may result in data loss.

    Example of Implicit Type Casting:
    int a = 10;
    double b = a; // a is implicitly converted to double

    Example of Explicit Type Casting:
    double c = 3.14;
    int d = (int) c; // c is explicitly converted to int, resulting in data loss
*/