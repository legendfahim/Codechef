// Valid Stack Operations

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
        stack<int> s;

        bool result = false;
        while (n--)
        {
            int c;
            cin >> c;

            if (c == 1)
            {
                s.push(1);
            }
            else
            {
                if (!s.empty())
                {
                    s.pop();
                }
                else
                {
                    result = true;
                }
            }
        }
        // print result
        if (result)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            cout << "Valid" << endl;
        }
    }

    return 0;
}