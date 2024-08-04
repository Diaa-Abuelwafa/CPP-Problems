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

    bool flag = true;

    for (int i = 1; i < size; ++i)
    {
        if (nums[i] < nums[i - 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
