
// Tasty Decisions

#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        if ((x * 2) > (y * 5))
        {
            cout << "Chocolate" << endl;
        }
        else if ((x * 2) < (y * 5))
        {
            cout << "Candy" << endl;
        }
        else
        {
            cout << "Either" << endl;
        }
    }
}