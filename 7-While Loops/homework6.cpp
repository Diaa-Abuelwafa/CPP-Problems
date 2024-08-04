#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cin >> n;

    int sum1 = 0, sum2 = 0, count1 = 0, count2 = 0;

    while (n)
    {
        cin >> num;

        if (n % 2 == 0)
        {
            sum1 += num;
            count1++;
        }
        else
        {
            sum2 += num;
            count2++;
        }

        --n;
    }

    double avg1, avg2;

    avg1 = sum1 / count1;
    avg2 = sum2 / count2;

    cout << avg1 << " " << avg2 << "\n";

    return 0;
}
