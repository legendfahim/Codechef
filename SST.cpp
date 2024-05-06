#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((a / 0.1) > (b / 0.2))
        {
            cout << "FIRST" << endl;
        }
        else if ((a / 0.1) < (b / 0.2))
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
}
