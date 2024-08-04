#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool start_with(string s, string pattern, int pos)
{
    int size = pattern.size();

    int indx = pos;
    int j = 0;

    while (size)
    {
        if (s[indx] != pattern[j])
        {
            return false;
        }

        indx++;
        size--;
        j++;
    }

    return true;
}

string replace_str(string str, string pattern, string to)
{
    string res = "";

    for (int i = 0; i < str.size(); ++i)
    {
        if (start_with(str, pattern, i))
        {
            for (int j = 0; j < to.size(); ++j)
            {
                res+= to[j];
            }

            i += pattern.size() - 1;
        }
        else
        {
            res += str[i];
        }
    }

    return res;
}

int main()
{
    string s = "aabcabaaad";

    cout << replace_str(s, "aa", "x") << "\n";

    return 0;
}
