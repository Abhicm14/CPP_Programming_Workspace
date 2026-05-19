#include <iostream>

using namespace std;

int main()
{
    int arrsize;
    int evencount, oddcount;

    cout << "Enter the size of array : ";
    cin >> arrsize;

    int myarr[arrsize];

    cout << "Enter the elements of the array : " << endl;
    for (int count = 0; count < arrsize; count++)
    {
        cin >> myarr[count];
    }
    cout << endl;

    evencount = 0;
    oddcount = 0;
    for (int count = 0; count < arrsize; count++)
    {
        if (myarr[count] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }

    cout << "There are " << evencount << " Even numbers" << " and " << oddcount << " Odd numbers int the Array " << endl;

    return 0;
}
