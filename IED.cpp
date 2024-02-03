// IED
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a * c) > (b * c))
    {
        cout << a * c;
    }
    else
    {
        cout << b * c;
    }
}