#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    char ch;

    cout << "Enter First number : ";
    cin >> num1;

    cout << "Enter Second number : ";
    cin >> num2;

    cout << "Enter the Operator : ";
    cin >> ch;

    switch (ch)
    {
    case '+':
    {
        cout << "Sum of " << num1 << '+' << num2 << '=' << num1 + num2 << endl;
        break;
    }
    case '-':
    {
        cout << "Sum of " << num1 << '-' << num2 << '=' << num1 - num2 << endl;
        break;
    }
    case '*':
    {
        cout << "Sum of " << num1 << '*' << num2 << '=' << num1 * num2 << endl;
        break;
    }
    case '/':
    {
        cout << "Sum of " << num1 << '/' << num2 << '=' << num1 / num2 << endl;
        break;
    }
    default:
    {
        cout << "Invalid Operator" << endl;
        break;
    }
    }
    return 0;
}