#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int star = 0;

    while (x)
    {
        star++;
        int work = star;

        while (work > 0)
        {
            cout << "*";
            work--;
        }

        --x;
        cout << "\n";
    }

    return 0;
}
