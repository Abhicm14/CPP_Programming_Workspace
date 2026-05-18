#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter 1st number : ";
    cin >> num1;

    cout << "Enter 2nd number : ";
    cin >> num2;

    cout << "Enter 3rd number : ";
    cin >> num3;

    if (num1 > num2 && num2 > num3)
    {
        cout << num1 << " is Larger than " << num2 << " and " << num3;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is Larger than " << num1 << " and " << num3;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << num3 << " is Larger than " << num2 << " and " << num1;
    }
    else
    {
        cout << " All the numbers are same " << endl;
    }
    return 0;
}