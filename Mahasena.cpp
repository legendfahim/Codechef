// Mahasena

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even, odd = 0;
    while (n--)
    {

        int w;
        cin >> w;
        if (w % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even > odd)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }
}
