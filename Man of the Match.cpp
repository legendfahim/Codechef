
// Man of the Match
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int past = -1, present, result;

        for (int i = 1; i <= 22; i++)
        {
            int r, w;
            cin >> r >> w;
            present = r + (w * 20);
            if (present > past)
            {
                result = i;
                past = present;
            }
        }
        cout << result << endl;
    }
}