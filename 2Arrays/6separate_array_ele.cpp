#include <iostream>

using namespace std;

int main()
{
    int arrsize;

    cout << "Enter the size of array : ";
    cin >> arrsize;

    int myarr[arrsize];
    int evenarr[arrsize], oddarr[arrsize];

    cout << "Enter " << arrsize << " elements: " << endl;
    for (int count = 0; count < arrsize; count++)
    {
        cin >> myarr[count];
    }

    evenarr[arrsize];
    oddarr[arrsize];

    int evencount = 0, oddcount = 0;

    for (int count = 0; count < arrsize; count++)
    {
        if (myarr[count] % 2 == 0)
        {
            evenarr[evencount++] = myarr[count];
        }
        else
        {
            oddarr[oddcount++] = myarr[count];
        }
    }

    cout << "\nEven elements: ";
    for (int i = 0; i < evencount; i++)
        cout << evenarr[i] << " ";

    cout << "\nOdd elements: ";
    for (int i = 0; i < oddcount; i++)
        cout << oddarr[i] << " ";

    cout << endl;

    return 0;
}
