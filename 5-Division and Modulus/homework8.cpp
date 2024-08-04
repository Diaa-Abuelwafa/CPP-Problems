#include <iostream>
using namespace std;

int main()
{
    int total_days;
    cin >> total_days;

    int years = total_days / 360;

    total_days = total_days % 360;

    int months = total_days / 30;

    total_days = total_days % 30;

    int days = total_days;

    cout << years << " " << months << " " << days << "\n";

    return 0;
}
