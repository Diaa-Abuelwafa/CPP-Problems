#include <iostream>
#include <algorithm>
using namespace std;

int arr_max(int arr[], int len)
{
    if (len == 0)
    {
        return arr[0];
    }

    return max(arr_max(arr, len - 1), arr[len - 1]);
}

int main()
{
    int arr[5] = {1, 8, 2, 10, 3};

    cout << arr_max(arr, 5) << "\n";

    return 0;
}
