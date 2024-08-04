#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;

    string res = "Yes";

    if (num == 0 || num == 1)
    {
        res = "NO";
    }
    else
    {
        for (int i = 2; i < num; ++i)
        {
            if (num % i == 0)
            {
                res = "NO";
                break;
            }
        }
    }

    cout << res << "\n";

    return 0;
}
