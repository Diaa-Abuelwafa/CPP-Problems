#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool is_palindrome(int arr[], int len)
{
    int temp = len / 2;

    int i = 0;
    int j = len - 1;

    while(temp)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }

        temp--;
    }

    return true;
}

void read_array(int len)
{
    int* arr = new int[len];

    for (int i = 0; i < len; ++i)
    {
        cin >> arr[i];
    }

    cout << is_palindrome(arr, len) << "\n";
}

int main()
{
    int n;
    cin >> n;

    read_array(n);

    return 0;
}
