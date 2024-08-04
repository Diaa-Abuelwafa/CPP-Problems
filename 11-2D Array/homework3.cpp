#include <iostream>
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

    int di[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dj[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int count = 0;
            int indx = 0;
            int temp = 0;

            while(count < 8)
            {
                int x = i + di[indx];
                int y = j + dj[indx];

                if (x >= 0 && x < n && y >= 0 && y < m)
                {
                    if (arr[i][j] < arr[x][y])
                    {
                        temp = -1;
                        break;
                    }
                }

                ++count;
                ++indx;
            }

            if (!temp)
            {
                cout << i << " " << j << "\n";
            }
        }
    }

    return 0;
}
