#include <iostream>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
using namespace std;

string remove_duplicates(string &s)
{
    stack<char>st;

    int size = s.size();

    for(int i = 0; i < size; ++i)
    {
        if(st.empty() || st.top() != s[i])
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
    }

    string res = "";

    while(!st.empty())
    {
        res = st.top() + res;
        st.pop();
    }

    return res;
}


int main()
{
    string s;
    cin >> s;

    cout << remove_duplicates(s) << "\n";

    return 0;
}
