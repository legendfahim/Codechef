// Chef and Cook-Off
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int one = 0;
        for (int i = 0; i < 5; i++)
        {
            int c;
            cin >> c;
            if (c == 1)
            {
                one++;
            }
        }
        if (one == 0)
        {
            cout << "Beginner" << endl;
        }
        else if (one == 1)
        {
            cout << "Junior Developer" << endl;
        }
        else if (one == 2)
        {
            cout << "Middle Developer" << endl;
        }
        else if (one == 3)
        {
            cout << "Senior Developer" << endl;
        }
        else if (one == 4)
        {
            cout << "Hacker" << endl;
        }
        else if (one == 5)
        {
            cout << "Jeff Dean" << endl;
        }
    }
}