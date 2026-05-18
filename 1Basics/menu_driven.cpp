#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num;

    while (1)
    {
        cout << "==== Simple Calculator ====" << endl;
        cout << " 1) Addition" << endl;
        cout << " 2) Subtraction" << endl;
        cout << " 3) Multiplication" << endl;
        cout << " 4) Division" << endl;
        cout << " 5) Modulus" << endl;
        cout << " 6) Exit" << endl;

        cout << "Select Operation from menu : ";
        cin >> num;

        switch (num)
        {
        case 1:
        {
            cout << "Enter first number : ";
            cin >> num1;

            cout << "Enter second number : ";
            cin >> num2;

            cout << "Sum of " << num1 << '+' << num2 << '=' << num1 + num2 << endl;
            break;
        }
        case 2:
        {
            cout << "Enter first number : ";
            cin >> num1;

            cout << "Enter second number : ";
            cin >> num2;

            cout << "Sum of " << num1 << '-' << num2 << '=' << num1 - num2 << endl;
            break;
        }
        case 3:
        {
            cout << "Enter first number : ";
            cin >> num1;

            cout << "Enter second number : ";
            cin >> num2;

            cout << "Sum of " << num1 << '*' << num2 << '=' << num1 * num2 << endl;
            break;
        }
        case 4:
        {
            cout << "Enter first number : ";
            cin >> num1;

            cout << "Enter second number : ";
            cin >> num2;

            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        }
        case 5:
        {
            cout << "Enter first number : ";
            cin >> num1;

            cout << "Enter second number : ";
            cin >> num2;

            cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
            break;
        }
        case 6:
        {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice!, Enter number from 1 to 6" << endl;
            break;
        }
        }
    }
    return 0;
}