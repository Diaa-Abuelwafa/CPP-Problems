#include <iostream>
#include <algorithm>
using namespace std;

int suffix_sum(int arr[], int len, int n)
{
    if(n == 0)
    {
        return 0;
    }

    return arr[len - 1] + suffix_sum(arr, len - 1, --n);
}

int main()
{
    int arr[5] = {1, 3, 4, 6, 7};

    cout << suffix_sum(arr, 5, 3) << "\n";

    return 0;
}
