#include <iostream>

using namespace std;

int plusFunc(int x, int y);
double plusFunc(double x, double y);
int plusFunc(int x, int y, int z);

int main()
{
    int result1 = plusFunc(3, 7);
    int result2 = plusFunc(1, 2, 3);
    double myNum2 = plusFunc(4.3, 6.26);

    cout << "Sum of 2 numbers: " << result1 << "\n";
    cout << "Sum of 3 numbers: " << result2 << "\n";
    cout << "Double: " << myNum2 << endl;
    return 0;
}

int plusFunc(int x, int y)
{
    return x + y;
}

int plusFunc(int x, int y, int z)
{
    return x + y + z;
}

double plusFunc(double x, double y)
{
    return x + y;
}