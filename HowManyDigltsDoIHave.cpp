// HOW MANY DIGITS DO I HAVE

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    while (1)
    {
        n /= 10;
        count++;
        if (n == 0)
        {
            break;
        }
    }
    if (count > 3)
    {
        cout << "More than 3 digits" << endl;
    }
    else
    {
        cout << count << endl;
    }
}