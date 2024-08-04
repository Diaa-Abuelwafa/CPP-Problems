#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cin >> n;

    while(n >= 0)
    {
        if (n % 8 == 0 || n % 4 == 0 && n % 3 == 0)
        {
            cout << n << " ";
        }

        --n;
    }

    cout << "\n";

    return 0;
}
