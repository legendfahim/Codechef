// Healthy Sleep
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 8)
    {
        cout << "LESS" << endl;
    }
    else if (n == 8)
    {
        cout << "PERFECT" << endl;
    }
    else
    {
        cout << "MORE" << endl;
    }
}