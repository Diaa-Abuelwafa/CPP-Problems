#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int nums[200];

    for (int i = 0 ; i < size; ++i)
    {
        cin >> nums[i];
    }

    int start = 0, counter = 0;
    int end = size - 1;

    for (int i = 0 ; i < size / 2; ++i)
    {
        if (nums[start++] == nums[end--])
        {
            counter++;
        }
    }

    if (counter == size / 2)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
