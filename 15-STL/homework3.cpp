#include <iostream>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;

int reverse_number_using_stack(int n)
{
    if(n == 0)
    {
        return 0;
    }

    stack<int>st;
    int sum = 0;

    while(n)
    {
        st.push(n % 10);
        n /= 10;
    }

    int power = 0;

    while(!st.empty())
    {
        sum += st.top() * pow(10, power++);
        st.pop();
    }

    return sum;
}

int main()
{
    int num;
    cin >> num;

    cout << reverse_number_using_stack(num) << "\n";

    return 0;
}
