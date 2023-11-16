// A - Save Water Save Life

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y, c;
        cin >> h >> x >> y >> c;
        if (c - ((x + (y / 2)) * h) < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}