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

    int q;
    cin >> q;

    while(q)
    {
        int indx1, indx2, rows, cols;
        cin >> indx1 >> indx2 >> rows >> cols;

        int counter = 0;

        for (int i = indx1; i < indx1 + rows; ++i)
        {
            for (int j = indx2; j < indx2 +  cols; ++j)
            {
                bool flag = true;

                for (int k = 2; k < arr[i][j]; ++k)
                {
                    if (arr[i][j] % k == 0)
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag)
                {
                    counter++;
                }
            }
        }

        cout << counter << "\n";

        --q;
    }

    return 0;
}
