#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int nums[200], min_arr[3];

    for (int i = 0 ; i < size; ++i)
    {
        cin >> nums[i];

        if (i < 3)
        {
            min_arr[i] = nums[i];
        }
        else
        {
            for (int j = 0; j < 3; ++j)
            {
                if (nums[i] < min_arr[j])
                {
                    min_arr[j] = nums[i];
                }
            }
        }
    }

    int min_pos = 0;

    for (int i = 0; i < 3; ++i)
    {
        if(min_arr[i] < min_arr[min_pos])
        {
            min_pos = i;
        }
    }

    if (min_pos > 0)
    {
        int temp = min_arr[min_pos];
        min_arr[min_pos] = min_arr[0];
        min_arr[0] = temp;
    }

    if (min_arr[1] > min_arr[2])
    {
        int temp = min_arr[1];
        min_arr[1] = min_arr[2];
        min_arr[2] = temp;
    }

    for (int i = 0; i < 3; ++i)
    {
        cout << min_arr[i] << " ";
    }

    cout << "\n";


    return 0;
}
