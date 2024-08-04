#include <iostream>
#include <algorithm>
using namespace std;

int max_path(int arr[][100], int pos_r, int pos_c, int rows, int cols)
{
    if(pos_r == rows)
    {
        return 0;
    }

    int down = arr[pos_r + 1][pos_c];
    int right = arr[pos_r + 1][pos_c + 1];

    int max;

    int new_r = pos_r;
    int new_c = pos_c;

    if(down >= right)
    {
        max = down;
        new_r = pos_r + 1;
        new_c = pos_c;
    }
    else
    {
        max = right;
        new_r = pos_r + 1;
        new_c = pos_c + 1;
    }

    return max + max_path(arr, new_r, new_c, rows, cols);
}

int main()
{
    int r, c;
    cin >> r >> c;

    int arr[10][10];

    for(int i = 0 ; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            cin >> arr[i][j];
        }
    }

    int pos_r = 0;
    int pos_c = 0;

    cout << max_path(arr, pos_r, pos_c, r, c) << "\n";

    return 0;
}
