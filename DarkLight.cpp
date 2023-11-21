// Dark Light

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {

        long long int n, k;
        cin >> n >> k;
        // if lite is off
        if (k == 0)
        {
            if (n % 4 == 0)
                cout << "OFF" << endl;
            else if ((n % 4 == 1) || (n % 4 == 2) || (n % 4 == 3))
                cout << "ON" << endl;
            else
                cout << "Ambiguous" << endl;
        }
        // if light is on
        else if (k == 1)
        {
            if (n % 4 == 0)
                cout << "ON" << endl;
            else
                cout << "Ambiguous" << endl;
        }
    }
    return 0;
}
