#include <iostream>

using namespace std;

int main()
{
    int arrSize;
    int pos;

    cout << "Enter Size of array : ";
    cin >> arrSize;

    int myarr[100];

    cout << "Enter " << arrSize << " elements : ";
    for (int count = 0; count < arrSize; count++)
    {
        cin >> myarr[count];
    }

    cout << "Enter Position to delete element in array : ";
    cin >> pos;

    for (int count = pos; count < arrSize - 1; count++)
    {
        myarr[count] = myarr[count + 1];
    }
    arrSize--;

    cout << "Array after deleting : ";
    for (int count = 0; count < arrSize; count++)
    {
        cout << myarr[count] << " ";
    }
}