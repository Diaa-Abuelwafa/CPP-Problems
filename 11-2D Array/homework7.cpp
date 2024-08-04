#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int q;
    cin >> q;

    int indx1 = 0;
    int indx2 = 0;

    while(q)
    {
        int direction, steps;
        cin >> direction >> steps;

        int i = 0, j = 0;

        if (direction == 1)
        {
            i = -1;
        }
        else if (direction == 2)
        {
            j = 1;
        }
        else if (direction == 3)
        {
            i = 1;
        }
        else
        {
            j = -1;
        }

        while (steps)
        {
            int temp1 = (indx1 + i);
            int temp2 = (indx2 + j);

            if (temp1 < 0)
            {
                temp1 += n;
            }
            else if (temp2 < 0)
            {
                temp2 += m;
            }

            indx1 = temp1 % n;
            indx2 = temp2 % m;
            --steps;
        }

        cout << "(" << indx1 << ", " << indx2 << ")" << "\n";

        --q;
    }

    return 0;
}
