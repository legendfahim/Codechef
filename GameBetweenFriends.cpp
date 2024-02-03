
// Game between friends

#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int N, S, R, Sa;
        cin >> N >> S >> R >> Sa;
        // For R
        if (N < S)
        {
            N += R;
        }
        else
        {
            S += R;
        }

        // For Sa
        if (N < S)
        {
            N += Sa;
        }
        else
        {
            S += Sa;
        }

        // Prlong long int Final Result
        if (N < S)
        {
            cout << 'S' << endl;
        }
        else
        {
            cout << 'N' << endl;
        }
    }
}