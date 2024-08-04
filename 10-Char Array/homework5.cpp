#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0;

    int size = s.size();
    int temp = pow(10, size - 1);

    for (int i = 0; i < size; ++i)
    {
        int num = (int)s[i] - (int)'0';
        sum += num * temp;
        temp /= 10;
    }

    cout << sum << " " << sum * 3 << "\n";

    return 0;
}
