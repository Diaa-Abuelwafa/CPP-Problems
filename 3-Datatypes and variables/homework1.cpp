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
    for (int i = 0; i < str.size(); ++i)
    {
        if (start_with(str, pattern, i))
        {
            int j = i;
            int k = i;

            int work1 = pattern.size();
            int work2 = to.size();

            while(work1)
            {
                str[j] = nullptr;
                work1--;
                j++;
            }

            int indx = 0;

            while(work2)
            {
                str[k] = to[indx++];
                k++;
                work2--;
            }
        }
    }

    return str;
}

int main()
{
    string s = "aabcabaaad";

    cout << replace_str(s, "aa", "x") << "\n";

    return 0;
}
