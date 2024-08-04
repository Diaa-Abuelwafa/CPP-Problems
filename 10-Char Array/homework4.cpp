#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s1.size(), size2 = s2.size();

    int counter = 0;

    int indx = 0;

    for (int i = 0 ; i < size1; ++i)
    {
        if (s1[i] == s2[indx])
        {
            counter++;
            indx++;
        }
    }

    if (counter == size2)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
