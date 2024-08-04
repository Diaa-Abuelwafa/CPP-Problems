#include <iostream>
using namespace std;


int main ()
{
    int num1, num2, num3, num4 = -1;

    cin >> num1 >> num2 >> num3;

    num4 = num1;
    num1 = num2;
    num2 = num4;

    num4 = num2;
    num2 = num3;
    num3 = num4;

    cout << num1 << " " << num2 << " " << num3 << "\n";

    return 0;
}
