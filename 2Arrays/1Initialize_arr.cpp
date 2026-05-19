#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<int, 5> myarr; // Declaration of array with array template

    myarr = {10, 20, 30, 40, 50};

    cout << "Array Element : " << endl;
    for (int count = 0; count < 5; count++)
    {
        cout << "myarr[" << count << "] = " << myarr[count] << endl;
    }
    cout << endl;

    for (int count = 0; count < 5; count++)
    {
        myarr[count] += 5;
    }

    cout << "Array Element : " << endl;
    for (int count = 0; count < 5; count++)
    {
        cout << "myarr[" << count << "] = " << myarr[count] << endl;
    }
    cout << endl;

    return 0;
}