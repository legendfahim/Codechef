// Coder Life Matters

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int counter = 0;
        bool result = 1;
        for (int i = 0; i < 30; i++)
        {
            int c;
            cin >> c;

            if (c == 1)
            {
                counter++;
            }
            else
            {
                counter = 0;
            }
            if (counter > 5)
            {
                result = 0;
            }
        }
        if (result)
        {
            cout << "#allcodersarefun" << endl;
        }
        else
        {
            cout << "#coderlifematters" << endl;
        }
    }
}
