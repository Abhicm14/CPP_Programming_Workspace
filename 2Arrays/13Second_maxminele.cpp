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

    // Step 2: After sorting, pick directly
    cout << "\nSmallest element      : " << arr[0];
    cout << "\nSecond smallest element: " << arr[1];
    cout << "\nLargest element       : " << arr[arrsize - 1];
    cout << "\nSecond largest element: " << arr[arrsize - 2] << endl;

    return 0;
}
