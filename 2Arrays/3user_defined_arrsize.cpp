#include <iostream>

using namespace std;

int main()
{
    int arrsize;

    cout << "Enter the size of array : ";
    cin >> arrsize;

    int myarr[arrsize];

    cout << "Enter the elements of the array : " << endl;
    for (int count = 0; count < arrsize; count++)
    {
        cin >> myarr[count];
    }
    cout << endl;

    cout << "Array Element : " << endl;
    for (int count = 0; count < arrsize; count++)
    {
        cout << "myarr[" << count << "] = " << myarr[count] << endl;
    }
    cout << endl;
}