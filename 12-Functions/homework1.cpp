#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int max(int a, int b, int c)
{
    int temp = max(a, b);

    return max(temp, c);
}

int max(int a, int b, int c, int d)
{
    int temp = max(a, b, c);

    return max(temp, d);
}

int max(int a, int b, int c, int d, int e)
{
    int temp = max(a, b, c, d);

    return max(temp, e);
}

int max(int a, int b, int c, int d, int e, int f)
{
    int temp = max(a, b, c, d, e);

    return max(temp, f);
}

int main()
{

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    cout << max(a, b, c , d, e, f) << "\n";

    return 0;
}
