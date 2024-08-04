#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100][100];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int sum_upper = 0;
    int sum_lower = 0;

    int first_raw = 0;
    int last_raw = n - 1;
    int first_column = 0;
    int last_column = n - 1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j || i == first_raw || j == last_column)
            {
                sum_upper += arr[i][j];
            }

            if (i == j || i == last_raw || j == first_column)
            {
                sum_lower += arr[i][j];
            }
        }
    }


    cout << sum_upper << "\n";
    cout << sum_lower << "\n";

    return 0;
}
