#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int frq[10] = {0};

    for (int i = 0 ; i < n; ++i)
    {
        int num;
        cin >> num;

        int temp = num;

        while(num)
        {
            int digit = num % 10;
            frq[digit]++;
            num /= 10;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << i << " " << frq[i] << "\n";
    }

    return 0;
}
