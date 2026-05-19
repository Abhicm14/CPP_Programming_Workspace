#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Step 1: Initialize counters
    int even = 0, odd = 0, positive = 0, negative = 0;

    // Step 2: One loop to categorize
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
    }

    // Step 3: Print results
    cout << "\nCount of Even elements    : " << even;
    cout << "\nCount of Odd elements     : " << odd;
    cout << "\nCount of Positive elements: " << positive;
    cout << "\nCount of Negative elements: " << negative << endl;

    return 0;
}
