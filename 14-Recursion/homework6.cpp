#include <iostream>
#include <algorithm>
using namespace std;

void arr_increment(int arr[], int len)
{
    if(len == 1)
    {
        return;
    }

    arr[len - 1] += len - 1;

    arr_increment(arr, len - 1);
}

int main()
{
    int arr[5] = {1, 8, 2, 10, 3};

    arr_increment(arr, 5);

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
