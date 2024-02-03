
// A. Cover in Water
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

        char arr[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long int dot = 0;
        long long int count = 0;

        for (long long int i = 0; i < n; i++)
        {

            if (arr[i] == '.')
            {
                dot++;
            }
            else
            {

                count += dot;
                dot = 0;
            }

            if (dot >= 3)
            {
                count = 2;
                break;
            }
            if (i == n - 1)
            {
                if (dot >= 0 && dot <= 2)
                {

                    count += dot;
                }
            }
        }
        cout << count << endl;
    }
}