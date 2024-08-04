#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n)
    {
        string s;
        cin >> s;

        if (s == "NO" || s == "ON"|| s == "no" || s == "on" || s == "No" || s == "nO" || s == "On" || s == "oN")
        {
            cout << s << " ";
        }
    }

    return 0;
}
