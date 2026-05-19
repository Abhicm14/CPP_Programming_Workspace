#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of sorted array: ";
    cin >> size;

    int arr[100];
    cout << "Enter " << size << " sorted elements: ";
    for (int count = 0; count < size; count++)
    {
        cin >> arr[count];
    }

    int newSize = 0;
    for (int count = 0; count < size - 1; count++)
    {
        if (arr[count] != arr[count + 1])
        {
            arr[newSize++] = arr[count];
        }
    }
    arr[newSize++] = arr[size - 1];
    size = newSize;

    cout << "Array after removing duplicates: ";
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}
