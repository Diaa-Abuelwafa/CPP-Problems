#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[1000];


    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int max = 0;

    for (int i = 0; i < size; ++i)
    {
        int counter = 0, count_0 = 0, count_1 = 0;

        if (arr[i] == 0)
        {
            count_0++;
        }
        else
        {
            count_1++;
        }

        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j])
            {
                count_1++;
            }
            else
            {
                count_0++;
            }

            if (count_0 == count_1)
            {
                counter = count_0 * 2;

                if (counter > max)
                {
                    max = counter;
                }
            }
        }
    }

    cout << max << "\n";

    return 0;
}
