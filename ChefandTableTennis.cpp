// Chef and Table Tennis
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int lose = 0, win = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int c;
            cin >> c;
            if (c == '1')
            {
                win++;
            }
            else
            {
                lose++;
            }
        }
        if (win > lose)
        {

            cout << "WIN" << endl;
        }
        else
        {
            cout << "LOSE" << endl;
        }
    }
}