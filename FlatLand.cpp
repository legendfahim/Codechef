// FlatLand

#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int count = 0;

        while (n > 0)
        {
            long long int side = sqrt(n);
            long long int squareCircles = side * side;
            n -= squareCircles;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}