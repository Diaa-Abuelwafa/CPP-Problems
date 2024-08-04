#include <iostream>
using namespace std;


int main ()
{
    int a, b;
    cin >> a >> b;

    int res = ((2 * a + 1) * (1 - b)) / 2 + ((a * a) * (1 + b)) / 2;


    cout << "The Result = " << res << "\n";


    return 0;
}
