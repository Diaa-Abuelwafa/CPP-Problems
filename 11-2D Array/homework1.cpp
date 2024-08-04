#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[100][100];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int q;
    cin >> q;

    while(q)
    {
        int raw1, raw2;
        cin >> raw1 >> raw2;


        int counter = 0;

        for (int i = 0; i < m; ++i)
        {
            if (arr[raw1 - 1][i] < arr[raw2 - 1][i])
            {
                counter++;
            }
        }

        if (counter == m)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }

        --q;
    }

    return 0;
}
