#include <iostream>
#include <algorithm>
using namespace std;

int move_forward(int arr[], int len, int initial, int target)
{
    int res = 0;

    bool flag = true;

    while(flag)
    {
        if((initial + res++) % len == target)
        {
            flag = false;
        }
    }

    return res;
}

int main()
{
    int arr[7] = {1 , 2, 3, 4, 5, 6, 7};

    int initial = 3;
    int tartget = 6;

    cout << move_forward(arr, 7, initial, target) << "\n";
    //cout << move_reverse(arr, 7, initial, target) << "\n";

    return 0;
}
