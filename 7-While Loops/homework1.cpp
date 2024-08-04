#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int endn = y;

    while (x <= y)
    {
        cout << x << "\n";
        x++;
    }

    return 0;
}
