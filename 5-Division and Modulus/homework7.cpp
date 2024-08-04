#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    bool is_even = (num % 2 == 0);
    bool is_odd = (num % 2 == 1);

    int res = 100 * is_even + 7 * is_odd;

    cout << res << "\n";

    return 0;
}
