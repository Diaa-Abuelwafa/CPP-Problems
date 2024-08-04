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

    int min_res = nums[0] + nums[0];

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            int res = nums[i] + nums[j] + j - i;

            if (res < min_res)
            {
                min_res = res;
            }
        }
    }

    cout << min_res << "\n";

    return 0;
}
