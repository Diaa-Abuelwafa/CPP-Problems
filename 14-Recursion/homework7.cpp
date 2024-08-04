#include <iostream>
#include <algorithm>
using namespace std;

// Global Variables
int sum = 0;

void arr_accumulation(int arr[], int len)
{
    if(len == 1)
    {
        return;
    }

    arr_accumulation(arr, len - 1);

    arr[len - 1] += arr[len - 2];
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    arr_accumulation(arr, 6);

    for (int i = 0; i < 6; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
