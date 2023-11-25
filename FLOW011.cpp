// FLOW011
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        float HRA, DA, cal;
        if (s < 1500)
        {
            HRA = s * 0.1;
            DA = s * 0.9;
            cal = s + HRA + DA;
            cout << fixed << setprecision(2) << cal << endl;
        }
        else
        {
            HRA = 500;
            DA = s * 0.98;
            cal = s + HRA + DA;
            // cout<<HRA<<endl<<DA<<endl;
            cout << fixed << setprecision(2) << cal << endl;
        }
    }

    return 0;
}