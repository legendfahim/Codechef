// Packaging Cupcakes

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
        int a = n / 2;
        if (n % 2 != 0)
        {
            a++;
        }
        int b = a * 2;
        if (b == n)
        {

            cout << a + 1 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}