#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int nth_prime(int n)
{
    int counter = 1;
    int i = 2;

    while (true)
    {
        if (is_prime(i))
        {
            if (counter == n)
            {
                return i;
            }

            counter++;
        }

        i++;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << nth_prime(n) << "\n";

    return 0;
}
