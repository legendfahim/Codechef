// Prime Generator

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {

            if (isPrime(i))
            {

                cout << i << endl;
            }
        }
        cout << endl;
    }
}