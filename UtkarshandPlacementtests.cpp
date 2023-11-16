// Utkarsh and Placement tests
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c, A, B;
        cin >> a >> b >> c >> A >> B;
        if (a == A || a == B)
        {
            cout << a << endl;
        }
        else if (b == A || b == B)
        {
            cout << b << endl;
        }
        else if (c == A || c == B)
        {
            cout << c << endl;
        }
    }
}
