#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;


    num /= 10;
    num /= 10;
    num /= 10;

    int res = num % 10;

    cout << "The Result = " << res << "\n";

    return 0;
}
