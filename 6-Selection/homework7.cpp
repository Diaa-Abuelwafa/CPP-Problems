#include <iostream>
using namespace std;

int main()
{
    int x, s1, e1, s2, e2, s3, e3, res = 0;
    cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    if (x >= s1 && x <= e1)
    {
        res++;
    }

    if (x >= s2 && x <= e2)
    {
        res++;
    }

    if (x >= s3 && x <= e3)
    {
        res++;
    }

    cout << res << "\n";

    return 0;
}
