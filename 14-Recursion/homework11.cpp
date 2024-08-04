#include <iostream>
#include <algorithm>
using namespace std;

int prefix_sum(int arr[], int len, int n, int pos)
{
    if (n == 0)
    {
        return 0;
    }

    return arr[pos] + prefix_sum(arr, len, --n, pos + 1);
}

int main()
{
    int arr[5] = {1, 3, 4, 6, 7};

    cout << prefix_sum(arr, 5, 3, 0) << "\n";

    return 0;
}
