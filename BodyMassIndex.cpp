
// Body Mass Index

#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, h;
        cin >> n >> h;
        long long int bmi = n / (h * h);
        if (bmi <= 18)
        {
            cout << 1 << endl;
        }
        else if (bmi >= 19 && bmi <= 24)
        {
            cout << 2 << endl;
        }
        else if (bmi >= 25 && bmi <= 29)
        {
            cout << 3 << endl;
        }
        else if (bmi >= 30)
        {
            cout << 4 << endl;
        }
    }

    return 0;
}