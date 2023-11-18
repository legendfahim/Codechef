// Play Piano

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string log;
        cin >> log;

        // Iterate through the log entries
        bool valid = true;
        for (int i = 0; i < log.length() - 1; i += 2)
        {
            if (log[i] == log[i + 1])
            {
                valid = false;
                break;
            }
        }

        // Output the result
        if (valid)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
