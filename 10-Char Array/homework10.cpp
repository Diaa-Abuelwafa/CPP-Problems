#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string names[200];
    int age[200];
    double salary[200];
    char gender[200];

    int counter = 0;

    while (true)
    {
        cout << "Enter Your Choice: " << "\n";
        cout << "1) Add New Employee " << "\n";
        cout << "2) Print All Employees " << "\n";
        cout << "3) Delete By Age " << "\n";
        cout << "4) Update Salary By Name " << "\n";

        int choice;
        cin >> choice;

        cout << "*************************\n";

        if (choice == 1)
        {
            cout << "Enter Name: ";
            cin >> names[counter];

            cout << "Enter Age: ";
            cin >> age[counter];

            cout << "Enter Salary: ";
            cin >> salary[counter];

            cout << "Enter Gender (M/F): ";
            cin >> gender[counter];

            counter++;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < counter; ++i)
            {
                if (age[i] != -1)
                {
                    cout << names[i] << " " << age[i] << " " << salary[i] << " " << gender[i] << "\n";
                }
            }
        }
        else if (choice == 3)
        {
            int start, end;

            cout << "Enter Start And End Age\n";
            cin >> start >> end;

            for (int i = 0; i < counter; ++i)
            {
                if (age[i] >= start && age[i] <= end)
                {
                    age[i] = -1;
                }
            }
        }
        else
        {
            string name;
            int salary_n, indx = -1;

            cout << "Enter The Name And Salary: ";
            cin >> name >> salary_n;

            for (int i = 0; i < counter; ++i)
            {
                if (name == names[i])
                {
                   indx = i;
                }
            }

            if (indx >= 0)
            {
                salary[indx] = salary_n;
            }

        }

        cout << "********************************\n";

     }

    return 0;
}
