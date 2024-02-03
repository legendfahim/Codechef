// Digit Sum Parities

#include <bits/stdc++.h>
using namespace std;
int sumOf(int c)
{
    int x = c;
    long long sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int isEven(int c)
{
    int x = sumOf(c);
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int nType = isEven(n);
        int n2 = n;
        int n2Type = isEven(n2);
        while (nType == n2Type)
        {
            n2++;
            n2Type = isEven(n2);
        }
        cout << n2 << endl;
    }
}
