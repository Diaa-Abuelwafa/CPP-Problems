#include <iostream>
#include <algorithm>
using namespace std;

bool is_palindrome(int arr[], int len, int left, int right)
{
    if(left >= right)
    {
        return true;
    }

    return is_palindrome(arr, len, left + 1, right - 1) && arr[left] == arr[right];
}

int main()
{
    int arr[6] = {1, 1, 2, 2, 1, 1};

    if(is_palindrome(arr, 6, 0, 5))
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

    return 0;
}
