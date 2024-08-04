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

    int q;
    cin >> q;

    while(q)
    {
        int num, indx = -1;
        cin >> num;

        for (int i = 0; i < size; ++i)
        {
            if (nums[i] == num)
            {
                indx = i;
            }
        }

        cout << indx << "\n";

        --q;
    }

    return 0;
}
