#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse_str(string str)
{
    int size = str.size();
    string result = "";

    for (int i = size - 1; i >= 0; --i)
    {
        result.push_back(str[i]);
    }

    return result;

}

int main()
{
    string s = "abc";

    cout << reverse_str(s) << "\n";

    return 0;
}
