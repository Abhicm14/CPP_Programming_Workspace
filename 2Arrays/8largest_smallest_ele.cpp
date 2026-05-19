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

    int max = myarr[0];
    int min = myarr[1];

    for (int count = 0; count < arrsize; count++)
    {
        if (myarr[count] > max)
        {
            max = myarr[count];
        }

        if (myarr[count] < min)
        {
            min = myarr[count];
        }
    }

    cout << "Largest Elements in array : " << max << endl;
    cout << "Smallest Elements in array : " << min << endl;

    return 0;
}