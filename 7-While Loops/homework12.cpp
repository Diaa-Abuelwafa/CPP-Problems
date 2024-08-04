#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int temp = 1;

    while(temp <= n)
    {
        int limit = 1;
        while(limit <= m)
        {
            cout << limit << "*" << temp << " = " << limit * temp << "\n";
            ++limit;
        }
        ++temp;
    }

    return 0;
}
