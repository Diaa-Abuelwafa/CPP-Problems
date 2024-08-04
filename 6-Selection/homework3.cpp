#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max_num = 0;

    if (a >= 100)
    {
        a = -1;
    }

    if (b >= 100)
    {
        b = -1;
    }

    if (c >= 100)
    {
        c = -1;
    }

    if (a > b && a > c && a != -1)
    {
        max_num = a;
    }
    else if (b > a && b > c && b != -1)
    {
        max_num = b;
    }
    else if (c > a && c > b && c != -1)
    {
        max_num = c;
    }

    if (max_num)
    {
        cout << max_num << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }

    return 0;
}
