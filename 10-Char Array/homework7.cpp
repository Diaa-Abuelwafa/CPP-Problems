#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int size = s.size();

    for (int i = 0 ; i < size; ++i)
    {
        int counter = 1;

        int j = i + 1;

        while(s[j] == s[i] && j < size)
        {
            counter++;
            ++j;
        }

        cout << s[i] << counter;

        i += counter;

        if (i < size - 1)
        {
            cout << "_";
        }
    }

    cout << "\n";

    return 0;
}
