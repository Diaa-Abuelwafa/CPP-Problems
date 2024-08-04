#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[200];

    for (int i = 1; i <= n; ++i)
    {
        arr[i - 1] = i;
    }

    int res[200];

    int pos = -1;

    for (int i = 0; i < n; ++i)
    {
        pos = (pos + k) % n;

        if (arr[pos] == -1)
        {
            pos++;
        }

        res[i] = arr[pos];

        arr[pos] = -1;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }

    cout << "\n";

    return 0;
}
