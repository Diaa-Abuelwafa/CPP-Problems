#include <iostream>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
using namespace std;


int main()
{
    int n;
    cin >> n;

    map<string, vector<string>>mp;
    map<string, int>test;

    while(n)
    {
        string s;
        cin >> s;

        if(test[s] != -1)
        {
            int size = s.size();
            string str = "";

            for(int i = 0; i < size; ++i)
            {
                str += s[i];
                mp[str].push_back(s);
            }
        }

        test[s] = -1;

        --n;
    }

    int q;
    cin >> q;

    while(q)
    {
        string show;
        cin >> show;

        int size = mp[show].size();

        for(int i = 0; i < size; ++i)
        {
            cout << mp[show][i] << " ";
        }

        cout << "\n";

        --q;
    }

    return 0;
}
