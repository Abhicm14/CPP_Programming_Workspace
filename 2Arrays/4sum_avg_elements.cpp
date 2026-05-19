#include <iostream>

using namespace std;

int main()
{
    int arrsize;
    int sum, avg;

    cout << "Enter the size of array : ";
    cin >> arrsize;

    int myarr[arrsize];

    cout << "Enter the elements of the array : " << endl;
    for (int count = 0; count < arrsize; count++)
    {
        cin >> myarr[count];
    }
    cout << endl;

    sum = 0;
    avg = 0;
    for (int count = 0; count < arrsize; count++)
    {
        sum += myarr[count];
    }

    avg = sum / arrsize;

    cout << "Sum of Array Elements : " << sum << endl;
    cout << "Avg of Array Elements : " << avg << endl;

    return 0;
}
