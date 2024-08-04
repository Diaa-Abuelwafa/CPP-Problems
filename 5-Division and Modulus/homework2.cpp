#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    double avg = (num1 + num2 + num3 + num4 + num5) / 5.0;

    cout << "The Average = " << avg << "\n";

    double res2 = (double)(num1 + num2 + num3) / (num4 + num5);

    cout << "The Result 2 = " << res2 << "\n";

    double avg2 = (num1 + num2 + num3) / 3.0;
    double avg3 = (num4 + num5) / 2.0;

    cout << avg2 / avg3 << "\n";

    return 0;
}
