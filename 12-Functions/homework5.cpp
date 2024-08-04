#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void set_powers(int arr[], int len, int m)
{
    for (int i = 0; i < len; ++i)
    {
        arr[i] = pow(m, i);
    }

    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main()
{
    int n, m;
    cin >> n >> m;

    int* arr = new int[n];

    set_powers(arr, n, m);

    return 0;
}
