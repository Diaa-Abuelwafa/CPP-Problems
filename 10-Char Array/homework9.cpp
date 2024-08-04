#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int size = str.size();

    int temp = 5555;

    int carry = 0;

    for (int i = size - 1; i >= 0; --i)
    {
        int digit = (int)str[i] - '0';

        int sum = carry + digit + (temp % 10);

        if (sum > 9)
        {
            carry = sum % 100;
        }
        else
        {
            carry = 0;
        }

        temp /= 10;
    }

    return 0;
}
