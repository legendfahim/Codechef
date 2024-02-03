// Minimum Attendance Requirement

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
        float days = 120 - n;
        while (n--)
        {
            char c;
            cin >> c;
            if (c == '1')
            {
                days++;
            }
        }
        float cal = ((days / 120) * 100);
        if (cal >= 75)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
