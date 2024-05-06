#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int newNum = 0;
        while (n != 0)
        {
            newNum += n % 10;
            n /= 10;
            newNum *= 10;
        }
        newNum /= 10;
        cout << newNum << endl;
    }
}
