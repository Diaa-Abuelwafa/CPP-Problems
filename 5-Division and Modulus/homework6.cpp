#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    int res_1 = a / b;
    double res_2 = (double)a / b;

    cout << (res_2 - res_1) * b << "\n";

    return 0;
}
