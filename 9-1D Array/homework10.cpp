#include <iostream>
using namespace std;

int main()
{
    int k, n, indx1, indx2;
    cin >> k >> n;

    int nums[200];

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int max_res = 0;

    for (int i = 0 ; i < k; ++i)
    {
        max_res += nums[i];
    }

    for (int i = 0; i < n - (k - 1); ++i)
    {
        int sum = 0;

        sum += nums[i];

        int indx = i + 1;

        int work = k - 1;

        while(work)
        {
            sum += nums[indx++];
            --work;
        }

        if (sum > max_res)
        {
            max_res = sum;
            indx1 = i;
            indx2 = i + (k - 1);
        }

    }


    cout << indx1 << " " << indx2 << " " << max_res << "\n";

    return 0;
}
