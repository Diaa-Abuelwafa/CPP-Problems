#include <iostream>
#include <algorithm>
using namespace std;

int length_3n(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 1 + length_3n(n / 2);
    }
    else
    {
        return 1 + length_3n(3 * n + 1);
    }
}

int main()
{
    cout << length_3n(6) << "\n";

    return 0;
}
