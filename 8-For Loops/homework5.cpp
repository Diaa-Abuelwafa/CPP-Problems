#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; ++i)
    {
        string res = "Yes";
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                res = "NO";
                break;
            }
        }

        if (res == "Yes")
        {
            cout << i << ", ";
        }
    }

    cout << "\n";

    return 0;
}
