#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int size = s.size();

    for (int i = 0; i < size; ++i)
    {
        cout << s[i];
        int j = i + 1;

        while (s[j] == s[i] && j < size)
        {
            cout << s[i];
            ++j;
            ++i;
        }

        cout << " ";
    }

    cout << "\n";

    return 0;
}
