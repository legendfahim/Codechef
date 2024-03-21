// Room Allocation
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
        int count = 0;
        while (n--)
        {
            int c;
            cin >> c;
            count += c / 2;
            if (c % 2 != 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}