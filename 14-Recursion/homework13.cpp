#include <iostream>
#include <algorithm>
using namespace std;

bool is_prefix(string s, string p, int pos)
{
    if(p.size() == 0)
    {
        return true;
    }

    if (pos == p.size() - 1)
    {
        if (s[pos] == p[pos])
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return is_prefix(s, p, pos + 1) && s[pos] == p[pos];
}

int main()
{
    string str = "abcdefg";
    string prefix = "";

    if(is_prefix(str, prefix, 0))
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
