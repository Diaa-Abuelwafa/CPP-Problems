#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int x = num;

    int temp = 1, sum = 0, count_10 = 1;

    while (x)
    {
        count_10 *= 10;
        x /= 10;
    }

    count_10 /= 10;

    while (num)
    {
        sum += (num % 10) * count_10;
        num /= 10;
        count_10 /= 10;
    }

    cout << sum << " " << sum * 3 << "\n";

    return 0;
}
