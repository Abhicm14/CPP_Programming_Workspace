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

    int shiftCount;
    cout << "Enter number of positions to shift: ";
    cin >> shiftCount;

    // Normalize shift count (in case user enters > size)
    shiftCount = shiftCount % size;

    // ----- Right Shift -----
    int rightArr[100];
    for (int count = 0; count < size; count++)
    {
        rightArr[(count + shiftCount) % size] = arr[count];
    }

    cout << "\nArray after shifting RIGHT by " << shiftCount << " positions: ";
    for (int count = 0; count < size; count++)
    {
        cout << rightArr[count] << " ";
    }
    cout << endl;

    // ----- Left Shift -----
    int leftArr[100];
    for (int count = 0; count < size; count++)
    {
        leftArr[(count - shiftCount + size) % size] = arr[count];
    }

    cout << "Array after shifting LEFT by " << shiftCount << " positions: ";
    for (int count = 0; count < size; count++)
    {
        cout << leftArr[count] << " ";
    }
    cout << endl;

    return 0;
}
