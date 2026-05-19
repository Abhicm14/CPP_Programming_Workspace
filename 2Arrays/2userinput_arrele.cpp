#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<char, 5> chararr;

    cout << "Enter the characters to store in the array : " << endl;
    for (int count = 0; count < 5; count++)
    {
        cin >> chararr[count];
    }
    cout << endl;

    cout << "Character Array Elements are : " << endl;
    for (int count = 0; count < 5; count++)
    {
        cout << "chararr[" << count << "] = " << chararr[count] << endl;
    }
    cout << endl;

    return 0;
}