#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int res1 = a / b;
    double res2 = (double)a / b;

    double res3 = res2 - res1;

    cout << "The Fraction Number = " << res3 << "\n";

    return 0;
}
