#include <iostream>
#include <algorithm>
using namespace std;

double avg_arr(int arr[], int len)
{
    if(len == 1)
    {
        return arr[0];
    }

    return ((avg_arr(arr, len - 1) * (len - 1)) + arr[len - 1]) / len;
}

int main()
{
    int arr[5] = {1, 8, 2, 10, 3};

    cout << avg_arr(arr, 5) << "\n";

    return 0;
}

