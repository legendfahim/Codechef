// Secret Recipe
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x1, x2, x3, v1, v2, distance1, time1, distance2, time2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        // for chef
        distance1 = max(x1, x3) - min(x1, x3);
        time1 = distance1 / v1;
        // for kefa

        distance2 = max(x2, x3) - min(x2, x3);
        time2 = distance2 / v2;
        // compare time between chef and kefa
        if (time1 < time2)
        {
            cout << "Chef" << endl;
        }
        else if (time1 == time2)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Kefa" << endl;
        }
    }
}
