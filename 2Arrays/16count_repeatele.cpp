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

    int freqArr[100];
    for (int count = 0; count < size; count++)
        freqArr[count] = arr[count];

    cout << "Frequency of elements: " << endl;
    for (int count = 0; count < size; count++)
    {
        int frequency = 1;
        if (freqArr[count] != -1)
        {
            for (int next = count + 1; next < size; next++)
            {
                if (freqArr[count] == freqArr[next])
                {
                    frequency++;
                    freqArr[next] = -1;
                }
            }
            cout << freqArr[count] << " occurs " << frequency << " times" << endl;
        }
    }
}
