#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void read(int &a, int &b)
{
    cin >> a >> b;
}

void menu()
{
    cout << "1- Add 2 Numbers\n";
    cout << "2- Subtract 2 Numbers\n";
    cout << "3- Multiply 2 Numbers\n";
    cout << "4- Divide 2 Numbers\n";
    cout << "5- End The Program\n";
}

int add(int a , int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "please use another intger\n";
    }
}

int main()
{
    int a, b;

    while (true)
    {
        menu();

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            read(a, b);
            cout << add(a, b);
        }
        else if (choice == 2)
        {
            read(a, b);
            cout << subtract(a, b);
        }
        else if (choice == 3)
        {
            read(a, b);
            cout << multiply(a, b);
        }
        else if (choice == 4)
        {
            read(a, b);
            cout << divide(a, b);
        }
        else
        {
            break;
        }

    }

    return 0;
}
