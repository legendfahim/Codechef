// Three Way Communications

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;

        int arr[6];
        // Even = X
        // Odd = Y
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
        float ch = sqrt(pow((arr[0] - arr[2]), 2) + pow((arr[1] - arr[3]), 2));
        float cs = sqrt(pow((arr[2] - arr[4]), 2) + pow((arr[3] - arr[5]), 2));
        if (ch <= r && cs <= r)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
