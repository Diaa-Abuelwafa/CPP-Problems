#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int nums[200];

    for (int i = 0; i < size; ++i)
    {
        cin >> nums[i];
    }


    int max = nums[0], min = nums[1];

    for (int i = 0; i < size; ++i)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }

        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    for (int i = 0; i < size; ++i)
    {
        if (nums[i] == min)
        {
            nums[i] = max;
        }
        else if (nums[i] == max)
        {
            nums[i] = min;
        }
    }


    for (int i = 0; i < size; ++i)
    {
        cout << nums[i] << " ";
    }

    cout << "\n";

    return 0;
}
