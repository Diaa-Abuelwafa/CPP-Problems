#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;


    while(t)
    {
        int n;
        cin >> n;

        int temp = 1, sum = 0;

        while(n)
        {
            int num;
            cin >> num;

            sum += pow(num, temp);

            --n;
            ++temp;
        }

        cout << sum << "\n";

        --t;
    }

    return 0;
}
