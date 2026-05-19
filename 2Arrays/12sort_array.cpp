#include <iostream>
using namespace std;

int main()
{
    int arrsize;
    cout << "Enter the size of array: ";
    cin >> arrsize;

    int arr[arrsize];
    cout << "Enter " << arrsize << " elements: " << endl;
    for (int i = 0; i < arrsize; i++)
        cin >> arr[i];

    // Step 1: Sort the array (basic logic)
    for (int i = 0; i < arrsize - 1; i++)
    {
        for (int j = i + 1; j < arrsize; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Before Sorting Array Element : " << endl;
    for (int count = 0; count < 5; count++)
    {
        cout << "myarr[" << count << "] = " << arr[count] << endl;
    }
    cout << endl;

    cout << "After Sorting Array Element : " << endl;
    for (int count = 0; count < 5; count++)
    {
        cout << "myarr[" << count << "] = " << arr[count] << endl;
    }
    cout << endl;

    return 0;
}
