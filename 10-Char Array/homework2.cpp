#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s2.size(), counter = 0, size2 = s1.size() - 1;

    for (int i = size1 - 1; i >= 0; --i)
    {
        if (s2[i] == s1[size2--])
        {
            counter++;
        }
    }

    if (counter == size1 && counter > 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
