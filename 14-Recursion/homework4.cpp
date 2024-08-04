#include <iostream>
#include <algorithm>
using namespace std;

int arr_sum(int arr[], int len)
{
    if (len == 0)
    {
        return 0;
    }

    return arr[len - 1] + arr_sum(arr, len - 1);
}

int main()
{
    int arr[5] = {1, 8, 2, 10, 3};

    cout << arr_sum(arr, 5) << "\n";

    return 0;
}
