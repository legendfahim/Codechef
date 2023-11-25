// Encoding Message

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // input string length
        int n;
        cin >> n;
        // input string
        string s;
        cin >> s;
        int p;
        if (n % 2 == 0)
        {
            // If string length is even
            p = n;
        }
        else
        {
            // If string length is odd
            p = n - 1;
        }
        // swap string
        for (int i = 0; i < p; i += 2)
        {
            swap(s[i], s[i + 1]);
        }
        // print output

        for (char c : s)
        {
            char temp = 'a' + ('z' - c);
            cout << temp;
        }
        cout << endl;
    }
}
