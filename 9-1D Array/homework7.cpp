#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[200];
    int frq_pos[201] = { 0 };
    int frq_neg[201] = { 0 };

    int max_pos;
    int max_neg;

    int max1 = 0, max2 = 0;

    for (int i = 0 ; i < size; ++i)
    {
        cin >> arr[i];

        if (i == 0)
        {
            max1 = arr[i];
        }

        if (arr[i] >= 0)
        {
            frq_pos[arr[i]]++;
        }
        else
        {
            int new_num = arr[i] * -1;

            frq_neg[new_num]++;

            if (new_num > max2)
            {
                max2 = new_num;
            }
        }

        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    int indx1 = 0, indx2 = 0;

    for (int i = 0; i <= max1; ++i)
    {
        if (i == 0)
        {
            max_pos = frq_pos[i];
        }

        if (frq_pos[i] > max_pos)
        {
            max_pos = frq_pos[i];
            indx1 = i;
        }
    }


    for (int i = 0; i <= max2; ++i)
    {
        if (i == 0)
        {
            max_neg = frq_neg[i];
        }

        if (frq_neg[i] > max_neg)
        {
            max_neg = frq_neg[i];
            indx2 = i;
        }
    }

    if (max_pos >= max_neg)
    {
        cout << indx1 << "\n";
    }
    else
    {
        cout << indx2 * -1 << "\n";
    }

    return 0;
}
