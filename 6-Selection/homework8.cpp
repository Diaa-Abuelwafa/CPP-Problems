#include <iostream>
using namespace std;

int main()
{
    int s1, e1, s2, e2, res1, res2;
    cin >> s1 >> e1 >> s2 >> e2;

    if (s2 > e1 || s1 > e2)
    {
        cout << -1 << "\n";
    }
    else
    {
        if (s1 > s2)
        {
            res1 = s1;
        }
        else
        {
            res1 = s2;
        }

        if (e1 > e2)
        {
            res2 = e2;
        }
        else
        {
            res2 = e1;
        }

        cout << res1 << " " << res2 << "\n";
    }


    return 0;
}
