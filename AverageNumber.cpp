// Average Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, V;
        cin >> N >> K >> V;

        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            int Ai;
            cin >> Ai;
            sum += Ai;
        }

        int total = V * (N + K);
        int missing_value = total - sum;

        if (missing_value <= 0 || missing_value % K != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << missing_value / K << endl;
        }
    }

    return 0;
}
