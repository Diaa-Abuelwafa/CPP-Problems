#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s1.size();
    int size2 = s2.size();

    int size;

    if (size1 <= size2)
    {
        size = size1;
    }
    else
    {
        size = size2;
    }

    int counter = 0;

    for (int i = 0; i < size; ++i)
    {
        if (s1[i] > s2[i])
        {
            cout << "No" << "\n";
            return 0;
        }
        else
        {
            counter++;
        }
    }

    if (size1 > size2 && counter < size2)
    {
        cout << "No" << "\n";
        return 0;
    }

    cout << "Yes" << "\n";

    return 0;
}
