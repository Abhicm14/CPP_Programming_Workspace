#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    int num1 = num;

    int fact = 1;

    while (num1 > 0)
    {
        fact = fact * num1;
        num1--;
    }
    cout << "Factorial of " << num << " is " << fact << endl;
}