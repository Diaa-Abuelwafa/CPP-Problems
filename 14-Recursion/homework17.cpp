#include <iostream>
#include <algorithm>
using namespace std;

int fibonacci(int n)
{
    if(n == 0)
    {
        return 1;
    }

    if(n == 1)
    {
        return 1;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n) << "\n";

    return 0;
}
