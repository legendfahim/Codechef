// From heaven to earth

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n, v1, v2;
        cin >> n >> v1 >> v2;
        float E = (2 * n) / v2;
        float S = (sqrt(2) * n) / v1;
        if (E < S)
        {
            cout << "Elevator" << endl;
        }
        else if (E > S)
        {
            cout << "Stairs" << endl;
        }
    }
}