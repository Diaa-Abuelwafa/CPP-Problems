#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int counter = 0;

    for (int i = 50; i <= 300; ++i)
    {
        for (int j = 70; j <= 400; ++j)
        {
            if (i < j && (i + j) % 7 == 0)
            {
                counter++;
            }
        }
    }

    cout << counter << "\n";

    return 0;
}
