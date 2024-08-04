#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct our_stack
{
    queue<int>q;
    vector<int>v;

    void push(int val)
    {
        while(!q.empty())
        {
            v.push_back(q.front());
            q.pop();
        }

        q.push(val);

        int work = 0;

        while(work < v.size())
        {
            q.push(v[work]);
            work++;
        }

        v.clear();
    }

    void pop()
    {
        if(!q.empty())
        {
            q.pop();
        }
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }

};
int main()
{
    our_stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << "\n";

    return 0;
}
