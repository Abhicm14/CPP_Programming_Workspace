/*
    Lamda functions are anonymous functions that can be defined and used inline. They are often used for short, simple operations that do not require a separate function definition. The syntax for a lambda function is as follows:

    syntax:
        [capture](parameters) -> return_type
        {
            // function body
        };

        capture: This is where you specify which variables from the surrounding scope you want to capture and use inside the lambda function.
                 You can capture variables by value (using the variable name) or by reference (using the & symbol before the variable name).

        parameters: This is where you define the parameters for the lambda function, just like you would for a regular function.
        return_type: This is where you specify the return type of the lambda function. If the lambda function does not return a value, you can omit this part.

    Benefits of lambda functions:
        1. Conciseness: Lambda functions allow you to write small, self-contained functions without the need for a separate function definition, which can make your code more concise and easier to read.
        2. Flexibility: Lambda functions can be defined and used inline, which allows you to easily pass them as arguments to other functions or use them in algorithms that require a function object.
        3. Improved readability: Lambda functions can improve readability by allowing you to write small, self-contained functions that can be easily understood in the context of their usage.
        4. Capture variables: Lambda functions can capture variables from the surrounding scope, which allows you to use those variables inside the lambda function without having to pass them as parameters.
    However, it's important to note that lambda functions are not suitable for all situations, and they should be used judiciously to ensure that your code remains clear and maintainable.
*/

#include <iostream>

using namespace std;

int main()
{
    // Lambda function to add two numbers
    auto add = [](int a, int b)
    {
        return a + b; // Return the sum of a and b
    };

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    int result = add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
