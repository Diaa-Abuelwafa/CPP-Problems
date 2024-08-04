#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool is_even1 = (n % 2 == 0);
    bool is_even2 = (n % 10 == 0 || n % 10 == 2 || n % 10 == 4 || n % 10 == 6 || n % 10 == 8);
    double res = n / 2.0;
    bool is_even3 = (n / 2 == res);

    cout << is_even1 << "\n";
    cout << is_even2 << "\n";
    cout << is_even3 << "\n";

    return 0;
}
