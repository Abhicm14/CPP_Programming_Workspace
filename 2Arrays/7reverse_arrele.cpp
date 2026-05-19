#include <iostream>

using namespace std;

int main()
{
    int arrsize;

    cout << "Enter the size of array : ";
    cin >> arrsize;

    int myarr[arrsize];

    cout << "Enter the elements of array : ";
    for (int count = 0; count < arrsize; count++)
    {
        cin >> myarr[count];
    }

    cout << "Before Reverse Array Element : " << endl;
    for (int count = 0; count < arrsize; count++)
    {
        cout << myarr[count] << " ";
    }
    cout << endl;

    int temp;
    for (int count = 0; count < arrsize / 2; count++)
    {
        temp = myarr[count];
        myarr[count] = myarr[arrsize - 1 - count];
        myarr[arrsize - 1 - count] = temp;
    }

    cout << "After Reverse Array Element : " << endl;
    for (int count = 0; count < arrsize; count++)
    {
        cout << myarr[count] << " ";
    }
    cout << endl;

    return 0;
}