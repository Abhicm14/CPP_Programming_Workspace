#include <iostream>

using namespace std;

int main()
{
    int arrSize;
    int pos, value;

    cout << "Enter Size of array : ";
    cin >> arrSize;

    int myarr[100];

    cout << "Enter " << arrSize << " elements : ";
    for (int count = 0; count < arrSize; count++)
    {
        cin >> myarr[count];
    }

    cout << "Enter Position to insert in array : ";
    cin >> pos;

    cout << " Enter value to insert : ";
    cin >> value;

    for (int count = arrSize; count > pos; count--)
    {
        myarr[count] = myarr[count - 1];
        myarr[pos] = value;
        arrSize++;
    }

    cout << "Array after insertion : ";
    for (int count = 0; count < arrSize; count++)
    {
        cout << myarr[count] << " ";
    }
}