#include <iostream>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
using namespace std;

vector<int>next_greater_element(vector<int>&v)
{
    stack<int>st1;
    vector<int>res;
    queue<int>test;

    int size = v.size();

    for(int i = size - 1; i >= 0; --i)
    {
        st1.push(v[i]);
    }

    while(!st1.empty())
    {
        int num = st1.top();
        stack<int>temp = st1;
        bool flag = false;
        int i;

        while(!temp.empty())
        {
            if(temp.top() > num)
            {
                flag = true;
                i = temp.top();
                break;
            }

            temp.pop();
        }

        if(flag)
        {
            res.push_back(i);
        }
        else
        {
            res.push_back(-1);
        }

        st1.pop();
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int>v;

    for(int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;

        v.push_back(num);
    }

    int size = next_greater_element(v).size();

    for(int i = 0; i < size; ++i)
    {
        cout << next_greater_element(v)[i] << " ";
    }

    cout << "\n";

    return 0;
}
