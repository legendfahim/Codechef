// Literacy Rate
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        float p, l;
        cin >> p >> l;
        float cal = (l / p) * 100;
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
