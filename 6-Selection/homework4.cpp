#include <iostream>
using namespace std;

int main()
{
    int num, a, b, c, d, e;
    cin >> num >> a >> b >> c >> d >> e;

    int res1 = 0, res2 = 0;

    if (a <= num)
    {
        res1++;
    }
    else
    {
        res2++;
    }

    if (b <= num)
    {
        res1++;
    }
    else
    {
        res2++;
    }

    if (c <= num)
    {
        res1++;
    }
    else
    {
        res2++;
    }

    if (d <= num)
    {
        res1++;
    }
    else
    {
        res2++;
    }

    if (b <= num)
    {
        res1++;
    }
    else
    {
        res2++;
    }

    cout << res1 << " " << res2 << "\n";

    return 0;
}
