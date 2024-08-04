#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int size = s2.size(), counter = 0;

    for (int i = 0; i < size; ++i)
    {
        if (s2[i] == s1[i])
        {
            counter++;
        }
    }

    if (counter == size && counter > 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
