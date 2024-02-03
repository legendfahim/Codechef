
// Maximum Submissions

#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        cout << (x * 60) / 30 << endl;
    }
    return 0;
}