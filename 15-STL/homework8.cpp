#include <iostream>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
using namespace std;

vector<int>asteroid_collision(vector<int>&v)
{
    stack<int>st;
    int size = v.size();

    st.push(v[0]);

    for(int i = 1; i < size; ++i)
    {
        if(!st.empty() && v[i] < 0 && st.top() >= 0)
        {
            if(abs(v[i]) == st.top())
            {
                st.pop();
            }
            else if (abs(v[i]) > st.top())
            {
                st.pop();
                i--;
            }
        }
        else
        {
            st.push(v[i]);
        }
    }

    deque<int>res;

    while(!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }

    vector<int>res1;

    while(!res.empty())
    {
        res1.push_back(res.back());
        res.pop_back();
    }

    return res1;
}

int main()
{
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int size = asteroid_collision(arr).size();

    for(int i = 0; i < size; ++i)
    {
        cout << asteroid_collision(arr)[i] << " ";
    }

    cout << "\n";

    return 0;
}
