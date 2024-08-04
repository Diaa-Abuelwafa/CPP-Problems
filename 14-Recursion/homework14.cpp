#include <iostream>
#include <algorithm>
using namespace std;

void do_something1(int n)
{
    if(n)
    {
        cout << n % 10;
        do_something(n / 10);
    }
}

void do_something2(int n)
{
    if(n)
    {
        do_something(n / 10);
        cout << n % 10;
    }
}

int main()
{
    do_something1(123456); // 654321
    do_something2(123456); // 123456

    return 0;
}
