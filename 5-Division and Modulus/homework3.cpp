#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int digit_1 = num % 10;

    num /= 10;

    int digit_2 = num % 10;

    num /= 10;

    int digit_3 = num % 10;

    int res = digit_1 + digit_2 + digit_3;

    cout << "The Result = " << res << "\n";

    return 0;
}
