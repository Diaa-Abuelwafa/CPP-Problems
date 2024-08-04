#include <iostream>
#include <algorithm>
using namespace std;

void right_max(int arr[], int len, int indx)
{
    if(indx == len - 1)
    {
        return;
    }

    right_max(arr, len, indx + 1);

    arr[indx] = max(arr[indx], arr[indx + 1]);
}

int main()
{
    int arr[6] = {1, 3, 5, 7, 4, 2};

    right_max(arr, 6, 0);

    for (int i = 0; i < 6; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
