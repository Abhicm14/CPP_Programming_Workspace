#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "Enter a number : ";
    cin >> num;

    for (int count = 1; count <= 10; count++)
    {
        cout << num << " * " << count << " = " << num * count << endl;
    }
    return 0;
}