#include <iostream>
using namespace std;

int main()
{
    int x;
    char ch;
    cin >> x >> ch;

    while (x)
    {
        cout << ch;
        --x;
    }

    return 0;
}
