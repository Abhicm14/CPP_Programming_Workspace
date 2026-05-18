#include <iostream>

using namespace std;

int main()
{
    int count;

    for (count = 0; count <= 20; count++)
    {
        if (count % 5 == 0)
        {
            continue;
        }
        cout << count << " ";
    }
    return 0;
}