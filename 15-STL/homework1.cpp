#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse_queue_using_stack(queue<int>&q)
{
    stack<int>st;

    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}

void print_queue(queue<int>q)
{
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << "\n";
}

int main()
{
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    print_queue(q);

    reverse_queue_using_stack(q);

    print_queue(q);

    return 0;
}
