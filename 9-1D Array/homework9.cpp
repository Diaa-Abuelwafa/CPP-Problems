#include <iostream>
using namespace std;

int main()
{
    int sequence[200];
    int frq[201] = { 0 };

    sequence[0] = 0;

    for (int i = 1; i < 200; ++i)
    {
        int value = sequence[i - 1] - (i - 1) - 1;

        if (value > 0 && frq[value] < 1)
        {
            sequence[i] = value;
            frq[value]++;
        }
        else
        {
            value = sequence[i - 1] + (i - 1) + 1;
            sequence[i] = value;
            frq[value]++;
        }
    }


    int n;
    cin >> n;

    cout << sequence[n] << "\n";


    return 0;
}
