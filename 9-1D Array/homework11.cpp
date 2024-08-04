#include <iostream>
using namespace std;

int main()
{
    int size, counter = 0;
    cin >> size;

    int nums[200];

    for (int i = 0 ; i < size; ++i)
    {
        cin >> nums[i];
    }

    for (int i = 0 ; i < size; ++i)
    {
        counter++;

        for (int j = i + 1; j < size; ++j)
        {
            if (nums[j] > nums[j - 1])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
    }

    cout << counter << "\n";

    return 0;
}
