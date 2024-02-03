// Program Your Own CALCULATOR
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char C;
    cin >> A >> B >> C;
    if (C == '+')
    {
        cout << A + B;
    }
    else if (C == '-')
    {
        cout << A - B;
    }
    else if (C == '*')
    {
        cout << A * B;
    }
    else
    {
        cout << fixed << setprecision(6) << (double)A / B;
    }
}