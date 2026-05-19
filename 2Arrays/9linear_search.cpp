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

    int key = 0;
    cout << "Enter the element to find : ";
    cin >> key;

    int count = 0;

    for (count = 0; count < arrsize; count++)
    {
        if (key == myarr[count])
        {
            break;
        }
    }

    cout << "Element " << key << " is found at index  : " << count << endl;
    return 0;
}