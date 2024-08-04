#include <iostream>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
using namespace std;

int score_of_parentheses(string s)
{
    int size = s.size();
    stack<char>st1;
    stack<int>st2;

    int sum = 0;

    for(int i = 0; i < size; ++i)
    {
        if(s[i] == '(')
        {
            st1.push(s[i]);
        }
        else
        {
            st1.pop();

            if(!st1.empty())
            {
                st2.push(1);
            }
            else
            {
                if(!st2.empty())
                {
                    int temp = 0;

                    while(!st2.empty())
                    {
                        temp += st2.top();
                        st2.pop();
                    }

                    sum += 2 * temp;
                }
                else
                {
                    sum += 1;
                }
            }
        }
    }

    return sum;
}

int main()
{
    string s;
    cin >> s;

    cout << score_of_parentheses(s) << "\n";

    return 0;
}
