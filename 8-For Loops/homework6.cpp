#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, a, b, sumi = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; ++i)
    {
        int sum = 0;
        int temp = i;

        while(temp)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum >= a && sum <= b)
        {
            sumi += i;
        }
    }

    cout << sumi << "\n";

    return 0;
}
