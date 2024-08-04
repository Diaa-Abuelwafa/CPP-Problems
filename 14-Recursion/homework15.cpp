#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n)
{
    if(n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i < n; ++i)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int count_primes(int start, int end)
{
    if (start == end)
    {
        if (is_prime(end))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    if (is_prime(end))
    {
        return count_primes(start, end - 1) + 1;
    }
    else
    {
        return count_primes(start, end - 1);
    }
}

int main()
{
    cout << count_primes(10, 200) << "\n";

    return 0;
}
