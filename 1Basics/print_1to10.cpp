#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    do
    {
        if (count == 10)
        {
            break;
        }
        else
        {
            cout << count << " ";
        }
        count++;
    } while (count > 0);

    return 0;
}