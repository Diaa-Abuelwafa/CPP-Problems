#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int counter = 0;

    for (int i = 1; i <= 200; ++i)
    {
        for (int j = 1; j <= 200; ++j)
        {
            for (int k = 1; k <= 200; ++k)
            {
                int l = i + j - k;

                if (l >= 1 && l <= 200)
                {
                    counter++;
                }
            }
        }
    }



    cout << counter << "\n";

    return 0;
}
