#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t)
    {
        int n;
        cin >> n;

        int pos = 0;

        int res;

        while(pos < n)
        {
            int num;
            cin >> num;

            if (pos == 0)
            {
                res = num;
            }
            else if (num < res)
            {
                res = num;
            }

            ++pos;
        }

        cout << res << "\n";

        --t;
    }

    cout << "\n";

    return 0;
}
