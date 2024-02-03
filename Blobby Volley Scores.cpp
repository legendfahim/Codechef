// Blobby Volley Scores

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char check = 'A';
        int A = 0, B = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == check)
            {
                if (check == 'A')
                {
                    A++;
                }
                else
                {
                    B++;
                }
            }
            else
            {
                if (check == 'A')
                {
                    check = 'B';
                }
                else
                {
                    check = 'A';
                }
            }
        }
        cout << A << " " << B << endl;
    }
}
