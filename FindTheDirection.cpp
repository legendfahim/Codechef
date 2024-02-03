
// Find the Direction
#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int cal = n % 4;
        if (cal == 0)
        {
            cout << "North" << endl;
        }
        else if (cal == 1)
        {
            cout << "East" << endl;
        }
        else if (cal == 2)
        {
            cout << "South" << endl;
        }
        else if (cal == 3)
        {
            cout << "West" << endl;
        }
    }

    return 0;
}