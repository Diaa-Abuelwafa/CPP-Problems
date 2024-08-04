#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[100][100];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            arr[i][j] = '.';
        }
    }

    int counter = 0;

    while(true)
    {
        int row, column;

        if (counter % 2 == 0)
        {
            cout << "Player X Turn. Enter Empty Location (r, c): ";
            cin >> row >> column;
            arr[row][column] = 'x';
            counter++;
        }
        else if (counter % 2 == 1)
        {
            cout << "Player Y Turn. Enter Empty Location (r, c): ";
            cin >> row >> column;
            arr[row][column] = 'o';
            counter++;
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << arr[i][j] << " ";
            }

            cout << "\n";
        }

        cout << "\n";
    }

    return 0;
}
