#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[100];
    cout << "Enter " << size << " elements: ";
    for (int count = 0; count < size; count++)
    {
        cin >> arr[count];
    }

    int removeValue;
    cout << "Enter element to remove: ";
    cin >> removeValue;

    for (int count = 0; count < size; count++)
    {
        if (arr[count] == removeValue)
        {
            for (int next = count; next < size - 1; next++)
            {
                arr[next] = arr[next + 1];
            }
            size--;
            break; // remove only first occurrence
        }
    }

    cout << "Array after removing element: ";
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}
