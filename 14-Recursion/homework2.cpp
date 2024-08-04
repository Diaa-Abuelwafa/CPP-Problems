#include <iostream>
#include <algorithm>
using namespace std;

int power(int n, int i)
{
    if (i == 0)
    {
        return 1;
    }

    return n * power(n, i - 1);
}

int main()
{
    cout << power(7, 3) << "\n";

    return 0;
}
