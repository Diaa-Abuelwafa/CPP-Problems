#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int spaces = x - 1;
    int raws = x;
    int stars = 1;

    while (raws)
    {
        int work1 = spaces;

        while (work1)
        {
            cout << " ";
            work1--;
        }

        int work2 = stars;

        while (work2)
        {
            cout << "*";
            work2--;
        }

        cout << "\n";
        raws--;
        spaces--;
        stars += 2;
    }

    spaces = 0;
    raws = x;
    stars = 2 * x - 1;

    while (raws)
    {
        int work1 = spaces;

        while (work1 > 0)
        {
            cout << " ";
            work1--;
        }

        int work2 = stars;

        while (work2 > 0)
        {
            cout << "*";
            work2--;
        }

        cout << "\n";
        raws--;
        spaces++;
        stars -= 2;
    }

    return 0;
}
