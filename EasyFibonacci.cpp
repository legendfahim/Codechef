
// Easy Fibonacci

#include <bits/stdc++.h>

using namespace std;

long long int main()
{
    long long int T;
    cin >> T;

    while (T--)
    {
        long long int n;
        cin >> n;
        long long int z = log2((long double)n);
        if (z == 0)
        {
            cout << "0" << endl;
        }
        else if (z == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            long long int a = z % 4;
            if (a == 2)
            {
                cout << "2" << endl;
            }
            else if (a == 3)
            {
                cout << "3" << endl;
            }
            else if (a == 0)
            {
                cout << "0" << endl;
            }
            else if (a == 1)
            {
                cout << "9" << endl;
            }
        }
    }
}