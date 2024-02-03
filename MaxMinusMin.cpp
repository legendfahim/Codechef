
// Max minus Min
#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, z;
        cin >> x >> y >> z;
        long long int maximum = max(max(max(x, y), z), max(x, z));
        long long int minimum = min(min(min(x, y), z), min(x, z));
        cout << maximum - minimum << endl;
    }

    return 0;
}