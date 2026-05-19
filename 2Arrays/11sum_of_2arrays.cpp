#include <iostream>

using namespace std;

int main()
{
    int arrsize;

    cout << "Enter the size of arr : ";
    cin >> arrsize;

    int myarr1[arrsize], myarr2[arrsize], mysumarr[arrsize];

    cout << "Enter the Elements of 1st array : ";
    for (int count = 0; count < arrsize; count++)
    {
        cin >> myarr1[count];
    }

    cout << "Enter the Elements of 2nd array : ";
    for (int count = 0; count < arrsize; count++)
    {
        cin >> myarr2[count];
    }

    for (int count = 0; count < arrsize; count++)
    {
        mysumarr[count] = myarr1[count] + myarr2[count];
    }

    cout << "Elements of sum array : ";
    for (int count = 0; count < arrsize; count++)
    {
        cout << mysumarr[count] << " ";
    }
    return 0;
}