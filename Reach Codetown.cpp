// Reach Codetown

#include <bits/stdc++.h>
using namespace std;

#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
bool isvowel(char c)
{

    c = toupper(c);

    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string p;
        cin >> p;
        bool flag = true;

        for (int i = 0; i < 8; i++)
        {

            if (i == 1 || i == 3 || i == 5)
            {
                if (!isvowel(p[i]))
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (isvowel(p[i]))
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            Y;
        }
        else
        {
            N;
        }
    }

    return 0;
}